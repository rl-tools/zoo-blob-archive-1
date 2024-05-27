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
                alignas(float) const unsigned char memory[] = {245, 217, 253, 190, 172, 181, 41, 191, 21, 6, 221, 62, 189, 61, 64, 191, 88, 239, 34, 63, 233, 174, 22, 63, 87, 24, 142, 62, 155, 253, 186, 62, 63, 226, 199, 62, 16, 168, 134, 190, 122, 63, 184, 63, 102, 232, 236, 62, 65, 225, 2, 63, 207, 174, 125, 191, 105, 138, 130, 190, 226, 207, 43, 63, 165, 63, 154, 63, 225, 23, 169, 62, 152, 28, 91, 63, 20, 82, 101, 63, 217, 200, 216, 62, 152, 200, 170, 189, 208, 164, 56, 191, 191, 34, 180, 62, 212, 113, 178, 60, 232, 42, 129, 61, 210, 63, 132, 59, 169, 65, 18, 191, 233, 72, 98, 63, 6, 109, 75, 62, 98, 109, 209, 61, 176, 109, 154, 191, 227, 140, 168, 190, 96, 103, 31, 190, 110, 223, 45, 191, 63, 198, 32, 190, 88, 112, 232, 62, 255, 7, 6, 63, 73, 122, 22, 190, 43, 54, 74, 63, 17, 212, 24, 191, 97, 145, 108, 190, 196, 188, 27, 62, 32, 12, 72, 191, 163, 202, 69, 63, 27, 142, 0, 191, 100, 255, 152, 60, 232, 28, 190, 190, 247, 53, 3, 63, 63, 186, 148, 188, 124, 143, 19, 63, 162, 232, 163, 189, 118, 42, 145, 191, 184, 125, 120, 190, 175, 110, 2, 190, 84, 168, 86, 63, 58, 254, 28, 63, 232, 66, 105, 190, 243, 23, 203, 61, 109, 16, 163, 62, 227, 144, 36, 191, 73, 53, 101, 61, 169, 12, 34, 191, 17, 227, 199, 189, 72, 63, 76, 191, 195, 191, 34, 190, 28, 151, 33, 190, 157, 50, 180, 188, 39, 128, 72, 61, 175, 224, 73, 190, 39, 52, 212, 62, 101, 243, 234, 190, 61, 146, 192, 62, 226, 187, 86, 190, 47, 226, 221, 190, 23, 158, 181, 61, 228, 139, 32, 191, 107, 6, 9, 63, 170, 236, 92, 190, 119, 28, 2, 62, 157, 40, 13, 191, 238, 248, 126, 63, 148, 192, 172, 62, 33, 85, 182, 62, 221, 231, 143, 62, 83, 171, 147, 63, 254, 39, 181, 62, 201, 146, 156, 189, 215, 183, 194, 62, 14, 181, 4, 191, 212, 236, 67, 63, 41, 224, 119, 191, 254, 142, 255, 189, 31, 132, 177, 62, 144, 120, 30, 191, 207, 132, 9, 63};
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
                alignas(float) const unsigned char memory[] = {18, 138, 216, 190, 50, 117, 211, 190, 241, 28, 2, 63, 28, 8, 212, 188, 123, 235, 104, 190, 111, 210, 89, 62, 174, 166, 206, 190, 116, 92, 88, 190, 52, 10, 240, 189, 238, 36, 197, 190, 187, 53, 36, 62, 1, 66, 250, 62, 122, 3, 4, 63, 213, 190, 184, 59, 90, 137, 86, 62, 137, 57, 32, 63, 67, 201, 117, 62, 51, 218, 245, 189, 53, 94, 123, 62, 19, 88, 135, 190, 67, 252, 97, 190, 120, 188, 166, 62, 151, 78, 90, 63, 18, 231, 6, 190, 183, 93, 84, 190, 130, 252, 181, 61, 111, 58, 9, 63, 243, 65, 133, 191, 48, 45, 233, 62, 222, 130, 139, 189, 4, 24, 253, 62, 234, 141, 193, 62};
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
                alignas(float) const unsigned char memory[] = {171, 163, 2, 190, 125, 14, 63, 191, 54, 110, 27, 62, 228, 5, 37, 190, 25, 141, 128, 190, 243, 59, 214, 62, 93, 47, 203, 61, 218, 234, 113, 190, 204, 15, 160, 61, 10, 104, 137, 189, 170, 218, 174, 190, 5, 137, 122, 189, 255, 209, 60, 62, 188, 249, 69, 190, 26, 44, 7, 189, 21, 112, 175, 61, 105, 43, 189, 61, 188, 224, 26, 191, 118, 242, 170, 190, 55, 38, 68, 190, 155, 104, 106, 62, 101, 133, 128, 61, 201, 146, 171, 61, 176, 88, 50, 190, 24, 190, 86, 190, 99, 196, 172, 62, 56, 30, 223, 60, 30, 161, 173, 189, 134, 53, 88, 62, 239, 128, 122, 61, 213, 134, 24, 190, 218, 118, 156, 60, 157, 170, 141, 188, 244, 218, 185, 58, 191, 184, 7, 62, 188, 103, 88, 61, 163, 40, 31, 61, 156, 86, 118, 60, 231, 163, 130, 189, 125, 196, 21, 190, 192, 165, 218, 189, 187, 15, 230, 189, 245, 162, 17, 62, 150, 111, 243, 189, 53, 162, 11, 190, 215, 40, 170, 59, 89, 230, 73, 190, 134, 225, 171, 189, 126, 248, 30, 190, 254, 151, 165, 60, 32, 165, 74, 190, 202, 228, 24, 188, 130, 176, 237, 61, 102, 213, 190, 61, 177, 177, 98, 62, 56, 156, 213, 61, 71, 171, 36, 61, 136, 6, 22, 190, 219, 210, 77, 190, 12, 158, 137, 60, 149, 23, 27, 190, 125, 123, 36, 190, 103, 178, 0, 190, 155, 46, 60, 190, 172, 43, 146, 62, 130, 245, 31, 191, 134, 57, 44, 62, 223, 166, 13, 191, 208, 187, 74, 61, 105, 190, 72, 190, 220, 93, 39, 190, 165, 74, 69, 62, 231, 25, 111, 60, 3, 224, 214, 191, 38, 231, 0, 61, 84, 246, 179, 187, 203, 2, 190, 61, 126, 65, 94, 61, 221, 135, 177, 188, 1, 20, 5, 189, 217, 178, 60, 62, 169, 205, 6, 61, 163, 10, 47, 191, 123, 156, 43, 62, 103, 12, 254, 61, 246, 91, 5, 62, 208, 133, 131, 61, 49, 119, 37, 61, 26, 245, 16, 61, 125, 156, 163, 62, 104, 2, 254, 61, 208, 199, 177, 189, 139, 174, 134, 190, 148, 101, 149, 61, 206, 65, 152, 62, 236, 186, 1, 62, 127, 55, 157, 190, 171, 13, 242, 61, 65, 81, 70, 62, 215, 249, 140, 61, 103, 35, 59, 58, 46, 32, 53, 190, 134, 199, 7, 190, 15, 25, 130, 62, 227, 188, 15, 62, 113, 17, 50, 62, 227, 234, 230, 190, 252, 150, 164, 61, 240, 231, 234, 190, 190, 133, 148, 59, 118, 55, 141, 62, 36, 195, 10, 62, 173, 57, 65, 189, 21, 240, 201, 189, 114, 17, 95, 62, 146, 16, 68, 60, 245, 44, 23, 190, 6, 27, 24, 189, 68, 195, 214, 189, 54, 51, 189, 188, 166, 159, 228, 189, 232, 44, 168, 190, 99, 52, 9, 190, 121, 43, 102, 190, 225, 170, 244, 61, 95, 219, 113, 62, 222, 53, 141, 189, 24, 217, 130, 62, 223, 131, 196, 62, 70, 228, 131, 191, 192, 163, 212, 187, 107, 106, 44, 191, 219, 255, 110, 190, 158, 49, 9, 63, 29, 201, 87, 62, 81, 34, 170, 190, 159, 253, 166, 188, 22, 235, 185, 190, 32, 63, 164, 59, 99, 222, 23, 61, 169, 133, 77, 62, 34, 142, 117, 190, 174, 72, 56, 190, 151, 42, 135, 62, 26, 70, 205, 61, 239, 217, 250, 188, 238, 65, 2, 191, 129, 125, 226, 188, 228, 8, 180, 61, 22, 149, 149, 186, 95, 76, 120, 189, 123, 203, 162, 61, 58, 219, 135, 190, 238, 123, 174, 62, 184, 126, 106, 62, 67, 81, 52, 189, 46, 189, 101, 61, 184, 48, 191, 189, 249, 38, 81, 190, 129, 225, 58, 60, 127, 213, 86, 188, 112, 61, 187, 189, 32, 190, 50, 190, 190, 64, 148, 189, 158, 235, 164, 189, 117, 179, 225, 188, 250, 233, 168, 189, 54, 244, 18, 190, 215, 52, 218, 188, 22, 27, 172, 189, 21, 164, 221, 61, 203, 78, 1, 190, 14, 180, 170, 189, 196, 147, 216, 189, 231, 64, 47, 189, 132, 204, 186, 61, 130, 65, 36, 189, 2, 64, 243, 61, 126, 185, 151, 61, 86, 147, 223, 61, 223, 219, 142, 60, 199, 16, 201, 186, 152, 207, 178, 60, 92, 11, 236, 189, 215, 32, 48, 60, 70, 82, 155, 59, 251, 37, 44, 190, 36, 170, 219, 61, 27, 126, 63, 61, 208, 98, 12, 190, 205, 69, 117, 189, 225, 9, 16, 62, 84, 23, 104, 189, 146, 62, 67, 62, 229, 157, 135, 62, 38, 183, 34, 188, 119, 49, 75, 62, 54, 58, 248, 60, 112, 146, 187, 189, 214, 174, 72, 61, 108, 119, 1, 189, 193, 75, 172, 62, 32, 215, 237, 61, 155, 68, 170, 62, 81, 121, 47, 189, 149, 232, 122, 62, 130, 81, 234, 61, 97, 25, 68, 60, 31, 72, 205, 189, 17, 167, 109, 188, 223, 148, 159, 189, 131, 131, 229, 59, 82, 18, 93, 190, 104, 184, 10, 60, 30, 62, 72, 62, 6, 156, 219, 189, 142, 128, 50, 190, 250, 167, 163, 189, 249, 56, 69, 189, 72, 46, 131, 190, 82, 167, 27, 62, 56, 204, 0, 190, 127, 142, 15, 61, 165, 167, 148, 61, 197, 12, 81, 188, 116, 26, 247, 188, 164, 32, 106, 61, 180, 177, 135, 187, 141, 72, 28, 189, 88, 238, 140, 189, 213, 69, 192, 187, 204, 101, 56, 190, 12, 44, 15, 62, 160, 73, 80, 190, 52, 181, 52, 190, 223, 74, 129, 189, 5, 76, 40, 190, 15, 67, 3, 61, 25, 141, 32, 190, 52, 14, 34, 189, 142, 253, 210, 60, 49, 140, 16, 62, 252, 215, 245, 59, 199, 61, 47, 190, 246, 110, 238, 60, 97, 58, 40, 190, 245, 153, 183, 61, 128, 221, 41, 190, 233, 37, 50, 189, 57, 143, 29, 190, 135, 156, 124, 61, 189, 7, 26, 59, 50, 182, 6, 190, 81, 69, 218, 61, 172, 119, 74, 190, 221, 144, 201, 61, 183, 92, 154, 62, 233, 28, 44, 191, 248, 60, 254, 190, 45, 169, 123, 191, 157, 146, 176, 190, 36, 35, 150, 62, 108, 254, 60, 62, 179, 34, 24, 191, 117, 116, 31, 190, 182, 184, 5, 191, 135, 5, 242, 60, 161, 176, 182, 189, 186, 102, 84, 62, 74, 85, 8, 191, 56, 133, 206, 186, 212, 155, 149, 62, 209, 223, 89, 62, 107, 58, 85, 190, 29, 134, 251, 190, 119, 93, 31, 62, 193, 109, 133, 62, 145, 32, 97, 189, 106, 143, 213, 61, 188, 48, 68, 190, 8, 11, 224, 190, 114, 33, 122, 62, 37, 127, 249, 61, 96, 194, 242, 60, 248, 100, 180, 190, 173, 33, 16, 190, 8, 245, 152, 190, 205, 83, 119, 190, 89, 80, 253, 189, 238, 194, 128, 61, 150, 120, 177, 189, 166, 98, 129, 187, 141, 197, 163, 61, 21, 174, 238, 60, 1, 157, 245, 61, 34, 200, 189, 60, 120, 177, 79, 189, 165, 119, 33, 190, 228, 209, 136, 189, 36, 179, 236, 61, 235, 106, 45, 190, 131, 230, 57, 61, 47, 235, 180, 188, 20, 38, 129, 60, 110, 201, 172, 61, 236, 125, 3, 190, 82, 238, 11, 190, 216, 34, 24, 62, 97, 201, 35, 190, 10, 146, 81, 190, 53, 235, 222, 189, 210, 244, 181, 60, 166, 181, 50, 189, 97, 54, 42, 190, 157, 162, 16, 61, 167, 121, 39, 60, 106, 33, 53, 189, 127, 2, 170, 61, 246, 59, 252, 189, 241, 44, 153, 189, 58, 138, 35, 190, 126, 172, 80, 187, 227, 135, 135, 62, 205, 17, 85, 62, 174, 255, 131, 60, 191, 4, 226, 189, 229, 155, 8, 189, 191, 80, 230, 61, 184, 161, 147, 189, 160, 229, 151, 62, 91, 48, 198, 61, 68, 196, 36, 62, 243, 173, 154, 61, 4, 214, 33, 62, 75, 34, 15, 62, 97, 180, 24, 190, 124, 37, 136, 61, 23, 83, 178, 61, 176, 119, 100, 62, 237, 88, 140, 190, 251, 202, 72, 189, 79, 161, 12, 62, 120, 9, 218, 188, 244, 70, 207, 61, 124, 92, 130, 61, 76, 149, 212, 189, 36, 17, 17, 59, 183, 157, 163, 189, 36, 77, 7, 190, 116, 232, 98, 188, 33, 114, 80, 62, 99, 191, 175, 62, 110, 141, 182, 190, 6, 249, 238, 62, 190, 236, 37, 62, 207, 163, 33, 189, 40, 102, 128, 61, 10, 42, 16, 191, 31, 119, 2, 191, 142, 83, 225, 62, 248, 165, 167, 61, 123, 90, 183, 62, 212, 42, 134, 189, 218, 113, 34, 62, 242, 231, 8, 62, 90, 172, 25, 62, 187, 102, 193, 62, 248, 19, 33, 190, 8, 189, 197, 190, 220, 120, 102, 187, 20, 238, 77, 62, 197, 11, 131, 190, 172, 41, 246, 189, 126, 108, 39, 62, 85, 20, 150, 61, 190, 96, 140, 187, 87, 10, 119, 62, 2, 232, 9, 191, 98, 48, 176, 61, 236, 101, 24, 191, 115, 60, 132, 190, 60, 183, 126, 61, 149, 204, 165, 62, 12, 1, 133, 62, 90, 8, 36, 63, 21, 77, 220, 190, 104, 239, 188, 190, 31, 168, 97, 191, 148, 130, 245, 188, 93, 148, 184, 62, 69, 61, 63, 61, 32, 199, 163, 189, 205, 60, 27, 190, 220, 216, 159, 190, 161, 104, 152, 189, 193, 229, 72, 188, 4, 76, 121, 62, 74, 147, 126, 189, 219, 108, 184, 190, 233, 241, 55, 62, 32, 188, 37, 189, 166, 120, 65, 62, 190, 242, 59, 190, 123, 151, 176, 62, 228, 233, 5, 62, 168, 52, 124, 62, 83, 181, 174, 189, 227, 190, 153, 61, 241, 26, 92, 190, 72, 15, 6, 63, 147, 174, 195, 61, 137, 75, 94, 189, 222, 13, 27, 61, 34, 167, 21, 190, 179, 91, 12, 190, 157, 246, 199, 190, 2, 58, 229, 61, 63, 251, 149, 190, 151, 49, 185, 61, 185, 233, 216, 189, 31, 212, 1, 191, 120, 198, 154, 62, 158, 158, 22, 62, 37, 73, 222, 190, 147, 92, 110, 61, 32, 104, 182, 189, 41, 61, 28, 190, 248, 33, 79, 190, 34, 95, 161, 62, 6, 123, 87, 190, 84, 23, 47, 190, 222, 62, 233, 60, 160, 114, 148, 62, 86, 44, 224, 190, 150, 166, 51, 189, 55, 222, 115, 61, 127, 248, 75, 62, 254, 36, 104, 190, 253, 32, 50, 61, 97, 140, 222, 189, 239, 104, 123, 190, 251, 50, 217, 62, 158, 33, 127, 62, 61, 160, 24, 62, 104, 130, 172, 61, 249, 84, 61, 190, 210, 109, 32, 189, 36, 58, 40, 190, 148, 77, 172, 190, 203, 145, 35, 62, 4, 239, 156, 62, 91, 229, 60, 62, 221, 69, 142, 61, 118, 1, 244, 190, 236, 198, 84, 190, 175, 90, 183, 62, 149, 84, 205, 189, 92, 239, 223, 62, 43, 111, 128, 190, 105, 133, 192, 61, 160, 165, 133, 188, 254, 176, 237, 62, 53, 105, 154, 62, 191, 10, 69, 61, 31, 34, 213, 190, 146, 138, 193, 190, 96, 49, 145, 62, 57, 84, 78, 190, 110, 235, 165, 189, 206, 38, 161, 189, 192, 207, 223, 61, 225, 20, 69, 62, 212, 55, 249, 61, 40, 22, 187, 190, 9, 196, 142, 189, 159, 148, 166, 189, 72, 155, 46, 190, 27, 39, 98, 62, 5, 220, 119, 190, 154, 162, 159, 62, 110, 204, 128, 189, 215, 133, 130, 190, 231, 32, 99, 189, 68, 206, 51, 62, 9, 44, 127, 189, 71, 147, 157, 62, 1, 36, 119, 62, 123, 108, 162, 190, 194, 150, 202, 61, 123, 0, 219, 61, 102, 44, 254, 188, 114, 6, 172, 190, 133, 121, 147, 62, 152, 116, 190, 62, 22, 183, 208, 61, 73, 132, 152, 190, 153, 222, 94, 62, 160, 78, 183, 189, 192, 139, 28, 62, 115, 7, 51, 62, 151, 17, 169, 189, 52, 66, 128, 190, 130, 219, 16, 190, 84, 91, 28, 61, 44, 125, 127, 190, 124, 249, 192, 189, 224, 81, 73, 190, 147, 243, 10, 63, 222, 169, 51, 61, 223, 209, 97, 62, 70, 240, 22, 190, 37, 63, 70, 190, 208, 8, 134, 61, 201, 132, 24, 62, 209, 53, 126, 189, 210, 241, 153, 188, 128, 210, 192, 60, 198, 112, 46, 188, 64, 160, 158, 189, 214, 60, 166, 61, 239, 18, 1, 190, 19, 232, 9, 189, 28, 13, 39, 190, 29, 83, 28, 190, 176, 121, 20, 189, 150, 121, 193, 188, 78, 220, 33, 190, 238, 107, 36, 190, 35, 20, 136, 61, 96, 239, 107, 189, 151, 149, 164, 61, 4, 73, 23, 190, 169, 175, 60, 189, 13, 25, 183, 61, 41, 159, 57, 189, 158, 146, 238, 61, 153, 220, 10, 61, 52, 133, 157, 61, 69, 232, 117, 61, 117, 85, 0, 190, 194, 58, 239, 187, 137, 112, 20, 189, 253, 215, 192, 189, 246, 183, 9, 190, 228, 216, 216, 190, 216, 191, 156, 62, 160, 44, 82, 61, 144, 12, 33, 62, 178, 212, 117, 62, 85, 142, 36, 191, 67, 220, 182, 190, 141, 139, 182, 62, 48, 91, 10, 190, 66, 53, 13, 63, 146, 90, 147, 59, 255, 116, 120, 61, 123, 139, 12, 62, 101, 79, 145, 62, 119, 181, 158, 62, 0, 233, 22, 190, 79, 161, 152, 190, 233, 179, 31, 190, 209, 188, 103, 62, 157, 225, 197, 190, 76, 28, 212, 189, 31, 2, 14, 61, 191, 202, 216, 61, 249, 63, 2, 190, 97, 115, 165, 62, 86, 149, 224, 190, 237, 36, 7, 190, 231, 202, 40, 191, 231, 95, 102, 190, 250, 32, 16, 62, 228, 197, 194, 62, 170, 72, 201, 62, 78, 191, 149, 61, 0, 33, 170, 189, 24, 248, 60, 61, 76, 128, 102, 190, 7, 113, 140, 190, 133, 254, 118, 62, 200, 217, 61, 62, 99, 8, 11, 191, 87, 98, 255, 61, 29, 206, 62, 190, 81, 185, 76, 61, 81, 92, 44, 190, 18, 194, 164, 62, 77, 51, 155, 190, 47, 19, 195, 188, 232, 127, 169, 189, 196, 34, 208, 61, 30, 54, 36, 191, 42, 105, 145, 188, 183, 208, 44, 62, 156, 235, 17, 189, 210, 247, 231, 188, 153, 37, 31, 61, 102, 82, 235, 186, 42, 216, 181, 189, 243, 166, 148, 61, 1, 140, 39, 62, 190, 135, 205, 189, 191, 49, 131, 62, 55, 108, 155, 60, 149, 8, 31, 61, 64, 74, 18, 62, 192, 224, 73, 189, 50, 2, 53, 62, 225, 55, 136, 190, 179, 250, 138, 60, 205, 213, 115, 62, 134, 249, 42, 191, 117, 10, 196, 190, 88, 49, 36, 62, 250, 101, 9, 190, 186, 249, 242, 189, 129, 107, 169, 60, 246, 224, 136, 61, 219, 32, 192, 61, 50, 193, 59, 62, 17, 21, 121, 62, 25, 215, 5, 189, 106, 82, 207, 190, 42, 230, 22, 189, 250, 242, 83, 61, 136, 177, 29, 191, 48, 75, 5, 189, 18, 78, 13, 62, 205, 217, 150, 62, 179, 69, 144, 61, 226, 236, 240, 188, 2, 231, 149, 190, 13, 14, 185, 61, 125, 68, 121, 189, 125, 147, 188, 189, 108, 226, 168, 189, 0, 123, 228, 61, 109, 74, 57, 62, 100, 234, 130, 62, 11, 192, 49, 62, 10, 249, 149, 62, 142, 215, 241, 189, 92, 203, 159, 190, 48, 168, 38, 61, 204, 130, 227, 61, 181, 203, 170, 62, 108, 246, 71, 188, 33, 148, 235, 189, 72, 18, 127, 190, 143, 31, 181, 61, 149, 184, 125, 62, 100, 210, 129, 190, 218, 247, 131, 62, 57, 221, 172, 61, 212, 43, 23, 62, 192, 179, 36, 62, 225, 62, 128, 62, 97, 235, 18, 62, 125, 17, 54, 191, 105, 3, 167, 190, 210, 99, 29, 62, 92, 23, 91, 63, 161, 174, 150, 190, 118, 135, 148, 62, 168, 55, 159, 190, 111, 208, 57, 62, 93, 208, 204, 189, 93, 241, 237, 62, 112, 136, 165, 61, 221, 221, 83, 62, 155, 145, 81, 56, 112, 223, 7, 62, 189, 77, 251, 189, 87, 89, 107, 189, 215, 252, 21, 190, 223, 148, 2, 61, 252, 185, 51, 190, 33, 175, 46, 190, 175, 10, 16, 190, 143, 22, 45, 61, 179, 38, 123, 189, 152, 174, 136, 61, 191, 122, 13, 190, 203, 59, 194, 60, 225, 65, 43, 61, 66, 60, 24, 190, 46, 125, 185, 189, 235, 29, 52, 190, 20, 63, 15, 62, 218, 146, 113, 188, 83, 29, 248, 60, 251, 8, 156, 189, 196, 40, 125, 61, 202, 225, 40, 61, 192, 74, 125, 59, 126, 208, 196, 189, 185, 97, 9, 190, 155, 9, 216, 61, 168, 190, 24, 190, 37, 48, 12, 61, 22, 28, 240, 186, 251, 179, 240, 188, 249, 235, 11, 190, 28, 252, 84, 62, 118, 56, 148, 189, 184, 84, 63, 187, 20, 18, 131, 62, 51, 90, 185, 190, 98, 128, 193, 189, 166, 17, 253, 62, 0, 19, 129, 61, 81, 98, 121, 61, 50, 114, 128, 61, 52, 14, 86, 60, 173, 48, 137, 189, 186, 39, 128, 62, 180, 238, 17, 62, 29, 74, 248, 61, 182, 82, 200, 190, 40, 201, 3, 189, 28, 180, 5, 189, 12, 202, 83, 190, 100, 223, 205, 189, 182, 99, 154, 189, 190, 78, 92, 62, 7, 172, 242, 61, 76, 220, 42, 62, 114, 93, 193, 190, 72, 88, 187, 189, 60, 192, 196, 189, 27, 2, 239, 188, 22, 235, 178, 60, 21, 131, 162, 62, 196, 194, 72, 60, 79, 242, 233, 189, 41, 55, 199, 189, 89, 220, 33, 189, 203, 82, 44, 62, 90, 107, 139, 189, 78, 0, 85, 189, 96, 61, 145, 188, 243, 3, 136, 61, 166, 2, 70, 61, 229, 43, 200, 60, 150, 161, 25, 190, 180, 219, 157, 188, 190, 114, 80, 188, 240, 59, 143, 61, 12, 246, 220, 189, 89, 253, 69, 61, 52, 232, 119, 189, 226, 145, 104, 189, 138, 41, 104, 189, 116, 139, 27, 190, 149, 0, 35, 61, 137, 26, 165, 189, 183, 142, 232, 189, 179, 202, 65, 188, 189, 227, 200, 189, 252, 6, 40, 60, 119, 216, 44, 190, 55, 61, 138, 188, 147, 33, 136, 189, 162, 242, 127, 61, 230, 245, 45, 62, 233, 38, 139, 189, 196, 106, 156, 190, 133, 239, 46, 190, 7, 80, 197, 62, 29, 137, 160, 190, 19, 18, 9, 188, 0, 211, 1, 190, 142, 176, 183, 189, 92, 61, 135, 62, 71, 121, 190, 189, 134, 13, 167, 189, 239, 12, 118, 188, 14, 97, 38, 62, 120, 83, 186, 185, 122, 224, 221, 62, 91, 40, 200, 188, 10, 241, 66, 62, 135, 162, 217, 61, 128, 24, 196, 61, 222, 204, 69, 190, 32, 60, 105, 190, 255, 197, 58, 190, 221, 216, 176, 61, 52, 75, 221, 61, 56, 177, 170, 61, 75, 227, 187, 188, 219, 170, 7, 190, 4, 128, 137, 60, 205, 246, 59, 190, 122, 200, 113, 60, 58, 231, 161, 61, 64, 114, 211, 62, 1, 107, 190, 59, 114, 17, 50, 62, 93, 17, 25, 61, 24, 183, 239, 189, 65, 252, 98, 190, 250, 223, 248, 61, 77, 254, 166, 189, 16, 232, 103, 190, 79, 179, 140, 189, 114, 40, 152, 189, 161, 205, 46, 183, 159, 85, 42, 60, 51, 208, 39, 190, 32, 187, 177, 189, 103, 143, 222, 188, 168, 41, 170, 187, 3, 242, 247, 189, 252, 187, 209, 61, 37, 7, 158, 61, 79, 116, 237, 61, 45, 217, 120, 190, 143, 47, 217, 61, 152, 236, 206, 61, 146, 60, 57, 61, 101, 111, 29, 190, 195, 191, 148, 189, 134, 83, 101, 187, 101, 204, 28, 190, 95, 213, 129, 190, 65, 64, 62, 190, 221, 231, 152, 189, 220, 160, 132, 61, 46, 96, 246, 189, 13, 205, 119, 62, 62, 225, 161, 190, 183, 80, 179, 61, 175, 21, 93, 190, 57, 199, 154, 190, 59, 113, 196, 62, 204, 203, 61, 62, 79, 170, 60, 190, 156, 253, 252, 189, 19, 211, 201, 190, 73, 219, 86, 61, 42, 238, 20, 190, 74, 51, 122, 62, 224, 137, 242, 190, 246, 136, 84, 190, 177, 243, 255, 188, 35, 217, 161, 62, 92, 228, 4, 190, 51, 215, 225, 189, 143, 33, 200, 188, 169, 98, 67, 62, 121, 238, 167, 189, 66, 109, 127, 62, 78, 188, 69, 61, 172, 65, 153, 190, 106, 100, 137, 62, 49, 71, 119, 62, 71, 99, 71, 61, 190, 71, 214, 61, 76, 107, 160, 190, 29, 147, 66, 60, 119, 129, 48, 190, 125, 151, 56, 189, 66, 92, 41, 190, 174, 124, 194, 189, 39, 208, 70, 189, 37, 98, 3, 62, 96, 31, 242, 189, 50, 23, 157, 188, 156, 213, 18, 62, 29, 222, 233, 61, 171, 170, 32, 62, 233, 102, 251, 189, 149, 223, 63, 61, 37, 183, 29, 62, 194, 88, 151, 61, 239, 164, 166, 61, 173, 163, 48, 190, 131, 13, 37, 190, 203, 200, 15, 190, 15, 169, 246, 60, 48, 230, 204, 189, 191, 75, 108, 61, 113, 142, 15, 62, 105, 254, 43, 190, 195, 148, 197, 57, 208, 11, 246, 188, 249, 249, 148, 61, 20, 105, 139, 189, 169, 248, 229, 61, 89, 133, 183, 58, 102, 0, 172, 189, 191, 242, 34, 190, 116, 64, 175, 61, 51, 208, 65, 63, 178, 72, 98, 191, 63, 114, 96, 191, 78, 254, 146, 191, 121, 163, 79, 62, 104, 115, 226, 190, 65, 20, 1, 191, 247, 93, 165, 190, 83, 46, 6, 190, 79, 125, 20, 191, 209, 209, 73, 61, 111, 37, 197, 62, 255, 140, 50, 188, 61, 161, 3, 61, 28, 13, 9, 190, 79, 85, 148, 62, 156, 225, 61, 189, 106, 37, 52, 62, 142, 140, 189, 190, 166, 112, 196, 62, 18, 57, 94, 62, 104, 8, 165, 62, 57, 203, 7, 62, 12, 201, 137, 190, 111, 85, 182, 189, 92, 244, 157, 62, 43, 234, 54, 61, 5, 86, 149, 61, 134, 44, 132, 191, 13, 83, 247, 190, 248, 51, 67, 62, 125, 108, 123, 189, 196, 51, 238, 190, 78, 138, 139, 62, 247, 221, 30, 190, 37, 7, 155, 188, 144, 43, 213, 190, 125, 163, 94, 190, 254, 27, 74, 190, 36, 77, 200, 61, 233, 208, 35, 62, 214, 117, 227, 61, 135, 255, 69, 190, 165, 22, 196, 62, 242, 14, 82, 190, 192, 174, 115, 191, 251, 155, 51, 62, 102, 240, 95, 62, 34, 46, 214, 190, 138, 114, 221, 190, 91, 74, 11, 62, 235, 37, 128, 190, 179, 186, 24, 190, 211, 44, 132, 62, 81, 32, 198, 62, 5, 181, 179, 61, 62, 129, 130, 190, 4, 39, 21, 191, 26, 188, 206, 61, 96, 133, 80, 190, 111, 210, 119, 62, 143, 201, 1, 61, 121, 79, 9, 191, 56, 230, 19, 62, 167, 66, 142, 190, 232, 170, 156, 60, 132, 198, 37, 62, 219, 90, 27, 188, 97, 199, 148, 62, 170, 233, 172, 190, 97, 32, 175, 190, 211, 74, 231, 61, 20, 37, 154, 61, 138, 218, 47, 62, 107, 205, 181, 190, 177, 5, 7, 189, 254, 96, 188, 190, 92, 54, 141, 61, 68, 89, 226, 61, 206, 109, 253, 188, 253, 23, 225, 189, 242, 89, 142, 190, 94, 251, 208, 61, 222, 173, 194, 189, 242, 5, 39, 190, 146, 145, 27, 190, 80, 144, 171, 62, 64, 251, 186, 61, 154, 66, 36, 190, 159, 238, 2, 189, 34, 182, 246, 189, 238, 68, 201, 190, 75, 17, 223, 58, 240, 41, 186, 61, 7, 91, 219, 188, 166, 239, 14, 62, 91, 158, 20, 190, 54, 61, 255, 189, 193, 8, 44, 62, 157, 20, 0, 190, 207, 133, 227, 60, 4, 136, 176, 189, 225, 128, 234, 60, 137, 105, 145, 189, 103, 130, 249, 61, 29, 202, 47, 190, 35, 217, 176, 61, 98, 177, 4, 190, 230, 87, 9, 60, 132, 30, 16, 62, 174, 130, 164, 189, 128, 147, 5, 190, 139, 161, 49, 190, 128, 234, 2, 189, 214, 60, 45, 190, 237, 116, 236, 61, 100, 49, 43, 190, 2, 58, 227, 61, 212, 136, 33, 190, 162, 184, 158, 60, 64, 236, 118, 189, 69, 160, 28, 190, 201, 40, 217, 188, 1, 86, 42, 190, 62, 186, 31, 62, 129, 201, 189, 189, 87, 225, 107, 189, 250, 48, 43, 190};
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
                alignas(float) const unsigned char memory[] = {167, 119, 36, 62, 48, 213, 244, 189, 130, 96, 178, 188, 200, 51, 48, 62, 125, 222, 123, 62, 172, 210, 206, 189, 82, 108, 171, 62, 11, 89, 10, 188, 141, 84, 158, 62, 140, 78, 168, 61, 40, 196, 40, 188, 24, 255, 156, 62, 2, 178, 76, 61, 193, 25, 77, 62, 214, 140, 21, 190, 235, 117, 150, 190, 155, 134, 155, 188, 92, 213, 53, 62, 171, 19, 1, 62, 140, 52, 147, 61, 168, 54, 9, 61, 20, 252, 5, 190, 158, 235, 49, 62, 149, 90, 12, 62, 57, 195, 111, 62, 84, 19, 9, 190, 142, 145, 67, 62, 90, 63, 55, 60, 44, 45, 16, 62, 248, 13, 80, 61, 199, 200, 216, 61, 136, 14, 200, 60};
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
                alignas(float) const unsigned char memory[] = {170, 199, 31, 191, 204, 215, 139, 189, 56, 219, 48, 62, 179, 157, 155, 62, 160, 72, 11, 191, 220, 46, 129, 189, 15, 32, 41, 62, 24, 74, 238, 58, 65, 183, 124, 191, 216, 143, 173, 61, 238, 162, 33, 62, 152, 14, 243, 62, 44, 52, 236, 190, 152, 70, 177, 190, 18, 125, 247, 62, 219, 124, 167, 62, 16, 60, 22, 189, 69, 226, 38, 63, 144, 86, 238, 189, 146, 241, 146, 62, 59, 243, 152, 190, 199, 237, 40, 62, 196, 235, 114, 62, 156, 77, 184, 60, 31, 227, 102, 62, 250, 226, 222, 188, 83, 125, 16, 191, 4, 171, 120, 188, 238, 253, 110, 191, 9, 81, 39, 63, 25, 40, 130, 62, 86, 155, 126, 61, 142, 91, 89, 189, 103, 128, 246, 61, 33, 63, 221, 188, 195, 65, 168, 189, 92, 18, 143, 190, 226, 14, 116, 189, 70, 242, 144, 190, 135, 94, 193, 61, 190, 75, 164, 62, 31, 58, 59, 189, 160, 252, 10, 190, 233, 213, 144, 61, 172, 47, 5, 189, 158, 132, 85, 187, 116, 208, 185, 61, 230, 28, 209, 62, 107, 34, 237, 61, 108, 15, 115, 62, 70, 1, 72, 190, 189, 15, 48, 62, 127, 177, 70, 61, 68, 75, 86, 61, 10, 169, 191, 60, 89, 209, 27, 62, 65, 251, 211, 190, 36, 1, 188, 61, 203, 92, 113, 189, 242, 219, 0, 189, 85, 169, 98, 62, 183, 107, 95, 61, 54, 116, 189, 188, 159, 99, 93, 189};
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
                alignas(float) const unsigned char memory[] = {215, 195, 245, 188, 124, 159, 133, 190};
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
    alignas(float) const unsigned char memory[] = {224, 32, 244, 62, 215, 215, 12, 62, 158, 120, 46, 64};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {56, 239, 194, 191, 245, 189, 41, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0031/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}