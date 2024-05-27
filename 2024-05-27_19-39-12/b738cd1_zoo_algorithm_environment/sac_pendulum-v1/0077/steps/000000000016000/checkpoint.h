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
                alignas(float) const unsigned char memory[] = {255, 77, 253, 62, 101, 200, 137, 63, 132, 96, 208, 62, 196, 4, 65, 190, 188, 121, 249, 63, 47, 179, 38, 63, 84, 220, 0, 63, 120, 210, 148, 63, 19, 62, 213, 61, 174, 3, 63, 63, 146, 190, 16, 191, 207, 199, 18, 190, 37, 57, 15, 191, 26, 34, 99, 63, 172, 143, 60, 190, 41, 121, 95, 62, 166, 242, 113, 63, 70, 226, 220, 189, 181, 28, 56, 63, 220, 2, 115, 191, 138, 160, 208, 190, 197, 40, 192, 62, 81, 32, 139, 191, 251, 90, 144, 189, 163, 222, 164, 188, 107, 28, 159, 189, 38, 94, 140, 62, 201, 100, 190, 191, 117, 22, 82, 190, 94, 101, 228, 58, 89, 92, 131, 189, 118, 90, 253, 60, 252, 143, 221, 62, 88, 183, 183, 62, 169, 59, 173, 191, 21, 187, 88, 190, 185, 98, 17, 191, 67, 246, 141, 189, 198, 3, 2, 191, 39, 30, 129, 62, 2, 173, 222, 190, 240, 85, 205, 62, 108, 126, 104, 191, 19, 114, 245, 62, 177, 171, 107, 62, 56, 128, 119, 61, 249, 103, 82, 61, 5, 79, 51, 63, 106, 156, 189, 61, 108, 168, 167, 190, 220, 27, 251, 190, 157, 140, 144, 62, 8, 198, 163, 62, 229, 168, 35, 63, 193, 112, 22, 191, 88, 238, 132, 191, 242, 194, 100, 190, 217, 223, 18, 63, 235, 232, 87, 191, 17, 253, 3, 191, 172, 240, 45, 63, 79, 192, 126, 190, 46, 22, 85, 62, 164, 108, 113, 191, 182, 43, 186, 61, 193, 92, 253, 61, 9, 170, 161, 190, 165, 239, 192, 190, 166, 87, 17, 63, 140, 157, 181, 190, 44, 204, 43, 63, 239, 208, 52, 63, 205, 140, 245, 62, 136, 233, 149, 191, 176, 246, 145, 190, 14, 244, 132, 189, 167, 70, 232, 63, 54, 150, 30, 63, 162, 27, 21, 62, 190, 19, 120, 63, 176, 6, 193, 61, 9, 180, 126, 62, 85, 68, 194, 62, 46, 171, 225, 189, 2, 207, 242, 62, 246, 43, 152, 63, 146, 237, 107, 62, 21, 148, 148, 61, 57, 254, 165, 190, 175, 203, 1, 191, 178, 155, 184, 62, 112, 231, 155, 191, 218, 15, 22, 190, 1, 59, 220, 62, 181, 72, 202, 189, 60, 95, 130, 62};
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
                alignas(float) const unsigned char memory[] = {98, 244, 184, 190, 164, 188, 209, 62, 157, 35, 209, 62, 87, 252, 51, 189, 97, 111, 65, 62, 225, 40, 128, 61, 180, 39, 100, 191, 18, 194, 96, 62, 82, 32, 190, 189, 154, 70, 53, 62, 148, 115, 94, 190, 230, 170, 178, 61, 94, 228, 240, 190, 126, 190, 242, 61, 52, 242, 94, 63, 52, 241, 119, 190, 218, 136, 153, 62, 156, 104, 60, 63, 17, 198, 13, 63, 129, 101, 149, 190, 87, 104, 109, 62, 182, 98, 2, 63, 10, 86, 56, 63, 137, 123, 252, 60, 58, 212, 182, 190, 247, 132, 233, 62, 46, 138, 142, 62, 9, 135, 250, 62, 190, 94, 224, 189, 127, 76, 97, 189, 81, 128, 59, 190, 233, 152, 28, 191};
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
                alignas(float) const unsigned char memory[] = {203, 40, 131, 61, 77, 236, 21, 190, 62, 63, 226, 61, 58, 145, 133, 61, 18, 143, 2, 190, 253, 94, 36, 190, 120, 72, 217, 189, 217, 10, 254, 61, 185, 122, 207, 188, 51, 1, 157, 61, 197, 30, 4, 62, 165, 171, 57, 190, 22, 232, 254, 59, 220, 129, 155, 189, 252, 53, 27, 188, 218, 134, 0, 61, 55, 214, 245, 61, 218, 129, 70, 190, 76, 64, 44, 190, 107, 82, 48, 61, 57, 45, 47, 190, 51, 51, 16, 190, 10, 180, 0, 62, 26, 180, 155, 61, 200, 252, 196, 59, 51, 205, 219, 61, 164, 168, 46, 190, 175, 62, 250, 61, 66, 170, 152, 61, 138, 134, 125, 188, 116, 50, 59, 61, 216, 14, 193, 189, 106, 246, 225, 61, 109, 169, 153, 62, 166, 184, 10, 62, 246, 198, 161, 190, 44, 215, 130, 189, 44, 131, 124, 189, 86, 181, 150, 62, 65, 140, 91, 191, 148, 223, 21, 189, 207, 135, 56, 190, 211, 10, 44, 189, 175, 107, 181, 189, 97, 21, 61, 62, 24, 111, 118, 190, 129, 181, 143, 61, 192, 24, 182, 188, 243, 185, 114, 189, 86, 140, 56, 189, 163, 46, 148, 190, 151, 114, 2, 190, 249, 9, 53, 190, 183, 119, 80, 190, 116, 51, 237, 188, 221, 95, 5, 62, 196, 243, 193, 189, 247, 81, 176, 62, 172, 12, 65, 62, 201, 151, 85, 61, 34, 166, 216, 62, 203, 21, 94, 61, 209, 75, 87, 186, 242, 73, 125, 61, 54, 91, 50, 191, 131, 9, 1, 191, 79, 248, 84, 189, 235, 89, 21, 62, 206, 70, 59, 189, 191, 181, 129, 61, 95, 114, 108, 62, 198, 193, 242, 62, 138, 209, 129, 62, 151, 59, 22, 191, 112, 80, 142, 62, 150, 48, 147, 62, 42, 212, 194, 189, 130, 0, 93, 61, 25, 107, 244, 190, 27, 189, 176, 62, 2, 52, 170, 60, 248, 16, 96, 61, 88, 254, 73, 62, 63, 224, 145, 62, 107, 42, 187, 62, 9, 145, 241, 190, 77, 25, 118, 189, 109, 183, 145, 62, 29, 83, 173, 188, 156, 146, 116, 190, 15, 7, 182, 61, 37, 120, 121, 60, 42, 101, 101, 191, 46, 175, 8, 62, 65, 187, 49, 189, 199, 101, 165, 60, 104, 119, 128, 61, 186, 173, 148, 61, 234, 211, 8, 62, 231, 255, 63, 190, 62, 230, 201, 61, 144, 64, 143, 62, 204, 168, 128, 190, 192, 236, 105, 190, 9, 221, 11, 61, 134, 195, 137, 60, 88, 56, 48, 187, 194, 177, 145, 190, 4, 207, 199, 61, 14, 204, 24, 190, 180, 61, 147, 61, 8, 113, 226, 61, 109, 102, 23, 189, 67, 41, 192, 188, 97, 175, 251, 61, 159, 4, 229, 61, 38, 125, 117, 190, 118, 52, 13, 190, 144, 83, 122, 190, 108, 133, 18, 190, 173, 86, 77, 190, 69, 17, 16, 62, 142, 238, 143, 62, 140, 38, 222, 61, 90, 114, 24, 61, 221, 232, 50, 190, 211, 170, 104, 190, 184, 181, 75, 190, 191, 254, 29, 189, 240, 180, 38, 189, 170, 170, 116, 62, 118, 186, 138, 62, 116, 70, 178, 188, 95, 203, 171, 62, 71, 206, 36, 191, 86, 78, 82, 189, 197, 198, 5, 190, 33, 216, 153, 191, 6, 92, 115, 61, 254, 30, 139, 189, 35, 166, 207, 189, 206, 54, 77, 62, 109, 27, 191, 189, 100, 208, 186, 189, 130, 176, 227, 54, 146, 2, 89, 62, 11, 214, 191, 191, 37, 19, 180, 189, 50, 175, 45, 62, 84, 137, 221, 62, 232, 193, 205, 61, 189, 49, 100, 190, 16, 55, 62, 191, 69, 227, 10, 62, 86, 103, 222, 60, 43, 116, 205, 62, 31, 94, 18, 62, 192, 116, 132, 189, 0, 90, 28, 191, 188, 233, 41, 190, 116, 138, 43, 190, 155, 202, 184, 60, 26, 44, 48, 191, 244, 8, 162, 62, 179, 186, 162, 189, 241, 23, 103, 190, 113, 254, 140, 61, 58, 88, 219, 62, 141, 109, 106, 190, 147, 235, 204, 188, 215, 175, 148, 188, 208, 182, 142, 62, 32, 155, 170, 188, 92, 108, 200, 61, 225, 58, 215, 189, 79, 124, 85, 62, 5, 230, 110, 61, 79, 48, 42, 190, 185, 250, 166, 61, 170, 217, 156, 62, 65, 173, 16, 61, 229, 51, 70, 189, 171, 43, 249, 189, 189, 181, 189, 61, 236, 123, 31, 63, 213, 123, 14, 191, 103, 108, 59, 191, 131, 46, 97, 61, 164, 69, 135, 191, 230, 80, 61, 61, 99, 95, 190, 62, 120, 153, 133, 62, 57, 20, 171, 61, 14, 150, 139, 189, 99, 176, 14, 191, 191, 79, 228, 188, 245, 208, 58, 188, 53, 92, 87, 190, 172, 143, 241, 61, 0, 244, 214, 60, 17, 134, 35, 190, 168, 141, 71, 62, 58, 247, 18, 190, 120, 45, 38, 61, 116, 207, 149, 189, 146, 198, 155, 60, 251, 11, 52, 189, 60, 218, 114, 62, 32, 133, 50, 61, 236, 246, 145, 61, 251, 231, 95, 62, 83, 154, 77, 62, 179, 23, 128, 190, 55, 202, 60, 190, 153, 116, 235, 62, 75, 231, 250, 61, 249, 114, 158, 62, 202, 191, 139, 189, 145, 246, 41, 191, 232, 47, 134, 61, 98, 66, 0, 190, 125, 124, 97, 190, 247, 230, 97, 62, 100, 179, 189, 189, 59, 246, 109, 61, 27, 51, 183, 191, 89, 59, 171, 61, 36, 174, 23, 191, 98, 43, 181, 190, 217, 83, 104, 62, 127, 148, 130, 190, 30, 223, 148, 61, 148, 192, 23, 63, 49, 107, 164, 62, 98, 221, 37, 63, 81, 255, 154, 61, 62, 87, 213, 62, 163, 141, 243, 62, 197, 251, 192, 61, 103, 109, 254, 190, 138, 223, 215, 61, 69, 55, 79, 191, 1, 57, 89, 62, 161, 180, 68, 190, 101, 17, 178, 190, 81, 142, 235, 60, 47, 106, 69, 189, 38, 159, 34, 191, 41, 225, 59, 191, 253, 151, 226, 191, 238, 43, 150, 60, 127, 138, 9, 191, 162, 138, 171, 189, 47, 243, 249, 61, 88, 68, 236, 190, 199, 163, 131, 190, 28, 84, 210, 188, 164, 122, 187, 60, 45, 31, 77, 189, 145, 196, 228, 189, 104, 209, 191, 188, 103, 46, 47, 189, 74, 37, 242, 61, 157, 79, 26, 190, 106, 236, 236, 61, 63, 11, 30, 189, 71, 30, 173, 189, 26, 143, 52, 190, 135, 64, 3, 62, 15, 180, 244, 60, 220, 170, 80, 190, 74, 87, 50, 188, 215, 41, 222, 189, 250, 65, 151, 61, 33, 224, 22, 190, 187, 85, 67, 61, 90, 39, 128, 188, 76, 151, 253, 189, 194, 126, 169, 189, 63, 82, 242, 187, 203, 41, 57, 58, 160, 155, 245, 188, 13, 24, 21, 190, 198, 183, 15, 62, 25, 50, 218, 189, 192, 183, 101, 61, 112, 45, 171, 60, 212, 170, 205, 61, 195, 76, 125, 190, 229, 13, 134, 189, 216, 125, 215, 60, 55, 67, 36, 61, 4, 224, 49, 189, 163, 54, 66, 60, 213, 26, 116, 61, 65, 246, 140, 62, 192, 99, 74, 190, 164, 39, 186, 61, 39, 178, 157, 189, 186, 34, 202, 61, 217, 228, 55, 61, 122, 64, 1, 190, 104, 208, 162, 62, 194, 106, 38, 61, 49, 106, 136, 62, 103, 145, 39, 62, 223, 121, 130, 62, 154, 121, 44, 62, 92, 81, 62, 62, 7, 191, 73, 62, 56, 221, 5, 188, 50, 27, 22, 62, 207, 175, 149, 189, 11, 187, 77, 62, 94, 64, 235, 61, 126, 156, 29, 62, 68, 26, 231, 189, 147, 62, 202, 60, 14, 51, 144, 62, 104, 115, 27, 190, 202, 95, 49, 191, 76, 197, 213, 61, 197, 70, 208, 190, 15, 161, 71, 62, 22, 111, 207, 62, 225, 86, 13, 191, 205, 97, 19, 60, 180, 34, 86, 62, 226, 114, 107, 190, 194, 5, 212, 61, 135, 112, 207, 190, 251, 134, 2, 62, 155, 124, 238, 190, 94, 37, 14, 190, 56, 92, 192, 62, 197, 10, 6, 62, 191, 240, 89, 190, 12, 152, 121, 189, 57, 181, 222, 61, 176, 38, 114, 61, 168, 46, 153, 190, 252, 243, 193, 62, 75, 2, 141, 62, 227, 180, 131, 189, 7, 155, 12, 60, 17, 164, 45, 61, 128, 18, 109, 189, 123, 23, 146, 62, 255, 79, 36, 191, 99, 246, 10, 191, 195, 245, 163, 62, 190, 15, 120, 190, 15, 180, 86, 62, 131, 181, 222, 190, 80, 146, 185, 61, 33, 45, 139, 62, 255, 142, 10, 62, 142, 244, 35, 190, 143, 18, 214, 190, 178, 246, 64, 62, 159, 53, 154, 190, 155, 152, 85, 189, 120, 223, 188, 190, 110, 228, 213, 189, 14, 117, 145, 61, 35, 221, 80, 62, 44, 108, 13, 191, 216, 9, 237, 190, 81, 229, 44, 62, 24, 144, 53, 62, 32, 51, 23, 191, 88, 191, 5, 190, 54, 69, 164, 62, 148, 176, 28, 190, 106, 101, 131, 189, 217, 148, 140, 190, 171, 226, 119, 191, 155, 91, 181, 60, 28, 187, 159, 62, 76, 55, 243, 61, 165, 194, 132, 189, 28, 145, 154, 189, 12, 6, 9, 191, 131, 88, 252, 190, 102, 6, 209, 189, 205, 203, 0, 189, 254, 112, 87, 61, 210, 2, 191, 61, 190, 90, 44, 62, 141, 86, 58, 190, 157, 137, 121, 189, 75, 176, 33, 190, 38, 67, 158, 189, 105, 28, 242, 189, 137, 232, 0, 62, 152, 33, 162, 188, 26, 89, 28, 61, 158, 116, 42, 190, 36, 193, 46, 189, 35, 68, 86, 189, 60, 228, 251, 189, 135, 31, 50, 61, 109, 218, 66, 61, 66, 162, 26, 190, 162, 127, 68, 59, 186, 198, 68, 60, 179, 206, 30, 62, 49, 50, 63, 190, 173, 25, 2, 190, 154, 108, 197, 189, 25, 91, 142, 60, 114, 120, 101, 189, 165, 31, 24, 62, 245, 43, 204, 189, 242, 110, 186, 189, 235, 143, 23, 190, 157, 187, 24, 191, 50, 169, 27, 62, 151, 63, 204, 189, 105, 152, 243, 62, 113, 229, 192, 62, 88, 91, 53, 190, 181, 237, 6, 187, 201, 133, 197, 62, 26, 167, 105, 190, 162, 63, 236, 190, 108, 191, 190, 190, 126, 74, 228, 61, 54, 9, 86, 191, 84, 63, 219, 189, 135, 121, 245, 61, 38, 229, 118, 62, 58, 79, 176, 189, 83, 231, 164, 61, 201, 159, 117, 190, 196, 134, 7, 62, 246, 207, 62, 190, 32, 96, 62, 190, 238, 201, 81, 62, 117, 99, 232, 61, 180, 71, 112, 189, 189, 169, 12, 188, 22, 129, 114, 189, 55, 148, 35, 62, 40, 67, 69, 191, 151, 137, 172, 189, 193, 134, 243, 61, 15, 14, 148, 190, 52, 28, 21, 191, 72, 213, 197, 189, 186, 199, 90, 190, 52, 19, 132, 61, 223, 186, 144, 62, 251, 50, 138, 190, 152, 227, 129, 190, 171, 1, 156, 62, 5, 107, 0, 189, 196, 153, 116, 190, 77, 113, 6, 190, 6, 153, 22, 62, 81, 161, 182, 190, 138, 109, 135, 62, 133, 128, 33, 190, 197, 15, 188, 61, 26, 158, 70, 191, 101, 99, 94, 62, 52, 42, 4, 62, 35, 13, 156, 190, 170, 24, 253, 186, 192, 2, 120, 190, 60, 197, 10, 62, 138, 83, 11, 190, 207, 74, 101, 61, 77, 236, 211, 189, 209, 95, 144, 190, 170, 134, 91, 190, 123, 176, 113, 191, 54, 33, 96, 191, 194, 194, 37, 62, 244, 235, 85, 62, 97, 145, 66, 191, 222, 129, 57, 191, 189, 45, 79, 61, 246, 21, 233, 61, 125, 44, 170, 190, 123, 204, 145, 187, 124, 213, 60, 190, 230, 18, 243, 62, 111, 171, 219, 61, 29, 175, 36, 191, 171, 77, 130, 189, 235, 67, 142, 61, 29, 237, 232, 190, 144, 59, 142, 61, 152, 221, 209, 190, 185, 9, 15, 61, 94, 116, 7, 62, 218, 251, 69, 61, 224, 105, 2, 61, 197, 90, 68, 62, 228, 215, 78, 62, 76, 39, 30, 191, 106, 113, 73, 190, 148, 33, 5, 60, 248, 13, 137, 61, 77, 71, 5, 190, 141, 44, 99, 190, 9, 44, 178, 188, 84, 250, 11, 191, 4, 119, 186, 61, 12, 117, 179, 61, 20, 98, 36, 62, 255, 251, 67, 188, 229, 236, 151, 190, 187, 217, 124, 62, 193, 106, 174, 190, 195, 222, 4, 61, 39, 188, 132, 62, 129, 135, 28, 190, 168, 25, 11, 189, 45, 155, 4, 62, 71, 68, 220, 61, 126, 239, 215, 61, 251, 77, 135, 189, 138, 210, 155, 62, 212, 64, 122, 61, 93, 159, 7, 189, 30, 220, 246, 189, 218, 169, 59, 62, 78, 204, 89, 191, 72, 190, 128, 189, 36, 61, 222, 61, 85, 20, 82, 191, 67, 223, 101, 62, 211, 195, 226, 190, 79, 21, 28, 191, 66, 254, 197, 189, 175, 176, 191, 190, 211, 108, 204, 61, 156, 70, 148, 189, 157, 160, 20, 63, 23, 236, 76, 62, 89, 163, 234, 61, 88, 255, 9, 190, 237, 99, 68, 189, 213, 170, 7, 191, 160, 148, 140, 62, 158, 63, 206, 189, 127, 55, 107, 190, 156, 95, 202, 62, 67, 152, 21, 191, 54, 168, 198, 191, 143, 214, 69, 62, 217, 250, 26, 62, 254, 31, 52, 61, 94, 59, 118, 190, 147, 82, 235, 61, 233, 142, 186, 60, 16, 36, 6, 62, 213, 254, 0, 191, 72, 205, 81, 62, 249, 169, 69, 191, 99, 137, 193, 190, 25, 242, 148, 190, 159, 238, 108, 190, 148, 27, 80, 62, 101, 125, 243, 190, 44, 241, 199, 190, 70, 95, 155, 191, 31, 154, 242, 190, 156, 160, 182, 62, 222, 204, 103, 189, 80, 162, 53, 63, 165, 69, 32, 62, 41, 114, 20, 191, 202, 78, 144, 190, 145, 7, 109, 191, 136, 130, 121, 191, 112, 217, 143, 187, 184, 6, 192, 62, 185, 215, 59, 60, 114, 3, 16, 190, 62, 170, 229, 189, 162, 130, 200, 62, 213, 56, 232, 61, 62, 177, 217, 190, 192, 255, 13, 62, 9, 13, 96, 62, 123, 58, 215, 190, 68, 81, 148, 61, 207, 70, 168, 190, 226, 207, 221, 189, 91, 18, 94, 61, 233, 95, 193, 188, 68, 191, 11, 62, 168, 159, 52, 189, 216, 92, 99, 62, 94, 86, 160, 190, 49, 42, 48, 62, 216, 144, 111, 190, 81, 89, 49, 190, 198, 27, 192, 189, 203, 86, 70, 62, 54, 201, 15, 62, 147, 225, 108, 191, 240, 2, 213, 189, 83, 123, 73, 62, 163, 230, 24, 60, 158, 74, 101, 189, 20, 144, 55, 190, 72, 66, 238, 189, 52, 152, 64, 188, 200, 233, 45, 190, 239, 73, 14, 61, 161, 149, 90, 61, 5, 85, 158, 189, 177, 137, 78, 189, 244, 165, 121, 190, 22, 20, 77, 190, 241, 146, 43, 190, 219, 79, 254, 61, 33, 115, 195, 61, 9, 166, 65, 190, 151, 136, 170, 188, 173, 235, 26, 62, 169, 244, 197, 61, 37, 173, 181, 189, 227, 178, 32, 62, 213, 180, 224, 189, 189, 175, 117, 190, 157, 78, 175, 188, 48, 49, 84, 61, 97, 233, 138, 190, 181, 30, 234, 189, 98, 123, 6, 190, 177, 195, 171, 188, 220, 28, 157, 190, 121, 123, 4, 62, 37, 44, 136, 189, 214, 236, 75, 190, 94, 190, 240, 62, 147, 62, 129, 189, 139, 29, 90, 62, 232, 193, 172, 190, 188, 240, 99, 190, 144, 188, 48, 62, 212, 203, 188, 61, 188, 172, 25, 191, 226, 170, 141, 62, 2, 124, 235, 61, 203, 222, 152, 62, 193, 115, 173, 61, 252, 146, 164, 62, 128, 21, 30, 62, 187, 86, 4, 190, 85, 224, 0, 187, 221, 244, 54, 62, 83, 171, 16, 189, 217, 109, 91, 61, 153, 108, 142, 190, 21, 163, 31, 62, 177, 10, 100, 190, 21, 180, 246, 190, 220, 200, 16, 190, 251, 92, 179, 189, 73, 92, 190, 61, 163, 155, 91, 62, 84, 228, 26, 62, 44, 107, 188, 62, 187, 91, 76, 62, 226, 31, 220, 60, 199, 38, 3, 63, 243, 183, 248, 190, 123, 211, 231, 190, 190, 109, 191, 190, 157, 14, 84, 62, 236, 213, 176, 59, 109, 30, 7, 190, 237, 106, 139, 62, 67, 166, 133, 62, 176, 133, 56, 190, 104, 94, 183, 189, 8, 123, 254, 189, 206, 38, 137, 62, 18, 254, 55, 189, 201, 55, 245, 60, 175, 39, 5, 63, 6, 58, 221, 61, 240, 106, 25, 62, 45, 171, 129, 60, 67, 236, 107, 62, 8, 40, 172, 62, 101, 101, 39, 191, 190, 112, 40, 190, 45, 143, 65, 62, 165, 220, 49, 62, 120, 60, 3, 63, 54, 223, 174, 190, 245, 70, 58, 191, 121, 174, 195, 189, 20, 147, 47, 190, 1, 144, 213, 189, 47, 32, 229, 61, 75, 187, 141, 189, 182, 236, 22, 61, 88, 186, 168, 61, 93, 71, 133, 62, 162, 105, 78, 189, 19, 215, 3, 62, 132, 59, 124, 62, 51, 88, 237, 190, 140, 109, 5, 61, 142, 59, 128, 189, 111, 170, 221, 190, 48, 45, 131, 190, 125, 200, 100, 61, 105, 250, 134, 60, 22, 127, 240, 61, 179, 246, 5, 190, 239, 118, 211, 190, 92, 106, 116, 189, 102, 41, 136, 189, 113, 160, 218, 190, 10, 217, 55, 190, 104, 64, 138, 62, 15, 215, 240, 61, 242, 225, 160, 61, 117, 130, 1, 190, 240, 145, 191, 190, 114, 209, 70, 62, 43, 151, 112, 62, 68, 128, 129, 61, 244, 53, 226, 61, 144, 6, 100, 190, 249, 205, 129, 190, 0, 210, 51, 190, 219, 90, 184, 189, 219, 108, 133, 63, 183, 64, 254, 61, 215, 163, 182, 60, 124, 187, 41, 62, 151, 9, 106, 60, 53, 208, 178, 62, 56, 178, 144, 61, 211, 105, 50, 190, 186, 193, 60, 191, 174, 239, 226, 61, 214, 31, 51, 62, 68, 185, 230, 60, 112, 85, 32, 191, 173, 56, 99, 191, 207, 157, 221, 58, 227, 198, 58, 62, 152, 15, 209, 190, 18, 226, 84, 190, 215, 19, 73, 62, 234, 244, 18, 61, 74, 82, 240, 190, 144, 232, 103, 191, 26, 54, 81, 61, 67, 182, 24, 62, 202, 103, 168, 190, 127, 70, 175, 61, 234, 109, 225, 61, 3, 174, 43, 191, 94, 45, 244, 188, 63, 64, 5, 62, 248, 219, 163, 62, 230, 48, 47, 60, 25, 88, 201, 189, 218, 40, 218, 61, 38, 49, 148, 62, 6, 97, 139, 62, 248, 136, 219, 62, 178, 4, 85, 191, 185, 42, 45, 188, 250, 225, 255, 188, 173, 156, 175, 191, 218, 251, 92, 190, 155, 163, 101, 190, 226, 52, 203, 190, 149, 69, 180, 61, 24, 160, 88, 190, 135, 180, 64, 190, 244, 40, 241, 189, 135, 127, 70, 62, 137, 88, 146, 191, 203, 168, 133, 61, 155, 33, 170, 189, 253, 44, 197, 62, 42, 47, 48, 62, 248, 159, 135, 189, 123, 189, 49, 191, 77, 210, 157, 189, 109, 193, 145, 62, 53, 102, 132, 62, 30, 156, 110, 62, 28, 156, 56, 189, 56, 80, 47, 191, 6, 186, 73, 62, 37, 133, 30, 61, 220, 161, 144, 189, 136, 160, 164, 62, 49, 34, 81, 61, 168, 133, 66, 190, 191, 148, 85, 62, 238, 156, 50, 191, 175, 165, 34, 190, 239, 125, 131, 62, 81, 79, 18, 191, 167, 57, 234, 188, 149, 198, 140, 189, 6, 72, 85, 62, 205, 168, 229, 61, 230, 129, 26, 190, 2, 114, 194, 190, 115, 111, 208, 61, 234, 170, 20, 62, 239, 130, 212, 190, 33, 242, 238, 190, 250, 115, 223, 61, 44, 249, 202, 189, 62, 159, 79, 190, 182, 214, 156, 190, 179, 188, 74, 191, 79, 217, 15, 190, 180, 152, 172, 58, 30, 200, 18, 62, 7, 133, 176, 62, 164, 87, 160, 189, 199, 96, 1, 191, 60, 62, 115, 62, 38, 248, 138, 188, 59, 1, 135, 191, 124, 248, 121, 190, 177, 16, 21, 189, 245, 250, 34, 191, 77, 234, 170, 190, 134, 14, 176, 62, 169, 193, 28, 62, 38, 239, 7, 63, 151, 137, 118, 62, 45, 204, 14, 63, 127, 112, 31, 61, 114, 206, 68, 62, 99, 65, 158, 62, 136, 246, 169, 189, 17, 25, 161, 189, 15, 139, 223, 189, 162, 180, 246, 190, 239, 10, 186, 61, 237, 56, 148, 61, 42, 87, 88, 191, 108, 212, 68, 62, 175, 184, 195, 61, 174, 28, 230, 190, 48, 2, 26, 190, 229, 99, 138, 191, 72, 254, 155, 189, 2, 135, 53, 191, 174, 139, 79, 190, 125, 198, 41, 190, 198, 171, 41, 62, 198, 161, 1, 63, 211, 74, 234, 61, 148, 47, 49, 190, 15, 16, 164, 62, 38, 117, 56, 60, 168, 245, 152, 62, 213, 104, 13, 63, 102, 186, 218, 190, 163, 25, 51, 190, 102, 109, 58, 190, 164, 231, 37, 191, 147, 248, 76, 188, 231, 133, 97, 190, 246, 3, 57, 190, 50, 29, 179, 61, 141, 225, 180, 190, 101, 73, 59, 190, 217, 209, 13, 189, 196, 108, 162, 61, 75, 68, 105, 191, 224, 238, 135, 190, 137, 91, 86, 62, 118, 75, 175, 189, 182, 90, 213, 189, 218, 192, 51, 189, 101, 145, 13, 191, 128, 114, 42, 190, 167, 208, 154, 62, 244, 4, 174, 188, 110, 44, 241, 61, 64, 73, 180, 189, 178, 9, 253, 190, 215, 166, 141, 62, 207, 35, 227, 61, 209, 145, 48, 189, 104, 35, 168, 62, 212, 206, 89, 62, 136, 106, 147, 62, 133, 251, 186, 62, 136, 211, 24, 191, 9, 74, 42, 189, 192, 151, 51, 189, 36, 36, 172, 191, 107, 120, 129, 189, 226, 141, 181, 190, 101, 158, 143, 190, 52, 189, 180, 189, 180, 201, 99, 190, 19, 253, 141, 189, 126, 77, 243, 189, 57, 112, 39, 62, 115, 197, 191, 191, 121, 129, 11, 190, 141, 101, 135, 62, 100, 242, 56, 62, 172, 194, 195, 61, 124, 64, 79, 61, 182, 118, 46, 191, 194, 233, 54, 62, 72, 173, 9, 62, 63, 47, 154, 62, 68, 40, 78, 59, 251, 9, 156, 189, 254, 76, 53, 191, 37, 31, 114, 62, 154, 14, 18, 62, 43, 123, 164, 189, 5, 89, 122, 189, 85, 58, 176, 189, 101, 248, 204, 61, 91, 94, 13, 190, 126, 154, 149, 188, 168, 68, 37, 189, 105, 180, 164, 60, 98, 23, 13, 190, 30, 110, 244, 189, 26, 177, 109, 61, 79, 24, 15, 190, 206, 199, 136, 60, 68, 81, 45, 190, 241, 236, 174, 61, 29, 119, 197, 189, 126, 218, 57, 190, 3, 61, 75, 61, 11, 252, 175, 189, 84, 62, 14, 61, 19, 218, 120, 61, 98, 59, 5, 62, 242, 230, 168, 187, 40, 111, 64, 60, 249, 135, 222, 61, 112, 196, 3, 190, 185, 213, 138, 189, 139, 27, 6, 61, 132, 211, 250, 61, 70, 199, 231, 60, 79, 213, 26, 188, 153, 157, 149, 62, 89, 105, 128, 61, 193, 90, 92, 62, 238, 238, 183, 190, 250, 229, 1, 62, 125, 205, 59, 62, 11, 72, 188, 62, 11, 81, 186, 190, 189, 119, 191, 188, 201, 250, 92, 191, 140, 183, 132, 188, 250, 21, 224, 61, 175, 106, 46, 62, 213, 106, 181, 189, 241, 21, 0, 191, 142, 116, 117, 62, 104, 45, 213, 61, 247, 248, 82, 190, 133, 86, 115, 190, 39, 204, 142, 60, 249, 82, 105, 62, 101, 74, 120, 191, 41, 138, 248, 190, 111, 166, 211, 61, 157, 20, 245, 62, 42, 46, 2, 62, 136, 146, 18, 62, 254, 173, 29, 189, 145, 154, 45, 62, 54, 58, 126, 59, 133, 213, 106, 62, 232, 19, 48, 63, 166, 99, 2, 191, 210, 112, 135, 191, 142, 123, 127, 62, 247, 185, 234, 60, 102, 56, 20, 190, 247, 133, 181, 61, 225, 35, 228, 190, 27, 247, 144, 61, 188, 204, 43, 188, 212, 14, 95, 187, 202, 223, 173, 190, 235, 93, 168, 61, 232, 55, 153, 189, 235, 70, 127, 62, 37, 54, 64, 189, 222, 254, 227, 190, 217, 105, 101, 62, 85, 211, 160, 61, 101, 192, 190, 189, 39, 63, 61, 190, 175, 190, 129, 188, 183, 120, 74, 188, 87, 103, 50, 62, 175, 90, 226, 189, 45, 197, 61, 191, 152, 220, 38, 190, 143, 155, 112, 60, 138, 51, 41, 62, 13, 196, 93, 190, 200, 87, 53, 189, 46, 37, 213, 190, 10, 95, 140, 190};
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
                alignas(float) const unsigned char memory[] = {225, 55, 48, 190, 111, 251, 190, 190, 47, 184, 57, 62, 66, 215, 5, 189, 67, 160, 123, 61, 176, 132, 238, 189, 132, 61, 16, 190, 149, 242, 129, 62, 174, 201, 70, 190, 133, 3, 171, 62, 60, 33, 109, 62, 34, 77, 98, 61, 159, 17, 34, 187, 133, 127, 49, 62, 198, 76, 54, 62, 252, 77, 71, 61, 27, 214, 210, 61, 131, 125, 202, 61, 144, 110, 202, 188, 248, 43, 69, 190, 168, 93, 46, 190, 73, 110, 22, 62, 160, 131, 184, 61, 136, 125, 23, 190, 135, 142, 26, 62, 234, 135, 218, 61, 247, 10, 190, 60, 150, 67, 16, 190, 84, 78, 78, 62, 248, 59, 28, 190, 55, 61, 205, 190, 241, 80, 77, 62};
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
                alignas(float) const unsigned char memory[] = {113, 214, 44, 60, 79, 216, 204, 62, 143, 248, 174, 62, 51, 116, 104, 190, 11, 125, 174, 190, 221, 142, 24, 191, 230, 29, 101, 190, 56, 128, 140, 191, 237, 2, 149, 60, 195, 37, 70, 62, 12, 71, 203, 62, 60, 120, 168, 190, 190, 58, 99, 61, 140, 67, 136, 62, 123, 144, 87, 63, 99, 225, 137, 62, 195, 72, 229, 190, 184, 168, 107, 191, 169, 247, 166, 62, 250, 249, 84, 61, 84, 236, 34, 63, 27, 41, 1, 191, 95, 254, 41, 190, 225, 28, 36, 63, 178, 55, 182, 190, 60, 95, 155, 190, 95, 123, 96, 191, 105, 34, 172, 190, 226, 3, 68, 191, 44, 61, 27, 61, 219, 217, 39, 63, 82, 69, 205, 189, 180, 33, 6, 62, 62, 207, 199, 61, 172, 64, 152, 190, 51, 206, 8, 62, 64, 220, 126, 190, 62, 200, 201, 62, 54, 243, 199, 61, 241, 222, 221, 61, 108, 189, 136, 61, 235, 65, 136, 190, 109, 139, 152, 61, 15, 253, 9, 191, 103, 13, 5, 62, 17, 105, 12, 189, 78, 6, 112, 62, 20, 209, 81, 190, 236, 244, 18, 190, 100, 216, 213, 61, 141, 38, 184, 190, 111, 7, 87, 190, 99, 1, 238, 61, 194, 142, 229, 189, 229, 196, 35, 190, 59, 228, 97, 62, 150, 46, 10, 190, 159, 34, 150, 62, 114, 47, 213, 189, 133, 60, 160, 62, 184, 137, 135, 188, 251, 241, 131, 189, 66, 177, 183, 188, 97, 209, 0, 191};
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
                alignas(float) const unsigned char memory[] = {70, 34, 151, 62, 146, 166, 129, 190};
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
    alignas(float) const unsigned char memory[] = {187, 201, 108, 63, 49, 136, 28, 192, 55, 160, 200, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {232, 165, 138, 191, 140, 133, 245, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0077/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}