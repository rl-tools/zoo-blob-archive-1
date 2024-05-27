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
                alignas(float) const unsigned char memory[] = {110, 144, 76, 63, 10, 70, 146, 63, 9, 253, 189, 62, 94, 86, 19, 63, 108, 223, 177, 63, 220, 155, 232, 62, 177, 100, 13, 190, 64, 108, 202, 191, 104, 156, 1, 191, 228, 202, 42, 191, 39, 38, 97, 191, 26, 59, 179, 62, 250, 174, 80, 190, 130, 240, 142, 63, 163, 171, 140, 62, 194, 123, 219, 190, 8, 48, 176, 191, 46, 211, 246, 190, 223, 90, 140, 62, 51, 6, 162, 63, 153, 50, 137, 62, 73, 74, 68, 63, 140, 166, 85, 191, 149, 112, 124, 190, 54, 249, 54, 63, 53, 250, 69, 191, 96, 191, 49, 190, 226, 166, 160, 190, 243, 244, 207, 63, 75, 190, 198, 62, 17, 155, 36, 191, 220, 213, 110, 63, 127, 116, 240, 62, 42, 10, 98, 63, 147, 162, 1, 62, 55, 14, 3, 58, 29, 76, 209, 189, 48, 36, 7, 191, 99, 216, 148, 62, 175, 181, 253, 190, 249, 176, 156, 63, 215, 82, 150, 62, 126, 26, 165, 62, 88, 65, 197, 190, 239, 150, 223, 60, 67, 253, 183, 62, 193, 145, 101, 191, 139, 153, 45, 191, 50, 73, 43, 191, 88, 143, 248, 61, 136, 203, 114, 61, 160, 72, 146, 191, 61, 139, 14, 62, 23, 55, 24, 61, 78, 27, 213, 188, 21, 8, 140, 62, 158, 80, 42, 191, 54, 110, 248, 190, 134, 131, 25, 191, 162, 6, 175, 62, 54, 109, 181, 190, 15, 246, 33, 63, 130, 29, 47, 191, 190, 130, 221, 61, 219, 63, 91, 191, 234, 12, 182, 62, 63, 208, 139, 190, 233, 209, 70, 62, 35, 226, 226, 60, 126, 185, 69, 190, 121, 241, 143, 62, 228, 62, 208, 62, 11, 200, 244, 60, 251, 22, 244, 191, 66, 119, 20, 191, 102, 160, 105, 190, 50, 189, 137, 63, 231, 128, 51, 187, 238, 250, 182, 61, 167, 148, 234, 190, 207, 38, 69, 191, 52, 186, 62, 187, 155, 17, 81, 191, 203, 213, 149, 62, 147, 5, 220, 62, 187, 95, 26, 63, 38, 164, 128, 190, 225, 193, 183, 62, 181, 60, 112, 191, 78, 26, 132, 190, 97, 118, 200, 190, 1, 187, 75, 62, 239, 123, 28, 63, 206, 14, 176, 190, 192, 221, 235, 62, 139, 56, 26, 63};
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
                alignas(float) const unsigned char memory[] = {134, 182, 227, 190, 223, 128, 222, 62, 104, 183, 83, 190, 72, 252, 171, 190, 243, 67, 175, 62, 89, 176, 14, 191, 113, 184, 94, 62, 114, 213, 26, 191, 26, 209, 181, 62, 180, 222, 3, 63, 249, 138, 152, 190, 174, 176, 50, 62, 75, 228, 207, 189, 192, 196, 36, 63, 156, 197, 10, 63, 171, 227, 151, 190, 211, 77, 10, 63, 160, 245, 252, 62, 49, 163, 29, 190, 168, 53, 178, 59, 146, 33, 142, 61, 11, 155, 112, 62, 138, 240, 187, 62, 38, 139, 93, 190, 194, 30, 64, 62, 64, 71, 7, 191, 97, 137, 182, 190, 115, 224, 168, 62, 103, 168, 149, 61, 31, 30, 169, 189, 179, 41, 137, 62, 128, 211, 152, 190};
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
                alignas(float) const unsigned char memory[] = {57, 60, 158, 190, 86, 44, 13, 190, 109, 46, 135, 62, 150, 252, 173, 190, 156, 5, 113, 190, 227, 220, 49, 62, 226, 255, 249, 60, 23, 185, 75, 190, 24, 176, 12, 189, 117, 61, 175, 190, 142, 100, 28, 189, 165, 55, 109, 190, 89, 71, 245, 189, 123, 211, 175, 190, 4, 137, 94, 189, 250, 233, 71, 190, 91, 40, 21, 191, 231, 144, 13, 190, 101, 191, 43, 190, 49, 77, 113, 59, 36, 140, 47, 60, 28, 99, 2, 191, 175, 110, 118, 189, 126, 191, 139, 190, 82, 103, 164, 60, 234, 89, 177, 190, 138, 189, 58, 189, 20, 123, 240, 189, 67, 11, 188, 188, 177, 246, 68, 189, 44, 148, 95, 189, 212, 33, 168, 190, 252, 36, 230, 190, 219, 28, 177, 190, 184, 132, 8, 191, 145, 92, 79, 62, 118, 241, 167, 190, 70, 8, 84, 190, 246, 170, 129, 190, 172, 2, 101, 62, 152, 126, 128, 62, 94, 17, 146, 190, 53, 219, 13, 60, 215, 110, 125, 62, 75, 92, 235, 61, 58, 252, 121, 188, 185, 25, 225, 61, 254, 23, 115, 62, 7, 123, 159, 189, 54, 30, 100, 62, 154, 220, 203, 62, 42, 152, 46, 62, 249, 221, 73, 190, 214, 238, 25, 190, 221, 66, 154, 61, 192, 16, 26, 62, 149, 141, 137, 61, 68, 255, 19, 191, 247, 150, 138, 191, 151, 37, 3, 61, 76, 127, 128, 190, 169, 239, 147, 62, 77, 57, 143, 61, 248, 50, 202, 60, 8, 255, 255, 190, 98, 49, 194, 190, 219, 68, 52, 62, 118, 60, 204, 62, 10, 8, 43, 191, 120, 204, 56, 190, 104, 38, 132, 190, 166, 24, 66, 60, 215, 204, 152, 61, 100, 189, 1, 191, 112, 120, 70, 189, 72, 184, 34, 60, 77, 244, 186, 61, 126, 143, 4, 191, 39, 235, 178, 62, 174, 216, 244, 187, 175, 251, 101, 61, 63, 40, 96, 61, 194, 246, 25, 62, 161, 108, 234, 62, 102, 159, 134, 189, 167, 254, 112, 62, 41, 149, 101, 62, 252, 49, 232, 189, 97, 21, 106, 62, 237, 130, 80, 190, 19, 87, 240, 189, 130, 51, 161, 62, 183, 223, 223, 61, 188, 115, 201, 187, 253, 113, 37, 190, 19, 1, 10, 190, 7, 93, 131, 189, 128, 193, 118, 62, 30, 138, 211, 61, 73, 5, 184, 190, 189, 31, 216, 61, 27, 149, 133, 62, 74, 254, 86, 62, 194, 70, 17, 191, 103, 46, 103, 62, 176, 244, 198, 187, 29, 159, 114, 62, 252, 139, 14, 190, 39, 166, 14, 191, 164, 150, 88, 188, 3, 219, 180, 187, 198, 235, 134, 190, 65, 58, 41, 62, 179, 30, 158, 61, 178, 145, 162, 61, 2, 176, 43, 190, 200, 191, 20, 62, 87, 254, 8, 190, 233, 32, 75, 60, 160, 220, 17, 190, 251, 160, 0, 62, 180, 139, 169, 62, 210, 15, 150, 189, 22, 216, 215, 189, 243, 159, 42, 62, 31, 183, 42, 62, 47, 224, 134, 189, 80, 34, 218, 189, 184, 232, 209, 190, 29, 168, 42, 60, 87, 122, 142, 189, 239, 167, 160, 189, 34, 185, 52, 191, 177, 135, 146, 189, 93, 126, 36, 190, 21, 123, 40, 190, 106, 163, 144, 62, 2, 246, 199, 191, 208, 97, 93, 60, 168, 116, 161, 62, 29, 203, 96, 189, 42, 66, 88, 191, 145, 27, 55, 62, 144, 23, 181, 61, 130, 132, 132, 191, 128, 186, 51, 191, 199, 130, 31, 61, 219, 100, 131, 62, 115, 55, 132, 61, 137, 12, 228, 61, 71, 147, 21, 188, 92, 180, 197, 190, 115, 48, 157, 61, 148, 38, 55, 62, 119, 31, 217, 189, 213, 25, 199, 60, 232, 66, 176, 61, 231, 161, 123, 62, 96, 189, 56, 190, 44, 98, 132, 190, 236, 70, 149, 191, 40, 117, 114, 191, 192, 88, 107, 62, 246, 214, 31, 191, 46, 126, 49, 191, 202, 103, 193, 187, 71, 54, 139, 191, 159, 43, 214, 62, 101, 191, 45, 62, 196, 202, 22, 59, 42, 237, 132, 60, 119, 45, 31, 190, 226, 13, 134, 189, 7, 32, 197, 190, 103, 48, 59, 62, 126, 97, 145, 62, 180, 243, 177, 61, 14, 217, 51, 188, 249, 179, 165, 61, 75, 61, 18, 191, 85, 45, 244, 189, 94, 116, 125, 62, 220, 251, 156, 61, 255, 137, 6, 63, 61, 129, 145, 62, 224, 28, 168, 190, 19, 31, 146, 189, 22, 113, 206, 62, 157, 113, 229, 190, 232, 6, 237, 62, 209, 51, 196, 62, 237, 44, 24, 63, 165, 38, 12, 190, 99, 69, 212, 189, 1, 236, 175, 60, 71, 253, 34, 61, 194, 159, 39, 190, 47, 123, 32, 190, 209, 112, 158, 189, 118, 193, 20, 59, 78, 89, 3, 62, 76, 15, 149, 189, 130, 219, 210, 189, 5, 240, 2, 190, 201, 56, 4, 189, 123, 212, 8, 189, 242, 248, 116, 61, 229, 74, 22, 190, 192, 178, 179, 61, 186, 154, 65, 189, 253, 231, 133, 61, 226, 84, 190, 61, 242, 165, 207, 188, 1, 175, 244, 189, 113, 233, 182, 61, 113, 70, 13, 190, 46, 16, 37, 190, 105, 238, 117, 188, 14, 100, 184, 61, 145, 180, 44, 189, 38, 114, 33, 190, 183, 31, 143, 188, 112, 206, 36, 190, 212, 229, 209, 189, 243, 83, 202, 62, 251, 247, 158, 62, 135, 61, 247, 61, 73, 227, 154, 188, 103, 0, 45, 190, 101, 190, 155, 62, 90, 35, 190, 62, 81, 59, 13, 191, 174, 180, 191, 189, 176, 47, 113, 190, 135, 147, 120, 190, 58, 231, 177, 61, 224, 113, 45, 62, 230, 226, 58, 189, 134, 235, 3, 62, 216, 134, 179, 189, 170, 18, 238, 190, 27, 87, 140, 190, 51, 52, 153, 60, 39, 242, 233, 61, 47, 55, 136, 62, 190, 46, 148, 62, 112, 65, 128, 189, 94, 157, 224, 60, 102, 14, 163, 190, 184, 7, 58, 190, 64, 178, 74, 62, 138, 138, 132, 61, 201, 122, 135, 62, 8, 47, 242, 190, 66, 112, 94, 190, 189, 95, 211, 189, 102, 183, 210, 189, 154, 108, 2, 62, 147, 26, 210, 189, 25, 99, 174, 61, 199, 205, 181, 189, 187, 127, 31, 62, 25, 218, 189, 61, 107, 98, 191, 61, 67, 233, 225, 60, 68, 229, 59, 190, 26, 12, 26, 190, 110, 94, 75, 190, 132, 239, 60, 187, 211, 5, 21, 189, 140, 56, 5, 190, 174, 157, 23, 190, 225, 97, 129, 61, 229, 215, 76, 189, 5, 79, 228, 189, 160, 152, 102, 189, 142, 46, 177, 61, 56, 18, 46, 190, 70, 64, 232, 189, 203, 91, 17, 62, 90, 225, 39, 59, 204, 56, 80, 61, 152, 27, 1, 190, 208, 26, 41, 190, 252, 80, 5, 188, 93, 209, 130, 61, 26, 204, 139, 189, 29, 107, 140, 189, 108, 234, 12, 189, 150, 129, 129, 189, 47, 134, 18, 62, 191, 61, 116, 62, 27, 125, 197, 190, 162, 135, 134, 61, 198, 203, 4, 191, 66, 134, 12, 191, 217, 160, 246, 190, 230, 1, 228, 190, 156, 189, 193, 191, 45, 213, 19, 191, 5, 106, 151, 190, 183, 9, 62, 191, 146, 25, 142, 61, 78, 127, 2, 190, 235, 39, 65, 189, 67, 15, 180, 62, 124, 83, 26, 190, 54, 72, 106, 60, 117, 95, 104, 62, 65, 158, 37, 61, 161, 45, 70, 189, 146, 32, 39, 190, 228, 20, 217, 62, 52, 127, 133, 190, 97, 90, 43, 62, 100, 82, 20, 190, 154, 55, 193, 189, 105, 0, 167, 190, 128, 115, 116, 60, 23, 109, 198, 190, 40, 11, 20, 189, 192, 253, 110, 189, 229, 181, 227, 61, 155, 222, 42, 190, 80, 220, 227, 189, 135, 64, 124, 187, 2, 8, 22, 60, 200, 83, 223, 61, 70, 54, 155, 189, 8, 81, 202, 61, 41, 79, 5, 61, 215, 184, 104, 61, 50, 107, 214, 188, 50, 143, 181, 189, 244, 102, 206, 189, 185, 140, 213, 60, 22, 200, 150, 61, 23, 197, 41, 189, 17, 208, 228, 189, 15, 156, 34, 189, 169, 15, 156, 189, 162, 253, 27, 190, 139, 107, 19, 62, 250, 83, 206, 189, 164, 208, 148, 189, 91, 220, 170, 189, 92, 238, 135, 60, 91, 65, 148, 189, 229, 104, 176, 189, 29, 26, 178, 61, 249, 18, 67, 60, 32, 189, 41, 186, 26, 43, 216, 61, 29, 158, 194, 62, 193, 187, 54, 190, 199, 240, 150, 61, 38, 97, 159, 61, 78, 211, 116, 191, 2, 39, 8, 61, 29, 38, 59, 191, 33, 18, 239, 189, 181, 30, 38, 190, 178, 239, 87, 190, 27, 155, 57, 62, 187, 195, 196, 61, 109, 89, 55, 62, 110, 17, 25, 62, 99, 250, 207, 190, 103, 93, 166, 61, 154, 105, 139, 190, 228, 62, 96, 190, 0, 59, 150, 62, 126, 77, 189, 62, 0, 103, 49, 62, 57, 102, 68, 62, 145, 3, 127, 61, 129, 183, 203, 190, 218, 106, 29, 62, 5, 33, 124, 62, 74, 65, 140, 61, 96, 192, 101, 62, 89, 162, 6, 191, 110, 36, 52, 61, 31, 129, 127, 188, 174, 252, 19, 191, 237, 75, 148, 190, 53, 56, 149, 191, 51, 135, 241, 190, 110, 146, 31, 62, 113, 218, 165, 191, 216, 51, 178, 190, 202, 89, 226, 189, 196, 238, 35, 63, 247, 126, 135, 62, 38, 49, 232, 61, 201, 212, 252, 61, 59, 55, 216, 190, 25, 142, 121, 62, 21, 88, 223, 61, 222, 32, 199, 62, 126, 2, 139, 61, 225, 158, 102, 62, 97, 123, 69, 63, 158, 229, 237, 61, 59, 121, 99, 189, 111, 77, 145, 190, 230, 200, 118, 62, 23, 66, 156, 62, 213, 225, 49, 191, 8, 33, 73, 63, 239, 152, 17, 191, 61, 252, 136, 62, 74, 153, 156, 191, 185, 18, 249, 62, 157, 225, 164, 62, 82, 126, 145, 61, 77, 197, 24, 191, 76, 11, 106, 190, 11, 7, 204, 190, 67, 177, 162, 190, 126, 105, 39, 190, 88, 147, 129, 191, 106, 157, 241, 190, 68, 189, 9, 63, 122, 48, 207, 62, 243, 177, 7, 62, 144, 145, 148, 61, 34, 197, 222, 60, 113, 180, 43, 61, 231, 37, 57, 190, 0, 171, 46, 62, 245, 126, 19, 63, 210, 162, 109, 188, 173, 199, 137, 62, 153, 46, 208, 62, 193, 247, 51, 62, 118, 235, 78, 190, 239, 121, 125, 190, 222, 51, 228, 61, 6, 62, 221, 61, 194, 118, 151, 190, 138, 141, 207, 62, 112, 230, 27, 191, 6, 133, 230, 61, 41, 41, 106, 190, 77, 22, 218, 62, 162, 106, 45, 189, 61, 183, 154, 62, 73, 1, 40, 191, 177, 212, 123, 61, 182, 150, 82, 61, 238, 137, 44, 63, 158, 118, 173, 191, 187, 237, 138, 189, 187, 192, 125, 190, 55, 242, 36, 62, 187, 53, 202, 62, 144, 111, 180, 190, 232, 232, 171, 61, 251, 126, 145, 188, 169, 65, 213, 62, 194, 171, 130, 191, 0, 215, 205, 61, 187, 239, 239, 189, 81, 104, 168, 191, 192, 156, 30, 191, 126, 222, 16, 62, 149, 242, 133, 62, 210, 153, 82, 62, 120, 232, 91, 62, 5, 171, 220, 60, 108, 210, 179, 189, 185, 236, 52, 61, 132, 9, 149, 188, 105, 78, 235, 189, 35, 210, 158, 62, 144, 255, 141, 61, 70, 83, 239, 61, 40, 0, 40, 189, 141, 111, 145, 189, 96, 74, 163, 188, 12, 228, 170, 189, 137, 99, 190, 61, 171, 91, 210, 189, 50, 208, 133, 61, 99, 20, 174, 59, 223, 58, 180, 187, 61, 135, 46, 62, 204, 58, 41, 61, 252, 58, 3, 187, 107, 4, 167, 188, 210, 175, 30, 61, 46, 48, 182, 61, 180, 7, 132, 59, 249, 179, 173, 61, 159, 177, 38, 190, 179, 205, 248, 61, 141, 154, 245, 189, 176, 56, 22, 190, 140, 223, 253, 189, 197, 77, 215, 189, 8, 190, 28, 189, 119, 127, 0, 190, 104, 247, 177, 188, 195, 236, 217, 188, 168, 89, 151, 61, 142, 2, 155, 186, 25, 151, 113, 189, 189, 31, 54, 61, 217, 94, 37, 190, 30, 144, 88, 188, 218, 22, 21, 62, 65, 141, 23, 62, 141, 39, 50, 190, 31, 166, 18, 190, 38, 72, 228, 189, 138, 199, 83, 61, 113, 225, 198, 189, 121, 59, 59, 61, 114, 148, 28, 62, 142, 172, 176, 61, 45, 207, 10, 188, 154, 93, 235, 189, 143, 35, 130, 61, 98, 116, 190, 61, 113, 122, 176, 61, 101, 235, 68, 190, 62, 140, 156, 60, 46, 33, 45, 190, 56, 0, 228, 61, 148, 146, 19, 190, 147, 99, 160, 189, 204, 15, 193, 189, 125, 98, 2, 190, 151, 31, 32, 190, 122, 60, 247, 189, 220, 74, 252, 61, 108, 108, 10, 190, 203, 197, 80, 61, 18, 204, 9, 61, 200, 173, 46, 190, 2, 251, 10, 61, 123, 199, 44, 61, 175, 242, 102, 61, 253, 78, 8, 190, 134, 42, 43, 61, 226, 130, 45, 190, 237, 65, 141, 60, 67, 214, 214, 189, 1, 233, 208, 61, 216, 5, 76, 61, 28, 164, 90, 189, 232, 28, 51, 62, 148, 248, 39, 186, 7, 115, 38, 190, 211, 62, 36, 189, 2, 183, 144, 189, 114, 150, 188, 188, 201, 188, 0, 190, 130, 11, 19, 190, 17, 77, 217, 189, 125, 15, 7, 61, 168, 235, 47, 62, 152, 82, 146, 189, 108, 235, 10, 190, 170, 38, 10, 189, 109, 10, 0, 190, 150, 49, 181, 188, 104, 157, 34, 190, 95, 236, 24, 189, 144, 13, 146, 61, 92, 7, 53, 61, 133, 107, 186, 187, 9, 234, 32, 190, 59, 3, 96, 189, 15, 235, 93, 61, 201, 142, 187, 62, 104, 74, 138, 62, 108, 44, 228, 61, 9, 25, 160, 60, 249, 69, 130, 62, 34, 122, 167, 61, 133, 214, 163, 61, 83, 93, 193, 189, 1, 98, 74, 190, 104, 160, 14, 61, 177, 161, 89, 190, 93, 131, 208, 60, 68, 155, 34, 62, 15, 222, 38, 61, 92, 79, 21, 61, 70, 158, 82, 60, 232, 147, 33, 189, 162, 25, 2, 190, 131, 70, 185, 189, 10, 213, 39, 62, 106, 24, 232, 61, 34, 210, 200, 61, 1, 210, 5, 189, 200, 221, 213, 58, 106, 34, 254, 61, 150, 106, 101, 189, 115, 141, 43, 62, 200, 92, 13, 190, 174, 47, 37, 187, 233, 170, 171, 190, 130, 121, 67, 190, 41, 47, 90, 190, 18, 119, 202, 61, 146, 50, 38, 190, 43, 176, 25, 190, 10, 47, 218, 61, 247, 106, 15, 62, 224, 140, 239, 188, 239, 126, 251, 188, 114, 207, 18, 190, 227, 193, 19, 190, 101, 207, 6, 190, 197, 248, 231, 189, 105, 103, 30, 190, 143, 44, 9, 62, 66, 241, 176, 60, 41, 103, 159, 189, 192, 55, 57, 57, 122, 161, 15, 62, 95, 138, 143, 189, 26, 20, 140, 61, 212, 73, 34, 62, 9, 190, 147, 188, 167, 57, 242, 189, 144, 36, 30, 190, 136, 130, 52, 190, 86, 189, 89, 61, 220, 194, 119, 60, 54, 32, 65, 189, 90, 211, 9, 190, 180, 230, 222, 189, 67, 248, 23, 61, 187, 33, 194, 189, 195, 14, 32, 189, 182, 75, 159, 189, 151, 136, 249, 61, 181, 107, 20, 62, 201, 78, 74, 61, 34, 124, 145, 61, 46, 203, 169, 62, 98, 148, 82, 62, 81, 30, 37, 191, 138, 196, 190, 189, 115, 144, 40, 190, 216, 137, 53, 190, 33, 229, 167, 61, 44, 182, 26, 190, 168, 116, 223, 189, 19, 227, 133, 61, 225, 167, 225, 189, 159, 71, 200, 190, 156, 114, 171, 61, 206, 212, 41, 190, 54, 94, 88, 62, 128, 254, 234, 61, 215, 206, 182, 189, 250, 74, 254, 61, 111, 212, 129, 61, 139, 209, 153, 189, 10, 180, 120, 62, 70, 143, 101, 62, 85, 176, 86, 61, 166, 202, 153, 189, 239, 208, 112, 190, 223, 20, 219, 61, 130, 8, 121, 190, 116, 84, 243, 62, 2, 244, 29, 190, 33, 158, 34, 62, 181, 188, 44, 191, 157, 158, 112, 62, 34, 188, 130, 188, 195, 244, 218, 190, 101, 177, 254, 62, 143, 237, 135, 190, 142, 65, 84, 62, 98, 255, 161, 190, 166, 120, 35, 62, 69, 85, 208, 190, 10, 18, 80, 62, 149, 58, 21, 190, 226, 49, 211, 61, 27, 80, 140, 62, 160, 97, 175, 190, 24, 253, 133, 62, 140, 236, 129, 191, 193, 186, 140, 62, 113, 112, 208, 190, 144, 229, 106, 190, 222, 39, 80, 190, 211, 237, 35, 190, 5, 89, 179, 190, 255, 55, 172, 62, 95, 199, 18, 191, 133, 101, 249, 61, 209, 77, 196, 61, 144, 119, 65, 188, 58, 201, 50, 189, 186, 36, 218, 190, 24, 115, 159, 60, 228, 75, 77, 187, 122, 63, 104, 190, 114, 202, 157, 190, 27, 229, 199, 190, 159, 154, 245, 189, 44, 96, 94, 190, 148, 14, 204, 62, 201, 89, 213, 190, 101, 20, 143, 189, 51, 116, 252, 62, 35, 202, 211, 190, 56, 200, 63, 190, 235, 48, 119, 61, 111, 196, 87, 190, 175, 236, 117, 190, 136, 131, 67, 190, 232, 160, 213, 189, 54, 234, 238, 189, 41, 134, 26, 62, 39, 110, 202, 190, 189, 218, 46, 190, 73, 80, 97, 61, 175, 224, 76, 190, 110, 254, 42, 190, 172, 235, 107, 62, 254, 79, 99, 190, 60, 82, 161, 59, 234, 172, 69, 62, 164, 230, 4, 190, 178, 238, 93, 60, 162, 107, 19, 63, 247, 43, 159, 62, 201, 158, 254, 188, 129, 138, 67, 61, 15, 81, 146, 189, 82, 186, 78, 190, 158, 219, 35, 62, 220, 87, 129, 191, 149, 163, 68, 190, 85, 133, 24, 190, 192, 80, 192, 190, 68, 34, 30, 62, 134, 235, 205, 62, 0, 34, 138, 186, 195, 241, 1, 61, 77, 85, 189, 190, 196, 172, 254, 187, 149, 158, 69, 190, 82, 94, 239, 190, 85, 169, 81, 62, 104, 117, 87, 62, 78, 117, 124, 62, 6, 130, 150, 189, 27, 138, 138, 189, 183, 233, 236, 189, 175, 74, 116, 190, 76, 183, 176, 189, 8, 211, 250, 61, 91, 135, 155, 62, 116, 65, 68, 191, 2, 2, 154, 190, 68, 102, 197, 190, 2, 102, 172, 61, 105, 77, 124, 189, 139, 39, 30, 189, 199, 137, 14, 62, 85, 50, 158, 189, 46, 210, 29, 188, 15, 74, 39, 60, 111, 28, 52, 62, 164, 101, 169, 61, 11, 38, 61, 190, 70, 38, 5, 190, 206, 169, 44, 190, 197, 174, 59, 189, 211, 126, 41, 188, 172, 186, 38, 189, 222, 97, 29, 190, 248, 111, 167, 189, 181, 137, 45, 190, 132, 238, 42, 190, 242, 76, 224, 189, 245, 116, 207, 189, 238, 198, 59, 190, 41, 62, 156, 189, 157, 176, 93, 189, 193, 28, 48, 190, 56, 143, 205, 188, 238, 155, 101, 61, 62, 238, 229, 189, 143, 180, 241, 189, 53, 40, 8, 190, 167, 8, 11, 62, 79, 200, 97, 61, 58, 250, 31, 191, 105, 199, 244, 190, 193, 164, 1, 191, 209, 76, 16, 190, 230, 134, 163, 190, 110, 136, 99, 191, 177, 127, 4, 191, 35, 163, 126, 62, 206, 120, 158, 62, 137, 59, 93, 190, 227, 118, 18, 62, 106, 34, 91, 189, 10, 84, 31, 61, 41, 106, 236, 189, 30, 244, 123, 62, 33, 118, 196, 62, 150, 32, 41, 62, 153, 158, 110, 62, 72, 253, 158, 62, 117, 65, 29, 62, 190, 220, 229, 188, 42, 10, 149, 60, 192, 220, 155, 189, 107, 28, 137, 189, 107, 92, 160, 189, 71, 242, 202, 62, 196, 196, 93, 191, 122, 131, 220, 62, 218, 12, 3, 191, 252, 197, 177, 62, 149, 183, 39, 62, 95, 38, 161, 188, 212, 166, 102, 188, 98, 1, 13, 61, 97, 233, 164, 62, 163, 118, 26, 190, 14, 16, 205, 188, 65, 23, 106, 61, 107, 139, 113, 62, 250, 239, 230, 190, 48, 230, 95, 62, 231, 229, 116, 189, 248, 179, 134, 190, 228, 243, 222, 188, 122, 217, 227, 61, 36, 249, 160, 61, 103, 213, 48, 62, 68, 88, 133, 190, 232, 231, 117, 190, 192, 146, 216, 189, 100, 179, 101, 190, 91, 138, 235, 61, 113, 213, 130, 61, 9, 229, 129, 62, 202, 238, 18, 62, 9, 201, 162, 189, 231, 56, 159, 61, 23, 238, 156, 60, 195, 64, 1, 63, 99, 241, 228, 61, 160, 105, 119, 62, 253, 59, 134, 190, 223, 135, 154, 61, 230, 238, 175, 186, 192, 13, 56, 191, 4, 55, 8, 191, 8, 114, 248, 188, 178, 250, 147, 189, 24, 162, 69, 191, 236, 9, 80, 190, 118, 120, 255, 190, 74, 194, 134, 62, 232, 98, 43, 62, 12, 62, 33, 189, 149, 120, 239, 189, 15, 50, 176, 189, 156, 23, 236, 62, 179, 110, 11, 191, 61, 255, 243, 61, 154, 126, 16, 62, 96, 145, 107, 190, 3, 89, 206, 190, 229, 8, 164, 62, 11, 147, 8, 189, 88, 131, 4, 62, 143, 128, 188, 62, 144, 236, 15, 190, 152, 167, 106, 61, 122, 186, 22, 62, 96, 77, 61, 190, 94, 143, 238, 61, 102, 20, 196, 61, 178, 227, 62, 190, 153, 117, 100, 62, 8, 109, 92, 62, 32, 55, 184, 61, 175, 102, 111, 189, 214, 83, 98, 190, 78, 190, 23, 191, 192, 227, 194, 190, 83, 0, 196, 60, 121, 207, 156, 191, 226, 240, 26, 190, 83, 2, 88, 62, 103, 140, 50, 61, 87, 252, 85, 62, 56, 71, 159, 61, 2, 79, 160, 62, 252, 18, 16, 190, 216, 247, 225, 61, 63, 140, 28, 62, 248, 197, 92, 62, 239, 99, 221, 61, 2, 106, 150, 61, 147, 152, 28, 63, 253, 49, 12, 190, 127, 199, 81, 190, 35, 231, 2, 188, 220, 143, 3, 190, 23, 161, 76, 62, 169, 161, 175, 189, 209, 102, 183, 62, 222, 66, 182, 190, 47, 3, 195, 61, 67, 104, 224, 190, 190, 210, 157, 62, 34, 48, 19, 62, 239, 220, 105, 62, 187, 149, 50, 189, 246, 205, 158, 62, 253, 203, 213, 61, 198, 79, 135, 189, 106, 2, 14, 62, 32, 84, 168, 62, 246, 122, 2, 61, 98, 128, 18, 191, 187, 48, 68, 62, 162, 161, 60, 190, 75, 106, 120, 189, 99, 192, 37, 190, 169, 157, 204, 188, 71, 21, 16, 61, 62, 8, 254, 61, 14, 170, 4, 190, 58, 159, 11, 189, 153, 150, 149, 189, 139, 218, 55, 61, 103, 35, 129, 62, 109, 86, 97, 62, 135, 77, 67, 189, 103, 235, 144, 62, 23, 123, 148, 61, 38, 183, 214, 189, 1, 195, 131, 62, 205, 100, 4, 62, 63, 94, 81, 62, 216, 57, 239, 61, 187, 238, 0, 62, 35, 239, 225, 189, 72, 89, 123, 190, 107, 122, 10, 63, 68, 11, 165, 62, 184, 79, 189, 190, 235, 168, 164, 188, 117, 199, 146, 62, 31, 53, 233, 60, 241, 56, 163, 62, 104, 12, 124, 190, 164, 249, 92, 190, 196, 99, 148, 61, 118, 247, 8, 187, 76, 80, 183, 62, 163, 235, 137, 61, 233, 255, 51, 61, 155, 233, 173, 190, 14, 21, 73, 190, 205, 62, 44, 61, 118, 169, 3, 59, 142, 234, 233, 61, 71, 57, 50, 190, 4, 156, 211, 188, 73, 162, 223, 189, 249, 229, 100, 61, 183, 190, 242, 189, 37, 113, 164, 190, 20, 104, 121, 61, 188, 235, 62, 61, 106, 148, 139, 190, 154, 214, 45, 62, 241, 197, 61, 191, 250, 87, 254, 189, 175, 20, 62, 62, 147, 168, 95, 62, 14, 197, 86, 62, 255, 241, 187, 189, 248, 150, 191, 61, 208, 192, 176, 62, 156, 80, 96, 187, 160, 164, 65, 62, 60, 101, 125, 191, 228, 245, 229, 61, 182, 67, 47, 189, 172, 30, 177, 190, 209, 8, 76, 62, 147, 224, 201, 189, 213, 145, 156, 62, 162, 4, 75, 61, 11, 230, 21, 191, 241, 116, 136, 61, 212, 134, 151, 61, 216, 218, 124, 190, 234, 26, 126, 60, 107, 193, 76, 62, 164, 160, 130, 62, 62, 149, 9, 62, 162, 225, 213, 190, 48, 137, 16, 191, 122, 11, 71, 62, 17, 241, 142, 62, 207, 167, 150, 189, 149, 87, 131, 62, 196, 226, 4, 191, 157, 149, 152, 189, 61, 190, 215, 190};
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
                alignas(float) const unsigned char memory[] = {162, 95, 134, 188, 60, 141, 20, 62, 103, 66, 164, 62, 146, 215, 192, 62, 252, 112, 65, 189, 52, 223, 1, 189, 84, 207, 55, 61, 122, 67, 246, 188, 81, 206, 189, 61, 79, 246, 99, 189, 85, 171, 135, 189, 143, 82, 143, 62, 151, 39, 8, 62, 239, 226, 175, 61, 45, 104, 99, 61, 191, 176, 104, 189, 88, 104, 0, 190, 2, 7, 150, 189, 211, 193, 46, 190, 147, 9, 35, 190, 254, 48, 129, 62, 9, 147, 141, 190, 2, 157, 134, 61, 9, 99, 25, 60, 39, 203, 5, 62, 192, 218, 20, 62, 152, 72, 124, 62, 13, 110, 177, 189, 185, 235, 229, 188, 79, 165, 101, 62, 22, 88, 115, 190, 215, 192, 250, 60};
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
                alignas(float) const unsigned char memory[] = {228, 32, 131, 62, 24, 23, 238, 62, 96, 253, 179, 62, 82, 71, 152, 189, 249, 10, 106, 62, 10, 83, 57, 191, 19, 84, 24, 190, 239, 202, 153, 190, 131, 110, 33, 190, 108, 237, 112, 191, 179, 173, 26, 62, 86, 114, 182, 190, 100, 179, 157, 63, 76, 216, 84, 63, 180, 240, 44, 63, 21, 184, 23, 190, 0, 109, 215, 61, 114, 228, 251, 61, 82, 102, 176, 188, 61, 115, 63, 189, 61, 93, 215, 188, 37, 47, 4, 63, 222, 255, 145, 60, 3, 131, 48, 191, 181, 43, 160, 189, 24, 228, 161, 63, 37, 22, 209, 189, 39, 34, 78, 190, 20, 51, 45, 62, 31, 4, 74, 189, 152, 180, 179, 62, 132, 237, 23, 191, 177, 255, 153, 190, 203, 136, 244, 189, 150, 254, 88, 190, 213, 137, 124, 190, 85, 75, 180, 190, 14, 38, 7, 60, 163, 77, 163, 61, 59, 251, 169, 190, 130, 114, 15, 62, 92, 74, 214, 62, 249, 190, 183, 188, 30, 134, 151, 190, 102, 13, 235, 61, 199, 107, 253, 62, 155, 243, 42, 190, 30, 200, 54, 61, 184, 34, 160, 61, 94, 194, 231, 188, 148, 65, 170, 60, 206, 30, 29, 190, 229, 22, 220, 189, 223, 58, 112, 61, 236, 209, 218, 190, 177, 191, 178, 62, 121, 64, 222, 187, 175, 143, 205, 62, 190, 226, 157, 190, 174, 199, 227, 62, 85, 94, 105, 190, 9, 60, 152, 190, 238, 193, 176, 62, 134, 159, 66, 190};
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
                alignas(float) const unsigned char memory[] = {184, 198, 195, 189, 116, 17, 184, 190};
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
    alignas(float) const unsigned char memory[] = {51, 242, 45, 64, 128, 103, 216, 190, 175, 160, 60, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {234, 251, 7, 64, 60, 236, 207, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0040/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}