#ifndef BITS_H
# define BITS_H

enum flags {
	first = 1,
	second = 1 << 1,
	third = 1 << 2,
	fourth = 1 << 3,
	fifth = 1 << 4,
	sixth = 1 << 5,
	seventh = 1 << 6,
	eighth = 1 << 7
};

# define ASSIGN_FIRST(X) (X |= first)
# define ASSIGN_SECOND(X) (X |= second)
# define ASSIGN_THIRD(X) (X |= third)
# define ASSIGN_FOURTH(X) (X |= fourth)
# define ASSIGN_FIFTH(X) (X |= fifth)
# define ASSIGN_SIXTH(X) (X |= sixth)
# define ASSIGN_SEVENTH(X) (X |= seventh)
# define ASSIGN_EIGHTH(X) (X |= eighth)

# define CHECK_FIRST(X) ((X & first) == first ? (1) : (0))
# define CHECK_SECOND(X) ((X & second) == second ? (1) : (0))
# define CHECK_THIRD(X) ((X & third)  == third ? (1) : (0))
# define CHECK_FOURTH(X) ((X & fourth) == fourth ? (1) : (0))
# define CHECK_FIFTH(X) ((X & fifth) == fifth ? (1) : (0))
# define CHECK_SIXTH(X) ((X & sixth) == sixth ? (1) : (0))
# define CHECK_SEVENTH(X) ((X & seventh) == seventh ? (1) : (0))
# define CHECK_EIGHTH(X) ((X & eighth) == eighth ? (1) : (0))

#endif
