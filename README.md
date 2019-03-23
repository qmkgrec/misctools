# misctools
## thompson_sampling:

    double static beta_sample( double win, double lose)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        sftrabbit::beta_distribution<> beta(win, lose);
        return beta(gen);
    }
