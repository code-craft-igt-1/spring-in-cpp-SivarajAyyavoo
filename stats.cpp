#include "stats.h"
#include <numeric>
#include <algorithm>
#include <math.h>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& statsVec) {
    //Implement statistics here
    Statistics::Stats tmpStatsDetails;
    if (!statsVec.empty())
    {
        tmpStatsDetails.average = std::accumulate(statsVec.begin(), statsVec.end(), 0.0) / statsVec.size();
        tmpStatsDetails.max = *std::max_element(statsVec.begin(), statsVec.end());
        tmpStatsDetails.min = *std::min_element(statsVec.begin(), statsVec.end());
    }
    else
    {
        tmpStatsDetails.average = NAN;
        tmpStatsDetails.max = NAN;
        tmpStatsDetails.min = NAN;
    }

    return tmpStatsDetails;
}