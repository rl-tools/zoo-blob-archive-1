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
                alignas(float) const unsigned char memory[] = {196, 247, 39, 63, 134, 10, 134, 63, 158, 26, 189, 62, 49, 101, 30, 63, 106, 42, 148, 63, 139, 135, 240, 62, 239, 192, 11, 190, 139, 246, 109, 191, 209, 235, 64, 191, 159, 135, 43, 191, 181, 97, 56, 191, 108, 3, 182, 62, 78, 219, 127, 190, 10, 81, 68, 63, 217, 44, 203, 61, 147, 223, 10, 191, 97, 135, 18, 191, 253, 177, 62, 190, 108, 169, 167, 62, 192, 32, 98, 63, 249, 51, 176, 62, 210, 144, 55, 63, 96, 229, 57, 191, 138, 254, 137, 190, 155, 230, 65, 63, 173, 106, 5, 191, 39, 179, 27, 189, 154, 70, 245, 190, 92, 25, 163, 63, 38, 120, 233, 62, 24, 112, 225, 190, 3, 173, 39, 63, 44, 130, 19, 63, 114, 205, 122, 63, 241, 75, 113, 62, 136, 181, 149, 189, 104, 19, 31, 188, 177, 165, 165, 190, 200, 230, 168, 62, 171, 112, 10, 191, 35, 253, 108, 63, 195, 21, 231, 61, 205, 156, 227, 62, 232, 53, 62, 190, 149, 190, 35, 61, 201, 211, 204, 62, 145, 191, 53, 191, 89, 118, 40, 191, 208, 237, 235, 190, 1, 200, 222, 62, 164, 124, 120, 61, 93, 93, 101, 191, 217, 141, 7, 62, 0, 216, 81, 61, 220, 135, 68, 61, 35, 116, 94, 62, 86, 191, 40, 191, 215, 110, 235, 190, 160, 118, 153, 190, 234, 104, 167, 62, 96, 100, 233, 189, 176, 112, 178, 62, 52, 20, 73, 191, 3, 179, 46, 62, 88, 171, 44, 191, 35, 46, 200, 62, 31, 160, 23, 59, 60, 174, 121, 62, 160, 53, 219, 59, 89, 215, 186, 190, 12, 197, 23, 62, 48, 227, 225, 62, 0, 227, 85, 61, 122, 133, 206, 191, 223, 4, 224, 190, 138, 206, 41, 191, 138, 215, 129, 63, 18, 191, 70, 190, 71, 47, 78, 190, 49, 129, 187, 61, 12, 122, 71, 191, 228, 188, 81, 61, 126, 245, 64, 191, 243, 60, 153, 62, 81, 171, 218, 62, 32, 72, 13, 63, 187, 170, 131, 190, 41, 48, 223, 62, 124, 84, 51, 191, 243, 12, 44, 190, 121, 121, 189, 190, 62, 37, 175, 61, 183, 204, 38, 63, 23, 79, 198, 190, 110, 238, 114, 62, 188, 106, 38, 63};
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
                alignas(float) const unsigned char memory[] = {250, 219, 179, 190, 128, 70, 182, 62, 210, 82, 55, 62, 131, 90, 144, 190, 126, 95, 204, 62, 216, 28, 26, 191, 2, 230, 17, 62, 149, 235, 3, 191, 233, 63, 188, 62, 30, 63, 200, 62, 74, 214, 167, 190, 244, 1, 253, 62, 47, 254, 6, 62, 253, 128, 53, 63, 74, 59, 25, 63, 93, 240, 144, 190, 170, 54, 7, 63, 10, 199, 232, 62, 220, 216, 243, 187, 135, 198, 13, 189, 100, 249, 46, 60, 247, 56, 213, 62, 15, 142, 15, 63, 217, 155, 69, 190, 169, 151, 228, 62, 184, 221, 134, 190, 0, 23, 161, 190, 148, 55, 165, 62, 33, 57, 176, 61, 63, 16, 209, 188, 181, 60, 135, 62, 155, 53, 185, 190};
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
                alignas(float) const unsigned char memory[] = {57, 60, 158, 190, 86, 44, 13, 190, 114, 164, 137, 62, 150, 252, 173, 190, 156, 5, 113, 190, 52, 35, 59, 62, 226, 255, 249, 60, 170, 178, 72, 190, 25, 133, 216, 188, 117, 61, 175, 190, 142, 100, 28, 189, 20, 221, 108, 190, 89, 71, 245, 189, 123, 211, 175, 190, 230, 1, 70, 189, 8, 190, 66, 190, 68, 235, 19, 191, 115, 38, 248, 189, 136, 44, 39, 190, 49, 77, 113, 59, 241, 207, 115, 60, 193, 28, 2, 191, 129, 106, 94, 189, 126, 191, 139, 190, 185, 75, 226, 60, 234, 89, 177, 190, 228, 171, 42, 189, 109, 146, 231, 189, 174, 177, 185, 188, 201, 29, 32, 189, 44, 148, 95, 189, 212, 33, 168, 190, 165, 225, 181, 189, 178, 187, 116, 190, 225, 70, 8, 191, 161, 45, 143, 61, 192, 13, 191, 189, 142, 120, 198, 61, 1, 57, 171, 189, 191, 139, 46, 62, 7, 245, 51, 62, 7, 208, 135, 189, 13, 160, 21, 62, 188, 183, 78, 62, 27, 35, 182, 186, 153, 126, 207, 61, 11, 120, 150, 61, 200, 255, 248, 61, 103, 189, 60, 190, 27, 76, 113, 61, 63, 15, 94, 61, 187, 101, 223, 61, 2, 239, 123, 190, 205, 35, 97, 190, 161, 254, 160, 61, 166, 213, 93, 62, 254, 202, 38, 189, 106, 85, 63, 189, 200, 215, 62, 191, 65, 116, 170, 59, 171, 215, 215, 190, 239, 28, 121, 62, 123, 72, 161, 61, 190, 13, 204, 61, 39, 242, 46, 190, 237, 149, 154, 190, 146, 217, 96, 62, 129, 44, 216, 189, 197, 215, 77, 190, 143, 123, 9, 190, 190, 39, 213, 189, 242, 132, 199, 189, 211, 4, 148, 61, 251, 157, 145, 189, 109, 81, 85, 61, 122, 161, 133, 60, 144, 1, 52, 190, 18, 193, 190, 190, 88, 10, 174, 62, 66, 8, 197, 60, 0, 55, 210, 189, 234, 97, 241, 189, 134, 198, 40, 62, 34, 137, 230, 61, 92, 198, 51, 189, 76, 216, 126, 61, 71, 136, 113, 62, 226, 75, 239, 189, 16, 223, 69, 62, 42, 53, 35, 190, 188, 175, 148, 189, 192, 243, 53, 62, 78, 88, 241, 60, 101, 161, 187, 59, 215, 17, 140, 190, 57, 0, 234, 189, 149, 147, 10, 190, 57, 170, 79, 62, 39, 224, 109, 61, 56, 210, 75, 60, 144, 30, 154, 186, 181, 82, 246, 61, 105, 159, 2, 62, 203, 139, 204, 190, 28, 160, 120, 62, 167, 244, 96, 189, 198, 87, 42, 62, 32, 3, 211, 189, 186, 57, 164, 190, 87, 174, 132, 189, 112, 9, 224, 55, 171, 55, 156, 190, 55, 82, 81, 62, 187, 75, 60, 62, 41, 194, 222, 61, 52, 29, 66, 61, 88, 157, 32, 62, 6, 89, 57, 189, 213, 31, 135, 60, 23, 147, 215, 189, 176, 72, 11, 62, 232, 203, 36, 62, 30, 116, 153, 189, 184, 37, 149, 189, 237, 35, 140, 62, 166, 29, 11, 62, 48, 81, 135, 188, 213, 55, 158, 189, 89, 69, 136, 190, 160, 81, 92, 61, 82, 100, 10, 61, 65, 162, 71, 189, 94, 213, 95, 190, 138, 39, 188, 61, 177, 45, 168, 189, 17, 132, 88, 190, 45, 85, 156, 62, 85, 86, 213, 190, 85, 130, 57, 61, 1, 171, 149, 62, 94, 126, 91, 190, 31, 52, 209, 190, 71, 148, 92, 62, 57, 71, 210, 61, 27, 218, 50, 191, 206, 140, 111, 190, 218, 66, 41, 61, 6, 32, 121, 62, 150, 149, 129, 61, 25, 18, 177, 61, 42, 206, 171, 61, 46, 64, 73, 190, 56, 76, 253, 61, 198, 42, 54, 61, 58, 246, 189, 189, 122, 224, 176, 61, 110, 112, 215, 188, 44, 24, 142, 62, 113, 215, 217, 189, 92, 70, 77, 189, 122, 227, 191, 189, 56, 157, 77, 190, 236, 176, 150, 61, 142, 148, 197, 190, 158, 254, 162, 189, 47, 50, 132, 188, 47, 0, 221, 189, 165, 9, 192, 62, 101, 129, 138, 60, 41, 38, 9, 62, 7, 119, 205, 189, 183, 104, 77, 189, 172, 180, 170, 188, 171, 117, 31, 190, 212, 207, 208, 60, 155, 63, 46, 62, 232, 139, 77, 188, 88, 33, 8, 190, 235, 141, 39, 61, 81, 123, 220, 190, 186, 98, 5, 190, 28, 202, 223, 61, 181, 59, 152, 189, 135, 65, 125, 189, 217, 107, 232, 61, 176, 42, 133, 190, 252, 162, 214, 189, 6, 146, 93, 61, 162, 3, 160, 190, 7, 124, 141, 62, 243, 228, 106, 189, 113, 99, 145, 188, 165, 38, 12, 190, 99, 69, 212, 189, 1, 236, 175, 60, 71, 253, 34, 61, 194, 159, 39, 190, 47, 123, 32, 190, 209, 112, 158, 189, 118, 193, 20, 59, 78, 89, 3, 62, 76, 15, 149, 189, 130, 219, 210, 189, 5, 240, 2, 190, 201, 56, 4, 189, 123, 212, 8, 189, 242, 248, 116, 61, 229, 74, 22, 190, 192, 178, 179, 61, 186, 154, 65, 189, 253, 231, 133, 61, 226, 84, 190, 61, 242, 165, 207, 188, 1, 175, 244, 189, 113, 233, 182, 61, 113, 70, 13, 190, 46, 16, 37, 190, 105, 238, 117, 188, 14, 100, 184, 61, 145, 180, 44, 189, 38, 114, 33, 190, 183, 31, 143, 188, 112, 206, 36, 190, 212, 229, 209, 189, 228, 60, 164, 62, 229, 16, 161, 62, 187, 119, 200, 61, 233, 234, 9, 190, 71, 139, 173, 60, 167, 245, 185, 61, 136, 164, 207, 62, 234, 226, 134, 190, 212, 189, 181, 189, 38, 218, 84, 189, 204, 184, 30, 190, 117, 27, 195, 61, 162, 255, 188, 60, 64, 112, 55, 62, 98, 94, 58, 61, 109, 200, 45, 189, 252, 117, 56, 190, 123, 213, 143, 61, 43, 62, 106, 60, 22, 215, 136, 188, 108, 224, 112, 62, 26, 102, 204, 61, 148, 90, 165, 60, 118, 249, 175, 188, 227, 113, 68, 190, 93, 251, 46, 190, 99, 23, 50, 62, 109, 147, 77, 190, 165, 42, 160, 62, 1, 118, 194, 190, 38, 44, 129, 190, 177, 94, 13, 190, 243, 113, 194, 189, 65, 228, 27, 62, 147, 26, 210, 189, 25, 99, 174, 61, 169, 107, 173, 189, 187, 127, 31, 62, 218, 94, 219, 61, 139, 76, 202, 61, 60, 183, 89, 61, 213, 22, 59, 190, 26, 12, 26, 190, 253, 217, 42, 190, 132, 239, 60, 187, 132, 86, 4, 189, 237, 12, 224, 189, 149, 15, 20, 190, 225, 97, 129, 61, 229, 215, 76, 189, 159, 216, 205, 189, 160, 152, 102, 189, 80, 235, 192, 61, 127, 8, 46, 190, 148, 81, 216, 189, 203, 91, 17, 62, 7, 180, 44, 60, 204, 56, 80, 61, 152, 27, 1, 190, 78, 24, 41, 190, 184, 192, 70, 60, 240, 151, 144, 61, 26, 204, 139, 189, 29, 107, 140, 189, 108, 234, 12, 189, 144, 241, 199, 190, 122, 105, 153, 61, 37, 67, 237, 62, 73, 240, 161, 189, 67, 111, 37, 189, 108, 211, 140, 190, 17, 83, 174, 190, 254, 76, 252, 190, 123, 138, 155, 190, 31, 170, 167, 191, 131, 108, 249, 190, 210, 234, 132, 60, 65, 173, 120, 190, 217, 51, 13, 62, 179, 178, 102, 190, 139, 164, 193, 61, 22, 10, 204, 62, 146, 7, 85, 190, 130, 42, 95, 62, 147, 4, 66, 62, 78, 86, 169, 62, 85, 36, 21, 187, 54, 1, 97, 190, 65, 4, 190, 62, 244, 27, 136, 190, 16, 26, 223, 61, 2, 214, 202, 61, 10, 81, 118, 189, 205, 99, 207, 190, 33, 205, 132, 61, 51, 26, 227, 190, 40, 11, 20, 189, 192, 253, 110, 189, 229, 181, 227, 61, 155, 222, 42, 190, 80, 220, 227, 189, 135, 64, 124, 187, 2, 8, 22, 60, 200, 83, 223, 61, 70, 54, 155, 189, 8, 81, 202, 61, 41, 79, 5, 61, 215, 184, 104, 61, 50, 107, 214, 188, 50, 143, 181, 189, 244, 102, 206, 189, 185, 140, 213, 60, 22, 200, 150, 61, 23, 197, 41, 189, 17, 208, 228, 189, 15, 156, 34, 189, 169, 15, 156, 189, 162, 253, 27, 190, 139, 107, 19, 62, 250, 83, 206, 189, 164, 208, 148, 189, 91, 220, 170, 189, 92, 238, 135, 60, 91, 65, 148, 189, 229, 104, 176, 189, 29, 26, 178, 61, 249, 18, 67, 60, 32, 189, 41, 186, 95, 140, 117, 61, 24, 195, 171, 62, 20, 11, 131, 187, 245, 118, 95, 61, 225, 143, 217, 61, 176, 221, 155, 190, 18, 4, 9, 59, 159, 189, 15, 191, 93, 221, 27, 190, 81, 78, 212, 189, 127, 74, 53, 190, 141, 36, 203, 61, 78, 108, 11, 61, 110, 57, 116, 62, 183, 75, 92, 61, 119, 242, 183, 190, 171, 254, 113, 62, 12, 173, 44, 60, 179, 209, 135, 190, 23, 214, 96, 62, 206, 108, 145, 62, 86, 146, 136, 61, 156, 143, 34, 62, 242, 128, 225, 60, 199, 87, 249, 189, 167, 44, 163, 188, 254, 233, 90, 62, 222, 82, 199, 189, 175, 64, 254, 61, 235, 40, 237, 190, 16, 219, 74, 60, 46, 117, 24, 189, 198, 125, 9, 191, 214, 239, 159, 190, 29, 158, 107, 191, 68, 211, 231, 190, 129, 251, 198, 61, 116, 230, 35, 61, 43, 33, 195, 190, 39, 92, 9, 190, 220, 244, 137, 62, 170, 61, 104, 62, 50, 134, 164, 61, 75, 59, 125, 62, 88, 229, 229, 190, 142, 24, 67, 62, 242, 177, 26, 62, 180, 140, 158, 61, 65, 210, 51, 59, 180, 93, 65, 62, 141, 226, 198, 62, 60, 247, 9, 62, 92, 129, 58, 190, 147, 47, 154, 190, 19, 164, 120, 62, 74, 74, 152, 62, 39, 198, 213, 190, 62, 77, 95, 63, 249, 10, 162, 191, 229, 225, 147, 62, 145, 79, 103, 191, 41, 188, 214, 62, 140, 178, 155, 62, 148, 9, 79, 61, 103, 73, 179, 190, 89, 241, 19, 190, 155, 151, 169, 190, 61, 151, 185, 190, 34, 215, 207, 188, 143, 34, 235, 189, 80, 219, 177, 190, 106, 2, 235, 62, 81, 162, 169, 62, 25, 250, 64, 62, 250, 93, 255, 61, 69, 163, 151, 60, 159, 220, 135, 188, 228, 253, 188, 189, 135, 232, 42, 62, 16, 148, 4, 63, 95, 68, 235, 188, 84, 31, 82, 62, 106, 243, 214, 62, 2, 152, 46, 62, 255, 51, 246, 189, 192, 62, 148, 190, 43, 229, 36, 62, 212, 237, 2, 62, 209, 205, 173, 190, 63, 75, 11, 63, 54, 20, 242, 190, 60, 81, 235, 61, 111, 194, 103, 190, 74, 101, 191, 62, 151, 17, 176, 188, 245, 32, 165, 62, 218, 15, 163, 190, 68, 234, 10, 62, 52, 29, 45, 62, 200, 114, 186, 62, 80, 148, 136, 191, 204, 101, 157, 61, 57, 215, 248, 189, 234, 176, 198, 61, 186, 225, 193, 62, 116, 221, 99, 189, 157, 20, 24, 62, 244, 39, 49, 189, 132, 77, 120, 62, 164, 152, 104, 191, 65, 218, 194, 61, 57, 234, 6, 190, 222, 70, 179, 191, 68, 113, 245, 190, 12, 37, 133, 61, 43, 184, 145, 61, 109, 102, 50, 62, 135, 97, 0, 62, 160, 102, 70, 61, 154, 71, 141, 189, 4, 170, 122, 61, 202, 235, 58, 190, 110, 135, 209, 189, 141, 120, 141, 62, 93, 169, 43, 190, 61, 13, 11, 62, 65, 207, 152, 189, 68, 98, 9, 189, 96, 74, 163, 188, 12, 228, 170, 189, 137, 99, 190, 61, 171, 91, 210, 189, 50, 208, 133, 61, 99, 20, 174, 59, 223, 58, 180, 187, 61, 135, 46, 62, 204, 58, 41, 61, 252, 58, 3, 187, 107, 4, 167, 188, 210, 175, 30, 61, 46, 48, 182, 61, 180, 7, 132, 59, 249, 179, 173, 61, 159, 177, 38, 190, 179, 205, 248, 61, 141, 154, 245, 189, 176, 56, 22, 190, 140, 223, 253, 189, 197, 77, 215, 189, 8, 190, 28, 189, 119, 127, 0, 190, 104, 247, 177, 188, 195, 236, 217, 188, 168, 89, 151, 61, 142, 2, 155, 186, 25, 151, 113, 189, 189, 31, 54, 61, 217, 94, 37, 190, 30, 144, 88, 188, 218, 22, 21, 62, 65, 141, 23, 62, 141, 39, 50, 190, 31, 166, 18, 190, 38, 72, 228, 189, 138, 199, 83, 61, 113, 225, 198, 189, 121, 59, 59, 61, 114, 148, 28, 62, 142, 172, 176, 61, 45, 207, 10, 188, 154, 93, 235, 189, 143, 35, 130, 61, 98, 116, 190, 61, 113, 122, 176, 61, 101, 235, 68, 190, 62, 140, 156, 60, 46, 33, 45, 190, 56, 0, 228, 61, 148, 146, 19, 190, 147, 99, 160, 189, 204, 15, 193, 189, 125, 98, 2, 190, 151, 31, 32, 190, 122, 60, 247, 189, 220, 74, 252, 61, 108, 108, 10, 190, 203, 197, 80, 61, 18, 204, 9, 61, 200, 173, 46, 190, 2, 251, 10, 61, 123, 199, 44, 61, 175, 242, 102, 61, 253, 78, 8, 190, 134, 42, 43, 61, 226, 130, 45, 190, 237, 65, 141, 60, 67, 214, 214, 189, 1, 233, 208, 61, 216, 5, 76, 61, 28, 164, 90, 189, 232, 28, 51, 62, 148, 248, 39, 186, 7, 115, 38, 190, 211, 62, 36, 189, 2, 183, 144, 189, 114, 150, 188, 188, 201, 188, 0, 190, 130, 11, 19, 190, 17, 77, 217, 189, 125, 15, 7, 61, 168, 235, 47, 62, 152, 82, 146, 189, 108, 235, 10, 190, 170, 38, 10, 189, 109, 10, 0, 190, 150, 49, 181, 188, 104, 157, 34, 190, 95, 236, 24, 189, 144, 13, 146, 61, 92, 7, 53, 61, 133, 107, 186, 187, 9, 234, 32, 190, 59, 3, 96, 189, 15, 235, 93, 61, 162, 119, 179, 62, 131, 200, 133, 62, 185, 125, 19, 62, 157, 21, 136, 61, 21, 194, 165, 62, 150, 105, 133, 61, 138, 83, 176, 61, 63, 81, 64, 61, 6, 134, 85, 190, 175, 208, 210, 61, 212, 220, 59, 190, 88, 92, 1, 189, 123, 188, 79, 62, 169, 19, 17, 62, 230, 251, 254, 188, 82, 40, 159, 61, 143, 96, 6, 62, 250, 239, 151, 188, 0, 238, 136, 188, 62, 99, 54, 62, 172, 152, 68, 62, 155, 166, 244, 61, 254, 67, 12, 61, 194, 241, 44, 188, 23, 229, 89, 62, 169, 134, 14, 189, 97, 15, 132, 62, 3, 157, 38, 190, 206, 86, 207, 61, 77, 41, 149, 190, 8, 137, 33, 190, 99, 108, 95, 190, 18, 119, 202, 61, 146, 50, 38, 190, 43, 176, 25, 190, 10, 47, 218, 61, 247, 106, 15, 62, 224, 140, 239, 188, 239, 126, 251, 188, 114, 207, 18, 190, 227, 193, 19, 190, 101, 207, 6, 190, 197, 248, 231, 189, 105, 103, 30, 190, 143, 44, 9, 62, 66, 241, 176, 60, 41, 103, 159, 189, 192, 55, 57, 57, 122, 161, 15, 62, 95, 138, 143, 189, 26, 20, 140, 61, 212, 73, 34, 62, 9, 190, 147, 188, 167, 57, 242, 189, 144, 36, 30, 190, 136, 130, 52, 190, 86, 189, 89, 61, 220, 194, 119, 60, 54, 32, 65, 189, 90, 211, 9, 190, 180, 230, 222, 189, 67, 248, 23, 61, 187, 33, 194, 189, 195, 14, 32, 189, 115, 49, 77, 189, 160, 236, 221, 61, 46, 101, 1, 62, 1, 111, 110, 61, 43, 111, 17, 61, 162, 221, 6, 62, 46, 49, 60, 62, 202, 247, 202, 190, 125, 223, 116, 189, 236, 47, 15, 190, 213, 215, 46, 190, 173, 8, 18, 62, 59, 50, 251, 189, 67, 68, 173, 189, 91, 59, 81, 61, 54, 105, 13, 190, 212, 234, 132, 190, 243, 165, 92, 62, 204, 109, 25, 190, 205, 215, 3, 62, 199, 139, 226, 61, 143, 167, 162, 189, 175, 41, 33, 62, 183, 153, 141, 61, 32, 125, 227, 187, 183, 20, 199, 61, 221, 31, 90, 62, 207, 145, 22, 60, 255, 189, 233, 60, 240, 210, 98, 190, 245, 169, 178, 61, 232, 13, 103, 190, 8, 18, 198, 62, 141, 235, 203, 186, 163, 246, 241, 61, 152, 84, 254, 190, 239, 0, 225, 62, 87, 38, 19, 189, 232, 181, 103, 190, 188, 129, 31, 62, 88, 198, 97, 190, 88, 246, 140, 62, 98, 99, 1, 190, 158, 141, 124, 62, 119, 98, 193, 190, 238, 179, 170, 62, 22, 140, 22, 189, 88, 0, 164, 61, 36, 202, 192, 62, 22, 1, 115, 190, 108, 215, 134, 62, 105, 218, 37, 191, 74, 102, 131, 62, 49, 26, 192, 190, 225, 184, 157, 189, 204, 238, 66, 190, 188, 170, 51, 190, 53, 150, 93, 190, 45, 119, 137, 62, 144, 230, 223, 190, 162, 5, 42, 62, 65, 63, 126, 61, 69, 88, 107, 189, 181, 163, 112, 189, 221, 216, 96, 190, 1, 175, 20, 62, 43, 172, 95, 61, 63, 80, 63, 190, 18, 224, 34, 60, 134, 82, 126, 190, 8, 37, 233, 60, 104, 140, 137, 190, 47, 141, 210, 62, 95, 193, 199, 188, 23, 248, 79, 189, 196, 206, 3, 63, 225, 47, 155, 190, 82, 60, 201, 61, 50, 14, 250, 61, 203, 165, 136, 190, 6, 152, 17, 190, 93, 135, 198, 189, 137, 103, 45, 190, 136, 137, 96, 61, 21, 248, 160, 189, 7, 93, 168, 190, 196, 197, 159, 189, 107, 61, 135, 61, 183, 211, 90, 190, 54, 254, 80, 190, 4, 56, 212, 188, 203, 43, 252, 189, 131, 96, 145, 189, 92, 193, 41, 62, 94, 107, 75, 60, 19, 109, 226, 60, 140, 144, 189, 62, 253, 117, 96, 62, 113, 94, 27, 62, 253, 26, 7, 61, 72, 219, 121, 188, 216, 34, 245, 189, 101, 95, 221, 61, 147, 21, 17, 191, 37, 21, 65, 190, 68, 84, 37, 189, 89, 107, 126, 190, 228, 122, 59, 59, 80, 22, 199, 62, 247, 84, 158, 61, 102, 125, 223, 189, 121, 41, 245, 189, 200, 43, 49, 62, 23, 151, 237, 187, 202, 170, 195, 190, 104, 140, 47, 62, 227, 25, 150, 62, 1, 225, 64, 62, 219, 21, 237, 189, 121, 143, 134, 189, 213, 18, 0, 62, 156, 192, 120, 190, 22, 108, 231, 61, 203, 8, 13, 61, 39, 221, 126, 62, 182, 33, 12, 191, 26, 43, 138, 190, 255, 196, 188, 190, 48, 183, 198, 61, 152, 147, 244, 188, 139, 39, 30, 189, 121, 60, 46, 62, 165, 251, 148, 189, 46, 210, 29, 188, 199, 107, 193, 60, 111, 28, 52, 62, 69, 224, 227, 61, 157, 198, 51, 190, 64, 42, 4, 190, 112, 188, 29, 190, 129, 167, 102, 188, 98, 104, 0, 185, 95, 180, 18, 188, 222, 97, 29, 190, 101, 7, 154, 189, 181, 137, 45, 190, 132, 238, 42, 190, 34, 73, 159, 189, 245, 116, 207, 189, 248, 67, 27, 190, 15, 43, 143, 189, 140, 93, 10, 189, 193, 28, 48, 190, 56, 143, 205, 188, 238, 155, 101, 61, 76, 232, 164, 189, 143, 180, 241, 189, 238, 213, 5, 190, 13, 135, 43, 62, 253, 101, 169, 61, 64, 44, 69, 190, 150, 58, 150, 190, 95, 79, 214, 190, 66, 244, 143, 190, 142, 121, 73, 61, 52, 125, 160, 58, 207, 161, 96, 190, 108, 182, 144, 62, 123, 1, 52, 62, 164, 104, 240, 59, 105, 6, 151, 62, 236, 83, 98, 189, 173, 30, 13, 190, 168, 184, 171, 61, 98, 181, 55, 62, 173, 58, 25, 63, 176, 68, 22, 61, 182, 147, 156, 60, 171, 119, 165, 62, 78, 196, 192, 61, 141, 78, 198, 189, 143, 252, 33, 190, 214, 144, 160, 189, 98, 111, 38, 60, 204, 142, 49, 190, 54, 33, 1, 63, 197, 42, 215, 190, 208, 97, 147, 62, 61, 240, 203, 190, 189, 63, 106, 62, 130, 227, 73, 62, 244, 207, 117, 61, 197, 178, 40, 189, 114, 207, 170, 59, 110, 188, 142, 62, 242, 163, 181, 189, 248, 111, 207, 60, 22, 244, 130, 189, 157, 22, 95, 62, 225, 238, 147, 190, 129, 199, 67, 62, 196, 56, 180, 59, 141, 179, 94, 190, 249, 93, 5, 189, 44, 176, 203, 61, 135, 61, 38, 62, 75, 36, 169, 61, 167, 158, 155, 190, 201, 0, 178, 189, 181, 57, 147, 61, 93, 180, 91, 190, 104, 189, 210, 61, 3, 153, 123, 61, 22, 3, 54, 62, 105, 155, 34, 62, 205, 245, 197, 189, 235, 72, 201, 61, 192, 11, 253, 189, 167, 198, 254, 62, 114, 248, 226, 188, 34, 164, 168, 62, 168, 101, 157, 190, 204, 209, 108, 61, 95, 16, 218, 187, 9, 182, 241, 189, 163, 182, 83, 190, 191, 221, 105, 189, 44, 168, 147, 190, 17, 255, 118, 190, 129, 3, 169, 189, 152, 49, 92, 189, 153, 18, 144, 62, 68, 11, 38, 62, 237, 144, 44, 189, 178, 155, 25, 190, 195, 45, 190, 189, 38, 10, 182, 62, 52, 100, 1, 188, 18, 201, 13, 62, 142, 145, 129, 61, 196, 100, 239, 189, 139, 90, 213, 190, 128, 121, 79, 62, 225, 110, 106, 190, 147, 159, 1, 61, 4, 84, 152, 62, 106, 31, 117, 190, 247, 21, 36, 190, 107, 230, 238, 61, 8, 125, 51, 190, 163, 70, 62, 61, 221, 158, 33, 189, 117, 101, 171, 190, 42, 215, 91, 62, 147, 229, 123, 60, 20, 56, 227, 189, 152, 22, 199, 187, 22, 122, 86, 190, 172, 223, 31, 191, 27, 25, 134, 190, 228, 140, 44, 188, 60, 196, 26, 190, 190, 44, 11, 190, 95, 96, 186, 61, 235, 170, 177, 60, 9, 21, 72, 62, 189, 35, 198, 61, 145, 141, 153, 62, 62, 96, 154, 189, 134, 14, 156, 61, 74, 85, 63, 62, 32, 159, 144, 189, 148, 247, 26, 61, 230, 252, 209, 60, 6, 61, 217, 62, 158, 12, 23, 188, 125, 56, 18, 189, 213, 37, 135, 61, 239, 208, 206, 189, 111, 119, 138, 62, 32, 94, 51, 190, 248, 157, 7, 63, 171, 99, 121, 190, 46, 171, 113, 62, 14, 15, 232, 190, 254, 135, 119, 62, 199, 84, 69, 62, 125, 11, 147, 62, 208, 238, 136, 189, 208, 219, 136, 62, 223, 251, 169, 61, 141, 92, 214, 60, 153, 34, 80, 62, 182, 129, 85, 62, 24, 137, 44, 60, 46, 193, 201, 190, 21, 75, 33, 62, 209, 192, 216, 189, 40, 210, 7, 185, 58, 180, 47, 190, 243, 106, 77, 189, 6, 104, 255, 61, 58, 176, 51, 60, 249, 198, 51, 190, 127, 166, 223, 61, 49, 75, 242, 61, 128, 91, 101, 61, 254, 16, 133, 62, 38, 103, 93, 62, 243, 158, 26, 190, 122, 30, 158, 62, 214, 6, 149, 61, 254, 151, 152, 189, 52, 31, 233, 61, 248, 15, 243, 61, 102, 23, 87, 61, 147, 33, 83, 62, 100, 109, 163, 61, 165, 187, 2, 190, 92, 177, 112, 190, 102, 64, 212, 62, 177, 150, 127, 62, 137, 18, 19, 190, 115, 186, 129, 61, 236, 103, 251, 61, 6, 91, 247, 188, 199, 201, 78, 62, 90, 100, 204, 189, 7, 16, 161, 190, 17, 94, 1, 189, 251, 52, 44, 189, 162, 245, 81, 62, 77, 117, 82, 62, 75, 31, 212, 189, 108, 61, 66, 190, 118, 114, 135, 189, 255, 82, 87, 189, 233, 49, 13, 190, 17, 191, 185, 61, 144, 57, 138, 189, 56, 152, 146, 60, 128, 231, 10, 62, 138, 5, 240, 59, 182, 27, 232, 189, 185, 104, 40, 190, 168, 130, 39, 62, 105, 158, 10, 189, 74, 87, 208, 60, 136, 64, 0, 188, 132, 144, 217, 190, 122, 112, 201, 189, 119, 240, 57, 62, 21, 144, 182, 62, 129, 169, 108, 62, 178, 117, 32, 61, 0, 176, 83, 180, 87, 198, 130, 62, 174, 221, 1, 190, 190, 118, 78, 62, 66, 64, 48, 191, 134, 80, 206, 61, 147, 173, 42, 188, 114, 61, 110, 190, 67, 144, 77, 62, 221, 171, 205, 188, 197, 70, 104, 62, 165, 108, 124, 60, 101, 116, 235, 190, 235, 122, 146, 61, 89, 104, 184, 61, 169, 120, 92, 190, 10, 148, 146, 189, 191, 109, 65, 62, 32, 211, 85, 62, 202, 131, 161, 61, 245, 252, 161, 190, 121, 154, 161, 190, 76, 113, 63, 189, 102, 208, 155, 62, 95, 98, 98, 190, 97, 253, 141, 62, 15, 10, 201, 190, 162, 6, 237, 188, 224, 254, 154, 190};
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
                alignas(float) const unsigned char memory[] = {244, 146, 14, 188, 23, 94, 116, 61, 185, 115, 147, 62, 252, 174, 195, 62, 115, 84, 2, 60, 158, 217, 48, 190, 84, 207, 55, 61, 6, 192, 196, 60, 123, 135, 241, 61, 91, 5, 62, 188, 85, 171, 135, 189, 31, 214, 136, 62, 207, 80, 141, 61, 229, 4, 94, 61, 75, 60, 189, 60, 191, 176, 104, 189, 88, 104, 0, 190, 2, 7, 150, 189, 176, 246, 8, 190, 147, 9, 35, 190, 51, 43, 141, 62, 46, 184, 230, 189, 15, 171, 2, 62, 13, 72, 254, 188, 237, 253, 35, 62, 221, 32, 147, 61, 232, 183, 106, 62, 216, 147, 199, 189, 152, 215, 79, 189, 61, 2, 71, 62, 99, 119, 117, 190, 167, 213, 216, 187};
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
                alignas(float) const unsigned char memory[] = {175, 70, 131, 62, 98, 81, 165, 62, 149, 103, 130, 62, 183, 95, 148, 189, 23, 25, 57, 62, 206, 253, 180, 190, 19, 84, 24, 190, 169, 246, 151, 190, 208, 115, 33, 190, 67, 211, 129, 191, 179, 173, 26, 62, 214, 83, 149, 190, 80, 219, 161, 63, 198, 243, 47, 63, 73, 163, 6, 63, 21, 184, 23, 190, 0, 109, 215, 61, 114, 228, 251, 61, 97, 234, 82, 190, 61, 115, 63, 189, 200, 47, 179, 189, 76, 66, 239, 62, 252, 52, 159, 60, 180, 42, 253, 190, 173, 118, 160, 189, 236, 225, 17, 63, 248, 40, 86, 190, 78, 96, 164, 189, 44, 148, 200, 62, 34, 132, 14, 190, 250, 213, 79, 62, 25, 48, 225, 190, 140, 5, 154, 190, 224, 65, 169, 189, 215, 217, 5, 190, 149, 204, 54, 190, 188, 179, 161, 190, 137, 238, 8, 60, 163, 77, 163, 61, 157, 72, 124, 189, 75, 114, 15, 62, 73, 115, 46, 62, 249, 190, 183, 188, 24, 199, 44, 190, 27, 193, 58, 61, 41, 55, 62, 62, 22, 37, 40, 189, 30, 200, 54, 61, 184, 34, 160, 61, 94, 194, 231, 188, 240, 139, 163, 61, 206, 30, 29, 190, 155, 188, 212, 189, 87, 225, 22, 62, 140, 100, 191, 190, 52, 165, 167, 62, 140, 84, 220, 187, 1, 251, 134, 62, 251, 3, 23, 190, 42, 121, 141, 62, 98, 175, 40, 190, 133, 68, 85, 190, 203, 123, 176, 62, 112, 246, 9, 189};
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
                alignas(float) const unsigned char memory[] = {146, 233, 182, 189, 201, 59, 32, 190};
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
    alignas(float) const unsigned char memory[] = {202, 6, 227, 191, 185, 105, 105, 191, 228, 176, 18, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {63, 202, 119, 192, 253, 161, 39, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0040/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}