#pragma once
#include "../include/graph.hpp"

struct MAPFPlan {
  std::string scen_file;  // scenario file name
  int num_agents;         // number of agents
  Grid* G;                // grid
  std::string solver;     // solver name
  bool solved;            // success or not
  int soc;                // sum of cost
  int makespan;           // makespan
  int comp_time;          // computation time
  Config config_s;        // start configuration
  Config config_g;        // goal configuration
  Configs transitions;    // plan
};
