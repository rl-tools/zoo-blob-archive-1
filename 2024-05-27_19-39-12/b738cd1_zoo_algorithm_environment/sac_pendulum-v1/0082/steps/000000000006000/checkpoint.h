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
                alignas(float) const unsigned char memory[] = {174, 222, 23, 63, 174, 196, 167, 189, 226, 44, 51, 191, 170, 38, 237, 190, 115, 135, 51, 62, 30, 27, 7, 191, 226, 215, 181, 190, 106, 73, 23, 190, 180, 234, 58, 191, 88, 167, 138, 62, 197, 6, 145, 63, 23, 1, 192, 62, 186, 110, 96, 62, 243, 139, 35, 191, 92, 152, 192, 190, 6, 206, 52, 191, 74, 167, 24, 62, 99, 103, 22, 191, 50, 90, 191, 62, 191, 57, 14, 62, 151, 175, 212, 190, 179, 203, 209, 190, 74, 229, 29, 190, 95, 159, 189, 189, 192, 77, 212, 62, 165, 24, 139, 191, 236, 32, 204, 190, 139, 200, 214, 62, 178, 216, 84, 191, 219, 244, 114, 190, 2, 212, 196, 61, 3, 36, 240, 62, 199, 56, 16, 191, 218, 15, 58, 191, 149, 94, 159, 189, 248, 41, 96, 61, 87, 12, 214, 190, 123, 204, 96, 63, 109, 237, 194, 61, 52, 39, 254, 62, 63, 74, 116, 63, 91, 137, 67, 62, 188, 202, 134, 62, 94, 72, 14, 191, 170, 17, 8, 191, 12, 44, 113, 63, 120, 1, 164, 62, 203, 230, 79, 62, 215, 228, 52, 191, 205, 229, 63, 191, 104, 141, 96, 62, 0, 246, 2, 191, 78, 25, 13, 63, 44, 36, 209, 62, 9, 223, 17, 63, 168, 36, 253, 190, 66, 35, 188, 190, 37, 222, 179, 190, 72, 212, 229, 62, 64, 192, 243, 62, 59, 175, 47, 190, 86, 132, 71, 191, 116, 27, 183, 190, 190, 13, 25, 191, 62, 164, 161, 191, 228, 64, 8, 191, 84, 225, 250, 62, 1, 133, 60, 191, 212, 210, 2, 190, 6, 138, 213, 62, 9, 197, 161, 191, 10, 198, 184, 190, 96, 229, 251, 62, 52, 189, 76, 191, 199, 164, 164, 62, 3, 109, 211, 62, 31, 18, 108, 63, 102, 251, 177, 62, 83, 223, 233, 190, 179, 18, 111, 63, 177, 255, 9, 62, 163, 168, 168, 190, 44, 121, 150, 191, 21, 140, 241, 190, 160, 179, 41, 63, 95, 121, 79, 63, 240, 12, 204, 62, 155, 64, 214, 62, 52, 70, 207, 62, 117, 137, 178, 62, 141, 93, 6, 63, 105, 109, 91, 191, 161, 135, 64, 59, 172, 148, 187, 62, 13, 170, 131, 63, 88, 206, 202, 62};
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
                alignas(float) const unsigned char memory[] = {88, 93, 176, 190, 164, 76, 174, 190, 151, 197, 168, 61, 16, 183, 21, 63, 205, 22, 214, 62, 221, 181, 22, 62, 1, 56, 155, 189, 41, 26, 132, 61, 226, 24, 19, 63, 74, 177, 174, 61, 118, 136, 207, 61, 152, 40, 213, 190, 216, 173, 10, 63, 145, 96, 238, 61, 239, 95, 177, 190, 204, 138, 60, 190, 126, 162, 221, 62, 101, 163, 160, 62, 145, 161, 62, 63, 128, 48, 33, 191, 74, 104, 209, 62, 148, 172, 137, 190, 76, 1, 53, 63, 158, 51, 60, 189, 102, 206, 133, 189, 255, 19, 191, 61, 66, 219, 45, 63, 131, 239, 55, 189, 52, 128, 52, 191, 230, 25, 235, 190, 178, 36, 95, 62, 55, 235, 162, 189};
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
                alignas(float) const unsigned char memory[] = {178, 117, 221, 189, 228, 73, 147, 56, 73, 159, 87, 190, 221, 193, 101, 62, 209, 210, 6, 190, 122, 248, 169, 190, 179, 13, 140, 189, 228, 228, 17, 190, 170, 250, 142, 190, 106, 53, 63, 190, 108, 150, 215, 59, 246, 135, 45, 62, 205, 70, 47, 62, 142, 212, 100, 62, 233, 42, 5, 190, 23, 215, 209, 190, 62, 94, 44, 61, 81, 241, 62, 62, 84, 80, 122, 188, 214, 206, 36, 59, 52, 225, 235, 190, 97, 89, 48, 191, 63, 109, 169, 190, 110, 34, 191, 190, 250, 19, 79, 191, 171, 65, 135, 188, 71, 194, 57, 62, 79, 60, 7, 191, 179, 13, 239, 190, 44, 70, 198, 190, 68, 22, 84, 190, 212, 3, 63, 189, 242, 254, 59, 190, 34, 57, 49, 62, 56, 67, 88, 62, 216, 48, 37, 62, 148, 191, 134, 189, 17, 131, 67, 62, 32, 245, 76, 189, 185, 115, 74, 189, 130, 83, 64, 190, 9, 74, 214, 189, 32, 218, 38, 62, 140, 90, 67, 189, 250, 137, 146, 62, 94, 18, 95, 187, 189, 60, 84, 190, 42, 3, 136, 190, 173, 72, 174, 190, 112, 41, 211, 61, 202, 15, 138, 190, 102, 136, 206, 189, 115, 125, 190, 189, 158, 109, 70, 189, 31, 115, 69, 191, 29, 131, 24, 62, 219, 253, 207, 189, 169, 94, 95, 60, 156, 232, 115, 62, 204, 107, 216, 188, 123, 78, 134, 189, 22, 115, 17, 62, 241, 210, 170, 190, 95, 223, 33, 62, 145, 141, 180, 190, 196, 85, 254, 62, 238, 200, 195, 188, 90, 23, 23, 61, 38, 142, 107, 62, 70, 253, 134, 189, 50, 172, 139, 190, 101, 39, 79, 62, 217, 21, 14, 190, 77, 46, 162, 190, 44, 118, 91, 62, 244, 202, 144, 189, 216, 179, 219, 61, 126, 28, 48, 62, 59, 118, 165, 190, 53, 145, 28, 63, 67, 99, 144, 62, 12, 19, 251, 59, 182, 148, 170, 62, 221, 182, 55, 190, 225, 187, 150, 189, 71, 40, 183, 60, 173, 142, 100, 62, 97, 120, 234, 190, 192, 52, 146, 62, 161, 115, 38, 62, 4, 11, 238, 61, 38, 199, 25, 60, 28, 212, 160, 188, 191, 85, 177, 189, 195, 104, 114, 61, 26, 206, 156, 61, 140, 148, 243, 59, 25, 20, 30, 190, 0, 70, 235, 61, 241, 1, 214, 61, 45, 95, 32, 190, 89, 35, 187, 187, 248, 146, 111, 189, 187, 111, 22, 190, 150, 112, 241, 61, 247, 35, 64, 190, 112, 48, 8, 190, 211, 238, 156, 61, 45, 21, 14, 190, 97, 180, 234, 188, 194, 10, 192, 61, 47, 156, 13, 62, 93, 99, 177, 189, 35, 222, 33, 187, 173, 98, 242, 61, 159, 163, 128, 61, 151, 107, 153, 189, 213, 124, 0, 190, 181, 67, 69, 190, 22, 225, 31, 190, 56, 193, 225, 189, 14, 132, 154, 189, 192, 89, 215, 188, 228, 202, 72, 61, 218, 117, 115, 60, 14, 111, 25, 189, 13, 84, 61, 190, 125, 194, 124, 189, 13, 27, 76, 61, 201, 93, 25, 62, 70, 37, 214, 61, 58, 12, 118, 61, 33, 181, 13, 62, 131, 160, 31, 62, 158, 190, 173, 61, 25, 0, 13, 62, 122, 124, 97, 61, 210, 210, 155, 190, 181, 62, 120, 62, 202, 146, 89, 62, 144, 195, 69, 190, 189, 221, 131, 62, 93, 15, 8, 189, 28, 26, 210, 62, 164, 70, 153, 189, 153, 141, 183, 190, 219, 142, 157, 62, 94, 70, 242, 190, 140, 208, 53, 62, 227, 114, 132, 62, 20, 49, 154, 62, 193, 14, 10, 191, 219, 158, 219, 189, 227, 65, 212, 61, 28, 147, 33, 190, 19, 17, 70, 62, 148, 85, 125, 190, 104, 248, 77, 190, 236, 5, 1, 190, 219, 210, 23, 62, 28, 246, 77, 190, 52, 35, 4, 61, 240, 3, 57, 190, 15, 235, 9, 62, 2, 220, 117, 62, 180, 208, 198, 61, 137, 202, 211, 61, 119, 100, 164, 189, 70, 226, 21, 62, 78, 201, 72, 190, 244, 76, 42, 62, 91, 224, 30, 189, 202, 15, 30, 62, 120, 69, 222, 61, 164, 163, 193, 190, 241, 226, 232, 62, 42, 249, 11, 62, 202, 51, 171, 61, 201, 254, 209, 62, 68, 69, 243, 61, 2, 78, 37, 190, 40, 79, 175, 188, 251, 244, 205, 62, 142, 13, 57, 191, 71, 225, 216, 60, 203, 147, 17, 61, 38, 66, 166, 61, 182, 177, 42, 190, 56, 203, 16, 190, 20, 68, 243, 189, 249, 29, 105, 61, 112, 140, 7, 62, 7, 193, 4, 62, 103, 167, 137, 190, 254, 47, 236, 61, 88, 87, 188, 60, 133, 98, 33, 62, 76, 92, 181, 61, 31, 68, 227, 189, 51, 50, 146, 61, 240, 172, 13, 61, 184, 12, 13, 189, 17, 5, 10, 190, 201, 232, 162, 185, 243, 13, 58, 191, 150, 246, 22, 62, 99, 13, 225, 189, 96, 62, 85, 62, 235, 252, 236, 188, 241, 40, 130, 189, 95, 242, 11, 62, 170, 44, 18, 190, 30, 186, 196, 189, 197, 23, 226, 61, 84, 36, 0, 62, 184, 28, 181, 189, 63, 167, 201, 62, 84, 240, 145, 189, 85, 15, 243, 190, 119, 201, 21, 62, 235, 119, 190, 190, 171, 187, 239, 189, 49, 115, 121, 62, 132, 123, 80, 189, 27, 57, 217, 61, 196, 188, 194, 189, 253, 34, 168, 61, 190, 103, 149, 189, 161, 247, 187, 189, 234, 172, 250, 189, 173, 82, 9, 190, 12, 18, 196, 186, 131, 251, 106, 188, 57, 75, 40, 190, 143, 88, 160, 60, 57, 0, 230, 61, 33, 177, 181, 61, 187, 14, 185, 61, 171, 47, 133, 189, 215, 183, 127, 61, 41, 88, 143, 61, 120, 203, 239, 189, 192, 149, 159, 189, 5, 35, 130, 189, 90, 112, 165, 189, 112, 183, 155, 61, 224, 243, 223, 189, 149, 53, 148, 60, 213, 137, 211, 189, 17, 134, 163, 189, 73, 74, 28, 190, 93, 207, 26, 61, 136, 164, 145, 188, 37, 205, 15, 62, 0, 236, 45, 62, 65, 116, 13, 62, 236, 177, 24, 60, 104, 72, 88, 60, 186, 208, 40, 190, 180, 53, 161, 187, 15, 199, 11, 190, 237, 71, 139, 189, 131, 184, 21, 62, 13, 79, 55, 190, 137, 192, 42, 190, 41, 217, 145, 61, 201, 220, 249, 61, 85, 73, 146, 61, 176, 1, 219, 189, 167, 51, 126, 61, 166, 105, 5, 62, 128, 160, 33, 62, 79, 23, 114, 61, 43, 226, 152, 61, 190, 35, 228, 60, 16, 213, 227, 189, 221, 165, 63, 189, 46, 154, 132, 189, 129, 132, 191, 59, 49, 79, 3, 62, 188, 213, 142, 189, 253, 74, 40, 190, 117, 102, 249, 60, 76, 54, 217, 189, 45, 39, 66, 61, 191, 14, 15, 62, 213, 224, 246, 189, 40, 252, 42, 190, 237, 91, 218, 61, 194, 110, 52, 190, 192, 147, 105, 61, 180, 0, 36, 62, 13, 50, 227, 189, 252, 197, 170, 189, 50, 242, 237, 61, 75, 108, 18, 62, 6, 200, 156, 59, 220, 68, 7, 62, 246, 83, 103, 190, 42, 233, 24, 190, 104, 23, 220, 188, 139, 136, 7, 61, 116, 205, 42, 62, 54, 246, 185, 190, 224, 193, 187, 189, 45, 203, 249, 60, 188, 148, 89, 61, 170, 227, 232, 189, 120, 215, 28, 62, 117, 229, 34, 61, 209, 148, 70, 190, 200, 149, 219, 62, 155, 148, 48, 61, 49, 224, 74, 59, 118, 187, 1, 62, 232, 184, 184, 189, 36, 39, 0, 62, 28, 139, 78, 61, 59, 109, 75, 62, 185, 245, 87, 61, 193, 38, 68, 189, 228, 19, 80, 190, 54, 164, 65, 190, 160, 60, 0, 188, 54, 160, 220, 190, 162, 218, 251, 189, 64, 255, 213, 188, 163, 171, 111, 188, 7, 188, 172, 189, 161, 17, 123, 62, 231, 31, 182, 190, 233, 19, 173, 61, 222, 220, 91, 189, 109, 160, 139, 190, 210, 149, 156, 61, 172, 84, 51, 61, 178, 250, 57, 62, 171, 80, 68, 62, 94, 34, 32, 190, 211, 152, 69, 190, 4, 38, 49, 190, 27, 75, 43, 191, 239, 89, 126, 62, 172, 247, 152, 188, 26, 223, 145, 62, 7, 167, 216, 190, 134, 151, 168, 61, 31, 131, 207, 190, 4, 207, 174, 190, 145, 248, 88, 189, 67, 171, 192, 62, 170, 171, 155, 190, 49, 221, 158, 61, 144, 237, 176, 187, 130, 169, 157, 61, 98, 115, 78, 190, 139, 121, 48, 190, 50, 173, 95, 189, 32, 180, 163, 61, 104, 95, 243, 189, 122, 156, 247, 189, 122, 249, 204, 61, 121, 245, 160, 187, 35, 180, 45, 188, 68, 51, 7, 190, 225, 221, 133, 61, 87, 56, 141, 61, 141, 78, 159, 189, 205, 62, 30, 62, 116, 121, 10, 62, 15, 29, 250, 189, 168, 155, 113, 61, 110, 213, 233, 189, 15, 104, 10, 61, 149, 11, 220, 61, 118, 217, 134, 187, 120, 107, 15, 190, 173, 17, 214, 61, 47, 138, 254, 189, 80, 35, 183, 188, 127, 133, 72, 60, 100, 156, 63, 190, 181, 159, 158, 190, 156, 249, 153, 189, 200, 122, 170, 61, 60, 111, 95, 190, 105, 86, 110, 189, 182, 42, 169, 187, 170, 46, 33, 62, 90, 57, 15, 191, 191, 238, 169, 189, 209, 227, 254, 188, 178, 146, 169, 62, 63, 180, 42, 190, 227, 102, 170, 190, 246, 86, 203, 61, 104, 203, 26, 190, 127, 29, 18, 191, 206, 63, 181, 62, 100, 187, 209, 190, 219, 139, 21, 62, 61, 4, 68, 62, 104, 156, 11, 189, 173, 16, 170, 187, 163, 57, 137, 190, 141, 237, 156, 190, 237, 17, 2, 62, 180, 79, 106, 62, 226, 58, 47, 61, 188, 53, 204, 190, 172, 26, 55, 190, 113, 132, 157, 189, 81, 149, 148, 190, 151, 51, 169, 190, 4, 81, 154, 189, 220, 25, 66, 190, 147, 200, 60, 190, 83, 59, 192, 189, 13, 82, 160, 190, 39, 76, 136, 62, 10, 21, 218, 191, 247, 67, 99, 190, 244, 234, 171, 188, 146, 86, 173, 61, 206, 69, 115, 191, 90, 35, 216, 62, 150, 5, 234, 190, 175, 178, 124, 62, 2, 174, 178, 62, 28, 52, 180, 190, 184, 13, 201, 188, 56, 75, 143, 190, 231, 203, 129, 62, 180, 76, 102, 62, 75, 225, 128, 191, 208, 167, 136, 190, 113, 63, 70, 190, 181, 48, 133, 191, 109, 109, 182, 190, 29, 99, 29, 61, 86, 139, 174, 190, 73, 18, 116, 190, 129, 35, 20, 63, 143, 225, 115, 191, 130, 21, 103, 190, 77, 198, 62, 190, 156, 54, 38, 190, 111, 240, 177, 190, 105, 52, 54, 61, 182, 79, 64, 63, 235, 91, 193, 61, 221, 13, 89, 61, 61, 100, 77, 61, 116, 28, 206, 189, 32, 18, 238, 189, 168, 134, 221, 190, 229, 235, 212, 189, 171, 119, 154, 190, 251, 161, 179, 62, 191, 124, 11, 191, 32, 32, 225, 60, 132, 163, 237, 188, 212, 184, 116, 190, 113, 48, 18, 63, 6, 251, 215, 188, 49, 146, 50, 62, 146, 252, 109, 61, 191, 11, 61, 189, 185, 185, 3, 191, 64, 201, 148, 190, 82, 10, 1, 62, 215, 36, 28, 191, 88, 205, 16, 190, 118, 107, 27, 62, 216, 151, 9, 190, 105, 150, 205, 190, 134, 65, 111, 62, 178, 56, 209, 61, 86, 119, 182, 190, 84, 2, 121, 62, 241, 31, 187, 61, 143, 8, 23, 189, 239, 86, 205, 188, 213, 5, 130, 189, 34, 147, 252, 189, 0, 21, 55, 190, 138, 5, 34, 61, 85, 153, 80, 189, 132, 196, 211, 62, 50, 132, 172, 62, 91, 5, 92, 61, 159, 21, 78, 190, 75, 31, 132, 190, 165, 94, 204, 190, 92, 209, 45, 62, 25, 13, 99, 190, 57, 238, 118, 62, 138, 209, 54, 62, 43, 254, 42, 62, 224, 37, 205, 61, 240, 16, 133, 188, 74, 218, 219, 60, 212, 25, 173, 62, 89, 237, 169, 62, 183, 56, 173, 62, 9, 140, 132, 190, 77, 109, 16, 191, 77, 232, 22, 62, 218, 111, 124, 190, 55, 142, 232, 61, 124, 162, 196, 62, 255, 43, 196, 190, 254, 35, 116, 189, 129, 231, 23, 191, 140, 86, 18, 191, 87, 184, 26, 62, 30, 248, 143, 58, 69, 55, 170, 190, 253, 41, 231, 61, 36, 244, 167, 60, 13, 189, 76, 62, 142, 182, 43, 62, 138, 3, 176, 190, 137, 13, 217, 61, 191, 97, 229, 61, 141, 111, 234, 189, 105, 143, 47, 190, 74, 19, 106, 190, 227, 27, 91, 62, 124, 34, 36, 62, 101, 114, 2, 190, 203, 226, 81, 190, 217, 157, 97, 190, 231, 250, 44, 191, 156, 74, 4, 62, 170, 129, 184, 60, 7, 49, 161, 62, 150, 201, 126, 190, 212, 2, 10, 62, 235, 152, 167, 190, 4, 84, 180, 190, 23, 48, 174, 190, 200, 141, 188, 62, 75, 148, 193, 190, 249, 116, 164, 61, 82, 225, 92, 189, 173, 143, 67, 190, 232, 204, 106, 60, 98, 71, 141, 60, 72, 95, 42, 190, 255, 36, 39, 62, 51, 98, 107, 189, 3, 123, 38, 190, 2, 131, 42, 60, 251, 164, 159, 60, 254, 119, 178, 188, 238, 137, 33, 190, 48, 98, 148, 189, 245, 8, 246, 61, 29, 64, 6, 61, 97, 54, 136, 187, 97, 105, 61, 61, 23, 22, 15, 61, 142, 163, 165, 60, 81, 94, 196, 189, 225, 145, 132, 189, 125, 186, 96, 60, 29, 190, 21, 62, 170, 87, 137, 189, 176, 150, 184, 61, 161, 21, 148, 61, 175, 105, 189, 61, 74, 116, 216, 188, 164, 160, 20, 61, 177, 92, 25, 61, 246, 199, 82, 190, 32, 99, 207, 190, 52, 172, 183, 62, 240, 72, 9, 62, 53, 182, 97, 62, 21, 50, 222, 190, 85, 106, 178, 62, 229, 150, 95, 62, 241, 218, 70, 61, 145, 173, 13, 191, 123, 34, 129, 189, 210, 152, 128, 62, 23, 91, 177, 61, 86, 74, 63, 62, 229, 11, 161, 62, 195, 128, 178, 190, 53, 216, 38, 191, 135, 204, 172, 61, 19, 229, 156, 62, 94, 233, 236, 190, 7, 252, 146, 188, 133, 54, 111, 190, 88, 0, 64, 191, 38, 66, 32, 191, 213, 52, 28, 62, 204, 213, 222, 189, 125, 72, 116, 62, 115, 92, 61, 62, 252, 158, 81, 191, 4, 68, 233, 61, 184, 84, 202, 61, 240, 116, 51, 190, 234, 30, 253, 188, 29, 39, 106, 190, 180, 93, 182, 61, 19, 122, 155, 61, 96, 39, 67, 191, 215, 136, 188, 61, 32, 107, 134, 62, 131, 107, 182, 189, 66, 156, 147, 60, 140, 39, 103, 61, 43, 179, 62, 190, 238, 191, 168, 62, 105, 225, 211, 62, 51, 190, 19, 190, 88, 88, 32, 62, 93, 26, 252, 58, 54, 174, 7, 189, 19, 150, 175, 61, 131, 161, 170, 189, 118, 147, 143, 61, 143, 26, 250, 188, 3, 253, 65, 62, 2, 32, 117, 62, 133, 58, 156, 61, 196, 12, 123, 189, 0, 183, 245, 190, 249, 97, 2, 62, 17, 81, 213, 61, 246, 143, 154, 61, 185, 8, 60, 186, 135, 126, 243, 189, 184, 91, 16, 191, 184, 220, 221, 61, 161, 3, 157, 189, 190, 6, 1, 62, 226, 16, 181, 62, 36, 51, 182, 61, 178, 1, 60, 62, 118, 159, 182, 61, 203, 12, 95, 62, 238, 101, 23, 62, 216, 52, 189, 190, 117, 16, 211, 59, 49, 39, 171, 62, 185, 229, 143, 189, 120, 230, 40, 61, 166, 222, 176, 61, 36, 30, 235, 189, 229, 15, 8, 62, 156, 201, 21, 190, 188, 189, 131, 188, 150, 93, 25, 62, 33, 81, 59, 61, 228, 17, 20, 190, 66, 114, 45, 62, 40, 206, 199, 190, 202, 169, 203, 187, 208, 108, 11, 189, 86, 141, 126, 189, 193, 170, 48, 62, 250, 82, 144, 61, 117, 104, 101, 62, 133, 242, 131, 62, 22, 147, 170, 190, 73, 88, 125, 62, 26, 221, 210, 60, 9, 214, 4, 62, 175, 160, 182, 188, 246, 18, 198, 61, 163, 30, 33, 61, 160, 210, 118, 62, 230, 117, 12, 187, 30, 30, 200, 60, 105, 191, 55, 62, 77, 219, 254, 189, 248, 18, 156, 62, 129, 86, 190, 60, 222, 216, 57, 62, 62, 247, 185, 61, 84, 75, 233, 189, 9, 176, 148, 62, 32, 77, 137, 62, 176, 76, 17, 190, 91, 175, 253, 61, 185, 20, 85, 189, 248, 139, 0, 62, 244, 121, 43, 62, 37, 180, 155, 62, 200, 75, 154, 190, 59, 132, 255, 61, 76, 212, 137, 62, 252, 195, 200, 188, 169, 58, 142, 61, 2, 41, 162, 189, 207, 69, 57, 190, 165, 113, 200, 188, 6, 154, 51, 62, 66, 24, 131, 190, 99, 196, 102, 62, 227, 8, 16, 189, 100, 220, 175, 60, 139, 165, 49, 62, 106, 176, 200, 61, 194, 244, 44, 190, 116, 228, 59, 62, 149, 167, 205, 189, 153, 116, 234, 190, 192, 177, 144, 62, 48, 224, 143, 61, 240, 255, 54, 62, 7, 42, 71, 62, 224, 158, 191, 61, 255, 132, 147, 62, 49, 212, 87, 62, 242, 0, 228, 61, 115, 4, 36, 62, 89, 144, 223, 189, 239, 235, 189, 61, 115, 72, 9, 62, 128, 162, 148, 62, 27, 77, 140, 190, 5, 124, 38, 62, 78, 249, 17, 62, 144, 184, 72, 62, 67, 168, 250, 61, 154, 5, 244, 189, 82, 233, 31, 61, 81, 230, 203, 61, 211, 31, 36, 62, 7, 27, 17, 61, 138, 139, 11, 190, 172, 233, 24, 62, 59, 144, 27, 190, 110, 74, 108, 62, 108, 212, 180, 61, 87, 62, 240, 189, 104, 167, 83, 61, 237, 37, 92, 62, 31, 85, 234, 61, 117, 70, 236, 188, 182, 183, 225, 189, 60, 130, 27, 191, 129, 170, 190, 61, 152, 91, 64, 61, 163, 152, 237, 189, 157, 170, 162, 189, 4, 143, 116, 190, 80, 184, 132, 62, 113, 57, 154, 190, 239, 201, 78, 62, 160, 138, 67, 62, 161, 198, 211, 61, 87, 182, 104, 61, 222, 66, 136, 62, 188, 110, 133, 61, 182, 71, 201, 190, 229, 36, 32, 62, 185, 76, 20, 191, 211, 124, 121, 190, 149, 13, 102, 62, 189, 166, 33, 190, 128, 166, 152, 190, 97, 50, 15, 62, 174, 46, 58, 62, 116, 68, 14, 189, 39, 156, 36, 189, 146, 154, 88, 62, 218, 130, 32, 189, 9, 100, 207, 60, 43, 66, 146, 62, 105, 136, 165, 190, 139, 161, 150, 62, 153, 231, 22, 62, 191, 212, 120, 62, 12, 113, 165, 62, 230, 136, 51, 190, 9, 133, 21, 62, 40, 210, 218, 62, 104, 216, 190, 189, 254, 81, 24, 190, 22, 90, 18, 61, 190, 233, 40, 62, 122, 210, 24, 190, 143, 161, 52, 189, 192, 192, 119, 190, 222, 172, 78, 191, 147, 56, 10, 190, 47, 154, 74, 62, 116, 24, 63, 61, 217, 153, 233, 188, 62, 209, 29, 190, 102, 1, 21, 191, 212, 101, 34, 190, 86, 224, 85, 61, 114, 15, 232, 189, 254, 79, 14, 62, 123, 94, 92, 188, 186, 66, 13, 190, 54, 9, 143, 61, 133, 122, 4, 62, 93, 177, 107, 61, 139, 213, 210, 189, 68, 42, 246, 189, 152, 81, 184, 189, 154, 191, 96, 61, 249, 95, 73, 59, 143, 211, 202, 60, 84, 111, 153, 188, 73, 98, 247, 189, 39, 10, 134, 189, 80, 37, 246, 188, 150, 214, 2, 190, 222, 236, 175, 61, 193, 166, 61, 190, 116, 164, 120, 188, 224, 229, 167, 189, 17, 250, 186, 61, 4, 53, 56, 61, 38, 128, 58, 189, 159, 17, 49, 190, 178, 120, 62, 189, 145, 11, 8, 190, 209, 131, 249, 61, 76, 100, 1, 190, 28, 239, 156, 61, 32, 205, 163, 61, 158, 238, 249, 61, 144, 241, 136, 60, 84, 192, 37, 60, 244, 118, 87, 189, 169, 90, 183, 61, 40, 240, 49, 189, 102, 88, 79, 60, 24, 38, 130, 189, 141, 161, 158, 61, 0, 54, 32, 190, 45, 24, 93, 190, 203, 144, 0, 190, 207, 214, 2, 190, 216, 23, 85, 189, 51, 27, 203, 188, 155, 211, 235, 188, 93, 36, 44, 61, 200, 150, 248, 189, 135, 209, 19, 60, 177, 221, 189, 189, 156, 184, 246, 61, 215, 145, 226, 60, 98, 18, 173, 188, 145, 90, 178, 61, 14, 117, 167, 185, 122, 122, 125, 189, 99, 169, 195, 189, 234, 19, 10, 61, 131, 207, 51, 190, 223, 133, 66, 190, 26, 253, 226, 189, 62, 210, 99, 62, 52, 133, 82, 190, 172, 184, 165, 189, 74, 120, 46, 62, 157, 54, 185, 60, 192, 166, 147, 61, 75, 31, 130, 62, 55, 86, 226, 61, 234, 71, 96, 62, 209, 148, 179, 61, 186, 130, 83, 190, 186, 186, 1, 62, 101, 215, 59, 190, 87, 189, 20, 190, 139, 36, 164, 61, 85, 230, 154, 190, 179, 213, 13, 62, 123, 63, 184, 189, 202, 150, 169, 188, 42, 216, 207, 189, 231, 70, 183, 186, 135, 197, 142, 190, 197, 168, 61, 60, 74, 66, 181, 61, 5, 229, 240, 62, 224, 157, 230, 189, 231, 61, 32, 190, 5, 246, 234, 189, 85, 125, 243, 190, 11, 116, 198, 189, 242, 126, 145, 62, 235, 213, 254, 189, 35, 184, 162, 190, 142, 188, 34, 62, 89, 88, 46, 62, 70, 54, 124, 189, 8, 51, 18, 189, 78, 13, 139, 61, 10, 177, 240, 189, 188, 208, 105, 62, 211, 152, 39, 190, 201, 55, 3, 190, 205, 186, 39, 62, 115, 28, 30, 190, 142, 250, 188, 62, 34, 134, 98, 62, 60, 35, 71, 58, 21, 191, 54, 62, 181, 102, 113, 190, 172, 112, 232, 189, 99, 189, 185, 190, 76, 212, 204, 188, 228, 80, 91, 62, 132, 200, 43, 190, 147, 51, 49, 191, 198, 134, 184, 189, 134, 116, 79, 190, 70, 132, 30, 62, 48, 122, 94, 62, 255, 13, 139, 61, 223, 145, 142, 62, 7, 238, 223, 61, 20, 197, 140, 190, 234, 103, 53, 62, 60, 5, 18, 62, 97, 33, 1, 191, 65, 80, 242, 189, 216, 182, 149, 188, 248, 113, 220, 189, 210, 243, 165, 190, 79, 212, 137, 62, 191, 137, 116, 189, 220, 149, 62, 62, 243, 201, 165, 62, 186, 103, 188, 190, 60, 216, 139, 61, 168, 24, 253, 188, 88, 45, 136, 190, 17, 19, 25, 62, 142, 48, 87, 61, 129, 53, 73, 62, 5, 199, 79, 62, 36, 192, 95, 62, 26, 89, 189, 61, 242, 171, 91, 189, 59, 32, 11, 191, 23, 103, 171, 62, 206, 167, 77, 59, 165, 59, 35, 59, 247, 32, 171, 189, 244, 231, 80, 189, 134, 57, 166, 190, 104, 7, 219, 190, 222, 97, 177, 190, 43, 155, 173, 62, 212, 72, 178, 190, 226, 79, 7, 188, 114, 197, 174, 190, 72, 82, 238, 61, 232, 162, 187, 59, 180, 181, 38, 62, 107, 116, 67, 187, 125, 97, 141, 62, 204, 117, 167, 189, 248, 33, 124, 189, 207, 107, 16, 61, 40, 107, 91, 190, 49, 116, 46, 62, 25, 140, 100, 60, 23, 208, 189, 61, 1, 247, 58, 188, 157, 40, 82, 190, 61, 6, 93, 61, 200, 45, 6, 62, 222, 156, 233, 61, 168, 133, 103, 190, 204, 217, 14, 188, 215, 225, 29, 190, 188, 237, 167, 60, 217, 200, 106, 190, 175, 62, 142, 189, 142, 167, 11, 62, 76, 110, 37, 61, 33, 3, 211, 189, 85, 237, 33, 189, 70, 74, 135, 190, 34, 229, 110, 62, 233, 87, 65, 189, 214, 212, 178, 61, 35, 38, 183, 61, 192, 129, 204, 188, 22, 85, 251, 189, 138, 75, 59, 190, 39, 251, 255, 189, 254, 211, 19, 61, 183, 127, 229, 188, 216, 154, 139, 189, 54, 72, 62, 190, 71, 199, 14, 62, 130, 57, 244, 61, 5, 165, 93, 189, 113, 51, 11, 190, 141, 151, 0, 190, 138, 230, 15, 62, 51, 44, 57, 189, 108, 42, 154, 189, 239, 170, 252, 61, 113, 84, 217, 61, 114, 86, 61, 190, 181, 180, 178, 188, 33, 176, 201, 61, 12, 48, 184, 61, 239, 161, 20, 62, 89, 2, 19, 190, 212, 142, 238, 186, 67, 127, 55, 189, 54, 250, 47, 190, 125, 21, 30, 190, 97, 77, 104, 61, 47, 100, 100, 188};
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
                alignas(float) const unsigned char memory[] = {154, 135, 25, 190, 137, 212, 53, 61, 56, 130, 129, 62, 221, 115, 98, 60, 55, 209, 168, 62, 31, 104, 27, 62, 173, 245, 23, 62, 111, 224, 111, 189, 91, 249, 252, 189, 73, 156, 106, 189, 96, 8, 62, 62, 235, 179, 32, 190, 187, 156, 193, 60, 15, 28, 162, 62, 91, 228, 159, 189, 148, 11, 4, 62, 54, 250, 196, 60, 44, 166, 52, 190, 5, 123, 90, 62, 148, 185, 186, 189, 40, 65, 195, 189, 97, 134, 181, 62, 33, 50, 127, 62, 149, 119, 44, 60, 3, 89, 90, 60, 137, 232, 44, 189, 121, 151, 22, 190, 85, 224, 170, 61, 7, 57, 187, 189, 204, 133, 116, 62, 204, 178, 97, 62, 1, 236, 85, 190};
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
                alignas(float) const unsigned char memory[] = {75, 122, 47, 191, 133, 73, 220, 62, 235, 45, 232, 190, 137, 148, 9, 62, 74, 61, 65, 190, 145, 182, 101, 190, 135, 62, 235, 61, 198, 124, 120, 61, 242, 128, 5, 62, 111, 126, 172, 60, 17, 141, 28, 63, 121, 210, 7, 190, 143, 250, 37, 191, 18, 18, 122, 63, 195, 207, 179, 190, 246, 238, 177, 62, 46, 163, 233, 62, 52, 141, 2, 188, 171, 11, 233, 62, 43, 73, 183, 190, 80, 120, 82, 62, 212, 15, 53, 190, 52, 99, 54, 190, 85, 103, 102, 62, 228, 116, 147, 190, 117, 239, 122, 189, 0, 67, 43, 61, 160, 79, 151, 62, 83, 55, 5, 63, 68, 124, 30, 63, 72, 62, 15, 189, 180, 233, 135, 189, 162, 2, 152, 189, 62, 230, 172, 61, 152, 105, 193, 60, 87, 35, 3, 62, 37, 53, 172, 190, 206, 89, 88, 190, 13, 125, 249, 190, 208, 209, 139, 188, 201, 222, 240, 61, 129, 143, 160, 61, 41, 196, 140, 61, 133, 54, 151, 58, 229, 127, 170, 62, 110, 158, 7, 62, 147, 182, 46, 62, 108, 229, 177, 62, 106, 254, 231, 189, 102, 141, 70, 188, 43, 40, 49, 190, 240, 182, 95, 61, 148, 91, 130, 62, 227, 22, 251, 189, 115, 240, 89, 189, 197, 142, 177, 189, 128, 41, 63, 60, 45, 162, 46, 190, 217, 201, 140, 188, 191, 186, 21, 60, 60, 78, 138, 188, 112, 100, 158, 190, 179, 62, 120, 190, 233, 113, 202, 60};
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
                alignas(float) const unsigned char memory[] = {154, 41, 145, 188, 235, 147, 133, 189};
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
    alignas(float) const unsigned char memory[] = {237, 69, 201, 63, 31, 71, 68, 63, 189, 230, 113, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {221, 209, 56, 192, 44, 234, 103, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0082/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}