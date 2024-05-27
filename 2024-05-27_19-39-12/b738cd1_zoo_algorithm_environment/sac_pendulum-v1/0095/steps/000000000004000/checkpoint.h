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
                alignas(float) const unsigned char memory[] = {33, 54, 170, 61, 78, 98, 160, 189, 103, 26, 64, 191, 205, 234, 65, 191, 161, 59, 74, 62, 171, 108, 47, 191, 44, 221, 28, 63, 167, 138, 69, 63, 86, 149, 156, 62, 239, 21, 10, 190, 84, 21, 197, 190, 52, 112, 33, 63, 90, 47, 154, 189, 39, 78, 13, 63, 122, 121, 214, 190, 32, 79, 7, 63, 43, 108, 65, 191, 203, 13, 221, 190, 205, 134, 60, 62, 52, 223, 38, 63, 235, 229, 129, 62, 205, 64, 144, 188, 188, 24, 208, 190, 252, 98, 210, 190, 86, 213, 133, 61, 87, 192, 65, 62, 4, 96, 70, 60, 223, 208, 5, 63, 123, 186, 59, 191, 144, 200, 240, 190, 177, 32, 130, 189, 99, 104, 72, 191, 163, 236, 89, 189, 171, 93, 84, 63, 225, 196, 195, 62, 82, 249, 222, 62, 188, 146, 249, 62, 72, 73, 15, 63, 187, 99, 197, 62, 195, 159, 233, 62, 174, 201, 124, 62, 35, 220, 160, 62, 94, 179, 73, 190, 47, 93, 105, 62, 110, 32, 11, 63, 214, 235, 175, 61, 167, 41, 159, 61, 10, 17, 113, 61, 4, 249, 209, 60, 146, 147, 173, 61, 198, 69, 7, 63, 159, 254, 37, 190, 83, 205, 86, 191, 187, 209, 249, 62, 43, 188, 199, 62, 212, 159, 62, 63, 143, 206, 111, 189, 136, 4, 109, 62, 19, 210, 182, 190, 71, 184, 19, 63, 176, 54, 13, 191, 166, 69, 37, 190, 229, 250, 55, 191, 103, 239, 31, 189, 82, 202, 241, 61, 210, 116, 242, 61, 23, 29, 55, 189, 91, 197, 189, 190, 84, 215, 17, 188, 84, 153, 167, 190, 73, 13, 106, 62, 209, 47, 152, 190, 31, 172, 0, 63, 153, 198, 248, 62, 157, 116, 234, 62, 4, 132, 146, 62, 206, 99, 84, 62, 71, 27, 23, 191, 229, 76, 81, 63, 194, 100, 88, 191, 226, 201, 161, 190, 171, 163, 54, 63, 251, 191, 118, 63, 172, 177, 132, 62, 148, 69, 134, 189, 121, 78, 94, 63, 214, 87, 164, 62, 240, 76, 21, 190, 190, 137, 232, 62, 252, 139, 181, 190, 190, 155, 42, 62, 171, 30, 58, 62, 84, 36, 7, 63, 104, 162, 25, 190, 108, 191, 154, 191, 0, 28, 141, 190};
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
                alignas(float) const unsigned char memory[] = {42, 36, 176, 190, 109, 43, 206, 190, 165, 68, 146, 190, 152, 41, 66, 188, 12, 4, 9, 62, 218, 214, 58, 190, 140, 172, 181, 190, 249, 25, 40, 63, 166, 7, 180, 190, 204, 12, 11, 62, 251, 216, 77, 62, 238, 249, 66, 62, 239, 128, 1, 191, 106, 2, 29, 62, 236, 108, 134, 57, 65, 191, 57, 63, 62, 77, 171, 61, 217, 13, 24, 63, 125, 50, 78, 62, 4, 239, 107, 190, 178, 134, 225, 189, 54, 41, 141, 190, 95, 176, 0, 63, 203, 71, 248, 62, 237, 19, 163, 188, 213, 244, 15, 62, 246, 91, 178, 62, 115, 255, 207, 190, 207, 48, 92, 190, 220, 219, 209, 60, 144, 98, 158, 62, 125, 51, 48, 62};
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
                alignas(float) const unsigned char memory[] = {233, 23, 6, 188, 196, 222, 250, 189, 143, 99, 13, 61, 7, 199, 93, 189, 39, 160, 54, 189, 59, 104, 49, 190, 72, 143, 201, 189, 200, 28, 34, 62, 103, 228, 243, 189, 185, 22, 105, 189, 100, 245, 252, 189, 71, 215, 89, 61, 133, 192, 158, 61, 43, 65, 31, 189, 144, 163, 1, 190, 160, 76, 173, 189, 135, 25, 187, 189, 234, 207, 151, 187, 131, 150, 222, 189, 167, 58, 214, 189, 194, 162, 11, 62, 9, 237, 135, 60, 142, 116, 193, 189, 156, 24, 22, 190, 194, 25, 234, 189, 254, 69, 46, 61, 46, 92, 63, 189, 41, 6, 243, 189, 157, 221, 235, 59, 164, 16, 128, 61, 170, 147, 62, 190, 248, 246, 194, 61, 20, 39, 126, 62, 215, 116, 234, 190, 3, 70, 227, 189, 150, 207, 152, 61, 78, 170, 21, 191, 71, 208, 30, 63, 75, 115, 160, 61, 173, 218, 238, 187, 29, 69, 8, 61, 242, 115, 178, 61, 141, 115, 87, 61, 97, 177, 103, 188, 236, 41, 179, 188, 8, 165, 10, 190, 163, 173, 5, 61, 65, 198, 142, 62, 132, 171, 68, 189, 52, 33, 3, 62, 166, 129, 142, 189, 97, 122, 10, 190, 242, 12, 172, 190, 27, 224, 215, 189, 17, 88, 13, 62, 42, 64, 113, 60, 138, 164, 44, 190, 227, 236, 130, 62, 82, 145, 60, 62, 71, 25, 102, 190, 161, 61, 219, 189, 93, 199, 245, 190, 110, 210, 17, 62, 118, 219, 236, 189, 239, 16, 121, 61, 71, 130, 171, 189, 134, 241, 183, 61, 80, 40, 55, 189, 67, 163, 136, 187, 253, 161, 21, 190, 182, 220, 168, 189, 159, 2, 164, 61, 115, 83, 51, 61, 234, 137, 48, 62, 138, 228, 145, 62, 249, 166, 215, 61, 181, 99, 117, 189, 150, 169, 59, 62, 129, 198, 240, 61, 120, 60, 8, 61, 187, 107, 153, 189, 159, 113, 123, 188, 24, 143, 50, 189, 242, 19, 108, 60, 53, 145, 247, 61, 50, 206, 126, 61, 94, 183, 112, 62, 43, 158, 211, 190, 15, 129, 32, 62, 129, 218, 207, 189, 87, 203, 248, 61, 158, 85, 73, 61, 138, 50, 20, 190, 152, 136, 188, 189, 180, 128, 104, 62, 226, 145, 46, 62, 51, 126, 73, 189, 29, 224, 43, 62, 239, 13, 41, 190, 35, 46, 130, 189, 157, 236, 160, 190, 219, 192, 99, 62, 54, 185, 85, 190, 109, 60, 56, 62, 130, 89, 138, 61, 52, 92, 92, 62, 75, 84, 157, 60, 226, 102, 217, 61, 71, 13, 95, 61, 105, 41, 49, 189, 191, 252, 133, 60, 253, 228, 118, 190, 102, 83, 36, 190, 149, 34, 118, 61, 171, 149, 170, 189, 146, 52, 198, 61, 211, 170, 143, 186, 207, 39, 84, 190, 40, 211, 186, 189, 130, 42, 79, 190, 139, 57, 75, 189, 177, 21, 10, 62, 222, 200, 93, 62, 179, 222, 87, 190, 135, 155, 230, 189, 86, 226, 167, 190, 109, 141, 56, 62, 248, 219, 132, 59, 33, 47, 161, 60, 161, 65, 25, 190, 106, 144, 225, 61, 199, 40, 148, 189, 4, 153, 183, 188, 98, 114, 217, 59, 43, 196, 82, 188, 190, 125, 184, 61, 113, 124, 122, 189, 74, 207, 34, 189, 148, 135, 32, 62, 55, 245, 30, 189, 9, 241, 220, 61, 176, 102, 254, 188, 145, 239, 195, 189, 189, 39, 59, 60, 221, 140, 207, 189, 212, 70, 159, 187, 123, 124, 30, 190, 231, 164, 225, 60, 96, 251, 23, 190, 183, 218, 46, 189, 89, 6, 79, 189, 214, 145, 237, 188, 239, 241, 103, 61, 22, 76, 17, 190, 46, 132, 217, 189, 207, 240, 103, 61, 131, 68, 33, 62, 1, 11, 111, 58, 116, 89, 16, 190, 204, 136, 223, 61, 220, 211, 168, 189, 0, 212, 5, 62, 136, 12, 200, 189, 252, 70, 229, 61, 28, 234, 184, 62, 110, 188, 85, 190, 69, 27, 56, 62, 107, 170, 182, 189, 160, 167, 163, 189, 17, 171, 99, 189, 107, 74, 164, 190, 154, 205, 238, 188, 54, 103, 24, 62, 15, 168, 35, 61, 103, 204, 236, 189, 218, 116, 178, 187, 190, 196, 252, 189, 111, 164, 119, 189, 81, 223, 32, 61, 219, 228, 64, 189, 72, 81, 82, 61, 175, 237, 226, 60, 38, 104, 97, 189, 216, 221, 20, 62, 94, 123, 86, 61, 64, 252, 17, 59, 191, 37, 219, 190, 46, 229, 187, 60, 218, 222, 126, 62, 150, 82, 251, 61, 46, 119, 36, 62, 111, 14, 205, 189, 30, 162, 29, 61, 97, 126, 89, 189, 119, 218, 52, 190, 67, 194, 14, 62, 124, 146, 234, 189, 98, 117, 218, 61, 58, 160, 237, 61, 223, 100, 212, 61, 33, 51, 194, 189, 42, 116, 70, 62, 135, 212, 228, 189, 177, 178, 203, 188, 39, 96, 26, 190, 253, 242, 45, 60, 38, 161, 67, 62, 66, 49, 182, 187, 148, 85, 2, 62, 227, 131, 192, 189, 166, 117, 246, 60, 92, 142, 85, 190, 37, 2, 80, 190, 148, 162, 226, 61, 53, 177, 82, 189, 56, 233, 179, 61, 200, 18, 173, 189, 124, 182, 72, 62, 20, 14, 3, 61, 223, 48, 252, 189, 79, 28, 122, 188, 198, 252, 20, 191, 56, 246, 214, 189, 40, 13, 153, 190, 84, 40, 113, 62, 207, 14, 227, 190, 94, 100, 132, 190, 195, 166, 211, 61, 9, 145, 69, 191, 107, 225, 100, 62, 49, 177, 146, 189, 219, 67, 18, 189, 119, 244, 134, 61, 128, 92, 5, 61, 145, 70, 52, 61, 44, 198, 15, 61, 190, 240, 49, 190, 71, 151, 16, 190, 148, 40, 53, 61, 220, 26, 118, 62, 172, 149, 65, 62, 173, 220, 68, 62, 248, 168, 10, 189, 5, 17, 124, 190, 209, 165, 211, 190, 136, 122, 254, 188, 49, 17, 145, 62, 177, 101, 190, 188, 109, 186, 254, 189, 73, 167, 120, 62, 198, 128, 157, 62, 104, 203, 69, 190, 110, 229, 248, 187, 149, 192, 11, 191, 195, 35, 91, 189, 176, 160, 90, 188, 228, 183, 112, 189, 114, 203, 16, 190, 94, 232, 250, 61, 71, 13, 59, 188, 76, 187, 156, 61, 146, 143, 151, 189, 118, 68, 82, 61, 190, 69, 189, 189, 244, 166, 232, 189, 127, 198, 72, 189, 159, 241, 255, 60, 19, 229, 24, 62, 54, 48, 21, 62, 121, 173, 1, 189, 14, 226, 128, 61, 67, 33, 138, 62, 92, 19, 247, 61, 15, 208, 110, 62, 99, 3, 154, 62, 63, 3, 10, 190, 178, 193, 70, 61, 247, 71, 5, 190, 230, 131, 248, 61, 60, 194, 255, 61, 254, 56, 149, 60, 178, 145, 142, 189, 11, 28, 233, 61, 209, 139, 74, 62, 200, 114, 181, 61, 204, 191, 34, 62, 7, 100, 37, 62, 142, 230, 155, 62, 166, 43, 230, 189, 25, 43, 46, 191, 250, 227, 23, 190, 82, 156, 193, 61, 178, 70, 107, 191, 228, 70, 85, 61, 245, 29, 202, 189, 18, 25, 127, 60, 25, 197, 27, 190, 122, 122, 242, 189, 46, 154, 148, 190, 97, 65, 253, 61, 53, 199, 132, 190, 138, 170, 201, 189, 97, 103, 89, 61, 97, 232, 170, 62, 229, 71, 146, 189, 39, 172, 246, 61, 245, 122, 152, 190, 212, 138, 63, 60, 182, 61, 3, 191, 230, 126, 101, 190, 116, 82, 38, 62, 95, 32, 218, 61, 86, 22, 41, 190, 41, 103, 233, 188, 216, 4, 168, 60, 209, 54, 128, 190, 172, 206, 39, 190, 10, 16, 126, 191, 229, 115, 45, 62, 76, 62, 29, 190, 68, 131, 41, 62, 233, 38, 242, 190, 124, 195, 154, 190, 172, 32, 38, 188, 141, 73, 200, 190, 173, 249, 84, 62, 63, 96, 25, 190, 231, 121, 146, 187, 82, 151, 12, 62, 66, 215, 182, 60, 48, 103, 136, 190, 107, 153, 228, 61, 74, 212, 10, 190, 231, 132, 232, 60, 165, 246, 50, 62, 33, 100, 27, 62, 142, 182, 135, 188, 190, 129, 37, 62, 114, 118, 0, 62, 65, 194, 144, 190, 173, 16, 147, 190, 161, 112, 137, 61, 197, 95, 178, 61, 57, 112, 76, 62, 212, 146, 125, 187, 103, 109, 128, 62, 5, 179, 190, 62, 140, 37, 93, 190, 170, 76, 74, 190, 238, 130, 168, 190, 38, 5, 33, 62, 212, 139, 11, 60, 88, 242, 7, 62, 130, 214, 174, 190, 45, 30, 244, 189, 141, 79, 152, 61, 53, 133, 18, 191, 44, 200, 14, 62, 112, 186, 77, 190, 194, 211, 78, 61, 230, 33, 221, 189, 67, 143, 80, 62, 31, 26, 146, 189, 161, 189, 69, 189, 122, 54, 62, 189, 234, 64, 42, 62, 159, 174, 155, 61, 17, 130, 190, 60, 95, 193, 18, 61, 172, 236, 203, 61, 14, 177, 250, 189, 131, 193, 84, 190, 12, 110, 132, 190, 206, 95, 85, 60, 78, 25, 45, 62, 115, 244, 28, 61, 115, 153, 134, 61, 224, 102, 21, 62, 28, 251, 167, 62, 141, 243, 194, 190, 31, 232, 153, 189, 122, 2, 37, 191, 1, 129, 134, 188, 5, 166, 89, 190, 245, 46, 18, 62, 225, 189, 222, 61, 196, 138, 200, 189, 238, 97, 148, 61, 26, 74, 38, 61, 237, 85, 65, 61, 253, 40, 206, 189, 18, 94, 79, 62, 4, 89, 207, 189, 22, 70, 245, 61, 56, 110, 78, 189, 182, 197, 80, 61, 195, 67, 104, 188, 227, 171, 45, 60, 37, 67, 101, 189, 3, 194, 76, 62, 203, 255, 63, 190, 159, 110, 208, 61, 241, 230, 67, 61, 80, 144, 155, 189, 199, 204, 43, 189, 233, 191, 146, 189, 30, 29, 45, 61, 210, 137, 47, 62, 182, 47, 251, 60, 205, 167, 219, 61, 58, 86, 174, 60, 194, 108, 87, 190, 213, 19, 142, 61, 28, 8, 145, 190, 28, 232, 194, 61, 68, 71, 78, 61, 30, 239, 174, 190, 19, 138, 112, 189, 61, 71, 154, 62, 206, 38, 93, 190, 91, 49, 18, 190, 230, 50, 122, 190, 254, 182, 47, 190, 104, 119, 48, 62, 109, 197, 50, 62, 118, 224, 168, 189, 5, 178, 222, 59, 153, 122, 139, 62, 97, 237, 108, 60, 213, 238, 47, 189, 3, 173, 143, 190, 97, 196, 65, 62, 185, 124, 99, 189, 127, 37, 39, 190, 224, 111, 69, 61, 202, 142, 141, 189, 245, 123, 182, 61, 29, 62, 1, 190, 217, 34, 231, 61, 0, 97, 194, 61, 126, 250, 107, 62, 92, 94, 74, 190, 190, 171, 200, 189, 219, 144, 150, 62, 113, 91, 195, 189, 201, 79, 57, 189, 236, 38, 59, 190, 165, 137, 69, 62, 100, 230, 75, 189, 32, 43, 25, 190, 36, 29, 114, 62, 113, 92, 205, 189, 245, 169, 124, 190, 129, 184, 172, 61, 55, 120, 228, 61, 145, 112, 152, 190, 25, 44, 88, 61, 210, 200, 94, 189, 13, 212, 60, 62, 108, 105, 213, 61, 181, 125, 11, 62, 203, 235, 28, 62, 92, 136, 225, 61, 206, 21, 60, 190, 253, 83, 9, 190, 32, 145, 9, 187, 139, 80, 6, 61, 184, 208, 150, 189, 189, 232, 231, 61, 208, 252, 127, 61, 3, 32, 230, 190, 148, 165, 120, 190, 45, 239, 229, 188, 97, 194, 42, 190, 200, 198, 159, 190, 65, 34, 89, 62, 68, 193, 219, 189, 154, 104, 17, 188, 194, 241, 188, 61, 93, 218, 113, 61, 107, 224, 75, 190, 62, 174, 243, 60, 148, 53, 8, 187, 185, 103, 30, 188, 189, 133, 176, 62, 250, 79, 177, 190, 255, 57, 232, 188, 108, 22, 248, 59, 8, 159, 104, 189, 183, 254, 57, 190, 250, 12, 182, 189, 60, 173, 144, 61, 170, 170, 238, 61, 85, 150, 6, 190, 40, 55, 147, 61, 18, 85, 115, 189, 19, 220, 131, 188, 253, 43, 43, 190, 242, 7, 109, 62, 242, 83, 47, 189, 46, 89, 144, 60, 218, 100, 53, 189, 41, 21, 219, 188, 62, 67, 176, 62, 168, 208, 197, 189, 196, 160, 70, 189, 19, 106, 183, 190, 99, 171, 103, 62, 136, 50, 92, 62, 142, 171, 189, 62, 216, 128, 136, 189, 187, 249, 104, 190, 134, 201, 252, 189, 162, 178, 17, 62, 8, 77, 210, 189, 90, 122, 25, 61, 64, 237, 101, 61, 237, 159, 194, 61, 45, 59, 52, 190, 64, 43, 16, 190, 45, 119, 201, 188, 171, 233, 246, 188, 35, 66, 220, 189, 9, 238, 144, 189, 116, 78, 162, 187, 215, 212, 83, 189, 6, 255, 180, 189, 238, 119, 23, 189, 101, 50, 222, 189, 36, 18, 46, 190, 99, 87, 227, 188, 40, 10, 99, 189, 110, 114, 234, 189, 63, 147, 50, 188, 5, 142, 70, 189, 233, 155, 237, 59, 82, 82, 198, 61, 37, 89, 219, 189, 114, 75, 128, 189, 79, 46, 238, 59, 92, 162, 162, 61, 158, 53, 206, 189, 67, 165, 155, 61, 97, 140, 135, 187, 26, 116, 8, 190, 119, 126, 129, 59, 138, 123, 123, 61, 157, 214, 14, 190, 61, 15, 198, 189, 39, 22, 46, 190, 29, 71, 35, 190, 215, 179, 51, 190, 172, 30, 84, 189, 240, 173, 82, 61, 6, 130, 34, 61, 206, 157, 33, 190, 76, 156, 63, 59, 234, 165, 232, 61, 248, 193, 101, 59, 138, 105, 138, 189, 6, 158, 178, 187, 196, 22, 240, 189, 12, 178, 236, 189, 35, 25, 57, 190, 70, 122, 38, 62, 225, 89, 14, 190, 49, 78, 176, 61, 172, 247, 61, 189, 70, 134, 117, 187, 145, 196, 167, 189, 224, 232, 147, 61, 35, 84, 33, 62, 92, 202, 133, 189, 121, 72, 113, 61, 33, 146, 163, 61, 37, 109, 16, 190, 188, 129, 168, 61, 30, 143, 8, 188, 159, 5, 192, 61, 178, 25, 43, 190, 135, 70, 180, 61, 215, 167, 41, 190, 15, 59, 15, 190, 196, 60, 129, 189, 242, 76, 168, 60, 36, 136, 12, 190, 110, 36, 9, 62, 122, 89, 65, 189, 43, 105, 24, 62, 1, 96, 74, 190, 180, 112, 17, 61, 96, 194, 168, 61, 4, 162, 87, 189, 210, 40, 121, 189, 156, 13, 129, 189, 255, 150, 222, 188, 150, 246, 8, 62, 129, 165, 62, 61, 60, 191, 0, 190, 210, 7, 227, 61, 35, 228, 201, 189, 65, 122, 246, 189, 224, 14, 9, 60, 116, 30, 132, 189, 78, 228, 180, 61, 209, 121, 244, 187, 13, 151, 50, 189, 53, 103, 193, 61, 152, 59, 41, 190, 236, 33, 54, 62, 227, 107, 114, 62, 249, 159, 179, 188, 27, 30, 162, 62, 246, 143, 180, 190, 170, 136, 225, 59, 204, 191, 30, 62, 35, 160, 72, 189, 33, 44, 85, 190, 167, 139, 208, 61, 134, 204, 26, 62, 76, 247, 40, 61, 243, 14, 203, 61, 1, 108, 161, 189, 52, 192, 46, 189, 251, 153, 52, 61, 52, 191, 86, 61, 36, 54, 133, 62, 70, 222, 148, 61, 215, 80, 66, 189, 40, 97, 216, 189, 165, 164, 174, 61, 254, 124, 167, 61, 214, 254, 179, 61, 155, 15, 57, 190, 180, 211, 39, 60, 122, 216, 125, 61, 223, 53, 215, 61, 215, 10, 206, 61, 83, 105, 199, 61, 3, 109, 193, 61, 137, 15, 92, 190, 65, 87, 35, 62, 156, 4, 211, 62, 195, 252, 15, 191, 109, 219, 162, 61, 253, 171, 219, 190, 16, 102, 227, 188, 94, 77, 125, 62, 211, 248, 21, 189, 102, 210, 56, 61, 121, 92, 1, 190, 78, 117, 56, 62, 28, 68, 53, 61, 87, 117, 4, 62, 81, 143, 181, 190, 249, 198, 62, 62, 162, 192, 167, 190, 126, 16, 249, 189, 151, 214, 169, 62, 128, 239, 187, 61, 153, 15, 123, 61, 38, 246, 156, 190, 194, 61, 32, 62, 37, 2, 140, 62, 205, 154, 160, 62, 169, 77, 102, 190, 61, 106, 105, 190, 43, 135, 138, 62, 10, 211, 127, 190, 110, 178, 44, 62, 171, 137, 4, 190, 64, 95, 190, 189, 181, 7, 231, 61, 46, 160, 19, 190, 235, 205, 26, 190, 120, 240, 240, 187, 140, 143, 7, 191, 208, 223, 220, 62, 42, 221, 141, 190, 142, 229, 7, 190, 75, 44, 140, 189, 83, 190, 143, 62, 116, 30, 23, 62, 38, 102, 78, 190, 125, 49, 94, 190, 110, 34, 36, 62, 185, 68, 155, 62, 29, 175, 132, 61, 239, 111, 77, 62, 214, 62, 18, 62, 162, 104, 101, 190, 183, 191, 51, 190, 181, 150, 153, 189, 112, 132, 22, 188, 101, 83, 44, 60, 156, 95, 151, 61, 239, 244, 6, 190, 1, 202, 84, 62, 76, 177, 140, 62, 21, 136, 132, 190, 4, 123, 34, 190, 159, 114, 198, 190, 163, 16, 47, 62, 248, 25, 1, 190, 105, 148, 178, 190, 59, 54, 133, 62, 11, 67, 40, 62, 52, 224, 135, 190, 82, 8, 167, 62, 146, 139, 242, 190, 158, 71, 194, 188, 147, 70, 108, 62, 101, 109, 40, 190, 43, 216, 165, 189, 63, 101, 211, 61, 28, 81, 68, 62, 102, 223, 50, 188, 56, 23, 96, 62, 192, 49, 108, 190, 17, 165, 126, 61, 48, 187, 137, 190, 239, 34, 50, 189, 5, 60, 168, 62, 238, 127, 196, 61, 85, 157, 187, 61, 232, 229, 56, 190, 251, 34, 18, 60, 99, 53, 56, 62, 188, 227, 53, 62, 8, 180, 205, 189, 5, 188, 190, 189, 251, 110, 26, 62, 78, 189, 32, 190, 121, 176, 28, 60, 15, 139, 186, 189, 141, 157, 233, 189, 161, 191, 144, 189, 211, 5, 222, 190, 168, 113, 117, 190, 53, 90, 130, 62, 101, 200, 15, 191, 229, 4, 183, 190, 251, 91, 50, 190, 110, 83, 73, 190, 251, 129, 20, 62, 27, 128, 255, 189, 94, 75, 144, 190, 48, 173, 223, 189, 19, 12, 24, 190, 118, 111, 189, 189, 171, 131, 35, 62, 34, 151, 179, 62, 135, 38, 142, 62, 23, 2, 188, 188, 218, 179, 190, 190, 126, 56, 84, 190, 124, 154, 183, 190, 101, 1, 9, 189, 208, 200, 27, 62, 0, 50, 22, 61, 36, 177, 99, 188, 146, 200, 115, 189, 244, 250, 28, 190, 199, 127, 66, 190, 200, 63, 131, 61, 155, 113, 253, 190, 134, 111, 138, 62, 156, 35, 32, 190, 214, 17, 155, 62, 37, 210, 158, 190, 230, 121, 17, 61, 9, 241, 75, 61, 49, 183, 233, 189, 46, 106, 148, 61, 74, 91, 250, 189, 98, 62, 228, 61, 245, 167, 152, 61, 166, 63, 141, 62, 231, 38, 39, 60, 105, 218, 39, 189, 215, 0, 136, 190, 78, 226, 19, 62, 112, 95, 3, 189, 77, 174, 162, 61, 246, 128, 253, 61, 83, 41, 7, 62, 214, 115, 169, 190, 60, 51, 240, 189, 58, 239, 79, 190, 178, 67, 4, 61, 25, 116, 125, 61, 112, 247, 129, 188, 173, 183, 68, 190, 95, 223, 55, 62, 111, 81, 57, 62, 241, 118, 12, 190, 188, 23, 87, 60, 214, 227, 38, 191, 79, 243, 120, 61, 192, 32, 56, 190, 124, 235, 0, 62, 51, 211, 158, 61, 243, 27, 113, 61, 157, 205, 212, 189, 231, 53, 142, 61, 198, 125, 20, 62, 180, 215, 149, 60, 139, 242, 81, 190, 59, 205, 5, 62, 37, 227, 86, 190, 152, 127, 150, 61, 86, 176, 236, 189, 117, 64, 183, 189, 62, 232, 200, 61, 29, 170, 97, 188, 191, 93, 29, 61, 62, 76, 2, 62, 26, 198, 211, 189, 193, 94, 77, 61, 118, 140, 15, 190, 13, 225, 190, 60, 167, 0, 99, 189, 88, 126, 50, 190, 212, 125, 195, 189, 249, 247, 26, 190, 252, 236, 61, 61, 31, 226, 88, 188, 149, 186, 132, 189, 60, 132, 154, 61, 94, 118, 68, 190, 161, 125, 199, 188, 145, 108, 54, 189, 185, 64, 134, 60, 154, 179, 62, 189, 110, 196, 38, 190, 250, 212, 13, 62, 86, 2, 162, 189, 140, 46, 26, 189, 101, 252, 172, 61, 191, 226, 210, 59, 41, 148, 139, 188, 46, 122, 61, 60, 236, 246, 51, 189, 81, 246, 135, 59, 179, 80, 1, 190, 227, 67, 171, 189, 108, 71, 210, 189, 220, 92, 38, 190, 183, 134, 75, 61, 136, 141, 11, 190, 16, 136, 224, 61, 73, 167, 143, 60, 60, 184, 176, 189, 63, 206, 182, 61, 235, 90, 0, 62, 150, 172, 50, 58, 44, 155, 109, 189, 84, 175, 168, 60, 85, 168, 57, 61, 245, 71, 91, 190, 97, 101, 95, 190, 228, 145, 54, 190, 150, 230, 241, 61, 214, 233, 43, 188, 180, 184, 132, 190, 194, 213, 43, 189, 161, 180, 40, 62, 66, 150, 138, 190, 37, 20, 95, 62, 25, 169, 156, 190, 19, 22, 160, 189, 108, 179, 16, 62, 179, 203, 51, 188, 243, 222, 25, 60, 217, 76, 138, 189, 71, 73, 151, 62, 70, 103, 240, 61, 165, 163, 128, 189, 91, 112, 86, 190, 15, 7, 45, 61, 100, 111, 61, 190, 205, 44, 97, 189, 110, 153, 147, 62, 162, 196, 226, 60, 92, 251, 143, 62, 240, 74, 219, 60, 100, 44, 225, 189, 194, 17, 163, 61, 161, 85, 61, 61, 36, 79, 109, 190, 177, 45, 75, 60, 222, 106, 219, 61, 8, 214, 20, 189, 66, 41, 5, 62, 14, 52, 47, 190, 149, 24, 153, 189, 173, 244, 130, 62, 214, 28, 216, 189, 160, 83, 128, 190, 160, 54, 13, 62, 180, 210, 81, 190, 75, 106, 21, 62, 195, 157, 69, 190, 183, 102, 12, 190, 79, 4, 34, 189, 15, 186, 160, 188, 103, 150, 132, 190, 183, 59, 77, 62, 137, 45, 141, 189, 0, 115, 127, 61, 2, 139, 78, 60, 58, 138, 28, 62, 38, 170, 197, 189, 53, 203, 75, 61, 117, 31, 84, 189, 105, 237, 23, 189, 223, 235, 176, 188, 120, 208, 196, 189, 88, 209, 187, 61, 9, 111, 26, 62, 149, 34, 242, 189, 197, 63, 41, 62, 26, 22, 52, 62, 239, 29, 153, 190, 202, 155, 201, 189, 55, 166, 22, 191, 48, 135, 10, 62, 3, 36, 246, 188, 161, 128, 42, 62, 67, 182, 197, 61, 239, 233, 153, 61, 24, 151, 21, 190, 192, 71, 38, 190, 132, 59, 192, 189, 59, 118, 17, 188, 36, 142, 145, 188, 213, 104, 1, 62, 254, 1, 15, 190, 162, 2, 44, 61, 188, 209, 229, 61, 76, 255, 43, 62, 103, 79, 242, 189, 152, 4, 20, 190, 67, 11, 42, 190, 100, 116, 115, 59, 13, 82, 19, 190, 18, 234, 5, 189, 138, 12, 133, 189, 248, 104, 203, 189, 224, 188, 43, 190, 126, 19, 9, 62, 108, 20, 47, 190, 214, 217, 168, 61, 55, 90, 218, 61, 10, 169, 224, 61, 168, 91, 197, 189, 239, 120, 104, 58, 213, 135, 99, 61, 37, 6, 235, 189, 83, 118, 206, 189, 214, 218, 16, 187, 112, 43, 158, 190, 123, 187, 26, 190, 14, 155, 172, 61, 161, 155, 214, 60, 201, 64, 78, 190, 216, 117, 63, 189, 39, 216, 127, 60, 70, 210, 2, 190, 97, 235, 253, 189, 63, 170, 140, 190, 163, 197, 15, 188, 82, 25, 12, 190, 26, 101, 214, 189, 16, 137, 45, 62, 51, 157, 91, 62, 13, 193, 56, 62, 216, 140, 44, 190, 12, 124, 132, 62, 161, 27, 219, 61, 46, 245, 5, 61, 134, 215, 197, 61, 191, 86, 207, 61, 138, 9, 170, 190, 186, 95, 224, 61, 33, 49, 148, 61, 248, 101, 36, 62, 100, 179, 210, 61, 140, 102, 13, 61, 230, 179, 58, 190, 164, 216, 245, 61, 145, 177, 152, 190, 248, 80, 147, 190, 102, 183, 149, 61, 113, 120, 39, 62, 14, 83, 231, 190, 124, 58, 156, 62, 128, 108, 112, 190, 122, 57, 143, 60, 165, 54, 152, 62, 91, 155, 67, 60, 45, 204, 79, 190, 86, 176, 99, 61, 209, 131, 245, 59, 101, 33, 14, 60, 246, 56, 137, 60, 153, 149, 137, 190, 139, 253, 20, 62, 135, 147, 9, 191, 37, 141, 42, 190, 25, 206, 167, 189, 202, 204, 152, 189, 94, 19, 188, 59, 143, 22, 190, 60, 41, 227, 100, 61, 87, 182, 148, 62, 153, 176, 7, 190, 108, 131, 53, 190, 208, 54, 242, 189, 133, 136, 242, 189, 215, 167, 135, 59, 107, 0, 92, 62, 215, 66, 18, 191, 92, 42, 3, 190};
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
                alignas(float) const unsigned char memory[] = {23, 5, 137, 189, 248, 65, 75, 62, 17, 206, 253, 61, 3, 158, 198, 189, 219, 220, 50, 190, 43, 205, 179, 61, 42, 53, 130, 62, 137, 164, 142, 60, 16, 212, 170, 62, 17, 62, 26, 62, 232, 164, 207, 61, 219, 53, 139, 62, 93, 74, 108, 62, 230, 76, 50, 62, 147, 135, 136, 190, 120, 20, 251, 189, 233, 207, 149, 61, 81, 65, 207, 61, 207, 165, 171, 189, 114, 203, 8, 62, 38, 131, 81, 62, 187, 111, 235, 61, 195, 218, 184, 61, 161, 217, 124, 62, 25, 119, 25, 62, 153, 72, 48, 60, 104, 115, 17, 190, 25, 75, 98, 62, 235, 64, 67, 61, 255, 58, 37, 190, 5, 189, 9, 189, 147, 210, 160, 62};
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
                alignas(float) const unsigned char memory[] = {36, 178, 11, 190, 241, 111, 191, 62, 114, 214, 79, 190, 156, 19, 19, 62, 190, 128, 139, 60, 6, 70, 175, 62, 74, 201, 49, 62, 125, 87, 193, 62, 212, 133, 103, 190, 189, 72, 9, 63, 68, 48, 139, 62, 234, 129, 187, 62, 161, 66, 182, 187, 136, 47, 192, 190, 128, 226, 32, 62, 23, 239, 210, 62, 73, 6, 171, 60, 104, 95, 15, 62, 1, 159, 240, 61, 141, 177, 231, 189, 75, 56, 43, 191, 146, 140, 202, 62, 59, 157, 4, 191, 40, 113, 220, 62, 187, 63, 192, 62, 147, 207, 40, 61, 217, 234, 220, 189, 24, 193, 148, 190, 1, 79, 11, 62, 188, 197, 185, 189, 92, 121, 214, 189, 116, 199, 35, 191, 226, 250, 241, 61, 16, 93, 5, 62, 11, 44, 191, 189, 61, 192, 134, 62, 67, 134, 230, 189, 212, 45, 208, 61, 23, 186, 70, 190, 7, 7, 12, 62, 194, 43, 58, 190, 2, 232, 42, 190, 243, 40, 137, 190, 147, 55, 187, 189, 171, 25, 60, 190, 171, 95, 219, 60, 142, 200, 152, 62, 152, 198, 22, 62, 133, 96, 171, 61, 175, 174, 255, 61, 192, 82, 187, 61, 24, 215, 145, 185, 32, 90, 152, 61, 146, 46, 113, 62, 53, 235, 46, 188, 45, 18, 39, 62, 190, 250, 46, 190, 124, 103, 10, 189, 67, 182, 31, 190, 220, 67, 29, 190, 155, 178, 214, 189, 203, 145, 20, 190, 114, 44, 178, 189, 57, 41, 14, 190};
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
                alignas(float) const unsigned char memory[] = {9, 0, 76, 189, 200, 127, 57, 190};
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
    alignas(float) const unsigned char memory[] = {178, 124, 18, 190, 109, 5, 226, 61, 6, 30, 149, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {242, 126, 170, 191, 30, 8, 55, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0095/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}