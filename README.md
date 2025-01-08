# coinflip

Since `time(0)` is used as the seed (`srand`) and `time(0)` returns seconds since epoch, calling `rand` within the same second can return the same result.
