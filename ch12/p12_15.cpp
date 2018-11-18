shared_ptr<connection> sp(&c, [] (connection *c) { disconnect(*c); });
