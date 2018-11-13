auto f = [&a] () bool -> { if (a == 0) return true; else return !(--a); };
