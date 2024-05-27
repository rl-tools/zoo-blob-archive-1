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
                alignas(float) const unsigned char memory[] = {16, 122, 131, 62, 111, 17, 7, 191, 196, 131, 35, 191, 200, 160, 168, 61, 140, 11, 188, 61, 14, 136, 67, 62, 131, 239, 59, 63, 232, 224, 112, 191, 163, 192, 55, 190, 63, 127, 92, 191, 163, 38, 12, 63, 51, 129, 246, 188, 87, 94, 141, 191, 88, 187, 169, 190, 225, 143, 125, 61, 199, 13, 68, 191, 1, 221, 73, 63, 20, 119, 246, 61, 156, 1, 28, 191, 132, 165, 139, 190, 93, 180, 36, 63, 153, 234, 2, 61, 17, 60, 130, 63, 41, 130, 40, 190, 122, 98, 53, 62, 246, 208, 147, 62, 177, 198, 179, 59, 2, 159, 251, 190, 126, 21, 128, 63, 8, 240, 181, 62, 19, 125, 5, 190, 73, 33, 178, 191, 23, 150, 151, 190, 208, 246, 150, 62, 107, 233, 219, 190, 172, 135, 248, 62, 65, 254, 244, 190, 72, 230, 102, 63, 254, 255, 209, 61, 171, 215, 178, 62, 143, 241, 54, 63, 2, 25, 249, 62, 233, 176, 250, 189, 243, 163, 37, 62, 48, 217, 18, 191, 23, 153, 54, 63, 116, 127, 161, 191, 231, 145, 11, 191, 197, 16, 77, 191, 123, 60, 160, 191, 189, 227, 151, 190, 74, 62, 225, 61, 112, 49, 148, 60, 248, 12, 47, 189, 197, 236, 45, 63, 154, 141, 107, 191, 18, 130, 5, 191, 32, 215, 96, 63, 44, 58, 159, 63, 150, 204, 110, 62, 218, 124, 204, 188, 27, 235, 147, 191, 219, 13, 218, 190, 209, 99, 37, 191, 142, 100, 248, 62, 215, 13, 205, 190, 244, 195, 6, 191, 203, 245, 83, 190, 247, 127, 106, 62, 3, 51, 52, 63, 245, 81, 82, 63, 162, 94, 140, 62, 166, 168, 188, 188, 34, 92, 16, 191, 95, 247, 220, 61, 40, 219, 130, 190, 125, 229, 149, 191, 155, 166, 56, 190, 13, 196, 101, 190, 192, 147, 176, 191, 201, 18, 62, 191, 90, 168, 175, 191, 39, 104, 107, 190, 6, 213, 232, 189, 209, 70, 35, 190, 93, 100, 27, 63, 78, 215, 9, 191, 250, 111, 31, 190, 237, 222, 79, 191, 136, 142, 187, 62, 71, 215, 61, 60, 178, 179, 75, 191, 108, 100, 51, 62, 197, 216, 249, 62, 103, 5, 213, 60, 146, 110, 249, 189};
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
                alignas(float) const unsigned char memory[] = {72, 54, 109, 191, 32, 213, 181, 189, 244, 52, 248, 188, 158, 233, 190, 190, 228, 249, 138, 59, 215, 202, 241, 61, 56, 233, 157, 61, 202, 164, 159, 62, 179, 107, 193, 190, 173, 136, 184, 190, 238, 109, 73, 190, 198, 132, 11, 62, 129, 26, 116, 62, 196, 85, 54, 190, 21, 238, 25, 191, 181, 68, 108, 190, 116, 60, 251, 61, 226, 102, 199, 190, 96, 104, 128, 189, 72, 135, 45, 62, 207, 224, 53, 62, 175, 233, 7, 61, 207, 187, 26, 63, 250, 135, 142, 190, 136, 174, 66, 190, 98, 39, 176, 62, 248, 93, 177, 190, 182, 69, 238, 61, 231, 107, 173, 189, 61, 201, 171, 62, 40, 199, 172, 190, 78, 29, 39, 63};
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
                alignas(float) const unsigned char memory[] = {157, 201, 76, 189, 228, 7, 244, 189, 142, 149, 141, 62, 191, 149, 252, 61, 170, 12, 203, 190, 211, 204, 87, 61, 91, 187, 254, 189, 61, 130, 96, 62, 119, 93, 239, 189, 138, 69, 101, 190, 225, 204, 181, 191, 192, 155, 174, 61, 146, 2, 245, 61, 142, 173, 136, 60, 134, 34, 25, 62, 113, 49, 214, 190, 86, 4, 235, 190, 44, 207, 37, 62, 180, 237, 44, 62, 6, 107, 80, 62, 177, 196, 163, 190, 61, 190, 213, 61, 114, 100, 48, 61, 207, 254, 19, 189, 74, 217, 243, 189, 86, 181, 16, 191, 253, 201, 128, 190, 31, 27, 139, 190, 31, 87, 168, 62, 147, 103, 138, 61, 68, 51, 21, 190, 211, 161, 157, 62, 199, 154, 216, 189, 3, 39, 151, 189, 29, 209, 225, 189, 87, 183, 202, 189, 23, 143, 237, 62, 45, 234, 178, 61, 3, 74, 40, 191, 91, 46, 8, 62, 138, 129, 207, 60, 44, 252, 130, 60, 30, 39, 14, 191, 208, 211, 34, 189, 137, 175, 129, 61, 178, 234, 175, 62, 156, 130, 190, 60, 59, 115, 18, 191, 65, 44, 182, 188, 180, 154, 33, 62, 251, 63, 144, 190, 131, 85, 92, 62, 74, 80, 98, 190, 110, 90, 73, 62, 124, 12, 187, 59, 168, 175, 180, 62, 188, 163, 54, 61, 235, 5, 248, 190, 248, 128, 192, 61, 62, 103, 73, 190, 106, 233, 133, 62, 32, 204, 203, 190, 203, 104, 167, 190, 110, 94, 13, 62, 12, 85, 146, 190, 146, 93, 246, 189, 195, 167, 138, 60, 0, 64, 87, 62, 138, 155, 237, 61, 58, 206, 212, 189, 175, 251, 234, 61, 230, 78, 10, 62, 124, 68, 10, 189, 225, 184, 130, 61, 16, 154, 23, 63, 77, 11, 12, 62, 6, 86, 137, 189, 31, 103, 114, 189, 33, 107, 61, 190, 137, 88, 31, 62, 120, 185, 179, 62, 34, 219, 14, 189, 209, 18, 48, 190, 252, 124, 24, 190, 242, 248, 187, 61, 59, 133, 133, 191, 134, 12, 235, 61, 55, 205, 33, 62, 154, 151, 142, 62, 94, 123, 125, 190, 170, 145, 211, 190, 253, 70, 239, 190, 180, 190, 161, 189, 8, 10, 154, 62, 214, 9, 244, 61, 232, 85, 105, 189, 219, 152, 26, 191, 242, 138, 106, 190, 121, 179, 56, 191, 213, 144, 143, 62, 67, 166, 164, 191, 120, 151, 243, 62, 248, 24, 34, 61, 132, 117, 219, 62, 167, 171, 124, 60, 83, 45, 226, 188, 84, 27, 68, 191, 13, 120, 101, 190, 16, 244, 251, 62, 32, 211, 129, 61, 146, 191, 249, 189, 66, 124, 75, 191, 161, 144, 145, 190, 247, 59, 12, 189, 82, 217, 108, 191, 40, 216, 48, 62, 211, 250, 16, 191, 166, 238, 64, 62, 100, 188, 129, 190, 6, 246, 221, 61, 174, 166, 251, 190, 114, 21, 35, 191, 123, 9, 244, 190, 200, 44, 60, 61, 15, 83, 139, 62, 156, 131, 153, 189, 47, 42, 3, 191, 18, 114, 79, 61, 232, 34, 91, 190, 207, 23, 253, 60, 163, 17, 106, 62, 244, 160, 6, 62, 1, 239, 201, 189, 63, 248, 68, 61, 43, 190, 138, 188, 6, 215, 137, 62, 197, 173, 150, 61, 197, 164, 35, 190, 178, 98, 223, 189, 150, 194, 34, 62, 189, 34, 18, 61, 248, 144, 215, 188, 242, 103, 247, 61, 51, 33, 133, 190, 96, 223, 156, 61, 69, 175, 200, 61, 208, 110, 36, 62, 5, 11, 49, 62, 63, 204, 131, 61, 58, 130, 18, 62, 39, 34, 2, 62, 248, 138, 88, 60, 215, 194, 23, 62, 221, 89, 118, 62, 247, 255, 115, 62, 15, 90, 133, 190, 231, 21, 51, 59, 202, 98, 133, 62, 211, 31, 52, 62, 100, 235, 84, 62, 254, 4, 143, 188, 32, 229, 47, 190, 0, 215, 246, 189, 64, 205, 64, 61, 116, 246, 175, 187, 19, 4, 189, 188, 122, 43, 17, 190, 46, 39, 235, 61, 85, 129, 193, 188, 192, 131, 46, 191, 18, 26, 235, 189, 177, 167, 124, 62, 78, 138, 227, 61, 71, 72, 107, 189, 99, 116, 32, 62, 164, 151, 84, 190, 207, 143, 142, 189, 232, 255, 40, 189, 145, 63, 39, 190, 88, 187, 129, 190, 59, 8, 123, 188, 7, 61, 97, 62, 201, 64, 20, 61, 117, 104, 40, 191, 237, 96, 104, 63, 113, 96, 141, 190, 115, 19, 3, 62, 190, 94, 167, 61, 106, 199, 204, 62, 188, 234, 208, 189, 128, 149, 125, 63, 250, 127, 157, 61, 6, 34, 177, 62, 221, 79, 134, 190, 27, 189, 234, 61, 255, 216, 152, 190, 82, 24, 63, 62, 226, 40, 54, 190, 234, 114, 57, 62, 36, 172, 62, 189, 69, 229, 247, 60, 70, 14, 92, 190, 225, 2, 14, 191, 176, 144, 180, 61, 204, 37, 52, 190, 183, 156, 133, 190, 198, 56, 145, 62, 140, 193, 5, 63, 45, 139, 207, 190, 191, 211, 198, 189, 16, 204, 133, 62, 143, 245, 188, 190, 150, 99, 2, 62, 175, 44, 234, 189, 112, 107, 42, 189, 200, 45, 97, 191, 100, 241, 150, 190, 113, 91, 209, 189, 209, 33, 166, 190, 209, 40, 127, 189, 232, 179, 155, 190, 10, 177, 99, 62, 17, 18, 187, 190, 58, 122, 40, 62, 56, 42, 46, 190, 135, 164, 22, 189, 237, 12, 238, 60, 136, 0, 18, 188, 173, 117, 34, 190, 74, 42, 48, 190, 100, 141, 240, 189, 197, 153, 11, 62, 25, 172, 43, 61, 208, 103, 73, 59, 14, 21, 223, 189, 61, 115, 231, 61, 251, 248, 81, 60, 196, 121, 138, 61, 118, 118, 31, 61, 43, 26, 158, 61, 151, 12, 192, 61, 56, 153, 157, 189, 164, 208, 15, 189, 235, 113, 216, 189, 244, 158, 128, 61, 127, 143, 88, 190, 19, 21, 6, 61, 159, 206, 161, 188, 59, 156, 71, 62, 23, 60, 31, 190, 236, 214, 125, 189, 100, 176, 196, 61, 253, 118, 106, 189, 159, 36, 65, 189, 3, 229, 22, 190, 161, 234, 58, 190, 181, 82, 201, 189, 84, 54, 51, 188, 66, 245, 247, 189, 218, 185, 127, 189, 241, 85, 69, 190, 250, 48, 134, 60, 221, 124, 158, 60, 134, 168, 8, 186, 191, 89, 31, 62, 158, 165, 252, 189, 193, 27, 179, 60, 229, 168, 4, 62, 198, 84, 217, 61, 135, 242, 42, 61, 71, 236, 46, 190, 25, 30, 66, 190, 101, 124, 240, 61, 90, 75, 122, 189, 183, 205, 178, 61, 155, 128, 193, 189, 197, 151, 38, 190, 129, 172, 29, 190, 159, 184, 9, 62, 41, 155, 57, 61, 132, 68, 127, 61, 9, 27, 6, 190, 155, 125, 195, 189, 23, 242, 41, 61, 197, 119, 154, 189, 61, 35, 72, 190, 133, 33, 82, 190, 167, 155, 117, 188, 6, 33, 50, 190, 0, 133, 232, 189, 197, 30, 93, 189, 129, 45, 201, 189, 226, 187, 246, 61, 251, 245, 3, 61, 164, 206, 48, 190, 212, 241, 108, 60, 209, 35, 47, 62, 131, 4, 32, 190, 129, 250, 40, 62, 151, 21, 43, 190, 20, 229, 206, 189, 126, 32, 3, 190, 145, 205, 241, 189, 2, 159, 3, 62, 159, 76, 200, 61, 81, 5, 195, 61, 49, 58, 184, 189, 21, 177, 153, 189, 202, 153, 28, 190, 205, 212, 1, 61, 75, 153, 147, 189, 136, 233, 1, 187, 188, 36, 169, 189, 52, 189, 5, 189, 68, 248, 88, 189, 74, 218, 29, 189, 113, 177, 48, 187, 224, 8, 113, 189, 9, 61, 17, 190, 151, 78, 29, 190, 195, 192, 41, 190, 5, 121, 30, 189, 103, 133, 22, 62, 105, 93, 27, 189, 29, 205, 24, 62, 234, 5, 128, 188, 140, 246, 155, 62, 64, 106, 135, 61, 147, 40, 150, 189, 100, 88, 165, 190, 4, 86, 224, 62, 109, 131, 148, 62, 194, 147, 165, 190, 41, 234, 133, 190, 46, 207, 66, 191, 122, 9, 193, 62, 53, 221, 0, 190, 173, 96, 12, 62, 244, 88, 154, 190, 107, 222, 140, 190, 39, 120, 4, 62, 230, 72, 85, 191, 73, 246, 56, 188, 95, 41, 42, 190, 50, 106, 162, 62, 147, 39, 71, 190, 91, 26, 133, 190, 112, 200, 79, 190, 196, 245, 21, 191, 245, 174, 149, 62, 96, 122, 191, 62, 217, 249, 136, 189, 95, 233, 8, 190, 134, 207, 60, 62, 131, 197, 84, 190, 37, 51, 71, 189, 91, 147, 88, 189, 237, 147, 155, 62, 156, 31, 72, 191, 181, 249, 210, 188, 153, 129, 129, 61, 77, 153, 28, 189, 29, 121, 143, 62, 6, 12, 18, 191, 246, 239, 48, 62, 181, 17, 38, 62, 124, 125, 145, 190, 231, 114, 44, 190, 75, 82, 86, 62, 73, 96, 229, 189, 120, 13, 245, 189, 38, 103, 211, 189, 100, 156, 128, 62, 255, 34, 32, 62, 247, 242, 97, 189, 131, 245, 152, 61, 151, 165, 108, 190, 140, 136, 36, 61, 250, 209, 0, 61, 58, 45, 130, 62, 71, 177, 192, 61, 67, 34, 55, 191, 97, 176, 28, 190, 113, 225, 156, 189, 70, 124, 234, 190, 166, 106, 123, 188, 108, 233, 134, 190, 129, 253, 25, 62, 157, 203, 135, 189, 205, 61, 87, 190, 222, 167, 108, 189, 20, 8, 149, 189, 128, 60, 5, 62, 193, 244, 195, 189, 91, 106, 49, 63, 76, 190, 221, 60, 66, 177, 110, 190, 88, 202, 172, 60, 213, 211, 116, 190, 114, 115, 40, 191, 102, 48, 252, 62, 65, 116, 167, 188, 70, 15, 42, 190, 195, 61, 96, 62, 139, 53, 81, 61, 64, 153, 148, 62, 79, 153, 131, 190, 80, 73, 177, 62, 72, 142, 190, 62, 12, 162, 99, 189, 169, 121, 251, 61, 186, 99, 59, 189, 185, 251, 143, 62, 177, 79, 58, 190, 192, 24, 158, 62, 138, 112, 136, 62, 141, 176, 226, 190, 51, 219, 95, 61, 184, 161, 15, 189, 12, 154, 157, 60, 159, 84, 105, 189, 7, 65, 100, 190, 61, 77, 148, 190, 192, 4, 211, 61, 218, 255, 27, 190, 226, 85, 200, 190, 12, 132, 136, 62, 31, 101, 135, 61, 220, 32, 33, 190, 149, 82, 101, 62, 44, 177, 105, 190, 40, 64, 12, 191, 139, 22, 200, 62, 230, 42, 27, 190, 117, 37, 158, 190, 205, 244, 149, 62, 59, 143, 4, 189, 241, 4, 200, 61, 223, 149, 103, 190, 237, 195, 114, 62, 246, 101, 130, 62, 250, 35, 158, 60, 175, 102, 151, 62, 135, 175, 101, 189, 77, 200, 209, 62, 100, 173, 139, 190, 162, 138, 198, 62, 11, 178, 44, 62, 86, 150, 244, 189, 156, 225, 190, 189, 0, 196, 244, 61, 67, 93, 18, 62, 246, 226, 215, 189, 182, 191, 215, 188, 253, 239, 46, 60, 148, 155, 26, 190, 8, 147, 12, 190, 15, 195, 251, 60, 209, 163, 145, 188, 203, 2, 66, 189, 81, 116, 251, 61, 202, 192, 245, 189, 176, 225, 234, 189, 4, 132, 234, 59, 101, 225, 157, 61, 229, 102, 246, 189, 85, 122, 11, 190, 203, 152, 122, 187, 6, 191, 163, 61, 50, 17, 136, 189, 246, 142, 244, 189, 168, 159, 18, 62, 115, 56, 186, 189, 46, 218, 44, 190, 30, 224, 1, 190, 239, 86, 171, 189, 80, 167, 195, 188, 224, 196, 1, 190, 198, 205, 214, 189, 3, 124, 168, 60, 173, 158, 6, 191, 165, 116, 133, 61, 212, 207, 74, 190, 20, 225, 174, 61, 102, 21, 81, 62, 199, 50, 152, 61, 168, 155, 9, 191, 81, 67, 49, 62, 114, 15, 27, 190, 57, 36, 3, 191, 73, 69, 1, 63, 22, 107, 152, 62, 135, 147, 217, 61, 91, 130, 166, 61, 77, 202, 96, 190, 139, 13, 13, 191, 221, 238, 223, 62, 19, 236, 33, 189, 185, 70, 153, 190, 103, 115, 124, 62, 31, 204, 31, 61, 81, 233, 145, 62, 9, 178, 121, 61, 208, 248, 52, 62, 206, 235, 132, 62, 154, 207, 217, 60, 193, 36, 229, 61, 205, 4, 11, 61, 154, 30, 109, 62, 163, 148, 201, 190, 85, 155, 34, 63, 126, 213, 216, 62, 130, 78, 202, 62, 187, 232, 147, 61, 165, 170, 8, 63, 253, 167, 148, 190, 136, 153, 175, 190, 19, 217, 255, 62, 57, 27, 68, 62, 247, 151, 110, 189, 204, 244, 77, 61, 12, 78, 181, 61, 85, 141, 21, 191, 113, 86, 150, 189, 154, 178, 225, 62, 82, 220, 58, 190, 73, 162, 51, 62, 9, 158, 229, 62, 136, 115, 186, 190, 85, 31, 253, 61, 220, 61, 13, 63, 70, 244, 48, 190, 225, 246, 5, 61, 87, 239, 206, 188, 173, 90, 145, 62, 146, 142, 225, 190, 38, 181, 202, 190, 246, 44, 104, 62, 118, 79, 181, 190, 6, 20, 197, 190, 188, 239, 9, 191, 118, 151, 100, 62, 244, 54, 220, 190, 163, 55, 222, 189, 208, 184, 232, 189, 86, 194, 88, 61, 234, 65, 243, 189, 224, 222, 15, 190, 155, 192, 184, 60, 50, 192, 16, 61, 5, 41, 146, 188, 51, 247, 93, 189, 247, 33, 2, 189, 152, 11, 213, 189, 145, 213, 51, 189, 195, 135, 47, 189, 253, 18, 119, 189, 71, 17, 51, 190, 248, 220, 32, 61, 89, 130, 156, 188, 23, 46, 150, 189, 78, 151, 230, 60, 135, 136, 13, 61, 59, 237, 13, 190, 189, 253, 221, 61, 240, 237, 164, 189, 25, 242, 200, 189, 250, 156, 197, 189, 202, 166, 231, 60, 74, 249, 181, 61, 167, 43, 11, 189, 30, 168, 134, 189, 248, 35, 17, 62, 14, 239, 32, 189, 138, 74, 169, 61, 11, 101, 45, 190, 36, 31, 167, 189, 35, 27, 182, 61, 21, 46, 166, 61, 116, 204, 233, 189, 87, 30, 145, 190, 247, 37, 221, 61, 196, 104, 60, 62, 237, 199, 130, 61, 52, 54, 164, 61, 181, 86, 90, 190, 131, 217, 16, 190, 36, 213, 135, 61, 214, 167, 150, 61, 81, 188, 216, 61, 229, 106, 79, 188, 162, 185, 172, 61, 44, 45, 85, 61, 180, 33, 46, 189, 136, 93, 225, 60, 205, 229, 142, 61, 136, 0, 21, 62, 58, 225, 54, 189, 231, 254, 163, 189, 83, 180, 194, 190, 16, 10, 216, 189, 130, 70, 164, 62, 208, 54, 227, 61, 136, 200, 86, 190, 139, 121, 74, 189, 39, 16, 143, 62, 39, 213, 188, 190, 12, 65, 39, 62, 63, 20, 25, 191, 55, 85, 201, 190, 53, 183, 93, 190, 149, 237, 217, 62, 41, 251, 111, 191, 12, 255, 209, 62, 90, 254, 38, 190, 72, 77, 138, 62, 218, 95, 161, 188, 54, 238, 91, 191, 192, 213, 176, 191, 126, 172, 154, 190, 50, 41, 205, 62, 20, 172, 217, 190, 185, 212, 84, 62, 140, 69, 28, 191, 177, 171, 168, 190, 197, 145, 21, 190, 28, 243, 130, 191, 19, 215, 6, 191, 234, 25, 30, 191, 4, 51, 83, 62, 79, 104, 148, 189, 108, 191, 101, 59, 10, 4, 40, 189, 242, 162, 21, 191, 165, 142, 59, 191, 40, 136, 151, 188, 139, 101, 41, 62, 73, 243, 166, 190, 41, 211, 137, 61, 250, 120, 51, 62, 43, 11, 215, 62, 109, 226, 150, 189, 255, 69, 77, 62, 225, 60, 172, 190, 12, 208, 181, 189, 178, 221, 181, 190, 46, 67, 69, 62, 144, 133, 118, 60, 87, 54, 35, 62, 214, 127, 5, 191, 154, 115, 57, 191, 73, 11, 121, 190, 116, 202, 187, 190, 99, 36, 7, 191, 154, 161, 149, 62, 222, 140, 181, 62, 133, 70, 216, 190, 2, 4, 200, 60, 21, 247, 214, 62, 54, 75, 128, 190, 37, 1, 18, 62, 76, 29, 161, 189, 99, 126, 151, 61, 4, 142, 61, 191, 229, 150, 67, 190, 213, 157, 27, 62, 131, 221, 250, 189, 203, 203, 175, 190, 195, 188, 175, 190, 138, 241, 217, 62, 137, 99, 28, 190, 18, 247, 16, 62, 88, 187, 129, 189, 187, 243, 132, 190, 157, 15, 2, 63, 46, 194, 243, 187, 132, 128, 33, 62, 57, 206, 132, 62, 136, 145, 46, 62, 153, 32, 209, 190, 168, 173, 172, 61, 224, 20, 51, 190, 8, 238, 133, 191, 67, 156, 215, 189, 243, 49, 79, 62, 41, 101, 210, 190, 100, 94, 43, 190, 20, 179, 204, 62, 47, 67, 215, 190, 163, 103, 29, 190, 164, 164, 85, 61, 79, 196, 20, 190, 195, 183, 95, 190, 47, 222, 74, 61, 202, 144, 131, 62, 30, 128, 122, 191, 143, 49, 43, 190, 92, 205, 3, 63, 51, 68, 103, 191, 53, 154, 40, 63, 188, 62, 155, 191, 77, 196, 139, 62, 246, 163, 185, 190, 184, 223, 0, 61, 204, 23, 211, 60, 60, 189, 2, 189, 135, 175, 29, 62, 235, 208, 166, 61, 77, 242, 138, 187, 17, 92, 3, 62, 118, 119, 26, 61, 36, 150, 206, 188, 84, 183, 10, 190, 143, 247, 188, 61, 111, 98, 225, 61, 24, 55, 52, 190, 114, 155, 215, 189, 5, 125, 162, 189, 233, 126, 152, 61, 28, 203, 237, 189, 132, 176, 28, 62, 173, 132, 56, 60, 197, 58, 6, 62, 50, 89, 182, 61, 250, 80, 254, 189, 254, 208, 9, 189, 205, 254, 220, 188, 87, 158, 11, 190, 21, 186, 7, 62, 172, 50, 44, 189, 165, 86, 51, 190, 4, 187, 43, 190, 93, 164, 218, 189, 64, 194, 198, 188, 118, 50, 243, 61, 76, 183, 27, 189, 108, 186, 162, 61, 64, 213, 132, 61, 58, 83, 194, 61, 146, 70, 17, 190, 249, 24, 109, 189, 207, 156, 211, 61, 168, 144, 64, 189, 139, 101, 56, 61, 154, 223, 206, 60, 223, 201, 40, 62, 17, 158, 211, 189, 123, 119, 214, 59, 112, 231, 63, 61, 64, 89, 145, 61, 243, 122, 162, 189, 115, 42, 27, 190, 38, 197, 214, 189, 241, 190, 103, 189, 93, 210, 17, 62, 175, 200, 47, 190, 145, 187, 36, 190, 54, 132, 24, 190, 43, 107, 220, 189, 90, 51, 196, 189, 96, 139, 62, 189, 3, 144, 24, 190, 253, 195, 32, 190, 194, 224, 184, 189, 228, 22, 228, 189, 131, 97, 233, 189, 205, 230, 83, 189, 27, 196, 208, 189, 39, 102, 15, 191, 208, 91, 247, 55, 108, 135, 64, 62, 166, 177, 183, 62, 207, 150, 28, 191, 247, 62, 90, 62, 98, 97, 115, 62, 19, 114, 9, 62, 223, 234, 12, 190, 234, 37, 37, 61, 68, 208, 148, 191, 237, 187, 66, 189, 151, 6, 195, 61, 198, 6, 154, 60, 164, 146, 236, 190, 141, 158, 162, 62, 197, 169, 154, 191, 94, 28, 182, 61, 122, 41, 133, 62, 55, 59, 102, 189, 252, 90, 124, 62, 240, 169, 131, 61, 137, 3, 64, 62, 38, 70, 115, 190, 155, 182, 164, 190, 60, 158, 193, 62, 78, 134, 192, 191, 26, 106, 189, 190, 216, 57, 219, 190, 255, 29, 146, 62, 221, 246, 71, 190, 179, 182, 136, 62, 79, 242, 36, 191, 40, 5, 43, 61, 240, 115, 134, 62, 202, 48, 43, 63, 78, 77, 18, 191, 217, 49, 182, 62, 134, 90, 132, 62, 39, 121, 82, 62, 172, 150, 107, 189, 80, 160, 42, 191, 100, 15, 174, 191, 158, 251, 190, 189, 113, 123, 20, 187, 94, 222, 151, 190, 241, 53, 83, 189, 55, 37, 242, 62, 38, 242, 108, 191, 73, 244, 138, 189, 50, 117, 179, 62, 191, 88, 82, 190, 132, 174, 72, 62, 156, 129, 17, 63, 145, 179, 176, 61, 8, 109, 51, 191, 116, 33, 154, 189, 12, 43, 217, 62, 49, 217, 122, 191, 172, 10, 146, 189, 19, 5, 198, 190, 238, 71, 159, 62, 178, 252, 218, 188, 3, 196, 148, 61, 56, 128, 114, 62, 225, 215, 84, 190, 209, 165, 152, 190, 194, 145, 106, 60, 31, 81, 92, 190, 33, 79, 228, 61, 134, 99, 152, 190, 249, 251, 74, 61, 85, 43, 187, 61, 78, 67, 14, 60, 139, 86, 197, 61, 99, 184, 192, 190, 139, 214, 45, 62, 7, 212, 40, 62, 36, 85, 161, 62, 226, 252, 8, 190, 149, 120, 57, 62, 108, 10, 32, 190, 117, 168, 150, 62, 215, 144, 140, 61, 5, 171, 105, 60, 36, 146, 164, 189, 216, 91, 173, 190, 103, 137, 176, 61, 189, 173, 117, 190, 188, 65, 101, 189, 68, 206, 162, 187, 43, 18, 28, 190, 164, 12, 8, 61, 131, 245, 57, 191, 45, 108, 49, 188, 177, 119, 92, 189, 162, 78, 154, 190, 0, 221, 222, 189, 232, 192, 124, 190, 92, 34, 113, 62, 56, 166, 171, 190, 81, 38, 155, 188, 204, 209, 160, 189, 79, 31, 52, 188, 137, 188, 32, 190, 42, 244, 187, 62, 238, 218, 216, 188, 246, 106, 58, 190, 130, 103, 31, 62, 223, 127, 91, 61, 98, 123, 208, 61, 167, 240, 203, 189, 175, 136, 106, 190, 110, 209, 229, 189, 108, 110, 224, 190, 233, 22, 116, 62, 123, 130, 155, 190, 212, 126, 145, 188, 160, 118, 29, 190, 250, 64, 230, 188, 108, 35, 104, 61, 32, 87, 40, 191, 40, 225, 148, 190, 38, 23, 21, 190, 107, 242, 89, 62, 5, 223, 192, 187, 120, 52, 83, 189, 68, 177, 203, 188, 85, 10, 145, 190, 23, 48, 214, 188, 180, 193, 161, 190, 1, 105, 165, 62, 67, 168, 195, 189, 251, 191, 61, 188, 227, 117, 185, 190, 113, 8, 168, 62, 149, 128, 191, 59, 169, 105, 181, 190, 232, 29, 103, 190, 164, 251, 70, 62, 80, 174, 118, 61, 222, 140, 163, 61, 4, 50, 185, 190, 208, 230, 46, 191, 114, 205, 214, 60, 115, 235, 172, 61, 133, 105, 162, 190, 162, 63, 72, 62, 79, 222, 193, 189, 177, 131, 218, 62, 163, 47, 68, 189, 131, 120, 121, 62, 180, 54, 181, 62, 252, 46, 14, 191, 74, 171, 62, 188, 221, 250, 136, 62, 209, 75, 252, 62, 166, 116, 1, 189, 40, 156, 106, 62, 98, 42, 150, 62, 107, 35, 5, 190, 109, 111, 69, 189, 246, 79, 162, 190, 40, 248, 175, 189, 213, 52, 195, 189, 200, 168, 189, 190, 53, 153, 194, 61, 113, 180, 219, 62, 71, 215, 241, 189, 72, 154, 140, 190, 165, 240, 108, 191, 153, 149, 58, 62, 171, 171, 151, 190, 137, 26, 249, 61, 49, 49, 180, 61, 38, 101, 49, 191, 208, 66, 75, 190, 160, 188, 8, 62, 20, 152, 160, 190, 214, 201, 164, 62, 204, 228, 251, 190, 46, 187, 48, 60, 157, 138, 41, 61, 220, 72, 134, 62, 128, 71, 139, 62, 177, 23, 148, 191, 72, 220, 104, 189, 94, 68, 159, 191, 114, 131, 106, 62, 8, 183, 57, 190, 57, 72, 236, 188, 241, 95, 61, 62, 91, 61, 179, 61, 143, 72, 86, 61, 115, 4, 209, 62, 94, 107, 54, 62, 158, 249, 63, 190, 108, 136, 13, 63, 55, 197, 208, 61, 246, 216, 205, 189, 221, 82, 254, 188, 201, 226, 250, 189, 30, 200, 164, 191, 179, 99, 64, 190, 165, 208, 99, 62, 197, 133, 32, 190, 46, 105, 155, 62, 216, 129, 34, 63, 182, 173, 227, 190, 118, 121, 198, 188, 35, 226, 237, 62, 45, 101, 124, 190, 134, 8, 215, 189, 56, 185, 47, 62, 225, 179, 182, 62, 39, 48, 112, 191, 195, 198, 228, 190, 123, 233, 4, 63, 148, 181, 80, 191, 24, 156, 207, 62, 37, 142, 50, 191, 3, 50, 111, 62, 216, 76, 143, 190, 104, 48, 205, 61, 221, 192, 247, 61, 38, 157, 58, 190, 35, 33, 22, 59, 185, 6, 112, 63, 215, 233, 54, 61, 220, 123, 192, 62, 211, 183, 22, 62, 176, 2, 131, 61, 74, 55, 236, 189, 3, 225, 225, 189, 61, 1, 235, 190, 94, 117, 10, 190, 13, 5, 39, 63, 64, 25, 197, 190, 79, 213, 12, 190, 43, 234, 117, 62, 38, 213, 150, 190, 182, 112, 239, 189, 82, 226, 145, 62, 220, 69, 24, 191, 7, 217, 58, 191, 8, 42, 96, 191, 253, 184, 81, 62, 55, 116, 85, 191, 17, 244, 147, 190, 169, 245, 160, 190, 114, 163, 68, 191, 245, 162, 85, 62, 210, 156, 9, 191, 237, 15, 101, 61, 28, 214, 242, 190, 251, 162, 244, 190};
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
                alignas(float) const unsigned char memory[] = {89, 26, 215, 61, 7, 146, 181, 61, 89, 194, 79, 189, 236, 199, 142, 62, 185, 241, 179, 62, 69, 198, 228, 189, 26, 193, 14, 62, 200, 135, 55, 190, 98, 5, 29, 190, 206, 31, 173, 189, 71, 122, 29, 62, 67, 114, 229, 189, 231, 20, 97, 61, 67, 144, 140, 62, 161, 60, 193, 189, 159, 189, 44, 62, 109, 235, 182, 189, 225, 8, 234, 189, 120, 57, 137, 62, 59, 126, 61, 61, 25, 202, 95, 59, 208, 243, 142, 62, 23, 175, 79, 190, 31, 77, 18, 190, 135, 200, 102, 62, 9, 210, 227, 61, 93, 45, 87, 190, 223, 17, 5, 62, 125, 181, 206, 61, 238, 171, 39, 190, 3, 109, 135, 62, 114, 172, 237, 188};
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
                alignas(float) const unsigned char memory[] = {143, 63, 48, 190, 100, 168, 234, 190, 96, 166, 152, 190, 139, 23, 145, 63, 211, 122, 36, 189, 95, 249, 224, 62, 97, 246, 64, 63, 2, 141, 248, 61, 225, 244, 3, 62, 137, 38, 104, 189, 222, 104, 6, 191, 111, 201, 118, 190, 86, 194, 43, 191, 252, 202, 246, 190, 167, 125, 13, 190, 60, 133, 99, 191, 60, 230, 89, 63, 182, 56, 38, 190, 223, 192, 212, 60, 73, 223, 184, 63, 138, 178, 93, 63, 120, 172, 177, 63, 219, 245, 8, 62, 105, 162, 3, 60, 222, 243, 170, 62, 65, 229, 151, 63, 195, 52, 141, 190, 60, 246, 144, 62, 227, 194, 63, 191, 116, 101, 132, 191, 200, 204, 159, 63, 0, 102, 189, 191, 255, 97, 6, 191, 129, 1, 218, 187, 72, 243, 0, 62, 123, 44, 25, 189, 205, 240, 207, 190, 188, 198, 35, 188, 48, 118, 233, 61, 92, 70, 151, 61, 140, 65, 206, 61, 186, 12, 43, 62, 74, 23, 65, 190, 12, 59, 197, 189, 60, 132, 232, 62, 178, 43, 194, 61, 161, 211, 35, 61, 145, 36, 170, 60, 20, 241, 168, 62, 121, 93, 155, 60, 249, 70, 158, 190, 35, 118, 137, 58, 227, 194, 235, 189, 185, 34, 251, 188, 63, 66, 226, 187, 171, 69, 33, 61, 192, 23, 153, 190, 57, 207, 102, 189, 163, 8, 43, 189, 146, 154, 117, 61, 60, 129, 31, 61, 160, 222, 188, 62, 213, 238, 158, 62, 84, 148, 12, 189};
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
                alignas(float) const unsigned char memory[] = {78, 19, 49, 190, 218, 95, 238, 190};
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
    alignas(float) const unsigned char memory[] = {229, 216, 243, 190, 15, 90, 174, 191, 15, 44, 49, 61};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {209, 114, 126, 192, 90, 131, 135, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0034/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}