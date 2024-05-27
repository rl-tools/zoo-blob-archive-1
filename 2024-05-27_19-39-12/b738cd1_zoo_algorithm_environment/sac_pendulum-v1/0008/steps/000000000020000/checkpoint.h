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
                alignas(float) const unsigned char memory[] = {155, 163, 241, 61, 67, 117, 45, 63, 59, 228, 215, 190, 130, 243, 131, 63, 150, 101, 18, 191, 123, 240, 244, 190, 224, 85, 224, 61, 81, 147, 40, 188, 232, 50, 130, 62, 137, 155, 128, 189, 248, 11, 179, 63, 64, 41, 241, 62, 44, 185, 58, 191, 93, 249, 38, 63, 136, 194, 189, 62, 149, 187, 71, 191, 126, 222, 103, 191, 125, 178, 236, 189, 132, 107, 51, 63, 254, 149, 185, 63, 3, 240, 163, 62, 40, 225, 206, 189, 216, 71, 205, 61, 52, 99, 7, 63, 74, 55, 252, 62, 127, 189, 135, 63, 208, 88, 210, 62, 98, 252, 134, 62, 202, 189, 44, 63, 104, 172, 148, 190, 228, 144, 22, 63, 228, 199, 73, 63, 247, 167, 238, 62, 221, 225, 67, 63, 121, 253, 94, 63, 161, 211, 175, 62, 146, 242, 17, 62, 18, 201, 198, 62, 42, 212, 177, 190, 231, 105, 244, 188, 235, 159, 157, 190, 234, 54, 217, 186, 74, 153, 34, 191, 47, 78, 139, 190, 83, 87, 211, 62, 48, 214, 153, 61, 243, 228, 92, 63, 229, 118, 200, 62, 134, 98, 225, 190, 136, 196, 195, 62, 78, 107, 70, 62, 106, 19, 27, 62, 52, 248, 71, 63, 179, 70, 7, 62, 73, 180, 197, 190, 155, 73, 198, 62, 235, 208, 10, 191, 215, 230, 6, 63, 33, 217, 149, 63, 217, 55, 5, 63, 165, 196, 0, 190, 191, 6, 225, 191, 214, 201, 156, 190, 0, 38, 232, 189, 40, 194, 142, 62, 220, 71, 204, 60, 238, 30, 144, 62, 31, 141, 24, 190, 227, 218, 27, 63, 229, 50, 129, 190, 85, 149, 124, 190, 111, 214, 61, 62, 202, 59, 228, 190, 145, 136, 164, 63, 81, 54, 105, 62, 136, 72, 218, 190, 234, 104, 93, 63, 74, 236, 240, 61, 58, 185, 129, 190, 31, 250, 156, 191, 62, 140, 132, 190, 164, 22, 1, 191, 21, 132, 75, 63, 14, 56, 202, 61, 44, 101, 194, 191, 68, 185, 132, 190, 234, 162, 71, 190, 171, 174, 49, 63, 112, 33, 84, 191, 188, 31, 254, 190, 197, 232, 172, 62, 106, 252, 126, 191, 70, 65, 248, 62, 4, 2, 28, 63, 140, 109, 191, 190, 49, 155, 169, 190};
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
                alignas(float) const unsigned char memory[] = {29, 124, 18, 191, 32, 165, 147, 61, 124, 213, 42, 191, 69, 11, 34, 62, 29, 167, 17, 191, 116, 228, 37, 62, 163, 249, 5, 190, 15, 65, 194, 189, 21, 75, 184, 190, 134, 233, 3, 63, 219, 105, 197, 190, 9, 236, 138, 60, 159, 204, 99, 62, 41, 218, 212, 190, 171, 116, 184, 190, 19, 180, 42, 191, 45, 254, 160, 62, 162, 242, 194, 62, 63, 100, 62, 62, 216, 113, 162, 190, 211, 68, 31, 189, 215, 212, 101, 62, 100, 207, 40, 63, 46, 38, 38, 191, 214, 118, 218, 189, 229, 49, 198, 62, 100, 75, 96, 190, 51, 63, 226, 62, 211, 173, 144, 62, 166, 154, 147, 190, 219, 100, 19, 60, 74, 65, 26, 191};
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
                alignas(float) const unsigned char memory[] = {56, 135, 56, 190, 194, 172, 167, 62, 126, 24, 255, 189, 45, 48, 30, 61, 132, 79, 151, 62, 147, 199, 21, 189, 59, 0, 230, 190, 138, 189, 57, 62, 231, 98, 179, 190, 160, 180, 96, 190, 6, 64, 120, 190, 147, 234, 22, 190, 156, 175, 218, 61, 82, 24, 51, 190, 154, 217, 44, 62, 213, 226, 88, 189, 30, 87, 71, 62, 131, 170, 160, 62, 136, 91, 116, 191, 127, 110, 231, 190, 100, 149, 48, 190, 196, 40, 238, 188, 161, 232, 140, 62, 116, 28, 217, 190, 87, 65, 151, 62, 7, 199, 47, 62, 82, 254, 139, 191, 134, 132, 37, 190, 186, 241, 157, 62, 31, 172, 100, 62, 197, 164, 152, 60, 69, 215, 12, 63, 32, 120, 127, 62, 88, 158, 196, 62, 157, 176, 246, 190, 190, 149, 152, 190, 65, 127, 20, 190, 32, 65, 67, 190, 128, 146, 2, 191, 173, 14, 92, 62, 157, 147, 10, 191, 58, 22, 42, 61, 229, 139, 150, 190, 71, 107, 216, 189, 226, 211, 21, 62, 160, 119, 153, 189, 169, 114, 38, 62, 210, 212, 45, 191, 102, 114, 214, 188, 118, 253, 174, 189, 163, 161, 110, 190, 221, 145, 24, 191, 161, 125, 105, 190, 120, 32, 151, 61, 84, 125, 121, 62, 252, 71, 238, 189, 190, 13, 231, 190, 23, 22, 222, 190, 23, 234, 239, 190, 147, 24, 187, 190, 190, 202, 251, 187, 165, 235, 184, 62, 136, 48, 61, 62, 167, 104, 194, 62, 178, 97, 149, 190, 209, 237, 246, 61, 75, 127, 148, 61, 2, 111, 94, 61, 73, 49, 5, 191, 244, 183, 202, 189, 75, 69, 246, 60, 166, 33, 192, 189, 28, 202, 65, 60, 110, 154, 145, 62, 238, 77, 191, 61, 197, 237, 8, 62, 171, 214, 240, 61, 32, 1, 28, 62, 226, 153, 180, 190, 8, 139, 87, 190, 107, 25, 34, 62, 235, 247, 172, 62, 137, 42, 7, 62, 40, 127, 19, 62, 117, 176, 99, 190, 35, 183, 38, 61, 16, 180, 12, 189, 49, 253, 95, 61, 26, 5, 84, 190, 2, 136, 183, 62, 232, 88, 7, 62, 88, 195, 49, 61, 77, 101, 222, 189, 159, 113, 17, 190, 68, 63, 227, 189, 32, 84, 217, 190, 156, 237, 135, 61, 135, 49, 0, 190, 127, 108, 187, 61, 206, 164, 61, 190, 92, 198, 2, 62, 198, 89, 225, 189, 68, 223, 47, 190, 204, 8, 6, 62, 214, 238, 18, 62, 42, 10, 87, 190, 6, 183, 222, 61, 218, 11, 14, 61, 230, 163, 237, 61, 194, 164, 37, 62, 249, 235, 236, 189, 74, 132, 198, 189, 115, 17, 180, 189, 90, 20, 2, 62, 57, 248, 5, 62, 212, 67, 91, 189, 131, 30, 30, 61, 203, 81, 196, 187, 37, 100, 63, 190, 92, 178, 62, 190, 103, 96, 29, 62, 218, 194, 3, 186, 33, 87, 234, 61, 195, 191, 156, 61, 156, 17, 20, 190, 183, 236, 40, 190, 8, 198, 226, 61, 59, 247, 154, 188, 161, 25, 205, 189, 105, 79, 1, 62, 239, 89, 138, 189, 53, 82, 228, 190, 174, 110, 149, 191, 165, 50, 164, 62, 131, 179, 61, 62, 83, 60, 78, 189, 149, 201, 64, 189, 73, 23, 153, 61, 135, 76, 189, 61, 133, 70, 27, 189, 128, 247, 181, 189, 13, 217, 195, 189, 124, 91, 222, 190, 231, 4, 231, 62, 200, 58, 165, 190, 78, 130, 146, 61, 170, 81, 204, 61, 8, 26, 169, 61, 235, 130, 207, 189, 125, 187, 198, 188, 137, 152, 47, 62, 139, 182, 138, 190, 172, 99, 128, 191, 140, 210, 86, 189, 192, 68, 69, 62, 104, 26, 59, 189, 216, 203, 187, 189, 1, 67, 63, 190, 131, 31, 14, 61, 58, 141, 0, 189, 196, 32, 3, 190, 230, 89, 134, 62, 120, 198, 55, 61, 230, 37, 37, 190, 96, 6, 22, 189, 193, 96, 108, 189, 123, 118, 47, 191, 237, 28, 101, 62, 0, 149, 63, 191, 239, 45, 9, 189, 221, 249, 202, 190, 252, 209, 59, 190, 53, 29, 47, 190, 180, 151, 5, 62, 35, 13, 59, 62, 147, 214, 249, 190, 9, 130, 239, 61, 97, 158, 198, 61, 80, 203, 178, 61, 244, 194, 31, 191, 16, 26, 1, 62, 204, 189, 95, 61, 251, 208, 157, 61, 134, 126, 44, 190, 143, 24, 211, 190, 113, 248, 128, 189, 29, 179, 177, 190, 39, 65, 232, 190, 176, 100, 145, 62, 40, 186, 140, 62, 252, 241, 25, 62, 150, 113, 163, 62, 176, 222, 187, 189, 253, 246, 117, 61, 61, 142, 242, 61, 252, 249, 195, 191, 224, 170, 14, 192, 62, 78, 212, 62, 85, 193, 65, 191, 10, 158, 76, 191, 212, 170, 172, 189, 127, 117, 143, 60, 241, 248, 67, 60, 202, 67, 173, 190, 13, 163, 224, 190, 68, 88, 36, 190, 224, 86, 149, 191, 49, 181, 166, 188, 26, 72, 76, 61, 154, 131, 195, 191, 80, 206, 117, 62, 162, 10, 205, 190, 96, 169, 166, 62, 227, 187, 199, 61, 24, 247, 155, 191, 40, 143, 232, 62, 253, 148, 28, 191, 129, 236, 216, 61, 242, 57, 2, 62, 46, 101, 99, 62, 19, 236, 135, 62, 68, 82, 42, 190, 203, 197, 124, 191, 150, 120, 55, 62, 222, 16, 135, 188, 32, 78, 4, 190, 31, 154, 225, 188, 241, 31, 60, 61, 227, 107, 239, 61, 208, 33, 196, 189, 4, 97, 139, 189, 172, 151, 21, 61, 191, 195, 7, 190, 122, 20, 18, 60, 199, 70, 251, 189, 250, 60, 57, 190, 171, 54, 160, 189, 60, 32, 218, 189, 249, 116, 235, 188, 86, 108, 155, 189, 84, 228, 190, 189, 36, 139, 1, 62, 28, 142, 241, 189, 241, 181, 100, 61, 80, 200, 18, 62, 223, 214, 211, 189, 130, 203, 59, 189, 105, 71, 181, 61, 47, 19, 243, 188, 187, 102, 69, 190, 139, 74, 129, 188, 190, 55, 55, 61, 113, 73, 252, 188, 159, 45, 6, 190, 183, 66, 87, 190, 219, 96, 159, 61, 17, 181, 35, 191, 88, 94, 204, 61, 250, 223, 235, 61, 220, 59, 83, 190, 235, 12, 36, 190, 24, 140, 70, 62, 182, 41, 166, 189, 86, 26, 152, 189, 198, 50, 48, 190, 162, 164, 246, 188, 110, 96, 198, 188, 121, 79, 227, 61, 51, 216, 4, 190, 215, 203, 98, 189, 202, 14, 57, 188, 200, 22, 172, 190, 177, 229, 15, 62, 87, 161, 135, 190, 134, 34, 200, 188, 16, 116, 222, 189, 253, 210, 248, 61, 215, 101, 48, 61, 37, 212, 87, 62, 61, 83, 234, 61, 74, 224, 12, 191, 210, 26, 94, 189, 198, 85, 212, 61, 77, 197, 202, 189, 149, 185, 32, 188, 242, 133, 16, 190, 26, 1, 117, 62, 253, 17, 94, 190, 57, 59, 52, 62, 157, 32, 147, 62, 54, 12, 117, 62, 13, 202, 119, 190, 216, 140, 206, 190, 6, 40, 34, 190, 35, 231, 173, 190, 99, 173, 77, 62, 44, 233, 94, 190, 185, 101, 226, 188, 192, 34, 203, 61, 114, 203, 35, 58, 174, 140, 13, 62, 152, 223, 6, 189, 224, 89, 87, 62, 103, 197, 242, 189, 63, 217, 51, 190, 247, 6, 181, 62, 200, 119, 108, 189, 202, 189, 219, 190, 254, 252, 50, 62, 13, 61, 157, 189, 157, 120, 80, 61, 114, 186, 135, 62, 93, 223, 89, 191, 107, 2, 153, 191, 147, 34, 227, 189, 13, 166, 210, 191, 89, 154, 10, 191, 200, 196, 170, 62, 24, 136, 42, 62, 78, 6, 140, 62, 71, 78, 34, 62, 48, 236, 125, 62, 141, 29, 167, 189, 211, 236, 143, 189, 146, 207, 195, 62, 175, 80, 89, 61, 200, 37, 178, 190, 17, 45, 174, 61, 181, 237, 43, 62, 150, 241, 18, 191, 56, 247, 71, 61, 124, 185, 195, 190, 9, 144, 52, 62, 236, 53, 33, 190, 74, 234, 133, 62, 238, 153, 0, 188, 113, 240, 79, 62, 194, 117, 195, 190, 250, 246, 152, 190, 57, 233, 206, 189, 124, 109, 18, 63, 170, 71, 246, 190, 249, 231, 228, 61, 248, 192, 62, 61, 146, 122, 72, 190, 199, 27, 59, 190, 228, 132, 81, 63, 234, 171, 73, 190, 161, 229, 89, 190, 195, 244, 132, 62, 9, 70, 190, 62, 199, 198, 66, 62, 97, 60, 149, 190, 199, 145, 67, 190, 119, 39, 5, 190, 21, 201, 183, 191, 176, 254, 174, 191, 72, 10, 170, 62, 205, 113, 64, 62, 165, 22, 64, 190, 108, 58, 245, 62, 117, 22, 99, 62, 5, 208, 200, 190, 241, 26, 36, 189, 131, 217, 142, 62, 83, 34, 26, 187, 37, 74, 160, 191, 24, 88, 66, 190, 139, 155, 134, 190, 166, 184, 107, 62, 163, 107, 139, 61, 79, 142, 193, 62, 89, 95, 35, 190, 152, 113, 150, 188, 70, 175, 185, 190, 210, 99, 54, 62, 99, 188, 150, 191, 210, 226, 45, 62, 77, 147, 226, 60, 210, 46, 205, 61, 206, 5, 11, 62, 5, 146, 131, 190, 123, 83, 112, 191, 8, 213, 182, 190, 235, 235, 58, 61, 122, 112, 207, 189, 98, 140, 251, 189, 226, 158, 180, 191, 238, 221, 18, 192, 197, 163, 173, 62, 121, 153, 72, 62, 218, 213, 238, 190, 21, 108, 192, 60, 247, 68, 71, 62, 148, 41, 115, 62, 232, 118, 19, 62, 108, 34, 66, 190, 190, 162, 171, 61, 228, 1, 171, 191, 4, 202, 135, 188, 169, 25, 120, 189, 137, 6, 6, 62, 144, 90, 44, 61, 28, 47, 123, 62, 89, 117, 185, 60, 84, 86, 72, 189, 228, 31, 99, 61, 27, 47, 99, 62, 216, 164, 84, 191, 125, 146, 113, 62, 104, 133, 62, 189, 91, 141, 1, 62, 34, 17, 198, 189, 61, 135, 110, 190, 217, 35, 190, 189, 0, 170, 48, 190, 158, 225, 47, 62, 22, 211, 95, 61, 55, 222, 105, 62, 17, 109, 124, 62, 32, 217, 72, 61, 9, 101, 33, 59, 56, 52, 191, 61, 118, 198, 130, 62, 40, 150, 139, 189, 66, 11, 141, 188, 240, 8, 121, 190, 15, 100, 0, 190, 92, 207, 151, 189, 46, 232, 10, 189, 219, 189, 59, 62, 150, 29, 58, 61, 127, 204, 56, 62, 25, 66, 195, 190, 249, 215, 144, 190, 162, 129, 25, 190, 220, 2, 43, 63, 101, 72, 162, 190, 94, 22, 59, 189, 102, 230, 140, 62, 171, 183, 126, 62, 113, 180, 38, 60, 97, 71, 21, 63, 145, 58, 84, 189, 171, 39, 153, 190, 79, 244, 87, 62, 208, 33, 33, 62, 93, 246, 16, 61, 187, 135, 7, 190, 174, 105, 0, 191, 140, 41, 54, 190, 95, 88, 100, 191, 144, 196, 225, 190, 72, 124, 167, 62, 85, 70, 28, 190, 26, 246, 236, 190, 9, 5, 197, 190, 135, 88, 225, 189, 114, 58, 246, 189, 218, 122, 170, 190, 111, 17, 72, 61, 221, 251, 160, 60, 158, 12, 50, 63, 82, 145, 201, 190, 161, 67, 221, 190, 96, 91, 26, 191, 136, 57, 94, 62, 123, 2, 8, 191, 155, 255, 99, 62, 131, 193, 15, 190, 101, 254, 198, 190, 148, 116, 8, 190, 39, 204, 42, 191, 189, 238, 206, 188, 138, 16, 151, 62, 0, 205, 14, 61, 82, 90, 69, 62, 103, 189, 205, 190, 164, 179, 132, 62, 190, 179, 46, 191, 186, 39, 194, 189, 96, 230, 160, 190, 202, 135, 129, 190, 65, 242, 121, 190, 126, 96, 191, 190, 237, 87, 221, 62, 104, 121, 135, 62, 130, 128, 167, 190, 8, 244, 178, 62, 98, 183, 136, 62, 10, 193, 157, 60, 100, 18, 163, 61, 198, 38, 224, 61, 26, 191, 222, 61, 150, 200, 134, 191, 150, 207, 208, 190, 122, 4, 177, 61, 132, 219, 221, 62, 199, 78, 56, 62, 246, 32, 127, 62, 246, 116, 192, 189, 115, 252, 65, 60, 138, 42, 12, 190, 112, 146, 13, 191, 104, 243, 138, 189, 82, 214, 185, 62, 235, 52, 136, 62, 3, 212, 145, 62, 124, 178, 14, 62, 123, 37, 18, 191, 219, 254, 14, 191, 92, 191, 119, 190, 155, 81, 79, 191, 158, 149, 55, 189, 160, 24, 93, 187, 109, 250, 191, 61, 42, 219, 113, 62, 12, 156, 144, 189, 84, 208, 182, 61, 111, 101, 13, 190, 136, 42, 244, 190, 219, 58, 66, 190, 17, 140, 130, 191, 19, 201, 23, 191, 2, 190, 20, 191, 193, 3, 152, 189, 248, 202, 142, 190, 150, 165, 119, 61, 59, 245, 63, 62, 154, 215, 135, 62, 170, 124, 249, 190, 240, 96, 193, 190, 82, 179, 71, 62, 110, 130, 238, 61, 3, 158, 103, 62, 15, 254, 138, 190, 1, 214, 245, 62, 130, 147, 136, 62, 50, 45, 134, 61, 100, 109, 207, 62, 89, 221, 32, 61, 138, 13, 55, 190, 133, 57, 76, 189, 238, 18, 220, 190, 117, 109, 152, 190, 151, 125, 66, 190, 177, 216, 190, 62, 128, 76, 52, 191, 138, 102, 171, 191, 210, 61, 211, 62, 198, 62, 137, 62, 210, 221, 144, 190, 114, 178, 43, 63, 7, 170, 253, 61, 191, 200, 214, 62, 136, 192, 0, 61, 140, 45, 58, 190, 49, 204, 0, 190, 113, 191, 147, 191, 38, 104, 222, 62, 56, 41, 219, 189, 164, 218, 154, 188, 221, 242, 172, 188, 214, 89, 200, 62, 12, 62, 10, 188, 36, 30, 184, 189, 51, 93, 64, 61, 187, 1, 177, 62, 121, 140, 70, 191, 221, 207, 179, 62, 176, 27, 60, 62, 114, 136, 124, 62, 81, 124, 20, 188, 29, 130, 169, 190, 178, 141, 12, 191, 132, 35, 169, 190, 209, 117, 174, 62, 65, 50, 152, 62, 9, 46, 15, 191, 103, 78, 77, 190, 89, 67, 40, 190, 147, 179, 168, 190, 138, 41, 62, 191, 114, 107, 215, 189, 237, 255, 114, 190, 132, 111, 165, 190, 238, 114, 114, 191, 81, 110, 117, 191, 224, 219, 218, 188, 68, 93, 161, 188, 148, 34, 27, 191, 197, 180, 41, 190, 223, 60, 78, 190, 214, 187, 169, 191, 35, 150, 96, 190, 142, 80, 33, 191, 137, 74, 61, 62, 178, 90, 14, 191, 159, 41, 8, 62, 2, 143, 138, 190, 111, 157, 27, 190, 44, 190, 135, 191, 116, 143, 129, 62, 43, 164, 169, 191, 21, 227, 91, 191, 61, 247, 87, 62, 198, 81, 248, 62, 119, 244, 69, 61, 200, 104, 62, 190, 232, 139, 128, 190, 115, 147, 31, 190, 154, 188, 98, 61, 189, 231, 239, 62, 69, 103, 16, 63, 2, 95, 142, 61, 42, 0, 128, 62, 157, 43, 216, 61, 236, 160, 132, 191, 152, 12, 104, 60, 94, 225, 87, 62, 37, 91, 50, 191, 16, 161, 44, 62, 62, 168, 20, 62, 163, 36, 135, 190, 160, 183, 206, 61, 49, 144, 149, 62, 196, 138, 115, 191, 122, 83, 129, 61, 49, 207, 159, 59, 188, 117, 105, 190, 245, 239, 163, 61, 224, 161, 173, 190, 176, 215, 43, 62, 45, 124, 28, 62, 26, 114, 82, 190, 254, 91, 199, 61, 44, 252, 153, 62, 39, 140, 154, 190, 81, 203, 128, 62, 145, 216, 108, 190, 101, 95, 60, 186, 108, 69, 121, 62, 41, 112, 77, 61, 155, 68, 93, 190, 8, 45, 16, 191, 87, 124, 104, 189, 198, 168, 19, 191, 83, 55, 137, 62, 41, 62, 59, 191, 212, 143, 110, 190, 115, 230, 182, 190, 172, 211, 123, 189, 224, 111, 104, 59, 225, 88, 184, 61, 94, 227, 198, 61, 143, 182, 85, 190, 180, 126, 61, 189, 186, 213, 31, 190, 168, 88, 120, 190, 68, 223, 1, 191, 206, 156, 78, 62, 236, 99, 27, 190, 16, 206, 185, 61, 31, 42, 163, 62, 192, 159, 120, 190, 201, 158, 137, 191, 235, 175, 105, 60, 112, 43, 32, 191, 40, 150, 243, 187, 81, 242, 172, 62, 125, 160, 161, 62, 1, 240, 249, 60, 165, 105, 116, 61, 236, 73, 137, 62, 116, 203, 180, 190, 16, 199, 70, 62, 52, 42, 34, 63, 64, 107, 44, 189, 56, 78, 57, 191, 190, 4, 50, 62, 169, 96, 147, 190, 117, 26, 82, 190, 34, 69, 133, 190, 184, 98, 160, 190, 253, 100, 212, 61, 42, 85, 48, 189, 37, 162, 94, 61, 159, 173, 160, 190, 119, 221, 116, 62, 54, 15, 246, 189, 189, 145, 225, 190, 55, 195, 175, 190, 58, 64, 222, 189, 141, 8, 31, 190, 144, 195, 168, 61, 87, 123, 245, 190, 11, 128, 96, 62, 168, 68, 87, 188, 31, 14, 175, 190, 139, 87, 65, 190, 212, 49, 251, 61, 195, 233, 91, 62, 163, 56, 145, 62, 65, 75, 77, 62, 227, 131, 191, 61, 161, 39, 128, 190, 47, 235, 48, 62, 7, 2, 151, 190, 219, 66, 97, 189, 95, 124, 70, 61, 19, 162, 162, 61, 226, 30, 161, 61, 53, 122, 143, 61, 102, 237, 187, 62, 53, 92, 118, 62, 78, 141, 59, 61, 175, 46, 192, 60, 208, 69, 0, 190, 62, 132, 72, 62, 88, 245, 141, 62, 131, 217, 163, 61, 187, 253, 228, 189, 122, 231, 133, 62, 123, 80, 156, 189, 77, 175, 42, 191, 46, 94, 52, 62, 23, 214, 51, 190, 152, 37, 227, 62, 228, 78, 234, 190, 220, 224, 245, 61, 38, 118, 166, 190, 40, 111, 130, 62, 242, 213, 203, 59, 212, 68, 32, 191, 229, 51, 14, 62, 181, 18, 158, 190, 6, 31, 75, 61, 25, 136, 54, 189, 194, 67, 13, 190, 249, 41, 117, 189, 119, 30, 30, 190, 109, 5, 167, 189, 106, 248, 154, 61, 87, 5, 203, 61, 231, 97, 194, 61, 213, 231, 255, 189, 67, 178, 67, 189, 196, 246, 231, 189, 214, 99, 253, 58, 252, 216, 49, 190, 165, 223, 204, 189, 25, 115, 165, 189, 54, 4, 239, 60, 190, 102, 52, 190, 16, 25, 107, 61, 121, 172, 212, 61, 31, 233, 148, 189, 221, 151, 63, 189, 196, 225, 46, 190, 174, 109, 175, 189, 104, 104, 18, 189, 123, 20, 8, 61, 131, 199, 16, 190, 42, 56, 113, 189, 6, 164, 167, 60, 82, 76, 131, 58, 194, 64, 23, 190, 81, 50, 153, 61, 42, 50, 142, 190, 213, 87, 120, 189, 23, 16, 213, 189, 93, 160, 238, 190, 228, 65, 70, 191, 220, 211, 10, 62, 84, 113, 11, 189, 247, 10, 151, 190, 99, 240, 148, 189, 37, 183, 134, 62, 75, 145, 162, 62, 209, 56, 180, 61, 77, 62, 60, 189, 121, 14, 227, 60, 34, 37, 74, 191, 232, 92, 10, 191, 238, 162, 205, 61, 193, 31, 44, 60, 174, 127, 150, 62, 210, 146, 0, 62, 71, 243, 103, 190, 201, 40, 180, 188, 223, 166, 188, 61, 41, 41, 39, 62, 47, 181, 160, 190, 1, 200, 127, 62, 58, 66, 253, 61, 195, 173, 29, 62, 58, 213, 90, 61, 171, 192, 175, 190, 33, 233, 82, 189, 68, 123, 127, 190, 120, 15, 197, 61, 250, 112, 229, 61, 85, 232, 193, 190, 44, 82, 56, 60, 23, 147, 62, 62, 3, 176, 52, 62, 254, 180, 161, 190, 246, 184, 38, 62, 93, 244, 25, 61, 104, 125, 211, 59, 58, 6, 85, 190, 211, 18, 245, 61, 158, 81, 55, 62, 204, 196, 238, 189, 196, 222, 141, 189, 57, 127, 165, 189, 62, 237, 7, 62, 48, 64, 102, 62, 30, 121, 41, 189, 107, 229, 49, 190, 231, 233, 61, 190, 140, 63, 77, 62, 58, 137, 190, 60, 228, 246, 101, 189, 123, 142, 160, 61, 191, 123, 56, 62, 156, 204, 203, 190, 196, 48, 4, 62, 201, 132, 174, 62, 196, 51, 123, 62, 250, 134, 247, 61, 191, 75, 194, 62, 176, 163, 110, 188, 100, 46, 191, 59, 6, 17, 44, 190, 148, 181, 25, 61, 165, 106, 217, 59, 47, 101, 68, 61, 221, 223, 239, 61, 230, 228, 22, 61, 240, 93, 146, 61, 114, 107, 167, 189, 67, 163, 209, 189, 238, 106, 210, 61, 19, 177, 254, 189, 18, 53, 29, 188, 168, 36, 77, 189, 192, 148, 33, 190, 223, 197, 10, 190, 186, 121, 0, 62, 149, 183, 169, 61, 7, 221, 136, 189, 241, 88, 117, 186, 65, 42, 120, 189, 109, 164, 185, 188, 20, 193, 73, 60, 93, 17, 72, 190, 5, 128, 255, 188, 30, 137, 227, 61, 211, 42, 81, 190, 40, 13, 57, 190, 192, 135, 62, 190, 154, 242, 68, 190, 54, 217, 60, 61, 67, 210, 245, 189, 188, 191, 151, 189, 32, 90, 244, 189, 129, 187, 141, 61, 55, 70, 107, 189, 183, 65, 35, 62, 130, 1, 226, 189, 5, 156, 101, 60, 162, 248, 144, 61, 134, 80, 210, 185, 50, 22, 47, 62, 74, 61, 254, 60, 141, 110, 225, 61, 5, 203, 25, 190, 192, 81, 28, 62, 2, 241, 92, 189, 142, 222, 147, 189, 91, 233, 203, 189, 197, 201, 68, 189, 234, 26, 8, 190, 94, 159, 29, 190, 68, 176, 17, 62, 184, 36, 219, 189, 18, 206, 237, 61, 59, 63, 110, 189, 22, 205, 160, 188, 158, 188, 23, 60, 195, 126, 224, 189, 42, 106, 202, 60, 230, 50, 150, 189, 92, 246, 0, 190, 156, 117, 93, 61, 60, 130, 106, 62, 154, 111, 52, 190, 1, 161, 170, 190, 228, 149, 158, 191, 185, 211, 138, 191, 168, 123, 189, 62, 227, 171, 66, 190, 196, 116, 1, 191, 2, 120, 16, 190, 116, 191, 34, 61, 87, 29, 182, 60, 249, 218, 127, 189, 117, 142, 74, 187, 30, 101, 172, 61, 98, 107, 4, 63, 29, 107, 19, 190, 99, 16, 90, 191, 152, 177, 23, 191, 31, 118, 5, 62, 26, 253, 96, 189, 129, 58, 76, 62, 107, 194, 40, 190, 132, 150, 30, 190, 224, 159, 254, 62, 216, 202, 90, 191, 50, 35, 69, 62, 50, 14, 167, 62, 154, 137, 157, 190, 101, 24, 214, 62, 167, 161, 58, 61, 59, 86, 23, 62, 67, 203, 219, 189, 35, 115, 110, 61, 248, 174, 148, 188, 124, 44, 196, 190, 117, 147, 33, 60, 51, 217, 26, 63, 86, 130, 94, 61, 210, 75, 89, 191, 43, 6, 170, 60, 78, 182, 173, 190, 13, 254, 30, 190, 210, 155, 228, 190, 175, 26, 62, 190, 128, 2, 133, 61, 217, 42, 147, 189, 150, 215, 110, 62, 131, 102, 232, 190, 39, 97, 237, 61, 199, 171, 87, 61, 94, 148, 197, 190, 133, 102, 209, 190, 173, 172, 179, 60, 16, 85, 65, 190, 224, 66, 168, 62, 47, 202, 74, 190, 18, 36, 156, 190, 116, 101, 197, 190, 114, 6, 3, 190, 100, 167, 233, 189, 149, 168, 120, 62, 23, 128, 154, 62, 146, 18, 81, 62, 65, 244, 133, 60, 66, 249, 78, 61, 215, 80, 1, 189, 246, 172, 122, 61, 81, 91, 9, 190, 175, 77, 173, 190, 54, 164, 15, 191, 215, 80, 74, 62, 18, 48, 247, 61, 116, 100, 103, 61, 190, 95, 215, 62, 119, 191, 138, 62, 120, 111, 58, 61, 16, 131, 94, 61, 63, 125, 238, 189, 213, 6, 41, 189, 120, 195, 71, 189, 222, 157, 44, 190, 150, 144, 28, 62, 58, 198, 199, 61, 156, 46, 128, 62, 207, 234, 250, 191, 189, 224, 22, 189, 197, 126, 118, 62, 81, 87, 128, 61, 200, 32, 148, 190, 63, 126, 219, 61, 15, 250, 60, 191, 117, 196, 96, 190, 94, 51, 137, 191, 129, 244, 223, 190, 127, 249, 116, 61, 101, 44, 145, 190, 113, 110, 140, 60, 249, 134, 196, 190, 225, 203, 224, 61, 138, 183, 138, 190, 143, 47, 103, 191, 58, 154, 46, 189, 228, 158, 164, 62, 244, 249, 37, 190, 219, 69, 224, 62, 252, 57, 75, 62, 151, 74, 169, 62, 43, 226, 133, 61, 1, 35, 22, 189, 6, 120, 23, 62, 75, 228, 233, 189, 49, 139, 93, 61, 65, 63, 157, 189, 179, 166, 19, 61, 187, 58, 232, 61, 255, 36, 162, 62, 225, 107, 252, 190, 185, 53, 65, 62, 220, 198, 125, 189, 93, 42, 177, 62, 44, 43, 186, 190, 60, 116, 204, 61, 158, 4, 182, 190, 127, 150, 125, 190, 204, 196, 232, 189, 215, 113, 28, 191, 135, 12, 3, 189, 212, 103, 32, 191};
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
                alignas(float) const unsigned char memory[] = {138, 118, 73, 62, 84, 126, 70, 61, 217, 42, 136, 62, 23, 60, 28, 190, 148, 134, 186, 61, 19, 163, 136, 61, 254, 230, 214, 62, 38, 90, 46, 61, 39, 122, 200, 62, 96, 99, 168, 189, 119, 203, 181, 189, 171, 8, 63, 62, 230, 174, 193, 62, 253, 223, 82, 190, 78, 137, 189, 188, 197, 50, 244, 58, 247, 91, 112, 62, 7, 162, 74, 61, 197, 131, 76, 189, 75, 108, 156, 62, 224, 220, 12, 61, 44, 40, 56, 62, 151, 116, 146, 188, 20, 249, 171, 60, 218, 224, 246, 61, 14, 61, 50, 62, 98, 143, 7, 190, 33, 142, 22, 190, 218, 29, 231, 61, 168, 119, 161, 59, 35, 172, 11, 62, 160, 148, 170, 60};
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
                alignas(float) const unsigned char memory[] = {11, 192, 26, 63, 237, 164, 237, 62, 3, 215, 192, 189, 220, 96, 81, 61, 96, 215, 47, 190, 7, 18, 2, 63, 54, 29, 191, 191, 89, 96, 140, 61, 230, 195, 88, 188, 199, 166, 27, 63, 227, 61, 46, 191, 8, 163, 128, 191, 250, 132, 17, 191, 160, 105, 144, 190, 113, 65, 87, 63, 91, 219, 3, 191, 150, 231, 132, 191, 143, 20, 67, 191, 108, 195, 219, 191, 5, 25, 216, 62, 85, 130, 37, 63, 75, 81, 54, 63, 202, 146, 18, 191, 10, 142, 247, 61, 113, 118, 4, 190, 210, 250, 155, 61, 94, 34, 88, 189, 124, 240, 37, 62, 142, 255, 40, 63, 246, 255, 232, 62, 244, 231, 5, 191, 168, 190, 33, 191, 152, 29, 242, 61, 13, 21, 115, 190, 152, 54, 185, 190, 237, 214, 18, 190, 128, 180, 91, 190, 148, 75, 246, 189, 238, 17, 5, 62, 162, 196, 87, 60, 196, 112, 218, 190, 54, 21, 154, 189, 80, 121, 20, 190, 61, 85, 130, 62, 22, 38, 114, 190, 177, 68, 13, 62, 145, 7, 75, 189, 5, 44, 112, 62, 94, 246, 130, 189, 93, 55, 241, 62, 160, 247, 184, 62, 34, 79, 99, 188, 255, 198, 204, 62, 78, 174, 2, 61, 32, 40, 109, 188, 90, 49, 23, 190, 21, 104, 24, 190, 19, 149, 142, 190, 121, 124, 27, 190, 95, 7, 197, 189, 56, 13, 109, 61, 220, 11, 61, 62, 161, 248, 231, 190, 87, 120, 142, 62};
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
                alignas(float) const unsigned char memory[] = {215, 79, 11, 62, 171, 41, 13, 191};
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
    alignas(float) const unsigned char memory[] = {237, 64, 64, 62, 102, 38, 200, 191, 45, 157, 212, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {198, 172, 255, 190, 18, 86, 232, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0008/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}