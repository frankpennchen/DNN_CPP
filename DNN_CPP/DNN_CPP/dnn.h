#pragma once
#include <vector>
#include <string>
using namespace std;

namespace DNN {
	class One_hidden_layer_nn {
	public:
		int dim_input_layer, dim_hidden_layer;
		vector<vector<float>> weight_matrix;

		One_hidden_layer_nn(int x, int y) {
			dim_input_layer, dim_hidden_layer = x, y;
		}

		void weight_matrix_initialization(string init_type) {
		}

		float sigmoid_function(float x) {}
		float relu_function(float x){}
	};
}
