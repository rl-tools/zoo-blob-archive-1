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
                alignas(float) const unsigned char memory[] = {42, 133, 73, 63, 124, 58, 104, 190, 172, 80, 109, 190, 160, 136, 142, 190, 234, 223, 138, 190, 76, 221, 227, 190, 84, 42, 102, 190, 67, 87, 137, 191, 175, 239, 46, 190, 183, 184, 14, 62, 148, 215, 92, 191, 78, 51, 205, 190, 209, 89, 62, 191, 240, 102, 139, 63, 54, 95, 208, 62, 17, 245, 6, 63, 2, 1, 151, 191, 73, 251, 9, 191, 197, 7, 231, 62, 22, 80, 66, 191, 213, 94, 160, 190, 151, 98, 245, 62, 59, 159, 60, 63, 0, 151, 169, 189, 76, 50, 15, 190, 249, 229, 225, 61, 22, 23, 163, 62, 71, 194, 180, 189, 68, 85, 156, 61, 193, 129, 47, 191, 61, 67, 63, 190, 124, 19, 83, 190, 181, 85, 219, 62, 225, 146, 110, 60, 37, 253, 41, 190, 230, 37, 241, 190, 54, 79, 91, 191, 113, 32, 29, 63, 48, 20, 86, 62, 158, 125, 62, 63, 237, 214, 125, 191, 29, 17, 117, 190, 148, 63, 153, 190, 47, 62, 129, 63, 137, 14, 84, 62, 34, 10, 204, 190, 231, 205, 24, 191, 205, 39, 211, 61, 195, 177, 146, 62, 167, 62, 188, 61, 188, 245, 0, 191, 226, 237, 92, 190, 217, 123, 175, 191, 183, 88, 49, 190, 56, 85, 16, 63, 25, 220, 3, 63, 47, 1, 27, 62, 176, 143, 59, 61, 6, 141, 193, 63, 15, 104, 228, 62, 37, 171, 52, 190, 18, 79, 132, 191, 36, 147, 112, 189, 125, 31, 29, 63, 83, 217, 81, 191, 244, 12, 235, 190, 221, 10, 175, 190, 61, 117, 194, 190, 115, 121, 25, 190, 74, 115, 69, 191, 14, 185, 143, 62, 195, 73, 61, 62, 137, 118, 50, 63, 167, 255, 175, 63, 33, 198, 136, 62, 160, 112, 223, 61, 181, 47, 139, 191, 241, 89, 107, 62, 152, 13, 47, 191, 114, 202, 40, 190, 166, 29, 189, 62, 199, 209, 107, 63, 88, 175, 47, 62, 57, 190, 70, 59, 103, 4, 178, 190, 153, 52, 87, 63, 102, 72, 47, 62, 225, 53, 190, 62, 32, 155, 195, 190, 137, 11, 33, 63, 81, 231, 167, 62, 132, 72, 128, 191, 58, 217, 103, 62, 88, 55, 65, 63, 155, 33, 112, 191, 173, 246, 119, 190};
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
                alignas(float) const unsigned char memory[] = {146, 18, 50, 191, 24, 254, 22, 61, 47, 98, 55, 190, 97, 170, 134, 190, 235, 238, 111, 62, 41, 188, 56, 62, 164, 196, 69, 62, 190, 77, 37, 62, 41, 253, 196, 61, 19, 35, 167, 62, 124, 205, 94, 190, 10, 30, 70, 191, 198, 85, 17, 63, 150, 213, 152, 190, 22, 41, 8, 63, 220, 214, 139, 189, 217, 4, 7, 63, 33, 233, 74, 190, 83, 117, 203, 62, 39, 29, 64, 190, 57, 94, 48, 61, 99, 246, 208, 190, 49, 58, 70, 63, 195, 217, 59, 63, 12, 228, 11, 61, 50, 204, 185, 61, 4, 111, 240, 190, 203, 2, 255, 61, 249, 43, 12, 63, 174, 145, 187, 190, 116, 191, 151, 62, 237, 103, 115, 190};
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
                alignas(float) const unsigned char memory[] = {105, 95, 254, 190, 65, 92, 4, 62, 32, 209, 79, 190, 26, 65, 141, 189, 79, 33, 227, 190, 96, 183, 77, 185, 186, 238, 90, 188, 184, 99, 132, 62, 142, 10, 222, 190, 66, 66, 149, 59, 197, 206, 217, 188, 12, 173, 185, 61, 106, 105, 34, 191, 182, 41, 244, 190, 0, 79, 147, 190, 129, 98, 229, 188, 132, 162, 53, 62, 82, 126, 10, 62, 10, 19, 231, 62, 54, 112, 12, 192, 197, 105, 169, 190, 123, 106, 57, 190, 152, 113, 64, 61, 207, 187, 19, 191, 102, 23, 200, 62, 98, 186, 15, 62, 33, 96, 128, 189, 85, 13, 110, 62, 253, 61, 218, 190, 101, 82, 17, 63, 1, 203, 187, 61, 204, 5, 59, 190, 186, 11, 152, 189, 212, 137, 35, 63, 55, 205, 74, 189, 8, 44, 7, 191, 148, 221, 171, 62, 62, 110, 33, 191, 240, 168, 130, 191, 221, 189, 10, 63, 18, 120, 136, 62, 209, 20, 88, 62, 131, 67, 59, 62, 175, 210, 127, 190, 6, 145, 139, 62, 49, 151, 49, 191, 214, 178, 57, 62, 47, 152, 197, 61, 33, 102, 47, 62, 176, 65, 208, 189, 50, 45, 32, 62, 87, 165, 47, 190, 95, 149, 62, 190, 157, 90, 156, 191, 44, 250, 21, 190, 5, 104, 19, 190, 187, 153, 132, 61, 140, 70, 77, 62, 21, 78, 154, 61, 138, 138, 189, 190, 146, 181, 34, 62, 246, 93, 137, 190, 51, 85, 143, 190, 194, 216, 219, 190, 84, 132, 238, 190, 97, 219, 30, 61, 142, 53, 235, 189, 74, 234, 234, 189, 31, 216, 133, 190, 79, 92, 54, 189, 80, 188, 96, 188, 33, 180, 138, 62, 216, 20, 141, 189, 206, 80, 108, 62, 180, 45, 13, 190, 55, 178, 246, 61, 221, 111, 73, 190, 231, 78, 96, 191, 139, 170, 60, 62, 63, 206, 159, 190, 39, 107, 176, 61, 250, 139, 168, 190, 114, 191, 17, 62, 101, 255, 135, 190, 155, 179, 20, 191, 173, 111, 243, 190, 50, 229, 74, 62, 18, 84, 163, 190, 205, 65, 183, 61, 15, 28, 16, 62, 22, 188, 192, 190, 248, 84, 184, 62, 146, 98, 100, 62, 202, 238, 174, 62, 104, 228, 208, 62, 92, 11, 41, 191, 216, 2, 58, 189, 50, 253, 16, 62, 8, 126, 137, 62, 191, 208, 247, 187, 93, 145, 63, 190, 104, 247, 49, 62, 99, 21, 149, 189, 119, 103, 11, 62, 254, 82, 30, 62, 25, 231, 185, 189, 232, 243, 153, 62, 67, 176, 219, 189, 175, 176, 54, 191, 109, 29, 143, 189, 241, 253, 18, 62, 151, 163, 123, 190, 63, 124, 211, 189, 4, 213, 40, 63, 141, 110, 201, 62, 252, 170, 158, 190, 62, 64, 241, 62, 97, 237, 8, 61, 98, 252, 214, 189, 225, 123, 204, 190, 202, 108, 187, 62, 36, 209, 239, 61, 79, 133, 12, 61, 198, 252, 174, 62, 190, 234, 13, 189, 82, 132, 188, 62, 79, 127, 48, 62, 244, 145, 44, 62, 112, 65, 21, 191, 144, 19, 90, 60, 184, 190, 212, 189, 143, 222, 134, 61, 230, 71, 1, 62, 220, 8, 159, 61, 62, 78, 146, 61, 254, 36, 4, 190, 99, 53, 103, 188, 74, 55, 145, 189, 2, 243, 223, 189, 210, 195, 138, 61, 231, 204, 97, 62, 219, 104, 208, 190, 132, 21, 174, 62, 251, 47, 44, 62, 103, 21, 47, 62, 234, 143, 101, 62, 110, 75, 158, 62, 10, 116, 128, 61, 61, 57, 232, 61, 31, 195, 96, 190, 7, 202, 23, 62, 60, 247, 3, 59, 172, 28, 10, 62, 5, 233, 181, 61, 162, 165, 6, 190, 119, 45, 26, 60, 237, 133, 24, 62, 171, 91, 162, 61, 135, 193, 6, 190, 66, 195, 190, 190, 92, 255, 130, 60, 138, 150, 210, 60, 53, 231, 152, 191, 225, 233, 141, 62, 166, 240, 39, 187, 158, 97, 231, 189, 77, 146, 232, 61, 213, 176, 129, 62, 33, 243, 178, 191, 16, 225, 92, 62, 155, 4, 59, 190, 73, 245, 245, 58, 141, 211, 180, 191, 159, 135, 9, 61, 192, 251, 206, 190, 39, 135, 0, 190, 74, 236, 108, 62, 241, 228, 135, 191, 92, 51, 225, 62, 49, 177, 252, 191, 186, 59, 75, 191, 182, 255, 100, 61, 91, 187, 20, 190, 130, 70, 139, 191, 54, 195, 46, 62, 253, 105, 157, 189, 200, 57, 199, 189, 86, 225, 82, 62, 169, 233, 72, 191, 100, 204, 2, 191, 120, 51, 219, 62, 208, 64, 246, 61, 172, 49, 191, 189, 59, 114, 222, 189, 190, 119, 43, 190, 233, 42, 205, 60, 53, 105, 229, 189, 255, 180, 204, 187, 46, 120, 207, 189, 116, 122, 250, 60, 245, 202, 203, 188, 40, 145, 10, 62, 177, 96, 18, 190, 160, 84, 15, 190, 13, 103, 137, 60, 121, 194, 202, 188, 201, 183, 16, 189, 225, 157, 220, 189, 73, 157, 249, 189, 14, 8, 19, 190, 168, 68, 203, 189, 175, 128, 145, 188, 22, 232, 242, 189, 96, 162, 5, 188, 254, 203, 28, 189, 52, 60, 188, 189, 87, 237, 180, 189, 70, 22, 54, 61, 34, 205, 243, 187, 142, 228, 232, 61, 222, 157, 27, 190, 152, 200, 43, 189, 129, 245, 226, 61, 175, 221, 40, 61, 9, 122, 242, 190, 147, 217, 243, 189, 253, 255, 99, 61, 104, 162, 91, 190, 18, 88, 232, 60, 212, 70, 77, 61, 85, 5, 164, 60, 45, 21, 89, 61, 141, 113, 88, 189, 141, 18, 200, 61, 223, 190, 176, 188, 152, 20, 197, 187, 138, 211, 211, 61, 201, 254, 197, 190, 95, 148, 112, 61, 218, 114, 44, 62, 66, 233, 66, 62, 140, 231, 49, 190, 27, 238, 66, 61, 191, 10, 47, 188, 180, 220, 131, 62, 63, 183, 98, 190, 85, 120, 102, 62, 246, 251, 22, 61, 24, 25, 251, 61, 3, 244, 98, 190, 229, 25, 144, 60, 132, 91, 146, 60, 243, 158, 143, 61, 242, 118, 175, 61, 210, 154, 79, 62, 138, 43, 244, 190, 80, 224, 20, 190, 36, 26, 13, 190, 104, 168, 224, 189, 75, 209, 12, 62, 67, 143, 145, 188, 73, 115, 163, 188, 15, 112, 68, 190, 220, 0, 144, 189, 47, 29, 53, 61, 157, 36, 226, 189, 21, 10, 212, 61, 39, 205, 201, 186, 44, 108, 190, 61, 190, 222, 222, 188, 71, 19, 35, 190, 86, 138, 61, 188, 228, 252, 104, 189, 124, 31, 26, 190, 32, 138, 132, 189, 6, 79, 31, 190, 119, 207, 202, 61, 99, 149, 20, 190, 72, 83, 49, 61, 216, 128, 237, 61, 88, 111, 44, 190, 238, 146, 50, 190, 216, 21, 52, 190, 140, 236, 150, 61, 215, 12, 19, 60, 243, 33, 193, 189, 139, 131, 227, 189, 162, 102, 180, 189, 41, 2, 62, 191, 24, 250, 28, 62, 51, 192, 113, 62, 96, 191, 18, 189, 217, 147, 174, 188, 107, 228, 132, 61, 96, 239, 37, 62, 129, 173, 10, 62, 252, 234, 253, 188, 247, 96, 165, 189, 92, 154, 96, 188, 126, 141, 40, 62, 71, 187, 176, 61, 46, 106, 248, 190, 220, 153, 12, 60, 192, 79, 155, 60, 230, 29, 38, 62, 232, 22, 93, 62, 79, 198, 49, 62, 199, 109, 159, 61, 51, 54, 15, 62, 162, 29, 170, 190, 216, 22, 141, 62, 137, 4, 134, 61, 190, 227, 57, 62, 137, 85, 167, 189, 175, 67, 57, 189, 131, 221, 93, 62, 119, 181, 179, 62, 66, 174, 207, 61, 58, 90, 131, 61, 221, 32, 39, 191, 31, 141, 31, 62, 130, 191, 86, 62, 126, 57, 31, 62, 140, 126, 158, 191, 30, 126, 60, 62, 175, 147, 17, 191, 178, 43, 224, 190, 218, 9, 51, 190, 41, 86, 35, 62, 170, 45, 10, 191, 70, 184, 6, 63, 235, 167, 134, 190, 23, 28, 27, 62, 168, 52, 82, 191, 102, 120, 142, 60, 88, 180, 134, 62, 15, 216, 45, 191, 194, 179, 32, 189, 182, 122, 37, 190, 248, 43, 42, 191, 122, 174, 142, 188, 220, 123, 164, 190, 92, 201, 140, 62, 144, 233, 20, 62, 96, 7, 62, 191, 206, 61, 24, 63, 17, 22, 4, 63, 172, 207, 136, 190, 94, 185, 102, 61, 144, 228, 213, 190, 214, 100, 80, 189, 44, 166, 170, 189, 50, 138, 7, 189, 1, 241, 122, 60, 227, 33, 254, 60, 179, 137, 52, 187, 197, 241, 196, 189, 91, 11, 55, 190, 253, 79, 221, 61, 35, 29, 18, 190, 127, 153, 22, 61, 248, 148, 254, 189, 110, 74, 11, 190, 21, 82, 165, 189, 18, 141, 1, 190, 13, 105, 179, 189, 120, 228, 4, 189, 201, 180, 190, 189, 157, 114, 8, 61, 172, 191, 174, 189, 53, 139, 121, 61, 10, 92, 153, 189, 119, 96, 164, 61, 219, 50, 100, 61, 22, 81, 165, 61, 240, 14, 184, 189, 87, 215, 152, 189, 124, 160, 34, 190, 240, 177, 35, 62, 179, 136, 128, 61, 28, 204, 231, 189, 12, 34, 193, 189, 65, 70, 171, 61, 224, 53, 237, 61, 40, 46, 244, 60, 84, 6, 150, 62, 10, 71, 172, 59, 20, 192, 134, 190, 126, 128, 136, 62, 197, 216, 42, 190, 6, 16, 205, 190, 71, 22, 49, 191, 65, 206, 109, 62, 49, 232, 68, 190, 61, 172, 206, 62, 94, 201, 137, 190, 59, 71, 68, 62, 186, 15, 158, 190, 224, 130, 16, 62, 240, 41, 1, 61, 46, 166, 153, 190, 63, 93, 239, 61, 108, 130, 112, 61, 217, 96, 5, 62, 236, 51, 224, 61, 128, 1, 108, 190, 227, 209, 219, 61, 158, 57, 34, 62, 165, 5, 28, 189, 205, 203, 223, 62, 11, 62, 191, 62, 65, 237, 237, 190, 2, 228, 40, 61, 45, 29, 236, 61, 211, 206, 143, 61, 203, 155, 114, 190, 122, 31, 51, 61, 180, 207, 65, 189, 136, 222, 243, 189, 126, 147, 17, 62, 149, 26, 36, 61, 15, 123, 32, 190, 232, 71, 48, 188, 137, 95, 42, 190, 143, 194, 196, 189, 204, 197, 39, 189, 232, 177, 69, 189, 8, 19, 20, 190, 10, 106, 253, 188, 250, 57, 39, 62, 145, 128, 138, 61, 216, 118, 75, 189, 106, 122, 4, 190, 219, 101, 183, 188, 200, 173, 173, 189, 198, 42, 4, 190, 51, 36, 9, 62, 117, 167, 36, 190, 182, 102, 163, 61, 162, 186, 140, 189, 209, 226, 35, 62, 62, 84, 39, 61, 11, 102, 131, 187, 47, 83, 8, 62, 12, 158, 1, 190, 117, 233, 184, 189, 111, 91, 22, 189, 80, 39, 185, 187, 21, 26, 4, 62, 34, 202, 159, 62, 117, 30, 46, 189, 22, 15, 142, 191, 64, 106, 44, 62, 202, 77, 51, 191, 187, 226, 225, 190, 97, 122, 12, 191, 10, 210, 123, 62, 205, 173, 128, 190, 55, 91, 74, 62, 160, 80, 129, 190, 200, 254, 108, 62, 94, 28, 167, 190, 119, 69, 40, 60, 97, 41, 110, 188, 138, 221, 201, 190, 236, 30, 66, 62, 220, 247, 185, 190, 151, 22, 216, 190, 86, 187, 246, 189, 199, 231, 150, 189, 144, 79, 169, 62, 62, 130, 154, 62, 71, 19, 47, 191, 45, 120, 153, 62, 123, 164, 76, 62, 251, 36, 109, 190, 97, 44, 2, 62, 30, 120, 33, 191, 98, 108, 172, 190, 252, 22, 136, 189, 88, 60, 40, 62, 18, 181, 175, 61, 120, 3, 4, 188, 81, 253, 29, 62, 185, 212, 10, 191, 188, 156, 126, 62, 117, 94, 167, 61, 145, 14, 38, 62, 21, 254, 198, 190, 236, 158, 113, 62, 208, 160, 254, 61, 134, 158, 149, 62, 140, 51, 148, 190, 200, 225, 125, 189, 38, 64, 23, 191, 140, 186, 17, 61, 150, 25, 197, 62, 139, 221, 41, 62, 232, 164, 124, 61, 179, 69, 105, 191, 223, 42, 154, 61, 85, 126, 75, 62, 105, 208, 40, 62, 164, 62, 175, 189, 86, 94, 157, 190, 146, 3, 212, 61, 143, 33, 32, 190, 105, 157, 52, 190, 65, 47, 50, 191, 213, 215, 10, 62, 198, 114, 8, 63, 242, 50, 136, 62, 188, 234, 134, 189, 190, 122, 120, 62, 13, 124, 175, 61, 132, 10, 4, 190, 107, 204, 235, 189, 223, 238, 131, 189, 91, 149, 189, 61, 47, 31, 150, 61, 35, 243, 169, 189, 255, 30, 32, 190, 192, 110, 252, 189, 129, 189, 152, 61, 167, 108, 113, 61, 29, 61, 15, 62, 115, 235, 51, 190, 119, 226, 227, 190, 116, 25, 47, 191, 137, 221, 248, 189, 137, 149, 45, 189, 15, 202, 61, 62, 175, 167, 224, 189, 229, 6, 50, 62, 208, 84, 46, 191, 89, 243, 87, 190, 57, 234, 146, 62, 50, 43, 254, 190, 192, 51, 50, 191, 26, 46, 7, 191, 42, 147, 62, 188, 81, 49, 75, 62, 27, 254, 132, 190, 106, 156, 4, 190, 150, 121, 6, 62, 149, 191, 173, 189, 93, 172, 104, 61, 235, 40, 38, 190, 199, 1, 193, 61, 141, 212, 173, 188, 113, 155, 202, 61, 53, 139, 113, 189, 238, 48, 107, 189, 76, 1, 132, 61, 30, 23, 21, 60, 18, 7, 87, 189, 55, 15, 13, 62, 20, 61, 52, 190, 188, 59, 210, 189, 30, 222, 246, 189, 202, 165, 10, 190, 98, 125, 41, 190, 81, 117, 192, 189, 134, 151, 242, 188, 51, 33, 158, 61, 39, 97, 138, 189, 10, 171, 2, 188, 117, 246, 182, 188, 164, 82, 253, 188, 222, 32, 227, 187, 39, 37, 96, 189, 75, 92, 163, 61, 41, 251, 130, 189, 62, 123, 10, 60, 168, 152, 22, 190, 170, 82, 223, 61, 124, 180, 49, 189, 174, 121, 8, 191, 107, 47, 4, 62, 68, 146, 168, 60, 204, 215, 162, 62, 146, 92, 16, 61, 45, 222, 162, 61, 100, 110, 60, 191, 74, 71, 185, 62, 67, 99, 131, 190, 183, 9, 179, 62, 66, 39, 12, 190, 222, 94, 157, 188, 41, 76, 20, 62, 240, 12, 237, 188, 125, 162, 220, 61, 127, 87, 189, 189, 147, 130, 55, 62, 191, 255, 236, 61, 22, 13, 30, 60, 109, 133, 177, 189, 81, 33, 104, 62, 243, 108, 62, 190, 88, 80, 91, 189, 175, 249, 109, 189, 12, 8, 42, 62, 151, 86, 90, 61, 146, 162, 188, 190, 129, 230, 191, 189, 197, 136, 1, 62, 184, 243, 15, 190, 142, 28, 147, 62, 115, 163, 104, 190, 225, 209, 170, 60, 58, 208, 250, 189, 32, 137, 76, 61, 40, 137, 208, 190, 241, 213, 74, 60, 91, 118, 155, 61, 233, 43, 58, 61, 31, 144, 136, 190, 222, 62, 182, 61, 254, 221, 152, 61, 178, 200, 31, 188, 129, 103, 118, 191, 61, 155, 202, 189, 44, 206, 3, 191, 141, 82, 211, 61, 22, 24, 191, 61, 22, 205, 198, 61, 80, 208, 169, 62, 194, 103, 110, 191, 126, 61, 23, 190, 188, 38, 39, 189, 14, 236, 167, 189, 192, 190, 197, 189, 148, 68, 218, 61, 223, 94, 147, 62, 2, 155, 7, 188, 202, 170, 60, 190, 9, 106, 63, 191, 168, 134, 113, 61, 249, 174, 98, 62, 146, 2, 179, 62, 245, 64, 10, 190, 21, 171, 142, 189, 100, 106, 207, 61, 206, 97, 53, 189, 62, 169, 223, 60, 162, 65, 225, 61, 21, 140, 178, 60, 253, 231, 201, 61, 66, 47, 53, 189, 234, 156, 67, 190, 191, 108, 3, 189, 68, 146, 185, 189, 176, 202, 133, 189, 194, 12, 47, 190, 206, 223, 8, 62, 178, 219, 9, 190, 40, 67, 238, 189, 51, 246, 35, 189, 194, 35, 129, 189, 107, 162, 75, 189, 6, 229, 255, 189, 119, 132, 254, 61, 54, 196, 30, 190, 22, 12, 33, 188, 183, 236, 116, 189, 131, 195, 111, 61, 155, 178, 41, 61, 69, 93, 11, 189, 196, 55, 28, 190, 157, 212, 138, 189, 75, 128, 45, 190, 231, 142, 12, 62, 139, 61, 166, 189, 11, 22, 204, 190, 191, 164, 151, 190, 112, 21, 198, 188, 127, 89, 17, 62, 177, 246, 131, 190, 151, 184, 16, 190, 161, 42, 117, 190, 244, 175, 67, 189, 244, 238, 157, 188, 135, 182, 230, 61, 47, 9, 245, 190, 55, 25, 26, 62, 189, 175, 1, 62, 168, 150, 161, 62, 39, 190, 209, 189, 149, 248, 4, 190, 159, 141, 41, 190, 168, 153, 41, 190, 18, 98, 50, 191, 31, 42, 43, 190, 102, 231, 27, 62, 154, 149, 84, 62, 198, 109, 239, 61, 120, 191, 75, 191, 31, 216, 196, 61, 39, 14, 144, 61, 229, 36, 234, 190, 128, 10, 165, 62, 77, 65, 158, 190, 168, 145, 28, 190, 225, 41, 12, 190, 237, 23, 72, 190, 28, 150, 26, 62, 115, 183, 204, 61, 217, 148, 172, 189, 81, 72, 51, 62, 73, 0, 124, 189, 213, 197, 50, 190, 162, 255, 11, 190, 26, 25, 36, 190, 81, 25, 46, 187, 68, 241, 7, 190, 35, 155, 183, 60, 118, 217, 66, 61, 190, 182, 102, 189, 173, 49, 34, 189, 47, 54, 116, 61, 31, 8, 161, 61, 92, 223, 18, 62, 153, 202, 179, 61, 184, 84, 179, 61, 149, 224, 27, 190, 221, 248, 13, 190, 25, 235, 3, 190, 253, 219, 30, 190, 166, 236, 249, 189, 211, 177, 85, 189, 71, 32, 14, 189, 108, 115, 48, 190, 94, 134, 57, 190, 146, 202, 41, 189, 7, 181, 29, 62, 82, 39, 154, 61, 239, 129, 58, 189, 200, 16, 186, 190, 132, 209, 200, 190, 154, 168, 113, 189, 158, 228, 147, 189, 118, 247, 163, 62, 44, 18, 204, 62, 160, 37, 139, 189, 9, 168, 139, 189, 216, 136, 182, 189, 184, 211, 234, 60, 167, 92, 180, 190, 186, 68, 25, 190, 174, 81, 252, 62, 236, 9, 226, 189, 65, 105, 26, 190, 58, 36, 221, 189, 235, 210, 79, 189, 83, 248, 6, 63, 12, 235, 32, 188, 39, 63, 54, 62, 108, 170, 30, 61, 148, 4, 101, 189, 186, 98, 209, 61, 254, 191, 21, 189, 8, 80, 16, 189, 40, 150, 212, 61, 50, 174, 236, 62, 246, 183, 138, 190, 40, 125, 34, 62, 120, 65, 152, 62, 61, 76, 235, 62, 40, 41, 120, 191, 95, 57, 217, 190, 2, 103, 35, 189, 94, 96, 19, 190, 190, 136, 57, 191, 35, 37, 211, 189, 196, 53, 172, 189, 69, 89, 141, 61, 203, 11, 148, 190, 174, 124, 140, 189, 123, 171, 154, 187, 236, 43, 129, 190, 132, 34, 50, 191, 185, 205, 136, 62, 106, 47, 48, 191, 151, 235, 16, 62, 5, 167, 142, 190, 52, 177, 11, 62, 172, 21, 212, 190, 254, 2, 42, 190, 109, 98, 239, 62, 209, 1, 31, 190, 89, 31, 74, 62, 3, 172, 102, 62, 33, 228, 127, 190, 209, 94, 217, 62, 158, 44, 226, 190, 135, 222, 222, 190, 100, 140, 254, 190, 94, 155, 43, 189, 43, 219, 239, 62, 130, 154, 124, 62, 29, 251, 107, 190, 170, 65, 69, 62, 116, 80, 26, 190, 68, 133, 25, 191, 90, 63, 92, 60, 68, 100, 130, 191, 8, 133, 93, 191, 167, 71, 94, 62, 200, 3, 55, 190, 46, 67, 156, 62, 228, 255, 16, 190, 197, 38, 140, 190, 118, 107, 147, 62, 230, 61, 118, 190, 178, 175, 159, 62, 203, 102, 68, 62, 137, 197, 169, 62, 214, 30, 53, 190, 50, 8, 61, 189, 206, 76, 201, 190, 197, 191, 161, 61, 189, 156, 17, 191, 204, 244, 186, 62, 172, 132, 201, 61, 95, 79, 169, 190, 0, 163, 118, 189, 200, 153, 107, 62, 19, 185, 145, 190, 108, 210, 239, 61, 68, 226, 217, 189, 62, 136, 69, 189, 39, 17, 203, 190, 60, 59, 193, 190, 196, 244, 152, 188, 25, 92, 86, 61, 83, 232, 254, 61, 46, 63, 95, 191, 22, 99, 200, 59, 202, 121, 178, 61, 102, 101, 239, 61, 3, 9, 93, 189, 26, 131, 63, 61, 220, 209, 255, 190, 249, 49, 150, 60, 83, 245, 136, 190, 152, 211, 100, 191, 85, 173, 215, 188, 90, 228, 112, 62, 118, 236, 244, 61, 149, 249, 245, 61, 143, 20, 187, 62, 40, 113, 25, 191, 59, 73, 211, 62, 106, 159, 243, 190, 103, 249, 9, 62, 66, 254, 214, 190, 67, 147, 41, 62, 1, 92, 38, 190, 26, 100, 26, 191, 184, 51, 175, 62, 5, 45, 80, 61, 18, 11, 179, 189, 204, 32, 176, 61, 164, 169, 16, 191, 82, 65, 77, 191, 142, 141, 73, 62, 246, 246, 40, 62, 163, 133, 126, 189, 189, 202, 46, 189, 110, 31, 89, 191, 201, 75, 137, 191, 140, 214, 1, 63, 163, 86, 209, 58, 126, 76, 232, 62, 28, 79, 136, 190, 103, 62, 199, 61, 160, 184, 44, 189, 104, 174, 166, 191, 19, 127, 174, 62, 73, 188, 22, 188, 30, 115, 85, 62, 14, 85, 5, 189, 156, 122, 18, 62, 124, 48, 8, 63, 199, 5, 207, 190, 157, 217, 83, 191, 167, 74, 213, 190, 201, 26, 212, 61, 78, 79, 219, 62, 25, 243, 70, 190, 185, 5, 62, 189, 12, 26, 216, 61, 27, 125, 228, 61, 24, 110, 252, 61, 86, 88, 220, 189, 47, 252, 184, 191, 232, 54, 3, 191, 233, 95, 73, 191, 92, 188, 211, 190, 45, 11, 147, 190, 8, 76, 190, 57, 4, 20, 134, 62, 104, 71, 183, 189, 179, 239, 36, 62, 155, 7, 6, 62, 197, 85, 90, 188, 180, 240, 163, 60, 91, 41, 214, 190, 221, 162, 168, 190, 34, 180, 142, 189, 179, 133, 8, 191, 173, 172, 209, 61, 186, 94, 96, 189, 44, 33, 115, 190, 165, 46, 156, 62, 65, 29, 7, 190, 38, 143, 145, 60, 116, 35, 42, 190, 213, 132, 19, 62, 38, 155, 190, 190, 224, 18, 20, 190, 230, 226, 104, 62, 171, 64, 153, 62, 116, 154, 73, 62, 57, 160, 27, 191, 61, 235, 185, 60, 163, 13, 227, 189, 129, 84, 254, 62, 115, 186, 136, 190, 148, 127, 12, 189, 205, 198, 179, 62, 17, 149, 156, 61, 79, 201, 35, 191, 218, 134, 63, 62, 214, 93, 5, 188, 101, 196, 12, 189, 42, 164, 16, 190, 141, 245, 15, 62, 53, 90, 216, 190, 204, 154, 242, 62, 227, 228, 179, 190, 192, 114, 148, 188, 86, 179, 3, 62, 136, 141, 162, 190, 59, 74, 166, 62, 168, 10, 152, 62, 197, 103, 46, 62, 5, 111, 204, 189, 48, 155, 159, 62, 158, 88, 230, 190, 103, 207, 69, 62, 145, 35, 204, 190, 126, 177, 116, 62, 88, 130, 79, 190, 149, 115, 18, 191, 140, 86, 224, 62, 110, 198, 119, 62, 88, 35, 38, 58, 250, 209, 56, 62, 32, 15, 231, 190, 235, 114, 51, 191, 199, 123, 52, 62, 204, 124, 143, 62, 35, 11, 11, 62, 152, 211, 68, 191, 187, 48, 128, 62, 31, 118, 219, 61, 131, 119, 221, 60, 1, 239, 237, 190, 66, 190, 24, 62, 255, 65, 233, 190, 194, 217, 3, 62, 32, 163, 6, 190, 128, 73, 75, 191, 233, 207, 20, 62, 156, 198, 165, 61, 252, 181, 94, 189, 233, 58, 39, 63, 227, 3, 114, 188, 136, 122, 125, 190, 23, 48, 70, 63, 51, 178, 19, 191, 254, 6, 135, 189, 110, 118, 242, 190, 242, 37, 72, 62, 51, 61, 137, 191, 138, 235, 157, 190, 140, 0, 6, 63, 143, 58, 55, 62, 87, 14, 169, 190, 14, 100, 103, 190, 28, 0, 135, 191, 104, 53, 0, 190, 71, 181, 133, 61, 25, 145, 166, 190, 162, 146, 180, 190, 216, 74, 206, 188, 180, 148, 89, 59, 59, 63, 153, 190, 176, 218, 230, 60, 226, 61, 122, 62, 250, 96, 27, 61, 31, 182, 193, 62, 80, 186, 151, 190, 186, 75, 40, 62, 148, 139, 64, 189, 110, 53, 41, 62, 187, 249, 230, 58, 160, 198, 214, 187, 28, 188, 49, 190, 196, 192, 152, 62, 197, 235, 128, 190, 158, 32, 231, 189, 59, 140, 144, 61, 144, 54, 72, 61, 238, 77, 229, 186, 136, 109, 48, 62, 168, 71, 158, 60, 88, 227, 164, 187, 238, 193, 125, 62, 190, 86, 246, 189, 105, 1, 235, 60, 95, 60, 80, 190, 88, 126, 5, 63};
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
                alignas(float) const unsigned char memory[] = {107, 73, 17, 62, 234, 136, 160, 61, 228, 91, 31, 62, 130, 217, 196, 61, 185, 229, 142, 62, 203, 177, 170, 61, 134, 162, 153, 189, 62, 224, 212, 61, 86, 135, 66, 190, 176, 98, 74, 61, 84, 70, 25, 62, 155, 11, 35, 189, 46, 205, 66, 61, 220, 202, 58, 189, 122, 49, 164, 62, 52, 26, 205, 60, 143, 122, 131, 190, 44, 63, 185, 189, 203, 129, 54, 190, 35, 104, 240, 59, 222, 228, 154, 61, 147, 182, 70, 189, 49, 203, 78, 190, 87, 193, 98, 62, 174, 123, 59, 62, 160, 73, 248, 61, 87, 60, 129, 62, 36, 48, 59, 190, 146, 242, 6, 190, 123, 120, 61, 189, 85, 23, 3, 60, 49, 174, 230, 61};
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
                alignas(float) const unsigned char memory[] = {180, 240, 235, 61, 246, 26, 173, 62, 21, 112, 47, 191, 43, 1, 100, 190, 176, 7, 205, 189, 86, 128, 35, 63, 39, 186, 152, 188, 108, 180, 146, 189, 160, 101, 235, 61, 18, 232, 129, 190, 248, 166, 112, 63, 22, 59, 229, 188, 167, 0, 240, 190, 58, 207, 70, 61, 3, 194, 131, 63, 71, 118, 191, 62, 209, 67, 84, 63, 226, 37, 203, 189, 229, 151, 41, 190, 255, 81, 6, 62, 175, 47, 242, 188, 238, 225, 81, 191, 194, 22, 52, 61, 25, 129, 230, 62, 155, 138, 74, 63, 88, 110, 93, 63, 50, 209, 22, 191, 40, 132, 23, 63, 231, 52, 172, 62, 247, 122, 224, 190, 172, 75, 76, 191, 101, 46, 46, 61, 42, 111, 66, 191, 24, 87, 79, 190, 137, 66, 170, 60, 29, 126, 178, 190, 94, 34, 133, 190, 28, 98, 99, 190, 58, 52, 185, 61, 240, 89, 38, 190, 195, 239, 146, 189, 102, 166, 49, 190, 41, 133, 20, 190, 252, 218, 36, 190, 61, 93, 149, 60, 152, 147, 60, 60, 70, 92, 154, 62, 235, 110, 141, 60, 57, 44, 242, 60, 134, 107, 45, 190, 68, 40, 89, 62, 215, 12, 138, 61, 241, 219, 156, 61, 111, 198, 16, 61, 105, 103, 34, 62, 155, 252, 43, 62, 81, 27, 97, 61, 138, 185, 142, 62, 177, 42, 98, 190, 141, 232, 98, 62, 244, 201, 101, 62, 95, 230, 5, 190, 161, 251, 174, 62, 87, 183, 77, 190};
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
                alignas(float) const unsigned char memory[] = {203, 211, 221, 59, 89, 238, 101, 190};
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
    alignas(float) const unsigned char memory[] = {115, 179, 79, 191, 191, 88, 135, 191, 164, 212, 150, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {51, 31, 179, 189, 55, 239, 141, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0013/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}