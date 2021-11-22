void (Data::*Data::s_copy[])(Data const &other) = {
        &Data::copyDouble,
        &Data::copyWord,
        &Data::copyValue
};