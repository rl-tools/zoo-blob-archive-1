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
                alignas(float) const unsigned char memory[] = {16, 211, 176, 190, 66, 246, 149, 60, 64, 48, 200, 60, 38, 72, 253, 190, 187, 30, 211, 63, 92, 64, 59, 63, 190, 93, 3, 63, 64, 46, 106, 191, 49, 140, 2, 63, 132, 214, 221, 61, 73, 192, 14, 63, 82, 130, 48, 63, 192, 32, 141, 60, 212, 211, 184, 191, 153, 32, 155, 190, 163, 145, 204, 190, 146, 203, 175, 63, 143, 247, 164, 62, 97, 49, 14, 62, 253, 209, 206, 62, 9, 9, 182, 62, 9, 194, 9, 63, 22, 10, 120, 63, 149, 17, 120, 62, 124, 209, 178, 190, 133, 20, 136, 62, 224, 119, 219, 190, 38, 59, 165, 190, 229, 46, 242, 190, 113, 222, 150, 190, 96, 56, 9, 190, 221, 70, 36, 63, 56, 255, 216, 190, 153, 163, 251, 190, 176, 115, 180, 62, 193, 173, 161, 60, 58, 114, 97, 188, 73, 136, 57, 191, 241, 137, 27, 62, 170, 7, 227, 62, 220, 23, 163, 63, 163, 22, 147, 62, 234, 63, 30, 191, 203, 146, 3, 63, 108, 106, 139, 62, 229, 212, 157, 62, 141, 197, 151, 190, 58, 97, 15, 63, 66, 133, 61, 191, 161, 8, 0, 191, 213, 9, 58, 190, 49, 233, 101, 189, 82, 32, 62, 189, 65, 51, 245, 190, 21, 244, 95, 62, 60, 198, 109, 63, 140, 73, 32, 63, 102, 62, 213, 190, 88, 197, 152, 189, 27, 14, 71, 191, 221, 253, 204, 62, 13, 100, 177, 62, 209, 36, 6, 191, 99, 139, 118, 190, 56, 74, 185, 190, 28, 248, 51, 190, 109, 91, 145, 62, 221, 17, 38, 63, 176, 146, 101, 190, 167, 230, 198, 189, 39, 11, 156, 63, 99, 188, 163, 189, 57, 205, 141, 61, 224, 239, 34, 62, 245, 38, 40, 57, 235, 109, 181, 62, 89, 125, 104, 61, 69, 218, 239, 190, 159, 247, 73, 63, 155, 94, 59, 63, 36, 150, 189, 61, 194, 124, 243, 190, 147, 232, 250, 190, 234, 68, 77, 191, 106, 249, 87, 63, 60, 29, 216, 190, 137, 243, 156, 61, 166, 109, 227, 62, 36, 93, 142, 62, 26, 179, 11, 191, 248, 16, 84, 63, 100, 250, 106, 191, 26, 196, 169, 190, 183, 176, 242, 189, 47, 196, 190, 191, 230, 3, 147, 190};
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
                alignas(float) const unsigned char memory[] = {11, 88, 25, 191, 206, 45, 155, 190, 69, 78, 163, 62, 219, 175, 25, 190, 247, 0, 145, 60, 141, 113, 49, 190, 170, 124, 195, 62, 162, 73, 231, 61, 129, 241, 242, 190, 121, 164, 156, 62, 89, 31, 79, 190, 61, 42, 219, 62, 166, 100, 220, 62, 134, 97, 15, 190, 243, 250, 41, 63, 250, 54, 249, 61, 93, 186, 173, 190, 44, 102, 42, 190, 40, 54, 178, 190, 151, 112, 176, 188, 49, 18, 218, 62, 197, 207, 90, 62, 3, 14, 33, 63, 120, 143, 236, 189, 59, 137, 52, 190, 169, 152, 152, 189, 92, 115, 40, 61, 46, 28, 14, 190, 124, 104, 117, 190, 240, 26, 173, 62, 192, 120, 147, 190, 73, 71, 77, 190};
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
                alignas(float) const unsigned char memory[] = {43, 209, 25, 62, 58, 63, 236, 190, 102, 71, 206, 190, 108, 192, 63, 62, 188, 138, 91, 190, 239, 29, 113, 191, 159, 163, 165, 190, 91, 97, 166, 62, 184, 196, 192, 62, 43, 166, 185, 61, 120, 233, 106, 62, 218, 193, 138, 62, 22, 228, 174, 61, 200, 140, 32, 62, 74, 212, 226, 189, 139, 47, 180, 60, 32, 184, 254, 60, 21, 161, 206, 189, 129, 111, 190, 62, 183, 110, 49, 62, 86, 116, 106, 62, 135, 88, 31, 62, 40, 47, 84, 186, 168, 243, 240, 61, 140, 199, 34, 189, 205, 161, 15, 191, 88, 187, 18, 63, 251, 204, 154, 61, 73, 252, 115, 62, 86, 54, 210, 190, 150, 11, 127, 191, 189, 138, 130, 189, 222, 110, 146, 189, 126, 74, 143, 189, 88, 53, 8, 190, 90, 133, 60, 190, 165, 88, 176, 189, 11, 224, 36, 62, 224, 4, 212, 188, 131, 24, 19, 190, 208, 154, 160, 189, 0, 94, 84, 62, 49, 61, 42, 188, 70, 68, 133, 62, 108, 52, 218, 189, 190, 220, 82, 190, 46, 137, 111, 62, 195, 70, 83, 190, 244, 225, 151, 62, 136, 153, 241, 188, 117, 33, 44, 190, 252, 212, 157, 189, 77, 217, 139, 190, 46, 18, 97, 62, 135, 140, 61, 62, 232, 207, 157, 61, 1, 154, 31, 62, 115, 11, 142, 189, 173, 57, 39, 189, 139, 189, 146, 61, 238, 161, 171, 190, 66, 246, 42, 60, 152, 177, 24, 191, 116, 98, 66, 62, 36, 74, 163, 61, 102, 225, 224, 61, 107, 69, 160, 62, 61, 106, 155, 189, 113, 60, 86, 61, 241, 40, 147, 61, 229, 71, 9, 190, 252, 175, 136, 190, 194, 169, 114, 190, 99, 141, 57, 190, 51, 175, 15, 190, 185, 66, 154, 190, 91, 107, 43, 62, 47, 18, 80, 190, 127, 78, 17, 62, 46, 234, 44, 190, 90, 226, 195, 190, 51, 75, 30, 62, 105, 242, 156, 190, 57, 29, 1, 189, 128, 32, 19, 61, 85, 213, 15, 61, 5, 134, 221, 189, 15, 123, 118, 189, 128, 218, 15, 62, 78, 52, 163, 62, 236, 190, 29, 62, 42, 116, 214, 188, 199, 80, 107, 189, 204, 105, 115, 62, 32, 43, 242, 62, 224, 10, 254, 189, 122, 158, 46, 189, 249, 234, 22, 190, 193, 151, 201, 188, 126, 221, 247, 61, 57, 113, 28, 189, 229, 234, 241, 188, 60, 101, 101, 190, 79, 139, 247, 188, 187, 129, 192, 190, 190, 237, 98, 61, 153, 213, 174, 189, 64, 166, 152, 190, 15, 106, 228, 189, 54, 149, 148, 187, 146, 216, 150, 61, 20, 135, 237, 61, 224, 225, 116, 190, 94, 79, 10, 62, 193, 26, 13, 62, 248, 132, 105, 190, 148, 44, 45, 189, 228, 242, 162, 61, 2, 199, 175, 190, 99, 182, 112, 190, 41, 62, 92, 189, 162, 180, 164, 61, 163, 241, 50, 190, 251, 242, 142, 189, 70, 235, 110, 190, 74, 251, 59, 62, 149, 169, 163, 62, 153, 194, 164, 189, 140, 167, 34, 62, 81, 81, 97, 189, 107, 28, 125, 61, 42, 86, 218, 61, 72, 86, 174, 59, 148, 24, 46, 190, 82, 174, 67, 190, 21, 183, 140, 61, 155, 246, 192, 189, 32, 195, 133, 61, 119, 157, 118, 57, 225, 151, 128, 189, 241, 11, 101, 56, 33, 233, 145, 188, 215, 207, 78, 189, 134, 134, 41, 189, 92, 88, 198, 61, 143, 209, 209, 61, 242, 135, 253, 189, 196, 10, 29, 190, 136, 82, 72, 188, 195, 83, 72, 190, 190, 169, 251, 189, 73, 152, 42, 188, 250, 33, 29, 60, 243, 211, 1, 189, 148, 198, 13, 61, 204, 110, 206, 189, 57, 196, 207, 189, 15, 89, 5, 62, 197, 200, 10, 189, 109, 244, 87, 189, 159, 220, 39, 62, 138, 238, 114, 62, 155, 19, 206, 189, 48, 57, 215, 61, 238, 173, 218, 61, 121, 134, 36, 189, 108, 1, 100, 62, 223, 229, 165, 61, 115, 73, 186, 187, 82, 58, 32, 62, 249, 206, 60, 61, 115, 7, 59, 61, 36, 174, 83, 62, 51, 218, 142, 62, 95, 167, 228, 61, 142, 182, 108, 61, 54, 81, 72, 62, 10, 155, 131, 61, 167, 191, 64, 190, 75, 239, 202, 61, 94, 68, 191, 61, 158, 125, 189, 189, 160, 242, 29, 62, 107, 240, 251, 61, 172, 126, 220, 61, 136, 145, 57, 190, 150, 78, 30, 189, 227, 124, 76, 189, 4, 82, 68, 61, 183, 153, 163, 61, 247, 245, 242, 190, 31, 75, 78, 62, 22, 193, 75, 61, 248, 135, 170, 189, 183, 228, 70, 190, 24, 8, 246, 190, 168, 228, 131, 190, 17, 254, 111, 62, 22, 33, 227, 189, 9, 106, 103, 190, 160, 49, 78, 62, 140, 92, 131, 190, 39, 27, 115, 62, 87, 135, 188, 62, 18, 216, 64, 188, 178, 12, 114, 60, 20, 27, 165, 62, 87, 59, 150, 190, 195, 219, 73, 191, 125, 149, 160, 62, 1, 201, 211, 190, 93, 51, 56, 62, 20, 134, 182, 190, 173, 132, 141, 190, 131, 184, 57, 62, 55, 108, 223, 62, 224, 173, 23, 190, 67, 207, 48, 190, 0, 65, 233, 190, 74, 153, 120, 190, 141, 159, 239, 189, 81, 67, 161, 190, 198, 249, 135, 62, 254, 247, 150, 189, 139, 175, 43, 62, 159, 198, 145, 62, 206, 143, 139, 62, 136, 139, 1, 190, 117, 101, 161, 61, 53, 230, 205, 62, 4, 87, 251, 61, 174, 127, 197, 190, 123, 223, 209, 190, 106, 3, 124, 61, 114, 177, 225, 190, 68, 167, 198, 62, 241, 7, 196, 61, 62, 174, 24, 191, 13, 56, 213, 62, 165, 84, 8, 190, 6, 244, 220, 189, 127, 118, 221, 62, 190, 239, 58, 190, 189, 174, 143, 190, 61, 196, 216, 190, 205, 227, 52, 61, 113, 85, 192, 190, 144, 142, 255, 190, 76, 148, 36, 190, 245, 113, 38, 62, 228, 20, 235, 190, 128, 89, 183, 190, 115, 111, 13, 190, 214, 66, 132, 61, 145, 235, 204, 61, 158, 218, 238, 190, 120, 56, 146, 189, 51, 162, 181, 191, 56, 58, 41, 191, 181, 180, 4, 62, 78, 111, 72, 62, 45, 227, 149, 191, 209, 28, 211, 190, 195, 41, 15, 62, 49, 129, 69, 62, 140, 87, 169, 62, 25, 241, 10, 62, 197, 45, 159, 62, 98, 212, 77, 188, 176, 221, 132, 62, 138, 81, 43, 190, 142, 162, 228, 189, 228, 100, 144, 62, 95, 19, 218, 189, 32, 70, 50, 63, 79, 102, 174, 61, 245, 32, 25, 62, 20, 86, 227, 61, 223, 12, 109, 62, 61, 128, 143, 188, 8, 35, 44, 60, 81, 68, 27, 191, 174, 208, 32, 63, 81, 249, 53, 189, 131, 142, 179, 189, 148, 54, 123, 190, 216, 139, 97, 191, 202, 159, 130, 62, 42, 212, 175, 188, 128, 113, 53, 191, 49, 184, 158, 62, 144, 108, 7, 191, 54, 214, 95, 191, 83, 147, 127, 191, 98, 70, 98, 62, 142, 158, 137, 62, 116, 192, 31, 188, 107, 52, 53, 190, 36, 234, 182, 189, 193, 183, 163, 61, 30, 61, 196, 61, 140, 34, 141, 189, 37, 170, 93, 191, 251, 113, 62, 62, 17, 53, 26, 61, 175, 99, 13, 190, 222, 50, 4, 190, 243, 1, 11, 61, 187, 200, 91, 62, 77, 41, 6, 62, 83, 182, 71, 62, 15, 68, 59, 62, 218, 58, 167, 60, 82, 214, 85, 62, 182, 3, 30, 63, 252, 111, 76, 61, 189, 235, 150, 62, 237, 49, 165, 61, 247, 33, 255, 190, 71, 127, 110, 191, 241, 170, 32, 62, 203, 54, 86, 62, 171, 77, 24, 61, 131, 12, 196, 60, 166, 201, 138, 190, 49, 123, 223, 62, 37, 233, 132, 60, 69, 215, 196, 190, 28, 145, 19, 191, 195, 72, 231, 189, 46, 71, 231, 189, 69, 99, 199, 60, 219, 235, 92, 188, 102, 4, 10, 191, 72, 198, 35, 62, 81, 58, 209, 189, 82, 71, 75, 190, 111, 28, 124, 62, 186, 217, 73, 190, 135, 253, 24, 190, 246, 98, 232, 189, 79, 100, 179, 60, 62, 13, 233, 61, 154, 159, 227, 190, 35, 62, 200, 61, 21, 213, 126, 62, 189, 97, 20, 188, 107, 202, 39, 189, 239, 196, 113, 62, 205, 161, 236, 62, 145, 1, 94, 62, 159, 170, 74, 191, 88, 128, 192, 60, 238, 158, 133, 190, 124, 169, 20, 189, 224, 123, 145, 61, 28, 206, 104, 62, 158, 176, 23, 191, 48, 131, 91, 189, 30, 60, 81, 62, 22, 67, 0, 63, 170, 35, 46, 189, 115, 153, 209, 61, 199, 160, 124, 61, 54, 190, 50, 189, 60, 210, 61, 62, 223, 213, 210, 190, 156, 90, 196, 61, 84, 210, 201, 189, 27, 163, 129, 190, 41, 187, 35, 62, 9, 128, 85, 62, 96, 119, 130, 62, 102, 111, 236, 189, 107, 35, 88, 62, 96, 32, 152, 189, 52, 226, 13, 62, 168, 55, 197, 60, 123, 217, 99, 61, 50, 229, 170, 61, 67, 183, 102, 62, 60, 178, 128, 190, 48, 215, 2, 191, 179, 241, 176, 187, 179, 38, 24, 62, 122, 138, 162, 62, 215, 253, 87, 189, 100, 53, 36, 62, 220, 30, 44, 62, 30, 54, 33, 61, 72, 253, 7, 189, 177, 55, 221, 61, 76, 66, 231, 189, 136, 205, 101, 188, 12, 35, 29, 62, 73, 149, 167, 61, 42, 165, 81, 62, 82, 178, 51, 62, 149, 87, 135, 189, 73, 129, 163, 188, 85, 178, 116, 62, 49, 115, 208, 187, 224, 21, 156, 189, 27, 247, 65, 62, 55, 76, 231, 60, 205, 55, 131, 61, 32, 212, 199, 189, 174, 133, 105, 62, 202, 98, 67, 61, 236, 113, 38, 190, 242, 166, 103, 62, 169, 208, 138, 188, 160, 248, 71, 62, 230, 169, 142, 189, 213, 237, 13, 191, 218, 121, 181, 60, 244, 129, 7, 62, 214, 3, 175, 189, 85, 147, 6, 62, 189, 202, 53, 62, 227, 111, 254, 61, 15, 153, 47, 190, 85, 208, 60, 62, 44, 90, 74, 189, 140, 202, 0, 63, 151, 123, 11, 62, 219, 188, 48, 62, 87, 241, 73, 61, 192, 18, 4, 187, 64, 82, 124, 61, 152, 48, 42, 190, 5, 105, 145, 62, 108, 34, 23, 62, 106, 134, 49, 189, 70, 206, 64, 62, 31, 7, 47, 62, 4, 38, 255, 61, 91, 215, 103, 189, 134, 207, 207, 61, 63, 237, 137, 190, 89, 113, 46, 62, 121, 5, 165, 189, 28, 248, 137, 189, 223, 165, 184, 60, 208, 242, 163, 189, 52, 145, 112, 190, 109, 103, 9, 191, 89, 5, 129, 62, 198, 112, 101, 189, 35, 134, 183, 189, 33, 159, 253, 190, 168, 233, 68, 62, 170, 254, 126, 190, 158, 204, 140, 62, 245, 250, 205, 190, 58, 181, 19, 190, 221, 2, 133, 62, 61, 170, 50, 189, 194, 148, 180, 62, 75, 212, 248, 189, 199, 125, 164, 190, 159, 190, 173, 188, 92, 198, 129, 62, 248, 158, 7, 190, 115, 228, 41, 190, 249, 241, 61, 61, 71, 129, 86, 62, 59, 27, 155, 62, 177, 158, 2, 62, 99, 132, 48, 189, 54, 188, 18, 62, 140, 104, 94, 62, 92, 65, 207, 61, 205, 152, 208, 60, 55, 197, 24, 62, 163, 158, 9, 62, 86, 98, 37, 190, 138, 61, 136, 61, 237, 81, 204, 62, 247, 144, 122, 187, 49, 205, 49, 61, 11, 93, 121, 60, 244, 38, 99, 189, 170, 90, 50, 61, 108, 67, 50, 189, 92, 36, 136, 61, 66, 167, 16, 62, 124, 191, 226, 189, 110, 21, 14, 191, 178, 122, 213, 61, 138, 146, 192, 190, 29, 179, 169, 59, 148, 12, 226, 61, 248, 152, 252, 61, 212, 69, 127, 61, 137, 174, 201, 60, 52, 117, 211, 61, 177, 90, 247, 189, 233, 152, 60, 62, 14, 22, 167, 190, 220, 185, 85, 190, 78, 86, 145, 189, 213, 28, 110, 61, 22, 25, 164, 62, 172, 244, 186, 187, 112, 158, 220, 61, 98, 191, 65, 189, 234, 220, 33, 191, 208, 227, 220, 189, 215, 128, 26, 189, 14, 194, 152, 190, 230, 163, 39, 190, 179, 255, 30, 190, 65, 51, 151, 189, 158, 56, 6, 61, 173, 64, 71, 190, 63, 46, 13, 191, 15, 110, 151, 62, 69, 131, 128, 62, 5, 228, 164, 190, 148, 72, 177, 190, 38, 100, 7, 190, 199, 190, 36, 190, 250, 254, 91, 62, 253, 76, 194, 61, 145, 126, 170, 190, 25, 157, 149, 62, 16, 1, 189, 60, 140, 248, 69, 62, 171, 29, 132, 62, 109, 243, 76, 190, 49, 66, 228, 190, 28, 44, 224, 189, 3, 59, 58, 190, 23, 189, 184, 62, 197, 146, 113, 62, 80, 130, 251, 185, 34, 165, 27, 189, 70, 81, 56, 60, 22, 32, 36, 191, 174, 34, 214, 190, 248, 113, 198, 189, 75, 188, 214, 190, 25, 116, 168, 191, 72, 31, 29, 190, 48, 154, 195, 187, 68, 10, 181, 61, 94, 217, 34, 189, 80, 123, 161, 62, 92, 198, 153, 62, 142, 123, 224, 61, 142, 115, 194, 188, 55, 48, 226, 190, 227, 189, 123, 62, 224, 107, 184, 190, 46, 96, 145, 61, 223, 61, 208, 61, 134, 59, 73, 62, 250, 153, 5, 62, 203, 213, 144, 189, 201, 157, 97, 189, 69, 179, 22, 189, 133, 21, 90, 190, 214, 140, 233, 189, 137, 29, 107, 189, 133, 195, 93, 62, 54, 102, 20, 190, 152, 78, 137, 190, 210, 185, 235, 59, 203, 225, 145, 190, 177, 25, 23, 62, 231, 17, 21, 62, 15, 15, 74, 190, 106, 2, 56, 61, 131, 112, 23, 62, 16, 14, 247, 61, 87, 104, 7, 62, 113, 54, 49, 189, 174, 156, 162, 62, 139, 85, 172, 190, 39, 99, 212, 61, 118, 95, 43, 62, 180, 102, 137, 61, 67, 90, 160, 190, 95, 19, 37, 191, 61, 40, 202, 188, 11, 131, 216, 190, 92, 173, 80, 189, 192, 76, 152, 62, 122, 182, 0, 191, 130, 150, 133, 61, 166, 87, 224, 58, 79, 23, 225, 189, 54, 119, 123, 60, 55, 105, 33, 191, 94, 118, 14, 191, 3, 203, 3, 189, 27, 132, 74, 62, 72, 10, 1, 62, 224, 244, 60, 191, 213, 28, 161, 189, 231, 157, 20, 62, 42, 165, 71, 62, 175, 44, 230, 190, 160, 241, 245, 62, 85, 23, 153, 62, 143, 158, 4, 190, 44, 151, 147, 190, 35, 245, 230, 61, 216, 102, 175, 61, 236, 219, 19, 189, 59, 24, 14, 191, 38, 95, 83, 189, 82, 59, 196, 190, 77, 232, 156, 190, 183, 72, 141, 188, 211, 144, 63, 190, 149, 184, 248, 188, 243, 41, 60, 61, 143, 120, 106, 61, 38, 118, 151, 62, 108, 109, 51, 190, 229, 170, 198, 189, 237, 124, 169, 189, 77, 14, 235, 61, 120, 176, 214, 60, 132, 99, 17, 191, 102, 9, 113, 61, 29, 113, 217, 61, 240, 106, 119, 189, 136, 225, 37, 187, 12, 216, 125, 62, 206, 233, 48, 61, 235, 43, 122, 60, 238, 240, 235, 61, 148, 124, 54, 190, 129, 217, 44, 190, 222, 165, 113, 62, 91, 196, 11, 190, 228, 162, 214, 61, 187, 133, 32, 61, 237, 93, 25, 62, 157, 18, 100, 62, 180, 202, 152, 190, 202, 83, 210, 60, 173, 81, 191, 61, 135, 68, 53, 62, 165, 179, 56, 191, 220, 59, 2, 191, 102, 203, 167, 61, 149, 157, 201, 190, 236, 143, 107, 62, 242, 111, 122, 62, 126, 250, 1, 191, 7, 195, 127, 188, 6, 66, 11, 189, 129, 212, 92, 60, 122, 149, 37, 190, 161, 189, 46, 191, 7, 211, 143, 61, 214, 245, 232, 190, 238, 62, 224, 187, 177, 37, 33, 191, 96, 45, 25, 191, 217, 95, 21, 189, 71, 202, 122, 61, 5, 12, 26, 190, 214, 39, 161, 62, 25, 172, 43, 190, 249, 247, 121, 190, 68, 71, 114, 62, 85, 36, 16, 61, 122, 21, 14, 62, 134, 242, 193, 190, 134, 226, 173, 190, 244, 155, 110, 189, 64, 211, 147, 190, 105, 211, 10, 62, 75, 79, 89, 190, 93, 201, 104, 189, 188, 123, 0, 62, 75, 125, 230, 189, 36, 60, 172, 62, 191, 17, 77, 190, 254, 250, 249, 190, 212, 11, 35, 62, 38, 189, 47, 187, 57, 77, 58, 189, 244, 29, 168, 61, 233, 180, 230, 189, 11, 154, 51, 62, 6, 255, 44, 62, 206, 107, 146, 62, 136, 69, 140, 189, 7, 221, 24, 62, 175, 85, 59, 62, 106, 96, 52, 189, 206, 106, 168, 61, 219, 24, 164, 61, 13, 189, 196, 189, 19, 144, 53, 191, 247, 165, 28, 190, 155, 231, 39, 62, 199, 4, 164, 190, 109, 74, 130, 188, 98, 248, 120, 190, 203, 48, 84, 62, 218, 165, 169, 190, 246, 227, 130, 61, 21, 151, 166, 59, 211, 148, 104, 62, 221, 97, 92, 190, 93, 98, 99, 188, 4, 14, 61, 190, 55, 222, 132, 59, 57, 75, 192, 60, 15, 204, 196, 59, 13, 109, 106, 190, 48, 93, 215, 189, 34, 55, 67, 189, 34, 90, 30, 190, 125, 143, 224, 190, 148, 218, 203, 190, 113, 169, 152, 190, 70, 123, 240, 190, 163, 246, 224, 188, 238, 44, 220, 188, 254, 253, 158, 188, 131, 208, 140, 189, 40, 227, 6, 190, 86, 199, 238, 189, 18, 133, 253, 190, 137, 105, 219, 62, 159, 38, 163, 190, 123, 93, 206, 62, 129, 30, 80, 61, 241, 1, 20, 62, 65, 207, 3, 189, 244, 22, 208, 189, 194, 72, 92, 190, 2, 81, 42, 60, 42, 54, 0, 191, 57, 113, 252, 189, 214, 135, 78, 61, 90, 173, 255, 60, 47, 54, 59, 61, 139, 229, 10, 62, 65, 227, 13, 62, 187, 240, 126, 60, 69, 80, 203, 61, 71, 58, 215, 190, 46, 86, 167, 60, 57, 80, 254, 61, 83, 137, 176, 189, 111, 143, 172, 190, 231, 95, 49, 62, 195, 15, 105, 62, 233, 185, 7, 189, 16, 52, 140, 60, 255, 209, 153, 189, 160, 117, 34, 62, 198, 245, 179, 190, 127, 90, 31, 61, 62, 229, 166, 60, 29, 187, 206, 61, 224, 143, 97, 190, 136, 124, 203, 190, 191, 162, 41, 62, 228, 188, 18, 60, 43, 28, 82, 60, 121, 23, 143, 61, 221, 65, 52, 62, 221, 187, 171, 190, 163, 14, 59, 191, 16, 93, 223, 189, 242, 175, 68, 189, 19, 218, 204, 62, 175, 147, 0, 61, 89, 110, 227, 60, 140, 48, 175, 185, 87, 71, 215, 62, 139, 192, 18, 190, 20, 222, 9, 190, 120, 74, 195, 62, 116, 160, 141, 59, 201, 40, 101, 190, 169, 177, 12, 189, 223, 106, 194, 61, 52, 158, 183, 62, 24, 220, 221, 189, 130, 241, 198, 62, 218, 179, 30, 61, 217, 245, 196, 61, 173, 12, 134, 190, 135, 206, 110, 62, 13, 109, 50, 61, 136, 242, 188, 62, 51, 3, 157, 190, 211, 12, 112, 191, 137, 19, 205, 190, 227, 247, 26, 190, 193, 222, 17, 190, 80, 93, 131, 62, 244, 223, 109, 189, 223, 117, 56, 191, 136, 217, 69, 188, 3, 146, 181, 189, 217, 196, 201, 62, 156, 37, 168, 189, 108, 136, 27, 190, 110, 1, 86, 62, 216, 82, 156, 62, 213, 227, 131, 190, 64, 237, 224, 62, 39, 100, 22, 190, 161, 140, 15, 188, 200, 123, 182, 189, 179, 116, 150, 61, 187, 245, 52, 62, 56, 29, 57, 62, 79, 214, 243, 61, 240, 174, 115, 189, 31, 159, 13, 61, 108, 145, 151, 62, 148, 164, 116, 189, 135, 246, 31, 189, 102, 1, 157, 62, 105, 24, 244, 189, 151, 127, 87, 61, 8, 125, 121, 189, 110, 126, 30, 191, 145, 251, 239, 190, 119, 197, 51, 190, 9, 111, 28, 61, 243, 98, 49, 188, 222, 29, 57, 188, 239, 186, 161, 189, 204, 171, 35, 190, 151, 165, 237, 60, 154, 166, 32, 61, 120, 128, 224, 189, 135, 68, 82, 189, 237, 80, 148, 61, 190, 216, 96, 190, 212, 153, 18, 189, 132, 93, 35, 190, 29, 176, 104, 190, 234, 228, 5, 62, 220, 223, 20, 61, 74, 5, 127, 61, 92, 74, 12, 190, 62, 76, 102, 61, 23, 119, 168, 189, 122, 63, 163, 189, 45, 122, 11, 190, 24, 80, 13, 189, 31, 103, 195, 60, 220, 178, 12, 189, 192, 227, 242, 61, 142, 254, 66, 189, 129, 174, 9, 189, 3, 91, 49, 190, 13, 61, 153, 61, 27, 128, 158, 59, 190, 122, 48, 62, 28, 54, 44, 188, 93, 2, 166, 188, 143, 177, 2, 190, 65, 204, 32, 189, 121, 243, 33, 190, 238, 176, 42, 190, 141, 235, 190, 61, 188, 151, 30, 62, 251, 139, 25, 190, 45, 7, 149, 61, 107, 105, 181, 189, 214, 203, 168, 189, 53, 13, 3, 190, 145, 61, 25, 61, 64, 105, 253, 61, 34, 174, 250, 59, 21, 136, 6, 189, 200, 253, 0, 62, 146, 128, 122, 61, 5, 100, 42, 190, 93, 13, 73, 189, 123, 128, 167, 189, 82, 223, 244, 58, 6, 130, 75, 61, 223, 126, 180, 61, 160, 189, 160, 186, 82, 134, 20, 189, 29, 181, 202, 61, 241, 16, 101, 189, 103, 232, 34, 62, 115, 63, 238, 189, 6, 0, 204, 189, 112, 226, 39, 190, 22, 164, 206, 62, 134, 200, 154, 190, 19, 77, 199, 188, 23, 129, 227, 189, 17, 45, 131, 62, 166, 162, 175, 190, 253, 164, 146, 191, 192, 194, 5, 62, 209, 196, 198, 190, 88, 118, 96, 62, 176, 170, 182, 62, 186, 4, 159, 190, 244, 240, 106, 62, 156, 233, 103, 189, 8, 185, 176, 61, 227, 151, 130, 190, 157, 187, 17, 191, 73, 45, 142, 191, 98, 33, 27, 191, 197, 175, 11, 61, 82, 235, 174, 61, 130, 72, 66, 191, 83, 97, 106, 188, 86, 168, 229, 189, 120, 110, 132, 62, 157, 180, 202, 191, 101, 123, 160, 62, 201, 77, 93, 62, 208, 181, 1, 188, 74, 68, 49, 190, 50, 250, 130, 189, 187, 169, 125, 188, 85, 224, 131, 62, 131, 103, 180, 189, 186, 83, 134, 189, 137, 151, 144, 62, 79, 222, 14, 61, 46, 216, 150, 190, 239, 111, 59, 191, 36, 141, 129, 61, 1, 218, 137, 190, 124, 109, 57, 190, 234, 163, 28, 62, 178, 251, 155, 190, 206, 76, 135, 188, 20, 125, 112, 189, 191, 133, 4, 189, 12, 208, 240, 61, 143, 61, 201, 190, 87, 173, 219, 186, 209, 228, 193, 189, 249, 215, 163, 60, 151, 110, 130, 62, 83, 224, 73, 190, 144, 242, 176, 61, 33, 47, 232, 62, 144, 158, 192, 62, 47, 230, 153, 190, 91, 121, 218, 61, 145, 200, 172, 62, 10, 169, 7, 62, 32, 134, 142, 190, 91, 100, 184, 59, 61, 153, 68, 190, 75, 251, 238, 189, 30, 176, 123, 190, 58, 42, 141, 190, 121, 132, 80, 189, 5, 133, 252, 188, 66, 160, 171, 61, 160, 80, 21, 62, 4, 195, 45, 62, 12, 88, 109, 62, 253, 192, 149, 190, 244, 243, 174, 61, 79, 251, 242, 60, 245, 126, 99, 189, 67, 221, 9, 190, 230, 51, 180, 190, 35, 47, 229, 60, 37, 157, 166, 60, 25, 104, 151, 189, 38, 72, 6, 62, 198, 229, 13, 190, 161, 173, 132, 62, 34, 222, 91, 62, 58, 62, 44, 62, 14, 54, 50, 190, 228, 202, 48, 61, 142, 133, 13, 62, 98, 208, 147, 62, 184, 235, 38, 62, 94, 129, 138, 62, 175, 18, 92, 190, 14, 90, 176, 189, 23, 117, 16, 190, 157, 251, 1, 190, 61, 18, 155, 189, 99, 154, 54, 190, 95, 120, 198, 187, 236, 90, 188, 61, 153, 199, 228, 61, 43, 188, 71, 189, 89, 167, 207, 60, 77, 193, 51, 190, 21, 221, 140, 189, 127, 127, 210, 189, 203, 211, 253, 188, 60, 224, 110, 188, 38, 133, 19, 189, 137, 8, 211, 189, 1, 1, 4, 190, 159, 15, 229, 188, 153, 24, 14, 62, 200, 70, 217, 189, 177, 193, 31, 189, 47, 162, 56, 61, 71, 37, 63, 61, 111, 49, 241, 189, 202, 135, 156, 61, 251, 34, 10, 61, 169, 78, 246, 61, 146, 222, 179, 60, 157, 23, 227, 189, 94, 230, 143, 189, 130, 26, 23, 62};
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
                alignas(float) const unsigned char memory[] = {155, 223, 151, 61, 212, 170, 56, 61, 153, 40, 180, 61, 220, 224, 188, 190, 249, 109, 232, 189, 27, 88, 128, 61, 127, 201, 104, 62, 204, 198, 43, 62, 144, 152, 138, 62, 1, 104, 47, 61, 61, 155, 25, 62, 150, 242, 214, 189, 79, 192, 139, 62, 186, 16, 56, 188, 85, 202, 3, 62, 3, 51, 7, 61, 245, 194, 9, 62, 41, 168, 76, 62, 39, 86, 246, 188, 47, 131, 75, 62, 51, 71, 0, 62, 92, 57, 80, 190, 128, 72, 32, 61, 15, 175, 150, 62, 200, 232, 115, 61, 75, 248, 156, 189, 66, 38, 35, 190, 180, 46, 158, 189, 6, 160, 13, 62, 102, 36, 46, 62, 249, 80, 81, 62, 148, 40, 80, 190};
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
                alignas(float) const unsigned char memory[] = {126, 105, 74, 191, 3, 253, 142, 60, 85, 204, 55, 62, 94, 174, 129, 190, 198, 45, 22, 190, 35, 28, 244, 188, 201, 37, 117, 191, 39, 210, 68, 63, 2, 108, 161, 191, 22, 183, 246, 190, 158, 98, 196, 62, 122, 3, 132, 190, 84, 193, 100, 189, 122, 18, 104, 190, 38, 238, 149, 62, 125, 104, 201, 60, 41, 12, 82, 63, 254, 166, 12, 62, 228, 217, 222, 62, 97, 150, 133, 61, 95, 254, 87, 191, 56, 120, 209, 62, 198, 148, 253, 190, 66, 183, 171, 189, 123, 139, 29, 191, 217, 121, 186, 190, 92, 107, 89, 61, 70, 31, 17, 190, 52, 12, 78, 63, 101, 21, 175, 62, 240, 149, 36, 62, 187, 254, 113, 188, 142, 137, 127, 62, 218, 181, 212, 62, 213, 33, 153, 60, 30, 78, 99, 62, 99, 217, 15, 190, 153, 236, 101, 190, 54, 131, 176, 190, 183, 3, 38, 62, 90, 242, 176, 60, 23, 137, 48, 191, 234, 187, 183, 61, 38, 20, 144, 189, 179, 44, 63, 190, 111, 32, 20, 61, 19, 94, 115, 61, 121, 31, 59, 190, 71, 252, 54, 60, 135, 236, 79, 190, 184, 254, 219, 189, 202, 81, 129, 190, 121, 156, 88, 62, 81, 46, 181, 60, 222, 219, 104, 62, 204, 198, 50, 190, 74, 87, 149, 188, 135, 97, 223, 62, 200, 249, 33, 189, 251, 236, 29, 57, 146, 20, 181, 189, 242, 52, 76, 190, 102, 30, 40, 188, 20, 44, 8, 62};
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
                alignas(float) const unsigned char memory[] = {62, 143, 250, 60, 193, 156, 212, 190};
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
    alignas(float) const unsigned char memory[] = {122, 21, 5, 192, 231, 228, 231, 191, 167, 107, 35, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {192, 123, 119, 192, 94, 151, 69, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0046/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}