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
                alignas(float) const unsigned char memory[] = {158, 219, 14, 63, 33, 0, 239, 62, 239, 38, 134, 62, 25, 218, 59, 62, 152, 108, 255, 62, 172, 235, 33, 190, 75, 147, 5, 191, 35, 212, 208, 191, 39, 253, 153, 190, 27, 25, 88, 190, 18, 2, 34, 191, 181, 29, 144, 62, 212, 82, 129, 61, 174, 184, 12, 63, 239, 31, 246, 62, 66, 184, 1, 63, 92, 152, 238, 190, 240, 9, 231, 62, 140, 33, 129, 190, 50, 219, 190, 62, 11, 23, 8, 63, 95, 50, 214, 190, 242, 165, 16, 189, 18, 208, 58, 190, 175, 37, 208, 62, 118, 9, 50, 63, 131, 44, 247, 190, 155, 139, 76, 63, 27, 152, 52, 191, 233, 171, 32, 190, 97, 208, 94, 63, 61, 37, 118, 63, 22, 152, 171, 62, 219, 215, 12, 191, 80, 7, 12, 63, 9, 92, 129, 189, 202, 14, 3, 191, 194, 142, 82, 63, 212, 103, 41, 62, 93, 47, 24, 63, 37, 156, 176, 63, 26, 71, 95, 62, 237, 102, 10, 191, 164, 250, 129, 190, 97, 180, 199, 190, 190, 116, 168, 190, 111, 35, 12, 63, 25, 137, 133, 190, 163, 178, 25, 63, 171, 87, 201, 190, 250, 126, 119, 190, 253, 8, 238, 190, 102, 175, 165, 191, 207, 205, 201, 61, 36, 16, 189, 190, 0, 108, 2, 64, 96, 203, 244, 62, 27, 75, 218, 62, 247, 223, 47, 191, 170, 13, 155, 62, 56, 136, 60, 190, 142, 64, 80, 63, 120, 112, 239, 62, 87, 3, 139, 61, 204, 233, 168, 62, 127, 82, 241, 190, 177, 114, 130, 62, 235, 130, 129, 63, 231, 242, 99, 62, 177, 98, 22, 63, 134, 112, 101, 191, 56, 5, 230, 190, 137, 116, 83, 63, 34, 20, 19, 190, 52, 33, 120, 190, 16, 190, 103, 191, 92, 84, 77, 191, 109, 255, 43, 190, 155, 142, 12, 191, 248, 8, 20, 189, 160, 230, 247, 62, 152, 103, 46, 63, 164, 198, 202, 190, 28, 142, 135, 189, 216, 144, 227, 189, 244, 141, 166, 60, 155, 95, 220, 62, 82, 29, 120, 190, 143, 219, 105, 63, 0, 96, 134, 62, 223, 85, 66, 63, 123, 170, 99, 191, 244, 25, 211, 190, 238, 97, 140, 190, 171, 12, 152, 62, 209, 84, 28, 63};
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
                alignas(float) const unsigned char memory[] = {99, 204, 86, 191, 164, 229, 170, 62, 220, 93, 151, 190, 235, 137, 38, 191, 131, 226, 162, 62, 3, 239, 175, 190, 43, 177, 29, 191, 211, 91, 48, 191, 224, 26, 28, 191, 49, 178, 111, 62, 139, 22, 205, 190, 93, 195, 229, 62, 121, 117, 51, 63, 90, 6, 102, 61, 0, 234, 160, 190, 11, 247, 217, 61, 162, 242, 32, 191, 223, 69, 212, 62, 102, 190, 30, 191, 31, 166, 84, 62, 76, 83, 25, 191, 33, 70, 116, 60, 104, 230, 200, 62, 37, 91, 5, 191, 175, 100, 171, 62, 41, 240, 249, 190, 78, 141, 239, 62, 115, 142, 230, 62, 137, 205, 42, 191, 217, 152, 159, 190, 153, 220, 30, 191, 150, 50, 7, 189};
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
                alignas(float) const unsigned char memory[] = {106, 12, 47, 191, 118, 166, 131, 190, 57, 170, 38, 62, 62, 117, 54, 62, 197, 186, 91, 190, 20, 171, 92, 189, 20, 119, 72, 189, 235, 240, 9, 59, 65, 132, 99, 190, 203, 237, 183, 189, 62, 198, 158, 191, 161, 250, 0, 187, 46, 13, 241, 188, 226, 133, 74, 191, 180, 69, 252, 189, 64, 166, 130, 190, 87, 66, 164, 189, 118, 83, 180, 62, 156, 199, 133, 190, 204, 32, 112, 62, 78, 203, 154, 190, 222, 34, 119, 61, 17, 124, 125, 190, 226, 245, 6, 61, 194, 226, 190, 59, 241, 152, 156, 189, 92, 232, 46, 62, 9, 33, 50, 62, 21, 58, 53, 62, 213, 111, 202, 190, 69, 244, 140, 61, 58, 1, 126, 189, 155, 227, 29, 62, 185, 3, 63, 62, 185, 128, 150, 62, 183, 148, 167, 190, 107, 84, 129, 61, 43, 243, 83, 62, 167, 66, 222, 62, 176, 249, 34, 189, 85, 66, 136, 189, 176, 220, 24, 190, 216, 113, 184, 62, 39, 165, 35, 62, 65, 36, 88, 188, 8, 255, 161, 62, 92, 219, 155, 62, 187, 165, 151, 62, 113, 81, 170, 190, 145, 169, 42, 62, 168, 142, 77, 191, 112, 58, 163, 190, 35, 18, 148, 62, 188, 67, 75, 190, 76, 38, 3, 62, 245, 109, 179, 190, 81, 59, 117, 189, 125, 187, 205, 62, 61, 239, 143, 189, 27, 57, 71, 62, 177, 63, 98, 62, 193, 23, 78, 191, 207, 45, 159, 190, 60, 224, 16, 190, 51, 50, 40, 63, 206, 173, 240, 189, 236, 163, 156, 189, 144, 74, 203, 61, 246, 221, 81, 60, 175, 2, 182, 61, 128, 97, 2, 62, 227, 231, 238, 190, 247, 54, 144, 62, 122, 197, 134, 190, 143, 3, 196, 62, 126, 168, 18, 188, 245, 224, 25, 61, 90, 46, 175, 62, 18, 139, 51, 190, 250, 77, 137, 62, 255, 163, 168, 190, 29, 171, 205, 190, 87, 91, 129, 59, 186, 156, 157, 190, 6, 243, 170, 61, 142, 34, 77, 62, 218, 193, 191, 61, 176, 70, 88, 191, 232, 164, 174, 189, 101, 186, 127, 61, 41, 84, 29, 190, 45, 86, 132, 190, 243, 206, 224, 61, 129, 236, 173, 61, 28, 239, 52, 191, 202, 62, 65, 60, 145, 180, 169, 191, 52, 84, 107, 188, 112, 220, 188, 190, 211, 74, 120, 62, 13, 81, 150, 62, 255, 164, 237, 189, 111, 164, 147, 190, 119, 0, 26, 62, 80, 29, 122, 62, 67, 50, 189, 62, 59, 149, 98, 191, 247, 208, 149, 61, 188, 66, 215, 190, 152, 202, 1, 191, 151, 194, 237, 190, 170, 3, 203, 189, 144, 166, 110, 62, 211, 78, 31, 190, 26, 155, 198, 189, 59, 174, 250, 62, 120, 81, 158, 190, 21, 163, 114, 62, 102, 191, 51, 190, 42, 45, 220, 61, 29, 125, 147, 62, 47, 27, 237, 190, 43, 158, 59, 62, 156, 144, 4, 62, 212, 13, 217, 188, 62, 55, 109, 190, 137, 211, 218, 62, 214, 220, 245, 61, 244, 118, 29, 190, 160, 211, 218, 187, 159, 252, 164, 61, 55, 236, 135, 189, 47, 181, 175, 59, 138, 218, 11, 189, 213, 128, 37, 189, 254, 176, 143, 61, 173, 224, 149, 60, 44, 175, 200, 189, 127, 172, 37, 62, 124, 152, 21, 61, 151, 111, 28, 61, 219, 59, 0, 190, 67, 154, 63, 188, 40, 142, 33, 190, 65, 123, 79, 188, 103, 154, 143, 187, 230, 112, 67, 189, 237, 239, 180, 189, 249, 103, 98, 61, 176, 76, 9, 190, 220, 255, 42, 190, 14, 24, 250, 189, 224, 83, 111, 60, 130, 112, 19, 62, 141, 175, 20, 190, 119, 204, 255, 61, 77, 117, 174, 189, 201, 225, 36, 190, 89, 148, 254, 189, 157, 144, 144, 189, 161, 8, 181, 190, 14, 43, 18, 62, 21, 199, 10, 190, 50, 58, 98, 61, 155, 119, 55, 190, 184, 200, 150, 189, 110, 174, 179, 188, 42, 245, 53, 60, 220, 147, 208, 61, 166, 23, 60, 62, 155, 242, 132, 191, 179, 100, 81, 60, 204, 250, 89, 191, 136, 97, 52, 191, 83, 2, 88, 61, 89, 23, 248, 61, 112, 231, 149, 189, 89, 60, 183, 189, 33, 91, 190, 190, 77, 175, 99, 62, 101, 138, 120, 190, 159, 160, 191, 61, 168, 98, 0, 191, 21, 178, 156, 61, 115, 53, 81, 189, 5, 246, 22, 59, 65, 47, 21, 190, 119, 245, 143, 61, 31, 207, 120, 62, 214, 179, 142, 190, 250, 222, 137, 62, 184, 147, 55, 61, 160, 130, 33, 63, 250, 22, 52, 191, 30, 160, 169, 62, 20, 169, 31, 191, 55, 104, 0, 190, 74, 161, 36, 61, 217, 49, 114, 62, 244, 1, 194, 189, 102, 216, 167, 190, 58, 71, 248, 189, 110, 174, 145, 62, 226, 222, 28, 61, 218, 202, 30, 190, 226, 103, 176, 62, 85, 88, 140, 190, 109, 75, 133, 189, 169, 41, 23, 191, 43, 249, 96, 62, 148, 89, 104, 62, 180, 146, 65, 61, 31, 3, 72, 62, 154, 237, 157, 190, 58, 85, 9, 189, 51, 81, 68, 62, 36, 174, 201, 189, 51, 42, 42, 189, 40, 9, 170, 190, 149, 178, 51, 190, 174, 131, 143, 61, 198, 123, 60, 62, 158, 10, 234, 61, 91, 38, 41, 190, 18, 85, 162, 191, 17, 194, 67, 62, 11, 88, 110, 190, 53, 106, 23, 190, 29, 134, 38, 62, 22, 88, 54, 190, 80, 100, 35, 190, 222, 143, 176, 190, 179, 173, 236, 189, 203, 179, 150, 62, 90, 179, 63, 191, 202, 142, 227, 190, 68, 37, 222, 61, 218, 169, 86, 189, 168, 31, 231, 190, 81, 27, 245, 190, 43, 180, 120, 189, 57, 182, 181, 189, 245, 219, 148, 62, 168, 97, 138, 61, 113, 77, 207, 189, 71, 234, 121, 189, 127, 169, 216, 61, 16, 238, 99, 62, 47, 35, 98, 62, 232, 129, 26, 191, 122, 129, 125, 62, 113, 28, 35, 62, 238, 28, 2, 190, 4, 194, 62, 190, 106, 200, 210, 61, 40, 231, 123, 61, 204, 161, 47, 191, 228, 244, 73, 62, 130, 1, 127, 191, 50, 224, 140, 61, 196, 57, 146, 59, 101, 39, 193, 61, 223, 236, 16, 188, 99, 102, 138, 189, 208, 209, 193, 189, 255, 96, 159, 189, 241, 191, 38, 191, 183, 243, 121, 189, 152, 139, 46, 190, 70, 233, 71, 191, 47, 67, 24, 62, 75, 156, 42, 62, 254, 20, 56, 62, 27, 77, 157, 61, 3, 224, 28, 191, 242, 147, 153, 188, 239, 13, 255, 190, 38, 233, 54, 61, 128, 17, 147, 190, 175, 176, 14, 190, 131, 145, 63, 189, 52, 7, 182, 190, 115, 14, 177, 61, 88, 57, 145, 62, 174, 229, 15, 62, 94, 139, 69, 190, 66, 30, 180, 189, 1, 4, 235, 61, 220, 188, 174, 62, 205, 219, 205, 188, 35, 34, 17, 62, 88, 85, 50, 191, 132, 147, 168, 188, 234, 46, 231, 189, 226, 56, 216, 190, 140, 227, 200, 190, 51, 197, 125, 190, 216, 19, 95, 191, 117, 82, 204, 62, 194, 20, 72, 62, 73, 163, 214, 62, 137, 71, 76, 62, 81, 4, 186, 60, 237, 230, 107, 62, 237, 97, 182, 190, 70, 90, 130, 62, 43, 16, 178, 189, 251, 100, 234, 190, 65, 44, 217, 190, 149, 203, 152, 188, 79, 63, 153, 62, 161, 161, 16, 190, 69, 249, 137, 190, 68, 82, 88, 62, 49, 15, 176, 189, 210, 125, 241, 189, 118, 68, 141, 190, 208, 97, 92, 190, 110, 190, 103, 190, 128, 158, 42, 191, 35, 244, 112, 191, 60, 239, 144, 190, 77, 64, 233, 191, 2, 205, 200, 188, 6, 142, 189, 189, 120, 154, 119, 189, 74, 73, 134, 190, 220, 233, 251, 189, 163, 74, 192, 62, 247, 247, 83, 62, 205, 84, 151, 191, 118, 252, 184, 190, 210, 30, 153, 189, 98, 166, 48, 191, 70, 207, 109, 191, 103, 51, 234, 61, 198, 119, 61, 62, 199, 97, 132, 62, 165, 116, 127, 187, 85, 124, 88, 62, 34, 57, 125, 190, 230, 233, 141, 62, 30, 243, 41, 189, 136, 88, 66, 62, 121, 176, 194, 187, 99, 22, 163, 191, 89, 103, 25, 62, 253, 100, 170, 60, 237, 241, 136, 189, 49, 60, 141, 189, 17, 71, 127, 61, 14, 252, 126, 62, 11, 151, 71, 191, 171, 118, 0, 63, 92, 150, 7, 191, 119, 89, 117, 61, 36, 61, 207, 61, 217, 63, 71, 189, 48, 243, 199, 189, 212, 224, 52, 62, 24, 238, 225, 61, 225, 45, 40, 191, 102, 208, 54, 191, 31, 231, 193, 189, 86, 246, 189, 62, 28, 124, 171, 60, 180, 131, 203, 191, 15, 20, 42, 190, 41, 217, 112, 190, 136, 92, 6, 190, 219, 237, 170, 61, 83, 115, 69, 190, 215, 167, 92, 190, 211, 66, 32, 62, 254, 93, 227, 61, 135, 129, 219, 190, 150, 27, 138, 61, 220, 109, 118, 191, 159, 154, 142, 62, 50, 56, 128, 191, 215, 217, 248, 189, 211, 26, 230, 189, 187, 211, 249, 189, 7, 12, 90, 62, 72, 58, 179, 191, 44, 254, 199, 189, 166, 120, 193, 190, 40, 38, 24, 62, 13, 27, 13, 190, 4, 151, 3, 61, 248, 58, 170, 61, 136, 105, 114, 190, 223, 166, 173, 190, 186, 72, 127, 62, 242, 249, 212, 190, 67, 129, 103, 191, 98, 225, 127, 189, 62, 91, 47, 62, 65, 125, 10, 63, 90, 157, 142, 191, 161, 127, 133, 191, 211, 3, 25, 62, 168, 152, 84, 190, 248, 240, 74, 61, 204, 253, 44, 61, 43, 139, 64, 190, 200, 163, 206, 61, 215, 67, 144, 190, 92, 212, 109, 62, 11, 39, 43, 63, 244, 33, 113, 61, 130, 43, 58, 62, 88, 237, 35, 190, 253, 60, 141, 190, 151, 186, 189, 190, 205, 163, 153, 189, 245, 182, 169, 191, 206, 9, 113, 62, 152, 227, 3, 190, 202, 221, 38, 62, 189, 156, 52, 62, 9, 59, 31, 62, 68, 66, 105, 190, 85, 230, 129, 62, 177, 239, 149, 62, 208, 99, 158, 62, 236, 102, 80, 191, 202, 91, 109, 190, 174, 117, 224, 190, 231, 220, 19, 191, 95, 50, 201, 190, 241, 242, 169, 190, 49, 99, 218, 62, 76, 99, 186, 188, 165, 75, 33, 190, 2, 56, 0, 62, 151, 25, 54, 190, 255, 140, 194, 61, 131, 22, 61, 189, 14, 106, 163, 62, 88, 190, 126, 62, 168, 27, 102, 190, 130, 247, 148, 62, 83, 94, 159, 62, 162, 213, 20, 190, 246, 221, 49, 189, 88, 16, 234, 62, 58, 73, 78, 61, 191, 128, 113, 191, 202, 29, 33, 62, 102, 186, 200, 60, 36, 70, 158, 62, 135, 70, 11, 61, 172, 178, 151, 190, 77, 70, 202, 190, 107, 81, 215, 189, 216, 247, 20, 62, 113, 215, 34, 62, 255, 170, 197, 61, 190, 214, 162, 61, 87, 92, 121, 58, 178, 216, 99, 62, 144, 16, 243, 190, 21, 154, 13, 190, 17, 38, 176, 61, 235, 228, 45, 62, 246, 158, 89, 191, 62, 20, 6, 61, 95, 209, 36, 190, 220, 115, 228, 60, 186, 127, 229, 188, 195, 119, 32, 190, 142, 89, 130, 62, 220, 108, 220, 189, 146, 94, 100, 190, 159, 151, 141, 61, 105, 66, 13, 191, 6, 26, 6, 191, 204, 251, 129, 60, 152, 110, 216, 190, 171, 146, 47, 189, 147, 134, 214, 61, 140, 73, 133, 61, 210, 186, 143, 189, 112, 225, 93, 61, 73, 45, 11, 190, 75, 163, 100, 188, 53, 17, 10, 190, 81, 72, 44, 62, 7, 169, 5, 189, 136, 82, 180, 189, 61, 60, 41, 190, 3, 77, 182, 189, 124, 253, 152, 189, 204, 215, 28, 190, 155, 191, 210, 60, 15, 152, 2, 62, 160, 71, 36, 190, 36, 185, 17, 190, 151, 58, 38, 190, 26, 62, 32, 190, 28, 248, 149, 189, 121, 201, 104, 189, 223, 186, 200, 189, 90, 164, 199, 189, 125, 108, 231, 61, 65, 231, 249, 59, 38, 24, 53, 190, 199, 102, 42, 189, 19, 129, 23, 62, 142, 37, 44, 189, 242, 195, 128, 60, 104, 227, 161, 189, 173, 25, 164, 190, 217, 16, 239, 60, 239, 214, 142, 190, 92, 248, 117, 190, 13, 182, 4, 190, 139, 103, 40, 191, 206, 232, 126, 190, 28, 172, 127, 190, 109, 118, 82, 189, 144, 107, 63, 190, 203, 217, 71, 61, 199, 75, 163, 61, 68, 70, 130, 190, 176, 98, 87, 190, 116, 17, 24, 191, 70, 149, 159, 61, 111, 6, 31, 62, 252, 85, 69, 191, 77, 80, 191, 190, 5, 106, 127, 190, 158, 212, 179, 190, 4, 103, 115, 190, 73, 208, 152, 190, 19, 63, 71, 190, 2, 52, 249, 188, 180, 38, 153, 62, 113, 239, 162, 190, 177, 75, 113, 191, 50, 85, 166, 191, 160, 93, 23, 189, 73, 8, 145, 187, 65, 53, 2, 190, 224, 133, 162, 61, 219, 120, 248, 190, 130, 224, 15, 191, 2, 121, 116, 190, 96, 31, 18, 190, 210, 67, 239, 189, 117, 22, 149, 62, 107, 254, 0, 191, 40, 210, 180, 190, 17, 207, 101, 190, 134, 64, 243, 62, 91, 206, 72, 62, 38, 195, 185, 190, 96, 116, 194, 187, 18, 121, 133, 62, 10, 174, 24, 189, 189, 78, 106, 191, 19, 164, 68, 190, 137, 117, 211, 190, 138, 20, 193, 61, 40, 129, 3, 62, 46, 120, 165, 189, 38, 47, 128, 190, 68, 90, 131, 191, 51, 105, 35, 191, 67, 85, 60, 190, 55, 134, 51, 191, 185, 25, 43, 190, 217, 169, 18, 191, 243, 27, 73, 190, 80, 90, 15, 190, 158, 124, 16, 191, 36, 233, 49, 62, 161, 99, 145, 62, 156, 51, 194, 188, 77, 145, 254, 189, 202, 127, 240, 61, 200, 201, 6, 191, 187, 39, 132, 189, 171, 175, 202, 190, 121, 180, 96, 189, 65, 134, 94, 62, 24, 209, 124, 62, 83, 121, 198, 62, 0, 20, 220, 62, 248, 245, 132, 62, 76, 162, 99, 62, 80, 161, 160, 190, 248, 140, 200, 62, 38, 213, 183, 191, 126, 152, 155, 189, 139, 83, 131, 190, 110, 128, 131, 189, 82, 228, 111, 188, 186, 146, 169, 190, 104, 245, 124, 188, 48, 180, 176, 62, 215, 52, 229, 188, 173, 139, 24, 62, 243, 60, 214, 190, 203, 175, 197, 191, 81, 60, 113, 190, 87, 55, 233, 190, 204, 63, 23, 189, 168, 10, 24, 190, 161, 175, 26, 190, 160, 237, 148, 61, 156, 249, 137, 189, 109, 169, 182, 189, 156, 43, 179, 188, 228, 4, 186, 61, 115, 245, 166, 60, 35, 28, 23, 62, 100, 224, 192, 189, 18, 235, 7, 62, 129, 68, 25, 61, 105, 231, 243, 189, 53, 190, 203, 189, 34, 170, 207, 189, 86, 82, 13, 190, 100, 96, 55, 61, 31, 14, 74, 61, 249, 89, 166, 188, 96, 88, 255, 189, 61, 134, 164, 187, 109, 165, 131, 189, 55, 110, 56, 61, 61, 155, 101, 189, 229, 205, 200, 189, 191, 77, 105, 189, 56, 155, 189, 60, 27, 131, 253, 189, 46, 214, 25, 190, 117, 34, 217, 189, 204, 92, 13, 61, 205, 225, 252, 60, 135, 11, 193, 189, 235, 204, 144, 62, 27, 204, 184, 190, 95, 131, 79, 190, 110, 3, 152, 62, 108, 205, 61, 191, 189, 74, 91, 188, 151, 5, 71, 189, 50, 206, 225, 189, 138, 44, 221, 189, 145, 111, 28, 62, 212, 86, 175, 62, 209, 128, 168, 189, 61, 88, 151, 60, 235, 2, 59, 190, 198, 5, 56, 190, 246, 96, 6, 63, 18, 227, 40, 191, 246, 29, 139, 190, 69, 218, 11, 190, 48, 163, 213, 189, 119, 190, 235, 61, 36, 230, 14, 189, 51, 116, 141, 190, 184, 77, 186, 62, 142, 230, 154, 62, 187, 69, 123, 190, 205, 192, 117, 190, 243, 230, 41, 191, 205, 116, 34, 190, 217, 192, 193, 189, 67, 164, 45, 190, 37, 111, 64, 188, 130, 165, 155, 61, 198, 121, 45, 190, 58, 140, 191, 60, 203, 11, 194, 190, 98, 116, 123, 189, 122, 16, 55, 190, 249, 253, 51, 62, 20, 64, 241, 61, 66, 242, 102, 62, 93, 227, 149, 62, 66, 42, 11, 63, 179, 15, 47, 62, 246, 184, 175, 61, 205, 204, 90, 62, 117, 213, 68, 190, 160, 12, 170, 62, 155, 173, 142, 190, 198, 151, 117, 190, 145, 152, 0, 190, 205, 222, 169, 61, 105, 112, 161, 188, 252, 52, 219, 59, 7, 92, 14, 62, 90, 224, 57, 61, 203, 195, 41, 61, 159, 30, 174, 61, 69, 11, 15, 190, 134, 175, 154, 190, 98, 163, 35, 60, 158, 30, 130, 190, 90, 83, 160, 190, 81, 155, 158, 62, 85, 89, 96, 61, 229, 48, 142, 60, 72, 162, 133, 62, 216, 238, 136, 62, 55, 13, 129, 189, 151, 161, 161, 189, 127, 54, 27, 189, 129, 35, 2, 61, 43, 71, 138, 62, 68, 167, 64, 62, 33, 238, 132, 62, 250, 61, 170, 62, 173, 237, 156, 62, 139, 137, 181, 61, 190, 240, 72, 190, 37, 53, 128, 62, 8, 206, 83, 190, 252, 162, 69, 62, 243, 249, 173, 188, 113, 126, 90, 61, 180, 101, 141, 62, 124, 99, 151, 190, 249, 133, 139, 61, 21, 79, 162, 61, 53, 119, 92, 62, 108, 178, 174, 62, 125, 184, 32, 62, 207, 105, 197, 61, 192, 239, 231, 189, 76, 164, 130, 61, 148, 110, 221, 189, 59, 29, 190, 187, 126, 13, 53, 190, 105, 149, 126, 60, 178, 46, 52, 189, 165, 58, 145, 61, 211, 213, 74, 190, 59, 237, 83, 187, 203, 19, 14, 189, 50, 66, 107, 189, 69, 151, 221, 61, 96, 174, 62, 61, 47, 52, 10, 189, 143, 206, 161, 189, 210, 157, 238, 189, 20, 0, 130, 189, 230, 225, 19, 62, 50, 80, 125, 57, 138, 91, 25, 189, 173, 137, 19, 190, 82, 215, 181, 189, 128, 80, 20, 62, 198, 184, 243, 189, 23, 17, 5, 189, 18, 183, 2, 190, 17, 246, 40, 62, 246, 178, 203, 61, 139, 81, 184, 189, 40, 44, 178, 61, 152, 123, 211, 189, 132, 155, 206, 189, 99, 13, 60, 61, 191, 110, 155, 61, 192, 241, 99, 62, 151, 243, 134, 190, 46, 136, 201, 190, 202, 253, 167, 189, 177, 94, 147, 62, 48, 249, 54, 61, 133, 10, 234, 189, 220, 29, 241, 61, 250, 239, 118, 190, 162, 192, 35, 63, 170, 142, 161, 62, 20, 15, 113, 62, 16, 28, 14, 63, 113, 136, 98, 188, 63, 164, 177, 62, 139, 251, 210, 190, 226, 65, 208, 61, 182, 220, 213, 191, 50, 148, 156, 59, 79, 93, 216, 189, 34, 107, 195, 189, 78, 245, 151, 60, 215, 207, 203, 190, 75, 190, 23, 62, 200, 166, 155, 62, 196, 11, 168, 190, 104, 13, 8, 190, 21, 196, 0, 61, 141, 65, 173, 191, 22, 77, 192, 190, 202, 218, 14, 191, 108, 29, 138, 191, 197, 125, 115, 62, 74, 54, 133, 191, 156, 80, 226, 61, 254, 74, 19, 62, 44, 205, 111, 190, 200, 129, 32, 190, 138, 226, 152, 190, 124, 255, 90, 191, 82, 87, 210, 60, 109, 82, 210, 190, 56, 232, 2, 191, 159, 60, 254, 62, 236, 111, 20, 61, 158, 23, 175, 191, 246, 125, 27, 191, 128, 95, 186, 189, 160, 159, 214, 60, 130, 42, 192, 61, 36, 168, 33, 62, 166, 16, 142, 190, 246, 245, 169, 61, 169, 194, 156, 62, 44, 49, 47, 190, 247, 107, 56, 189, 128, 137, 242, 191, 92, 208, 248, 61, 157, 30, 245, 188, 191, 44, 15, 190, 221, 131, 201, 61, 253, 161, 43, 189, 174, 244, 71, 62, 128, 195, 23, 191, 0, 70, 34, 190, 231, 38, 201, 61, 191, 8, 84, 190, 224, 128, 127, 59, 69, 241, 49, 62, 37, 1, 144, 189, 147, 180, 115, 190, 95, 47, 10, 191, 191, 235, 194, 61, 204, 172, 131, 189, 33, 235, 64, 191, 33, 241, 165, 190, 82, 24, 250, 61, 10, 179, 13, 190, 56, 51, 45, 191, 0, 165, 168, 189, 39, 24, 182, 61, 80, 208, 76, 191, 134, 153, 135, 61, 109, 236, 251, 190, 105, 100, 66, 189, 126, 35, 164, 189, 160, 162, 155, 61, 202, 161, 102, 62, 159, 254, 189, 189, 61, 121, 35, 189, 193, 126, 157, 62, 235, 146, 35, 62, 157, 247, 88, 191, 136, 175, 222, 188, 132, 66, 9, 190, 87, 145, 177, 189, 142, 72, 196, 61, 255, 169, 44, 189, 181, 96, 103, 60, 250, 217, 205, 188, 78, 139, 143, 189, 236, 59, 66, 189, 46, 91, 1, 188, 93, 79, 232, 189, 250, 113, 230, 189, 202, 107, 228, 60, 152, 126, 10, 190, 19, 143, 190, 189, 183, 21, 77, 190, 43, 3, 250, 187, 39, 133, 99, 189, 121, 245, 21, 62, 144, 255, 25, 190, 89, 185, 232, 189, 117, 206, 66, 190, 140, 202, 5, 62, 167, 97, 216, 189, 141, 210, 251, 61, 175, 11, 205, 61, 252, 199, 19, 62, 161, 113, 218, 61, 123, 77, 250, 61, 112, 100, 15, 190, 183, 175, 194, 189, 150, 78, 44, 61, 185, 177, 58, 189, 28, 164, 134, 61, 106, 116, 97, 190, 25, 9, 62, 190, 212, 156, 252, 61, 221, 59, 227, 62, 237, 147, 196, 61, 51, 54, 127, 189, 2, 194, 178, 190, 156, 175, 47, 62, 9, 7, 6, 60, 180, 111, 128, 62, 188, 56, 181, 191, 199, 15, 202, 190, 231, 189, 145, 60, 176, 117, 150, 191, 77, 167, 194, 189, 218, 106, 70, 190, 17, 232, 206, 62, 85, 120, 53, 62, 20, 77, 203, 189, 199, 12, 205, 62, 151, 143, 72, 191, 249, 14, 220, 189, 105, 226, 253, 191, 144, 15, 4, 62, 167, 236, 127, 61, 198, 55, 72, 190, 215, 128, 54, 62, 170, 135, 35, 61, 127, 246, 35, 190, 254, 96, 215, 189, 171, 57, 204, 62, 176, 236, 199, 61, 21, 11, 29, 189, 97, 146, 78, 189, 86, 207, 184, 62, 158, 226, 253, 188, 31, 18, 115, 62, 165, 13, 114, 62, 250, 94, 145, 62, 226, 6, 136, 190, 226, 149, 51, 62, 29, 254, 81, 189, 27, 86, 180, 62, 169, 121, 82, 62, 119, 43, 50, 190, 120, 190, 166, 188, 217, 29, 187, 190, 128, 255, 21, 189, 22, 165, 76, 191, 110, 189, 243, 189, 143, 14, 34, 190, 121, 130, 109, 62, 59, 136, 116, 62, 216, 213, 9, 191, 141, 219, 3, 62, 124, 64, 138, 190, 50, 36, 56, 190, 75, 195, 190, 60, 39, 130, 20, 62, 209, 175, 84, 62, 184, 250, 190, 61, 248, 68, 235, 189, 115, 29, 164, 189, 110, 50, 82, 62, 190, 233, 128, 62, 93, 214, 15, 62, 2, 2, 103, 62, 117, 105, 232, 190, 218, 122, 62, 62, 30, 236, 87, 189, 103, 128, 41, 190, 76, 0, 155, 189, 125, 25, 16, 61, 201, 51, 159, 190, 106, 215, 135, 62, 71, 210, 12, 61, 128, 236, 182, 189, 235, 104, 66, 190, 188, 4, 194, 62, 41, 133, 161, 62, 112, 149, 67, 62, 239, 105, 24, 190, 29, 203, 130, 62, 49, 170, 159, 191, 124, 230, 161, 62, 13, 128, 148, 61, 211, 110, 5, 62, 249, 8, 10, 190, 13, 227, 175, 190, 198, 5, 46, 62, 20, 176, 16, 62, 135, 133, 18, 191, 98, 153, 220, 189, 36, 253, 181, 62, 44, 81, 30, 62, 20, 15, 215, 189, 109, 60, 21, 62, 177, 224, 200, 59, 171, 144, 23, 62, 123, 201, 74, 61, 106, 114, 50, 190, 229, 32, 233, 188, 4, 227, 128, 61, 244, 42, 239, 189, 166, 220, 41, 190, 249, 222, 39, 62, 24, 242, 32, 61, 248, 123, 10, 189, 132, 81, 160, 189, 144, 189, 179, 189, 3, 119, 190, 188, 10, 56, 180, 189, 31, 202, 118, 189, 14, 99, 138, 189, 158, 158, 132, 189, 4, 158, 227, 189, 89, 77, 3, 190, 59, 90, 41, 190, 103, 58, 36, 61, 20, 40, 113, 185, 74, 255, 193, 60, 92, 5, 183, 189, 128, 55, 152, 189, 196, 74, 142, 189, 235, 162, 121, 61, 5, 70, 167, 61, 245, 226, 225, 189, 177, 184, 137, 189};
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
                alignas(float) const unsigned char memory[] = {214, 229, 90, 62, 239, 184, 88, 62, 79, 192, 127, 190, 181, 57, 23, 62, 112, 119, 14, 190, 19, 22, 196, 61, 192, 4, 215, 190, 50, 228, 218, 61, 248, 253, 133, 61, 211, 142, 90, 62, 34, 95, 198, 61, 190, 210, 254, 61, 236, 15, 92, 62, 246, 196, 65, 61, 220, 90, 209, 61, 107, 47, 13, 62, 81, 55, 11, 190, 153, 162, 100, 189, 242, 219, 174, 62, 172, 168, 6, 190, 28, 56, 133, 62, 108, 105, 205, 62, 233, 35, 206, 62, 202, 94, 246, 189, 10, 180, 81, 62, 192, 1, 185, 62, 56, 99, 59, 61, 142, 160, 184, 189, 26, 179, 64, 60, 183, 162, 251, 61, 135, 132, 175, 190, 236, 135, 195, 189};
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
                alignas(float) const unsigned char memory[] = {132, 74, 251, 62, 205, 167, 19, 191, 188, 127, 23, 62, 200, 192, 26, 63, 5, 66, 33, 61, 120, 127, 160, 62, 182, 130, 42, 63, 90, 23, 195, 62, 139, 61, 35, 63, 37, 73, 93, 63, 202, 178, 182, 63, 83, 13, 121, 63, 37, 177, 58, 62, 249, 76, 207, 62, 142, 29, 215, 189, 54, 203, 253, 189, 139, 23, 105, 191, 27, 34, 54, 191, 113, 127, 51, 191, 82, 96, 225, 189, 11, 72, 14, 191, 34, 52, 30, 190, 238, 246, 97, 190, 45, 193, 143, 189, 80, 165, 67, 191, 51, 212, 105, 63, 138, 166, 92, 62, 227, 117, 136, 189, 234, 62, 116, 191, 212, 98, 20, 190, 57, 111, 198, 62, 212, 96, 26, 189, 125, 70, 167, 62, 246, 162, 230, 189, 151, 148, 219, 62, 143, 97, 27, 189, 20, 229, 19, 190, 116, 12, 32, 62, 242, 127, 214, 187, 55, 142, 40, 61, 145, 214, 99, 60, 100, 65, 149, 61, 201, 12, 211, 62, 169, 143, 173, 62, 161, 137, 190, 190, 148, 113, 152, 187, 209, 167, 153, 190, 64, 133, 232, 189, 100, 13, 74, 62, 148, 51, 44, 61, 239, 203, 97, 61, 243, 97, 226, 187, 214, 224, 158, 62, 202, 149, 207, 190, 144, 12, 141, 190, 193, 9, 142, 188, 121, 108, 156, 189, 38, 171, 123, 59, 51, 210, 95, 190, 75, 151, 35, 62, 94, 87, 28, 61, 175, 102, 129, 189, 123, 133, 61, 188, 29, 164, 223, 188};
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
                alignas(float) const unsigned char memory[] = {124, 106, 100, 59, 20, 141, 169, 190};
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
    alignas(float) const unsigned char memory[] = {172, 241, 111, 63, 245, 226, 238, 186, 49, 48, 115, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {10, 74, 164, 191, 150, 206, 251, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0057/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}