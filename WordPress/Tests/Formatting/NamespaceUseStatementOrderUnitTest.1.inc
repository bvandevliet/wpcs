<?php
/*
 * Correct order, incorrect blank lines and first use statement not following namespace statement.
 */

namespace A\B\C;

class ABC {}

use Vendor\Package\{ClassA as A, ClassB, ClassC as C};
use Vendor\Package\Name\ClassD as D;
use Vendor\Package\AnotherNamespace\ClassE as E;
use function Vendor\Package\{functionA, functionB, functionC};
use function Another\Vendor\functionName as D;



use const Vendor\Package\{CONSTANT_A, CONSTANT_B, CONSTANT_C};
use const Another\Vendor\CONSTANT_D;