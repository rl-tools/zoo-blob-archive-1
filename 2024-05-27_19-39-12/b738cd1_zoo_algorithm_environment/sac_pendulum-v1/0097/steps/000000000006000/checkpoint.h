// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {197, 46, 210, 62, 246, 191, 8, 191, 185, 203, 47, 63, 210, 57, 74, 189, 109, 163, 255, 61, 31, 188, 92, 60, 44, 193, 48, 63, 248, 145, 255, 62, 241, 222, 220, 62, 209, 175, 86, 62, 239, 157, 83, 62, 77, 85, 239, 62, 223, 109, 18, 63, 220, 69, 236, 62, 141, 91, 98, 61, 149, 126, 73, 189, 220, 253, 166, 62, 90, 9, 182, 190, 30, 75, 178, 62, 180, 16, 145, 191, 94, 76, 162, 190, 105, 44, 117, 62, 128, 22, 223, 62, 58, 14, 129, 62, 177, 132, 71, 63, 249, 223, 76, 191, 206, 110, 34, 190, 90, 6, 6, 191, 68, 165, 171, 190, 36, 56, 206, 62, 27, 238, 180, 62, 29, 171, 17, 63, 82, 22, 173, 62, 33, 22, 11, 191, 231, 10, 220, 62, 177, 204, 110, 61, 222, 35, 9, 62, 192, 169, 24, 191, 158, 122, 231, 62, 144, 127, 48, 63, 205, 63, 100, 191, 71, 223, 130, 190, 206, 122, 222, 61, 40, 242, 117, 60, 44, 122, 57, 63, 140, 184, 139, 61, 162, 97, 150, 189, 28, 248, 187, 190, 8, 17, 185, 190, 150, 179, 15, 63, 192, 32, 34, 63, 16, 70, 47, 191, 144, 250, 218, 190, 248, 38, 253, 61, 29, 45, 210, 61, 223, 167, 65, 63, 6, 64, 196, 188, 126, 240, 87, 63, 157, 182, 25, 190, 196, 246, 168, 188, 254, 21, 196, 190, 204, 31, 51, 191, 76, 76, 162, 190, 165, 19, 6, 63, 120, 162, 84, 191, 131, 237, 12, 191, 133, 86, 139, 190, 161, 212, 91, 191, 23, 107, 59, 191, 198, 105, 180, 62, 155, 2, 91, 63, 32, 202, 171, 62, 65, 65, 7, 63, 169, 166, 162, 62, 119, 81, 133, 62, 93, 130, 203, 62, 46, 80, 25, 191, 82, 49, 83, 62, 147, 174, 31, 191, 109, 171, 229, 190, 57, 146, 208, 190, 82, 113, 140, 62, 75, 94, 186, 60, 213, 143, 229, 190, 82, 222, 145, 190, 20, 235, 96, 190, 19, 47, 210, 62, 128, 56, 255, 61, 38, 223, 93, 191, 201, 126, 8, 63, 104, 130, 178, 62, 246, 58, 139, 189, 232, 216, 167, 62, 199, 202, 122, 62, 213, 178, 90, 63, 249, 238, 37, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {185, 124, 171, 190, 172, 41, 172, 190, 233, 67, 145, 61, 204, 69, 11, 189, 3, 211, 46, 62, 252, 246, 139, 62, 48, 160, 0, 63, 208, 17, 219, 62, 27, 252, 45, 62, 34, 246, 254, 62, 190, 101, 38, 191, 86, 29, 25, 63, 254, 22, 203, 62, 198, 242, 192, 190, 165, 169, 41, 63, 78, 192, 136, 188, 217, 77, 48, 62, 174, 223, 18, 63, 218, 9, 244, 190, 240, 159, 251, 61, 107, 98, 160, 190, 19, 100, 244, 190, 43, 166, 189, 59, 162, 209, 4, 191, 99, 210, 136, 190, 222, 37, 15, 62, 25, 246, 20, 191, 136, 10, 60, 61, 95, 27, 70, 190, 69, 48, 3, 63, 217, 7, 52, 63, 21, 15, 126, 60};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {219, 20, 121, 190, 227, 229, 25, 62, 62, 63, 76, 62, 103, 137, 172, 187, 253, 114, 203, 62, 101, 123, 26, 60, 196, 139, 83, 62, 226, 230, 89, 62, 36, 222, 175, 61, 43, 227, 119, 189, 13, 14, 193, 186, 155, 198, 237, 187, 199, 23, 193, 188, 227, 5, 178, 190, 99, 204, 120, 187, 227, 132, 32, 190, 109, 158, 145, 190, 234, 164, 194, 61, 192, 224, 200, 61, 221, 120, 11, 63, 217, 15, 194, 61, 66, 60, 160, 190, 235, 144, 85, 190, 180, 240, 57, 190, 145, 117, 203, 188, 241, 244, 114, 190, 168, 250, 71, 189, 242, 117, 84, 190, 208, 113, 88, 190, 214, 33, 71, 62, 130, 37, 20, 62, 34, 234, 145, 189, 197, 166, 135, 190, 106, 134, 23, 62, 231, 134, 188, 189, 48, 38, 191, 189, 123, 207, 208, 189, 94, 20, 53, 62, 156, 205, 52, 62, 166, 154, 94, 189, 56, 51, 170, 62, 37, 237, 229, 61, 153, 59, 178, 190, 148, 225, 243, 61, 69, 55, 98, 62, 191, 163, 25, 63, 32, 241, 136, 61, 88, 85, 159, 189, 60, 148, 75, 62, 107, 135, 2, 61, 1, 197, 223, 190, 62, 1, 223, 189, 147, 0, 65, 190, 52, 235, 68, 62, 214, 145, 204, 61, 128, 195, 161, 190, 194, 131, 43, 190, 80, 64, 193, 61, 132, 7, 109, 189, 62, 160, 46, 62, 56, 252, 116, 62, 211, 162, 55, 190, 241, 2, 92, 62, 149, 124, 89, 190, 255, 45, 152, 189, 228, 152, 192, 189, 221, 139, 60, 190, 171, 80, 45, 190, 38, 87, 114, 61, 4, 21, 216, 188, 236, 145, 152, 61, 201, 66, 77, 61, 229, 59, 241, 188, 54, 100, 71, 189, 191, 89, 91, 189, 132, 19, 79, 61, 26, 147, 129, 189, 154, 71, 43, 190, 187, 39, 23, 188, 71, 125, 153, 188, 62, 54, 253, 61, 174, 170, 31, 190, 6, 240, 176, 59, 140, 29, 241, 189, 1, 227, 4, 190, 140, 237, 199, 188, 107, 253, 240, 189, 106, 246, 135, 61, 40, 67, 2, 62, 98, 110, 156, 61, 235, 99, 148, 188, 145, 244, 110, 189, 113, 52, 111, 189, 244, 186, 232, 61, 255, 199, 208, 61, 186, 146, 253, 188, 46, 253, 54, 62, 225, 253, 238, 61, 170, 43, 184, 62, 189, 220, 185, 188, 25, 42, 98, 62, 78, 208, 44, 62, 95, 81, 1, 190, 140, 31, 13, 62, 148, 8, 11, 190, 204, 42, 212, 189, 110, 198, 152, 62, 75, 45, 45, 190, 92, 252, 35, 190, 182, 16, 20, 191, 59, 14, 163, 61, 2, 18, 21, 189, 34, 80, 167, 189, 55, 255, 86, 190, 21, 88, 12, 63, 70, 163, 203, 62, 210, 213, 69, 62, 16, 226, 139, 190, 113, 7, 66, 189, 51, 19, 235, 188, 236, 220, 147, 62, 28, 220, 197, 190, 123, 70, 191, 60, 92, 72, 80, 61, 71, 190, 252, 190, 38, 145, 128, 62, 20, 66, 32, 190, 7, 88, 180, 62, 173, 249, 246, 190, 104, 151, 169, 189, 22, 27, 25, 191, 13, 208, 138, 190, 229, 92, 92, 190, 124, 96, 101, 62, 250, 172, 197, 60, 103, 76, 62, 62, 70, 49, 33, 190, 129, 131, 233, 61, 28, 166, 49, 189, 9, 71, 44, 61, 221, 154, 13, 190, 117, 207, 8, 62, 119, 161, 226, 189, 35, 18, 140, 190, 58, 56, 174, 62, 5, 110, 34, 62, 100, 207, 150, 190, 63, 21, 253, 190, 140, 59, 1, 191, 160, 68, 59, 62, 125, 115, 7, 190, 112, 213, 61, 189, 92, 156, 230, 190, 252, 16, 138, 189, 193, 75, 186, 190, 148, 61, 47, 62, 165, 39, 185, 61, 23, 143, 47, 191, 124, 131, 92, 189, 175, 215, 56, 189, 150, 4, 143, 62, 252, 168, 38, 62, 79, 12, 47, 62, 145, 119, 206, 59, 194, 195, 90, 62, 34, 8, 144, 62, 198, 13, 148, 190, 187, 151, 118, 61, 189, 124, 241, 189, 22, 114, 53, 190, 101, 41, 103, 62, 155, 131, 200, 60, 25, 68, 32, 190, 180, 86, 14, 191, 155, 15, 213, 188, 21, 178, 255, 61, 210, 37, 224, 60, 37, 191, 213, 189, 8, 133, 201, 62, 243, 227, 224, 62, 65, 24, 173, 60, 170, 135, 98, 190, 57, 104, 116, 189, 13, 12, 174, 62, 159, 15, 95, 62, 185, 222, 28, 190, 211, 73, 159, 62, 219, 116, 88, 190, 190, 19, 77, 190, 79, 230, 123, 62, 177, 96, 73, 190, 55, 206, 246, 62, 238, 41, 111, 60, 78, 235, 196, 61, 130, 210, 16, 190, 95, 195, 175, 189, 167, 3, 199, 189, 14, 61, 243, 189, 248, 175, 130, 62, 114, 236, 186, 61, 25, 242, 144, 190, 186, 237, 213, 61, 236, 5, 182, 61, 15, 101, 14, 189, 33, 252, 129, 62, 24, 126, 207, 189, 238, 138, 223, 59, 172, 25, 132, 189, 129, 252, 38, 60, 113, 222, 121, 62, 212, 185, 248, 61, 96, 102, 7, 191, 54, 135, 69, 62, 35, 95, 215, 189, 209, 139, 84, 61, 116, 164, 201, 61, 101, 101, 211, 61, 242, 236, 2, 62, 182, 190, 154, 61, 32, 115, 157, 190, 233, 7, 182, 62, 240, 136, 212, 61, 186, 133, 47, 62, 55, 158, 239, 190, 170, 92, 183, 189, 230, 214, 73, 188, 78, 12, 237, 61, 60, 20, 66, 190, 120, 249, 28, 188, 252, 187, 9, 62, 23, 122, 11, 190, 221, 221, 54, 190, 139, 208, 231, 189, 194, 233, 229, 60, 169, 130, 63, 190, 7, 67, 158, 60, 150, 204, 52, 190, 174, 36, 243, 189, 24, 202, 121, 61, 192, 152, 181, 189, 128, 16, 178, 189, 180, 103, 82, 61, 53, 249, 31, 190, 234, 177, 114, 61, 22, 198, 238, 189, 163, 50, 234, 189, 36, 120, 104, 189, 142, 170, 240, 61, 158, 246, 175, 61, 49, 123, 18, 189, 27, 136, 168, 60, 217, 73, 240, 61, 92, 194, 33, 62, 79, 215, 194, 187, 232, 78, 117, 61, 0, 217, 7, 190, 98, 254, 15, 61, 223, 30, 138, 189, 75, 116, 208, 61, 113, 7, 102, 60, 190, 17, 172, 188, 125, 245, 179, 60, 42, 59, 215, 60, 174, 238, 78, 62, 213, 246, 116, 62, 236, 105, 240, 188, 24, 6, 2, 190, 43, 47, 151, 188, 133, 91, 15, 61, 194, 244, 210, 62, 162, 73, 188, 187, 26, 1, 5, 61, 6, 162, 105, 60, 97, 9, 245, 61, 102, 92, 198, 190, 121, 124, 56, 190, 116, 168, 243, 189, 196, 116, 138, 62, 91, 132, 176, 61, 159, 189, 23, 59, 141, 80, 59, 61, 188, 167, 185, 62, 167, 24, 200, 189, 42, 179, 180, 62, 240, 110, 175, 62, 183, 126, 22, 61, 182, 238, 165, 62, 57, 235, 206, 187, 26, 236, 226, 190, 42, 110, 145, 61, 97, 0, 221, 190, 71, 168, 122, 190, 192, 51, 151, 61, 241, 70, 33, 62, 215, 47, 110, 190, 73, 184, 14, 189, 135, 141, 120, 190, 107, 149, 60, 189, 118, 67, 60, 188, 41, 243, 183, 62, 193, 173, 64, 60, 77, 166, 5, 62, 187, 149, 79, 190, 131, 247, 140, 189, 185, 64, 184, 61, 163, 210, 151, 62, 138, 193, 160, 190, 178, 96, 148, 62, 87, 134, 123, 190, 147, 243, 115, 189, 142, 19, 101, 188, 124, 108, 139, 190, 95, 189, 155, 190, 54, 150, 141, 190, 116, 200, 65, 190, 22, 203, 113, 62, 184, 197, 102, 61, 154, 157, 58, 191, 144, 148, 193, 190, 195, 237, 6, 188, 10, 45, 24, 62, 148, 118, 129, 61, 121, 192, 159, 62, 223, 83, 117, 62, 114, 145, 66, 62, 55, 58, 123, 190, 56, 114, 92, 190, 125, 224, 238, 61, 36, 59, 120, 190, 11, 45, 61, 190, 251, 8, 3, 62, 229, 197, 137, 190, 159, 216, 192, 188, 108, 135, 198, 60, 5, 122, 227, 189, 73, 52, 246, 60, 255, 182, 249, 189, 52, 61, 220, 190, 144, 92, 52, 61, 236, 104, 14, 62, 254, 71, 34, 62, 208, 244, 57, 190, 129, 17, 225, 188, 109, 93, 108, 62, 109, 220, 166, 62, 249, 76, 32, 190, 219, 197, 9, 189, 243, 93, 97, 190, 75, 137, 142, 190, 226, 124, 55, 189, 30, 215, 189, 188, 210, 14, 100, 62, 149, 40, 243, 60, 161, 138, 219, 61, 196, 243, 101, 189, 59, 2, 22, 189, 13, 52, 145, 62, 149, 102, 235, 61, 201, 165, 79, 189, 174, 151, 41, 62, 144, 137, 195, 188, 175, 133, 112, 189, 204, 42, 70, 190, 209, 132, 68, 62, 144, 106, 211, 61, 239, 113, 3, 191, 245, 40, 14, 62, 13, 208, 159, 61, 90, 9, 55, 189, 158, 197, 74, 62, 193, 169, 91, 62, 186, 141, 118, 62, 248, 33, 32, 62, 44, 184, 159, 189, 105, 232, 183, 61, 173, 212, 173, 61, 204, 90, 20, 190, 45, 197, 16, 190, 109, 18, 34, 62, 77, 24, 88, 190, 160, 98, 237, 190, 29, 58, 75, 62, 53, 138, 32, 61, 151, 19, 201, 61, 117, 98, 162, 62, 20, 54, 245, 61, 109, 9, 74, 62, 6, 130, 94, 62, 226, 19, 195, 62, 41, 176, 96, 189, 49, 165, 56, 62, 47, 49, 141, 189, 127, 104, 140, 190, 166, 245, 52, 61, 43, 202, 206, 62, 27, 95, 20, 62, 111, 206, 98, 190, 20, 195, 41, 191, 242, 187, 219, 188, 234, 85, 56, 62, 150, 103, 94, 190, 99, 49, 141, 61, 50, 78, 138, 62, 136, 162, 0, 63, 47, 6, 142, 60, 162, 216, 110, 190, 145, 208, 31, 62, 113, 31, 88, 62, 94, 182, 106, 62, 105, 214, 234, 189, 56, 32, 161, 62, 100, 199, 0, 191, 7, 254, 251, 190, 191, 87, 66, 62, 210, 232, 53, 190, 198, 126, 145, 62, 89, 117, 229, 189, 67, 243, 182, 60, 86, 236, 18, 190, 39, 4, 152, 189, 152, 196, 184, 59, 99, 94, 81, 60, 19, 49, 34, 191, 204, 28, 211, 189, 215, 78, 92, 190, 78, 193, 104, 61, 82, 122, 181, 61, 243, 233, 41, 62, 96, 50, 145, 61, 152, 230, 193, 61, 11, 28, 221, 61, 218, 214, 167, 61, 170, 239, 78, 62, 107, 101, 83, 190, 220, 116, 228, 62, 242, 240, 64, 187, 72, 165, 68, 190, 185, 197, 159, 188, 159, 35, 3, 191, 95, 0, 1, 189, 139, 117, 207, 60, 58, 212, 146, 190, 49, 217, 201, 189, 71, 77, 76, 62, 135, 23, 206, 61, 187, 40, 129, 188, 181, 224, 156, 60, 171, 26, 128, 62, 123, 232, 68, 190, 108, 103, 106, 61, 29, 194, 197, 61, 69, 244, 224, 61, 150, 201, 213, 60, 190, 6, 245, 189, 113, 48, 239, 189, 205, 73, 20, 189, 63, 194, 209, 61, 183, 77, 112, 189, 81, 160, 49, 190, 51, 59, 67, 190, 36, 137, 55, 190, 94, 52, 47, 190, 134, 83, 120, 61, 181, 222, 29, 190, 48, 215, 149, 187, 233, 159, 60, 190, 225, 253, 147, 61, 81, 8, 75, 188, 42, 46, 193, 189, 77, 118, 195, 187, 146, 164, 103, 61, 30, 87, 114, 61, 200, 157, 66, 190, 21, 31, 155, 59, 124, 255, 213, 61, 247, 86, 164, 61, 116, 138, 50, 190, 40, 237, 196, 189, 87, 224, 127, 60, 31, 140, 118, 186, 236, 228, 151, 61, 115, 159, 16, 190, 231, 6, 155, 62, 83, 16, 85, 62, 63, 10, 142, 62, 85, 130, 89, 61, 139, 194, 101, 62, 48, 107, 88, 189, 35, 41, 16, 190, 102, 50, 84, 189, 115, 60, 58, 62, 221, 184, 171, 188, 146, 216, 9, 190, 182, 76, 89, 191, 129, 85, 80, 189, 121, 193, 0, 62, 178, 54, 253, 189, 145, 0, 85, 61, 243, 153, 11, 63, 41, 172, 164, 62, 119, 174, 114, 62, 205, 194, 44, 190, 145, 121, 237, 60, 47, 62, 129, 189, 161, 130, 81, 62, 130, 58, 61, 190, 11, 36, 37, 62, 95, 20, 143, 190, 231, 128, 45, 191, 139, 217, 99, 62, 82, 61, 95, 61, 3, 169, 15, 62, 69, 98, 247, 189, 252, 197, 43, 190, 172, 81, 11, 62, 253, 56, 48, 61, 245, 130, 240, 189, 32, 33, 152, 189, 136, 198, 199, 60, 33, 75, 66, 187, 244, 141, 169, 62, 59, 64, 76, 61, 131, 89, 113, 188, 63, 104, 80, 190, 154, 42, 35, 62, 247, 114, 33, 62, 148, 164, 193, 61, 199, 76, 247, 189, 223, 58, 5, 61, 41, 16, 249, 189, 246, 125, 90, 190, 205, 135, 53, 61, 175, 147, 152, 189, 194, 200, 178, 62, 183, 150, 255, 187, 123, 219, 119, 189, 91, 214, 149, 60, 34, 218, 134, 61, 27, 222, 128, 190, 32, 152, 78, 62, 7, 185, 94, 62, 147, 104, 89, 190, 215, 109, 166, 62, 238, 47, 183, 60, 12, 1, 108, 190, 39, 18, 231, 61, 254, 148, 7, 62, 195, 255, 251, 189, 14, 39, 180, 62, 244, 199, 195, 188, 199, 240, 0, 62, 140, 203, 53, 61, 208, 92, 247, 61, 181, 128, 137, 61, 115, 244, 14, 61, 197, 149, 56, 188, 7, 138, 76, 188, 19, 111, 236, 190, 22, 58, 224, 61, 145, 167, 52, 188, 7, 67, 101, 61, 31, 240, 199, 188, 251, 62, 150, 62, 124, 41, 235, 61, 166, 125, 15, 62, 237, 74, 136, 190, 3, 237, 241, 61, 69, 17, 192, 189, 178, 121, 82, 190, 117, 252, 157, 189, 111, 121, 29, 62, 136, 70, 16, 190, 37, 122, 42, 190, 243, 1, 62, 62, 189, 48, 34, 62, 9, 156, 224, 61, 190, 23, 76, 62, 81, 225, 153, 61, 123, 82, 35, 62, 96, 102, 171, 62, 169, 139, 206, 62, 193, 207, 141, 189, 108, 129, 61, 62, 29, 85, 164, 190, 206, 239, 109, 190, 130, 109, 142, 59, 174, 222, 153, 62, 194, 54, 115, 62, 170, 147, 229, 61, 35, 139, 190, 190, 144, 171, 145, 190, 165, 9, 212, 61, 133, 63, 46, 190, 25, 49, 25, 62, 52, 196, 30, 63, 197, 26, 9, 191, 40, 131, 157, 61, 161, 7, 36, 190, 199, 163, 49, 62, 161, 190, 66, 62, 51, 182, 252, 60, 38, 222, 134, 190, 49, 132, 132, 62, 137, 15, 187, 190, 223, 162, 141, 190, 94, 158, 204, 62, 139, 5, 234, 190, 251, 61, 45, 62, 218, 111, 193, 61, 134, 64, 35, 190, 162, 100, 146, 62, 177, 146, 55, 62, 37, 217, 168, 62, 83, 125, 120, 62, 201, 31, 67, 190, 196, 56, 23, 190, 92, 240, 129, 190, 177, 37, 76, 61, 51, 250, 85, 60, 199, 102, 160, 59, 106, 89, 141, 190, 123, 90, 10, 191, 209, 85, 125, 190, 34, 112, 190, 61, 70, 20, 96, 190, 124, 241, 52, 60, 13, 165, 3, 63, 89, 183, 34, 62, 19, 65, 188, 61, 243, 255, 144, 190, 96, 141, 27, 61, 55, 242, 175, 62, 44, 121, 20, 62, 71, 85, 193, 190, 107, 66, 224, 62, 97, 113, 155, 190, 61, 192, 160, 190, 157, 134, 219, 188, 141, 218, 186, 190, 27, 78, 160, 62, 0, 174, 236, 61, 223, 145, 205, 189, 147, 105, 248, 61, 117, 128, 226, 61, 63, 247, 6, 62, 97, 230, 41, 190, 198, 58, 156, 189, 58, 27, 142, 188, 181, 124, 158, 61, 237, 131, 31, 190, 49, 71, 29, 190, 109, 195, 50, 61, 160, 244, 233, 189, 163, 221, 176, 188, 145, 156, 242, 189, 9, 8, 5, 190, 35, 145, 142, 59, 213, 1, 6, 190, 201, 132, 20, 60, 5, 181, 181, 59, 104, 34, 14, 190, 26, 124, 243, 189, 43, 11, 183, 61, 15, 160, 96, 189, 53, 159, 132, 189, 21, 31, 5, 190, 131, 209, 170, 60, 140, 4, 198, 61, 105, 236, 132, 188, 128, 188, 247, 189, 110, 85, 29, 190, 160, 36, 56, 187, 239, 88, 101, 190, 220, 71, 221, 61, 211, 69, 81, 62, 236, 219, 185, 61, 168, 204, 18, 62, 162, 202, 239, 60, 130, 167, 231, 188, 134, 166, 227, 190, 34, 224, 113, 190, 250, 154, 14, 190, 174, 212, 177, 185, 114, 69, 110, 62, 67, 126, 59, 191, 48, 164, 160, 190, 195, 54, 104, 191, 146, 153, 144, 62, 55, 39, 34, 191, 90, 106, 193, 61, 109, 150, 20, 63, 91, 209, 5, 62, 26, 253, 40, 190, 98, 89, 93, 190, 16, 18, 10, 62, 169, 102, 45, 61, 139, 139, 89, 189, 110, 29, 8, 191, 131, 86, 53, 62, 251, 151, 162, 190, 64, 18, 143, 191, 162, 39, 94, 190, 174, 179, 118, 191, 148, 40, 135, 62, 8, 70, 214, 189, 152, 110, 4, 62, 27, 11, 233, 188, 137, 125, 237, 189, 140, 220, 40, 62, 19, 166, 8, 61, 67, 150, 235, 188, 26, 19, 255, 188, 15, 72, 122, 189, 69, 13, 204, 61, 218, 132, 6, 62, 139, 225, 142, 189, 28, 132, 52, 190, 159, 162, 68, 189, 108, 187, 31, 189, 224, 169, 130, 61, 92, 91, 255, 188, 55, 253, 136, 61, 104, 157, 189, 189, 144, 214, 192, 189, 8, 170, 241, 188, 43, 16, 0, 190, 222, 114, 22, 189, 61, 254, 225, 188, 120, 168, 22, 190, 197, 212, 62, 188, 215, 162, 226, 61, 65, 10, 21, 190, 242, 21, 235, 60, 208, 206, 129, 61, 247, 171, 142, 60, 208, 151, 1, 189, 172, 69, 228, 189, 240, 235, 134, 189, 133, 204, 127, 61, 115, 49, 90, 61, 113, 104, 6, 62, 71, 29, 52, 190, 144, 154, 175, 60, 110, 54, 162, 189, 202, 151, 254, 189, 224, 184, 176, 189, 195, 247, 41, 62, 38, 163, 40, 190, 39, 38, 22, 190, 98, 214, 173, 61, 95, 64, 1, 62, 94, 60, 220, 189, 107, 176, 10, 60, 83, 61, 123, 189, 126, 170, 164, 61, 219, 150, 207, 61, 174, 106, 7, 190, 118, 158, 45, 190, 253, 0, 128, 60, 23, 126, 201, 189, 168, 204, 255, 188, 158, 160, 157, 60, 42, 212, 185, 61, 132, 5, 5, 62, 207, 78, 208, 59, 106, 11, 2, 61, 130, 33, 29, 190, 162, 249, 232, 189, 47, 127, 2, 62, 242, 245, 26, 62, 5, 107, 31, 190, 36, 197, 70, 190, 53, 169, 219, 190, 249, 90, 122, 62, 101, 87, 235, 190, 38, 34, 75, 62, 111, 247, 161, 189, 248, 90, 28, 62, 142, 9, 122, 190, 222, 9, 35, 62, 160, 117, 140, 60, 229, 138, 26, 190, 59, 244, 123, 61, 70, 228, 175, 189, 250, 40, 185, 61, 161, 12, 121, 62, 215, 181, 2, 191, 233, 168, 126, 189, 66, 137, 172, 191, 21, 61, 39, 190, 32, 205, 153, 190, 245, 123, 150, 190, 253, 43, 39, 189, 108, 100, 106, 62, 13, 12, 10, 191, 118, 134, 198, 187, 186, 71, 141, 62, 109, 10, 109, 190, 98, 53, 201, 188, 222, 130, 84, 62, 25, 212, 81, 62, 223, 213, 33, 62, 198, 28, 198, 61, 162, 109, 184, 61, 211, 171, 161, 189, 68, 115, 148, 61, 233, 136, 160, 62, 83, 135, 21, 191, 238, 187, 75, 190, 192, 33, 86, 62, 8, 187, 160, 62, 154, 169, 213, 58, 133, 146, 230, 59, 72, 101, 249, 190, 168, 174, 117, 190, 205, 124, 166, 189, 155, 56, 73, 190, 36, 166, 235, 61, 103, 65, 23, 62, 165, 100, 15, 190, 115, 170, 121, 62, 219, 182, 253, 190, 180, 216, 118, 62, 113, 160, 79, 62, 153, 252, 140, 61, 112, 205, 160, 190, 45, 172, 85, 62, 243, 255, 1, 191, 131, 138, 148, 190, 139, 73, 243, 62, 136, 56, 224, 190, 54, 37, 221, 189, 230, 26, 136, 61, 50, 56, 165, 189, 219, 127, 80, 62, 37, 1, 52, 62, 0, 169, 174, 62, 53, 197, 52, 61, 187, 82, 243, 61, 240, 18, 87, 189, 211, 57, 215, 189, 91, 211, 191, 189, 0, 114, 4, 190, 136, 160, 39, 62, 232, 64, 25, 62, 98, 178, 72, 191, 139, 88, 78, 60, 60, 234, 128, 61, 52, 221, 166, 190, 109, 128, 95, 62, 231, 85, 146, 62, 133, 100, 13, 63, 162, 48, 230, 62, 129, 225, 229, 190, 125, 74, 174, 59, 2, 173, 193, 189, 24, 176, 108, 62, 197, 10, 159, 190, 0, 29, 17, 62, 185, 239, 238, 189, 88, 212, 7, 191, 162, 20, 24, 62, 194, 20, 28, 190, 40, 77, 105, 62, 189, 8, 218, 190, 11, 115, 244, 189, 19, 150, 168, 190, 146, 234, 181, 60, 29, 15, 165, 190, 173, 97, 140, 62, 32, 248, 43, 190, 152, 71, 139, 62, 166, 41, 170, 62, 149, 127, 88, 62, 188, 148, 192, 190, 11, 168, 251, 61, 144, 5, 137, 62, 255, 145, 224, 62, 84, 119, 33, 190, 126, 115, 184, 190, 137, 65, 231, 61, 144, 91, 162, 62, 232, 60, 104, 190, 125, 36, 22, 62, 243, 27, 198, 191, 42, 177, 135, 62, 92, 167, 218, 190, 54, 43, 250, 189, 7, 32, 219, 190, 177, 181, 230, 62, 253, 150, 70, 191, 198, 63, 181, 62, 207, 41, 227, 62, 141, 184, 87, 190, 90, 74, 100, 62, 67, 108, 124, 190, 232, 85, 145, 189, 237, 61, 135, 61, 16, 102, 129, 61, 206, 126, 28, 62, 165, 58, 22, 190, 34, 102, 0, 62, 82, 76, 222, 189, 103, 51, 213, 188, 54, 154, 83, 61, 42, 41, 212, 61, 208, 135, 230, 189, 205, 49, 167, 189, 76, 10, 235, 187, 89, 254, 5, 61, 147, 115, 247, 60, 167, 78, 47, 185, 15, 16, 89, 60, 179, 246, 224, 189, 222, 127, 16, 62, 69, 135, 65, 189, 112, 28, 152, 188, 124, 116, 227, 61, 167, 180, 17, 190, 24, 92, 56, 189, 151, 252, 117, 59, 21, 72, 151, 61, 200, 100, 237, 189, 158, 153, 209, 189, 214, 231, 110, 189, 154, 40, 253, 188, 139, 26, 68, 189, 103, 93, 7, 189, 2, 32, 129, 189, 56, 140, 29, 62, 21, 77, 102, 59, 115, 71, 132, 187, 181, 89, 37, 62, 144, 254, 11, 61, 11, 63, 78, 62, 154, 72, 120, 62, 121, 104, 98, 62, 190, 52, 248, 61, 16, 248, 88, 59, 49, 127, 137, 189, 77, 130, 86, 62, 136, 206, 118, 62, 91, 174, 9, 62, 32, 93, 208, 60, 83, 106, 207, 187, 34, 195, 144, 61, 87, 5, 163, 186, 192, 135, 135, 189, 43, 249, 184, 189, 229, 219, 111, 60, 163, 181, 244, 61, 222, 159, 188, 189, 177, 200, 48, 62, 5, 112, 169, 61, 68, 177, 131, 60, 248, 47, 123, 62, 111, 115, 210, 62, 100, 106, 9, 189, 229, 25, 222, 61, 13, 138, 91, 190, 62, 76, 40, 190, 19, 179, 187, 189, 74, 51, 12, 61, 132, 46, 247, 189, 88, 58, 214, 61, 253, 155, 208, 60, 177, 99, 206, 189, 150, 236, 142, 189, 5, 233, 15, 62, 218, 234, 211, 61, 205, 61, 115, 189, 251, 9, 128, 189, 65, 157, 242, 61, 122, 194, 7, 62, 200, 204, 140, 189, 17, 81, 8, 190, 17, 207, 142, 188, 193, 46, 104, 189, 69, 52, 94, 61, 223, 166, 156, 189, 37, 239, 199, 189, 161, 172, 97, 61, 251, 67, 28, 190, 220, 139, 216, 61, 175, 208, 11, 189, 21, 249, 64, 190, 200, 156, 65, 188, 8, 27, 136, 61, 241, 147, 191, 60, 78, 179, 14, 62, 111, 214, 184, 188, 44, 246, 58, 189, 52, 250, 40, 190, 232, 13, 146, 61, 210, 152, 87, 61, 145, 26, 124, 189, 103, 166, 209, 188, 159, 126, 131, 188, 122, 97, 235, 61, 190, 161, 64, 190, 102, 19, 53, 190, 35, 203, 123, 61, 51, 222, 98, 189, 241, 33, 22, 190, 50, 71, 22, 62, 247, 165, 10, 61, 128, 134, 29, 188, 142, 154, 230, 189, 115, 28, 202, 60, 210, 40, 52, 190, 66, 122, 106, 189, 136, 249, 35, 62, 255, 224, 176, 188, 50, 151, 34, 190, 166, 44, 89, 61, 143, 53, 45, 62, 226, 25, 187, 61, 98, 225, 156, 61, 56, 102, 13, 61, 2, 196, 148, 189, 204, 246, 154, 60, 75, 29, 52, 190, 53, 89, 50, 60, 92, 244, 134, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {175, 182, 50, 62, 159, 135, 70, 61, 136, 104, 63, 190, 159, 175, 200, 61, 95, 71, 186, 61, 131, 224, 22, 190, 118, 233, 206, 61, 233, 57, 7, 190, 15, 76, 16, 62, 151, 251, 111, 62, 68, 71, 165, 189, 18, 27, 31, 62, 144, 147, 81, 61, 76, 161, 159, 188, 226, 104, 34, 190, 45, 249, 63, 61, 130, 255, 222, 61, 255, 175, 181, 62, 89, 171, 193, 60, 70, 227, 228, 59, 166, 61, 138, 189, 103, 175, 184, 61, 32, 79, 42, 190, 255, 131, 75, 189, 105, 6, 110, 62, 52, 126, 180, 61, 181, 155, 139, 62, 106, 148, 109, 62, 166, 97, 56, 190, 171, 158, 102, 61, 248, 132, 167, 189, 255, 223, 15, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {88, 22, 89, 189, 111, 16, 164, 62, 156, 67, 15, 62, 231, 196, 127, 190, 53, 162, 34, 63, 64, 25, 169, 190, 110, 112, 205, 190, 140, 69, 26, 62, 237, 52, 7, 62, 155, 95, 34, 63, 66, 125, 28, 63, 71, 138, 155, 189, 54, 9, 242, 190, 119, 172, 60, 190, 165, 77, 233, 61, 237, 82, 188, 190, 55, 39, 66, 62, 107, 64, 139, 189, 142, 118, 243, 190, 118, 155, 180, 190, 28, 91, 133, 61, 103, 18, 48, 191, 125, 254, 169, 189, 208, 15, 62, 61, 3, 189, 3, 63, 113, 60, 21, 191, 198, 86, 228, 190, 41, 159, 31, 63, 105, 250, 132, 187, 103, 18, 54, 62, 106, 105, 131, 61, 146, 207, 149, 61, 144, 224, 167, 190, 44, 173, 233, 61, 7, 36, 220, 61, 229, 198, 0, 190, 54, 118, 35, 62, 164, 13, 123, 62, 250, 182, 109, 61, 74, 90, 167, 188, 242, 131, 164, 189, 15, 195, 214, 189, 80, 219, 212, 62, 158, 99, 55, 190, 3, 0, 93, 62, 49, 124, 210, 60, 156, 221, 48, 188, 55, 162, 14, 190, 17, 238, 148, 189, 245, 181, 163, 190, 226, 6, 155, 61, 48, 182, 86, 62, 191, 36, 175, 61, 226, 70, 191, 189, 198, 37, 34, 62, 236, 182, 21, 62, 3, 182, 48, 62, 125, 217, 131, 62, 99, 139, 31, 190, 231, 232, 156, 61, 99, 75, 236, 188, 19, 246, 27, 190, 47, 16, 212, 188, 255, 94, 18, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {47, 45, 172, 61, 45, 49, 146, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {49, 81, 94, 191, 122, 76, 150, 63, 7, 17, 202, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {182, 118, 68, 191, 235, 55, 190, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0097/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}