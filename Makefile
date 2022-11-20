CC := gcc
FLAG_ER := -Wall -Werror -Wextra -lm -std=c11

SOURCES := src/*.c
OBJECTS := $(notdir $(SOURCES:.c=.o))

TEST_C := unit_tests/*.c
TEST_O := $(notdir $(TEST_C:.c=.o))

TST_LIBS := -lcheck
ifeq ($(shell uname), Linux)
TST_LIBS := -lcheck_pic -lpthread -lrt -lm -lsubunit
endif

all: clean gcov_report

s21_math.a:
	$(CC) $(FLAG_ER) -c $(SOURCES)
	ar rc s21_math.a $(OBJECTS)
	ranlib s21_math.a

test: s21_math.a
	$(CC) $(FLAG_ER) --coverage -o tests s21_math.a $(SOURCES) $(TEST_C) $(TST_LIBS)
	./tests

gcov_report: test
	gcov *.gcda
	gcovr
	gcovr --html-details -o report.html

clean:
	-rm -rf *.o *.html *.gcda *.gcno *.css *.a *.gcov *.info *.out *.cfg *.txt
	-rm -f tests
	-rm -f report
	find . -type d -name 'tests.dSYM' -exec rm -r {} +