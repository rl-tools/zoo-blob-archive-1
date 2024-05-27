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
                alignas(float) const unsigned char memory[] = {57, 157, 17, 63, 115, 238, 221, 62, 23, 84, 134, 62, 139, 234, 95, 62, 73, 126, 0, 63, 236, 162, 59, 190, 123, 205, 0, 191, 198, 188, 204, 191, 59, 136, 160, 190, 141, 192, 98, 190, 148, 224, 34, 191, 55, 216, 150, 62, 189, 91, 164, 61, 23, 145, 22, 63, 229, 32, 234, 62, 140, 46, 243, 62, 55, 79, 244, 190, 208, 78, 247, 62, 183, 33, 165, 190, 87, 111, 170, 62, 173, 96, 7, 63, 121, 75, 221, 190, 38, 182, 61, 60, 240, 242, 76, 190, 176, 96, 202, 62, 206, 11, 53, 63, 118, 90, 250, 190, 81, 44, 78, 63, 165, 200, 50, 191, 220, 247, 25, 190, 200, 134, 96, 63, 178, 165, 117, 63, 142, 38, 152, 62, 105, 238, 9, 191, 242, 144, 253, 62, 12, 13, 49, 189, 185, 81, 244, 190, 121, 69, 79, 63, 188, 105, 42, 62, 230, 186, 26, 63, 38, 182, 174, 63, 49, 8, 86, 62, 236, 128, 12, 191, 61, 165, 146, 190, 89, 29, 186, 190, 104, 141, 166, 190, 99, 9, 1, 63, 157, 155, 142, 190, 191, 111, 15, 63, 177, 247, 190, 190, 214, 242, 114, 190, 176, 151, 234, 190, 245, 171, 172, 191, 122, 137, 188, 61, 6, 245, 173, 190, 165, 231, 255, 63, 180, 152, 17, 63, 160, 32, 232, 62, 11, 202, 50, 191, 196, 237, 152, 62, 133, 246, 180, 190, 214, 241, 74, 63, 174, 138, 233, 62, 147, 224, 187, 60, 57, 132, 174, 62, 214, 248, 240, 190, 20, 1, 151, 62, 138, 154, 134, 63, 246, 143, 85, 62, 160, 176, 20, 63, 14, 104, 99, 191, 44, 118, 227, 190, 158, 73, 86, 63, 8, 47, 31, 190, 68, 144, 150, 190, 223, 157, 109, 191, 89, 95, 71, 191, 22, 37, 38, 190, 42, 187, 252, 190, 66, 254, 180, 60, 121, 176, 237, 62, 244, 96, 56, 63, 90, 26, 253, 190, 104, 22, 135, 189, 137, 94, 12, 190, 180, 244, 24, 189, 163, 11, 227, 62, 229, 52, 76, 190, 170, 149, 91, 63, 86, 70, 198, 62, 183, 73, 65, 63, 237, 197, 97, 191, 23, 174, 207, 190, 234, 24, 21, 190, 135, 203, 170, 62, 123, 13, 31, 63};
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
                alignas(float) const unsigned char memory[] = {145, 55, 80, 191, 156, 143, 175, 62, 165, 95, 160, 190, 253, 32, 43, 191, 142, 32, 173, 62, 39, 158, 189, 190, 57, 208, 29, 191, 153, 130, 40, 191, 183, 121, 18, 191, 215, 10, 123, 62, 182, 154, 200, 190, 168, 71, 242, 62, 178, 237, 51, 63, 117, 147, 71, 61, 7, 107, 176, 190, 120, 29, 217, 61, 53, 222, 32, 191, 35, 110, 218, 62, 216, 253, 17, 191, 196, 179, 113, 62, 70, 19, 29, 191, 173, 75, 8, 60, 156, 98, 198, 62, 73, 112, 3, 191, 95, 103, 183, 62, 117, 171, 253, 190, 122, 169, 4, 63, 69, 14, 6, 63, 72, 59, 31, 191, 187, 42, 105, 190, 96, 165, 28, 191, 42, 61, 88, 61};
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
                alignas(float) const unsigned char memory[] = {83, 55, 42, 191, 99, 125, 76, 190, 51, 143, 90, 62, 197, 170, 53, 62, 84, 250, 109, 190, 148, 104, 135, 189, 53, 33, 153, 189, 173, 227, 132, 61, 212, 227, 32, 190, 4, 198, 113, 189, 127, 224, 153, 191, 60, 233, 99, 60, 51, 155, 151, 189, 210, 104, 53, 191, 161, 23, 152, 189, 191, 100, 95, 190, 3, 18, 178, 189, 107, 244, 182, 62, 209, 88, 137, 190, 22, 135, 120, 62, 169, 143, 170, 190, 43, 121, 202, 61, 179, 193, 122, 190, 24, 113, 71, 61, 161, 44, 213, 60, 10, 158, 17, 189, 210, 98, 34, 62, 152, 168, 77, 62, 247, 7, 31, 62, 141, 130, 212, 190, 92, 202, 170, 61, 85, 214, 169, 189, 58, 219, 132, 188, 199, 5, 62, 62, 232, 100, 144, 62, 175, 26, 188, 190, 4, 248, 201, 60, 104, 38, 66, 62, 240, 11, 210, 62, 102, 193, 92, 189, 225, 63, 137, 189, 128, 241, 28, 190, 61, 209, 166, 62, 132, 154, 24, 62, 234, 126, 69, 189, 222, 116, 150, 62, 73, 246, 156, 62, 42, 227, 149, 62, 101, 241, 137, 190, 10, 135, 47, 62, 209, 242, 76, 191, 97, 168, 172, 190, 190, 199, 130, 62, 217, 10, 72, 190, 83, 61, 211, 61, 99, 2, 172, 190, 25, 54, 129, 189, 235, 131, 212, 62, 185, 162, 216, 189, 115, 252, 63, 62, 251, 132, 77, 62, 205, 137, 87, 191, 75, 163, 149, 190, 206, 192, 65, 190, 249, 140, 50, 63, 122, 246, 1, 190, 188, 60, 205, 189, 64, 251, 19, 62, 170, 186, 110, 61, 254, 116, 22, 62, 3, 209, 21, 62, 49, 232, 241, 190, 26, 230, 98, 62, 73, 33, 71, 190, 84, 16, 217, 62, 83, 190, 73, 189, 226, 60, 65, 61, 152, 94, 176, 62, 60, 162, 74, 190, 235, 78, 110, 62, 112, 194, 138, 190, 201, 193, 181, 190, 108, 228, 180, 187, 213, 64, 111, 190, 91, 127, 190, 61, 107, 190, 38, 62, 191, 245, 235, 61, 158, 140, 72, 191, 126, 44, 107, 189, 13, 22, 47, 187, 49, 140, 229, 189, 185, 176, 57, 190, 201, 116, 8, 62, 183, 179, 185, 61, 65, 170, 30, 191, 29, 60, 75, 61, 124, 20, 158, 191, 130, 106, 211, 188, 241, 228, 186, 190, 236, 209, 123, 62, 56, 94, 147, 62, 235, 43, 33, 190, 169, 201, 157, 190, 134, 180, 31, 62, 224, 49, 114, 62, 220, 124, 183, 62, 157, 164, 100, 191, 176, 72, 175, 61, 242, 130, 210, 190, 27, 241, 2, 191, 121, 246, 240, 190, 36, 123, 202, 189, 179, 12, 20, 62, 168, 58, 55, 190, 14, 233, 235, 189, 120, 237, 247, 62, 165, 135, 165, 190, 100, 15, 101, 62, 9, 193, 48, 190, 162, 119, 156, 61, 140, 129, 141, 62, 38, 23, 241, 190, 84, 42, 20, 62, 67, 196, 243, 61, 177, 182, 56, 189, 86, 31, 115, 190, 134, 133, 201, 62, 139, 29, 188, 61, 244, 118, 29, 190, 160, 211, 218, 187, 159, 252, 164, 61, 55, 236, 135, 189, 47, 181, 175, 59, 138, 218, 11, 189, 213, 128, 37, 189, 254, 176, 143, 61, 173, 224, 149, 60, 44, 175, 200, 189, 127, 172, 37, 62, 124, 152, 21, 61, 151, 111, 28, 61, 219, 59, 0, 190, 67, 154, 63, 188, 40, 142, 33, 190, 65, 123, 79, 188, 103, 154, 143, 187, 230, 112, 67, 189, 237, 239, 180, 189, 249, 103, 98, 61, 176, 76, 9, 190, 220, 255, 42, 190, 14, 24, 250, 189, 224, 83, 111, 60, 130, 112, 19, 62, 141, 175, 20, 190, 119, 204, 255, 61, 77, 117, 174, 189, 201, 225, 36, 190, 89, 148, 254, 189, 157, 144, 144, 189, 97, 252, 181, 190, 132, 18, 16, 62, 107, 239, 20, 190, 216, 153, 205, 61, 239, 160, 237, 189, 31, 146, 17, 188, 153, 144, 153, 188, 160, 143, 253, 60, 68, 86, 213, 61, 113, 240, 50, 62, 39, 46, 115, 191, 16, 168, 221, 60, 74, 63, 78, 191, 208, 160, 52, 191, 131, 147, 94, 61, 214, 210, 0, 62, 188, 255, 9, 190, 83, 95, 35, 189, 33, 91, 190, 190, 90, 126, 157, 62, 205, 88, 130, 190, 237, 234, 194, 61, 123, 130, 250, 190, 138, 140, 52, 61, 197, 169, 128, 189, 174, 233, 151, 188, 140, 209, 159, 189, 244, 255, 143, 61, 104, 123, 132, 62, 126, 169, 144, 190, 15, 32, 100, 62, 101, 30, 177, 61, 187, 45, 26, 63, 80, 44, 38, 191, 134, 214, 185, 62, 222, 104, 19, 191, 162, 223, 222, 189, 141, 47, 117, 61, 108, 216, 122, 62, 241, 140, 217, 189, 248, 34, 167, 190, 47, 51, 200, 189, 221, 102, 143, 62, 246, 225, 94, 61, 121, 74, 12, 190, 96, 178, 176, 62, 146, 181, 84, 190, 204, 140, 95, 189, 128, 43, 19, 191, 217, 138, 145, 62, 49, 235, 108, 62, 66, 173, 160, 61, 29, 111, 76, 62, 24, 36, 132, 190, 176, 192, 190, 188, 9, 10, 97, 62, 250, 189, 157, 189, 211, 130, 25, 59, 110, 0, 158, 190, 169, 135, 27, 190, 232, 55, 160, 61, 239, 172, 67, 62, 25, 250, 15, 62, 126, 101, 25, 190, 68, 41, 164, 191, 243, 198, 69, 62, 45, 39, 76, 190, 197, 9, 27, 190, 249, 202, 29, 62, 76, 228, 122, 190, 92, 232, 56, 190, 222, 143, 176, 190, 216, 133, 229, 189, 85, 233, 147, 62, 127, 244, 65, 191, 9, 29, 209, 190, 93, 219, 240, 61, 250, 3, 50, 189, 63, 204, 200, 190, 133, 56, 236, 190, 185, 114, 7, 190, 210, 249, 3, 190, 97, 189, 162, 62, 208, 162, 102, 61, 92, 64, 148, 189, 250, 103, 154, 189, 120, 120, 232, 61, 52, 221, 86, 62, 125, 145, 97, 62, 181, 133, 13, 191, 201, 185, 62, 62, 227, 169, 29, 62, 155, 56, 48, 190, 28, 185, 39, 190, 135, 235, 185, 61, 189, 10, 135, 187, 136, 162, 47, 191, 47, 9, 88, 62, 116, 189, 116, 191, 59, 252, 100, 61, 178, 35, 59, 188, 179, 218, 153, 61, 232, 55, 47, 189, 204, 208, 103, 189, 160, 51, 171, 189, 17, 97, 30, 189, 37, 87, 30, 191, 190, 37, 67, 189, 247, 219, 38, 190, 119, 137, 61, 191, 169, 120, 30, 62, 87, 202, 52, 62, 191, 5, 41, 62, 229, 140, 149, 61, 208, 153, 23, 191, 245, 59, 114, 188, 234, 35, 10, 191, 133, 87, 103, 61, 155, 103, 133, 190, 41, 12, 13, 190, 87, 229, 13, 189, 179, 233, 156, 190, 214, 186, 136, 61, 22, 10, 162, 62, 43, 61, 228, 61, 79, 233, 99, 190, 145, 31, 183, 189, 16, 52, 183, 61, 253, 169, 162, 62, 131, 211, 26, 189, 135, 13, 57, 62, 23, 5, 51, 191, 77, 93, 68, 188, 144, 146, 9, 190, 31, 18, 187, 190, 108, 33, 159, 190, 148, 1, 127, 190, 207, 212, 92, 191, 133, 18, 220, 62, 253, 208, 48, 62, 216, 244, 201, 62, 63, 57, 64, 62, 77, 128, 208, 61, 78, 151, 89, 62, 150, 93, 156, 190, 213, 233, 112, 62, 174, 206, 180, 189, 155, 82, 254, 190, 25, 176, 172, 190, 11, 88, 112, 188, 205, 21, 146, 62, 9, 2, 88, 189, 184, 34, 139, 190, 62, 121, 116, 62, 66, 57, 172, 189, 45, 135, 229, 189, 226, 158, 124, 190, 218, 167, 77, 190, 12, 18, 33, 190, 25, 115, 38, 191, 38, 188, 103, 191, 97, 59, 146, 190, 201, 51, 219, 191, 203, 126, 46, 188, 68, 169, 174, 189, 138, 158, 111, 189, 112, 94, 135, 190, 224, 170, 117, 189, 80, 30, 190, 62, 92, 195, 101, 62, 20, 42, 149, 191, 46, 162, 178, 190, 94, 68, 148, 189, 203, 204, 55, 191, 133, 203, 102, 191, 79, 93, 247, 61, 47, 116, 9, 62, 86, 130, 140, 62, 140, 153, 114, 60, 59, 64, 128, 62, 157, 197, 123, 190, 55, 172, 139, 62, 54, 123, 84, 189, 42, 51, 54, 62, 228, 76, 164, 187, 164, 63, 158, 191, 19, 180, 20, 62, 209, 195, 31, 61, 6, 211, 138, 189, 160, 244, 133, 189, 168, 27, 64, 61, 185, 64, 120, 62, 127, 211, 61, 191, 49, 146, 247, 62, 133, 81, 31, 191, 197, 202, 2, 61, 170, 21, 182, 61, 4, 153, 159, 189, 133, 140, 235, 189, 212, 224, 52, 62, 141, 205, 39, 189, 24, 65, 7, 191, 91, 196, 31, 191, 98, 189, 244, 189, 103, 40, 182, 62, 178, 56, 96, 61, 96, 21, 193, 191, 171, 243, 81, 190, 41, 217, 112, 190, 213, 122, 70, 190, 149, 255, 207, 61, 207, 162, 113, 190, 187, 31, 94, 190, 15, 215, 189, 61, 125, 102, 249, 61, 5, 122, 207, 190, 254, 175, 113, 60, 204, 212, 134, 191, 164, 43, 128, 62, 44, 227, 122, 191, 129, 6, 21, 190, 11, 128, 216, 189, 103, 215, 230, 189, 166, 251, 70, 62, 39, 186, 169, 191, 252, 80, 206, 189, 136, 217, 193, 190, 77, 81, 2, 62, 99, 149, 6, 190, 98, 104, 177, 60, 45, 41, 43, 61, 136, 105, 114, 190, 17, 136, 191, 190, 8, 26, 136, 62, 27, 250, 217, 190, 99, 216, 55, 191, 227, 84, 237, 189, 46, 35, 36, 62, 70, 136, 19, 63, 50, 70, 125, 191, 114, 223, 134, 191, 232, 45, 35, 62, 57, 231, 60, 190, 87, 72, 136, 61, 134, 167, 245, 60, 132, 174, 145, 190, 190, 168, 216, 61, 54, 126, 115, 190, 6, 227, 120, 62, 72, 98, 43, 63, 226, 70, 7, 61, 87, 26, 72, 62, 253, 247, 77, 190, 84, 101, 145, 190, 64, 194, 172, 190, 59, 21, 213, 189, 255, 123, 157, 191, 175, 121, 101, 62, 205, 22, 13, 190, 44, 233, 76, 62, 106, 212, 52, 62, 65, 160, 11, 62, 100, 223, 83, 190, 185, 187, 135, 62, 237, 179, 147, 62, 6, 165, 150, 62, 168, 51, 84, 191, 86, 210, 93, 190, 113, 91, 218, 190, 60, 214, 22, 191, 84, 250, 203, 190, 47, 101, 168, 190, 221, 254, 172, 62, 162, 74, 19, 189, 248, 31, 227, 189, 105, 81, 251, 61, 84, 57, 20, 190, 137, 235, 171, 61, 187, 74, 64, 189, 96, 189, 146, 62, 251, 123, 112, 62, 98, 34, 117, 190, 73, 43, 145, 62, 56, 108, 152, 62, 15, 236, 1, 190, 165, 97, 101, 188, 200, 53, 216, 62, 93, 50, 83, 61, 43, 42, 124, 191, 198, 247, 23, 62, 158, 77, 18, 60, 196, 212, 140, 62, 211, 125, 128, 60, 223, 33, 113, 190, 77, 70, 202, 190, 166, 77, 190, 189, 186, 96, 245, 61, 91, 218, 48, 62, 8, 228, 164, 61, 177, 73, 126, 61, 103, 17, 38, 189, 60, 138, 64, 62, 84, 248, 238, 190, 210, 155, 33, 190, 77, 169, 228, 61, 175, 64, 113, 62, 34, 146, 77, 191, 138, 57, 77, 61, 236, 214, 36, 190, 252, 65, 61, 60, 129, 145, 78, 189, 44, 16, 9, 190, 66, 216, 131, 62, 156, 11, 205, 189, 33, 89, 68, 190, 125, 177, 163, 61, 49, 69, 11, 191, 227, 130, 1, 191, 156, 85, 61, 61, 9, 243, 202, 190, 171, 146, 47, 189, 147, 134, 214, 61, 140, 73, 133, 61, 210, 186, 143, 189, 112, 225, 93, 61, 73, 45, 11, 190, 75, 163, 100, 188, 53, 17, 10, 190, 81, 72, 44, 62, 7, 169, 5, 189, 136, 82, 180, 189, 61, 60, 41, 190, 3, 77, 182, 189, 124, 253, 152, 189, 204, 215, 28, 190, 155, 191, 210, 60, 15, 152, 2, 62, 160, 71, 36, 190, 36, 185, 17, 190, 151, 58, 38, 190, 26, 62, 32, 190, 28, 248, 149, 189, 121, 201, 104, 189, 223, 186, 200, 189, 90, 164, 199, 189, 125, 108, 231, 61, 65, 231, 249, 59, 38, 24, 53, 190, 199, 102, 42, 189, 19, 129, 23, 62, 142, 37, 44, 189, 242, 195, 128, 60, 104, 227, 161, 189, 212, 2, 151, 190, 55, 52, 200, 60, 13, 215, 140, 190, 115, 211, 89, 190, 82, 235, 1, 190, 139, 103, 40, 191, 206, 232, 126, 190, 28, 172, 127, 190, 146, 98, 25, 189, 144, 107, 63, 190, 155, 4, 150, 61, 228, 14, 222, 61, 68, 70, 130, 190, 21, 253, 83, 190, 232, 222, 15, 191, 70, 149, 159, 61, 30, 144, 42, 62, 252, 85, 69, 191, 48, 145, 184, 190, 5, 106, 127, 190, 194, 30, 183, 190, 198, 253, 91, 190, 73, 208, 152, 190, 30, 212, 70, 190, 207, 201, 186, 188, 153, 106, 164, 62, 31, 97, 156, 190, 177, 75, 113, 191, 173, 230, 165, 191, 160, 93, 23, 189, 25, 122, 79, 60, 65, 53, 2, 190, 199, 94, 65, 61, 18, 93, 196, 190, 130, 224, 15, 191, 195, 66, 58, 190, 96, 31, 18, 190, 210, 67, 239, 189, 130, 19, 158, 62, 159, 32, 253, 190, 40, 210, 180, 190, 17, 207, 101, 190, 56, 33, 224, 62, 123, 41, 40, 62, 134, 194, 161, 190, 225, 87, 187, 189, 42, 161, 97, 62, 10, 174, 24, 189, 69, 182, 89, 191, 50, 101, 46, 190, 137, 117, 211, 190, 100, 93, 213, 61, 190, 92, 172, 61, 134, 234, 190, 189, 38, 47, 128, 190, 95, 60, 114, 191, 125, 158, 242, 190, 211, 78, 68, 190, 8, 127, 51, 191, 185, 25, 43, 190, 217, 2, 7, 191, 243, 27, 73, 190, 201, 35, 231, 189, 207, 59, 49, 191, 104, 35, 57, 62, 128, 226, 146, 62, 36, 4, 158, 60, 188, 157, 254, 189, 96, 202, 48, 62, 251, 194, 211, 190, 100, 166, 173, 189, 3, 231, 202, 190, 142, 251, 49, 189, 156, 129, 89, 62, 149, 255, 105, 62, 117, 222, 185, 62, 65, 73, 217, 62, 43, 38, 130, 62, 166, 144, 92, 62, 23, 76, 109, 190, 61, 130, 228, 62, 34, 86, 174, 191, 118, 22, 139, 189, 98, 78, 94, 190, 211, 255, 113, 189, 221, 54, 174, 188, 30, 194, 154, 190, 86, 173, 15, 188, 168, 132, 181, 62, 33, 199, 162, 60, 51, 94, 34, 62, 36, 9, 156, 190, 9, 213, 194, 191, 133, 227, 77, 190, 147, 192, 206, 190, 204, 63, 23, 189, 168, 10, 24, 190, 161, 175, 26, 190, 160, 237, 148, 61, 156, 249, 137, 189, 109, 169, 182, 189, 156, 43, 179, 188, 228, 4, 186, 61, 115, 245, 166, 60, 35, 28, 23, 62, 100, 224, 192, 189, 18, 235, 7, 62, 129, 68, 25, 61, 105, 231, 243, 189, 53, 190, 203, 189, 34, 170, 207, 189, 86, 82, 13, 190, 100, 96, 55, 61, 31, 14, 74, 61, 249, 89, 166, 188, 96, 88, 255, 189, 61, 134, 164, 187, 109, 165, 131, 189, 55, 110, 56, 61, 61, 155, 101, 189, 229, 205, 200, 189, 191, 77, 105, 189, 56, 155, 189, 60, 27, 131, 253, 189, 46, 214, 25, 190, 117, 34, 217, 189, 204, 92, 13, 61, 150, 159, 52, 61, 233, 59, 144, 189, 4, 118, 141, 62, 164, 51, 217, 190, 35, 71, 127, 190, 91, 232, 90, 62, 44, 246, 68, 191, 213, 19, 146, 60, 17, 41, 162, 187, 26, 211, 34, 190, 95, 169, 169, 60, 66, 120, 27, 62, 32, 148, 139, 62, 192, 154, 16, 189, 166, 171, 51, 61, 46, 92, 37, 190, 172, 63, 3, 190, 163, 147, 218, 62, 120, 19, 44, 191, 37, 252, 194, 190, 208, 133, 2, 190, 248, 236, 154, 189, 74, 149, 205, 61, 91, 237, 117, 186, 233, 38, 127, 190, 178, 187, 198, 62, 6, 12, 83, 62, 219, 226, 160, 190, 229, 66, 134, 190, 156, 151, 42, 191, 149, 99, 255, 189, 177, 254, 29, 190, 205, 236, 161, 190, 20, 168, 11, 189, 93, 49, 205, 61, 159, 253, 72, 190, 248, 229, 176, 58, 161, 87, 171, 190, 24, 145, 126, 188, 60, 4, 63, 190, 56, 129, 17, 62, 247, 122, 7, 62, 90, 142, 62, 62, 19, 45, 140, 62, 195, 120, 249, 62, 127, 97, 239, 61, 236, 79, 186, 61, 60, 56, 66, 62, 83, 165, 31, 190, 66, 72, 214, 62, 9, 145, 115, 190, 243, 32, 105, 190, 118, 134, 157, 189, 28, 53, 124, 61, 130, 53, 79, 189, 110, 180, 14, 61, 162, 227, 10, 62, 50, 80, 199, 61, 245, 199, 98, 61, 0, 153, 190, 61, 190, 234, 186, 189, 243, 128, 144, 190, 237, 130, 65, 61, 237, 186, 125, 190, 130, 27, 219, 190, 90, 81, 154, 62, 33, 172, 145, 61, 67, 249, 55, 188, 12, 184, 109, 62, 184, 222, 133, 62, 48, 214, 130, 189, 188, 216, 186, 189, 40, 25, 99, 189, 138, 78, 48, 61, 223, 64, 106, 62, 217, 80, 55, 62, 36, 145, 109, 62, 200, 159, 152, 62, 227, 58, 158, 62, 119, 99, 152, 61, 63, 147, 12, 190, 114, 42, 144, 62, 99, 70, 63, 190, 78, 225, 62, 62, 146, 49, 135, 188, 32, 156, 58, 61, 153, 106, 128, 62, 12, 100, 135, 190, 194, 100, 146, 61, 43, 171, 233, 61, 125, 215, 82, 62, 31, 184, 176, 62, 36, 58, 29, 62, 37, 118, 213, 61, 218, 11, 152, 189, 120, 52, 62, 61, 148, 110, 221, 189, 59, 29, 190, 187, 126, 13, 53, 190, 105, 149, 126, 60, 178, 46, 52, 189, 165, 58, 145, 61, 211, 213, 74, 190, 59, 237, 83, 187, 203, 19, 14, 189, 50, 66, 107, 189, 69, 151, 221, 61, 96, 174, 62, 61, 47, 52, 10, 189, 143, 206, 161, 189, 210, 157, 238, 189, 20, 0, 130, 189, 230, 225, 19, 62, 50, 80, 125, 57, 138, 91, 25, 189, 173, 137, 19, 190, 82, 215, 181, 189, 128, 80, 20, 62, 198, 184, 243, 189, 23, 17, 5, 189, 18, 183, 2, 190, 17, 246, 40, 62, 246, 178, 203, 61, 139, 81, 184, 189, 40, 44, 178, 61, 152, 123, 211, 189, 132, 155, 206, 189, 99, 13, 60, 61, 138, 13, 245, 189, 204, 55, 106, 62, 176, 107, 126, 190, 200, 22, 156, 190, 52, 197, 232, 189, 22, 28, 152, 62, 240, 119, 144, 61, 78, 66, 3, 190, 132, 133, 1, 62, 67, 43, 116, 190, 197, 59, 30, 63, 233, 176, 152, 62, 44, 102, 68, 62, 186, 76, 10, 63, 145, 197, 32, 188, 108, 121, 176, 62, 34, 185, 167, 190, 121, 135, 28, 62, 81, 65, 208, 191, 18, 104, 103, 187, 23, 216, 1, 190, 114, 28, 173, 189, 102, 78, 20, 187, 254, 66, 190, 190, 207, 205, 25, 62, 188, 142, 161, 62, 172, 167, 166, 190, 184, 161, 7, 190, 89, 12, 178, 61, 74, 59, 173, 191, 171, 141, 177, 190, 153, 137, 18, 191, 225, 248, 113, 191, 155, 43, 125, 62, 154, 178, 120, 191, 108, 170, 240, 61, 59, 102, 53, 62, 10, 255, 107, 190, 59, 141, 35, 190, 138, 226, 152, 190, 214, 192, 77, 191, 22, 235, 11, 61, 155, 244, 184, 190, 207, 70, 9, 191, 3, 141, 253, 62, 116, 208, 153, 61, 247, 95, 187, 191, 123, 15, 25, 191, 189, 250, 19, 190, 2, 115, 207, 186, 62, 124, 215, 61, 137, 143, 46, 62, 197, 141, 139, 190, 16, 213, 171, 60, 85, 106, 173, 62, 114, 197, 35, 190, 50, 103, 17, 189, 140, 87, 239, 191, 71, 212, 245, 61, 165, 77, 147, 188, 117, 195, 20, 190, 211, 196, 216, 61, 163, 200, 10, 189, 168, 99, 86, 62, 79, 226, 223, 190, 238, 130, 30, 190, 220, 28, 218, 61, 207, 13, 71, 190, 182, 143, 238, 60, 27, 47, 54, 62, 230, 158, 162, 189, 37, 101, 117, 190, 135, 125, 8, 191, 42, 217, 220, 61, 110, 119, 101, 189, 179, 54, 22, 191, 202, 162, 171, 190, 103, 124, 4, 62, 69, 80, 216, 189, 203, 169, 23, 191, 41, 213, 1, 190, 91, 81, 197, 61, 161, 82, 63, 191, 164, 194, 172, 61, 129, 191, 226, 190, 86, 67, 195, 189, 197, 38, 129, 189, 237, 90, 201, 61, 101, 244, 112, 62, 48, 228, 121, 189, 100, 92, 27, 189, 162, 208, 163, 62, 230, 173, 23, 62, 239, 147, 77, 191, 165, 89, 25, 188, 195, 44, 2, 190, 87, 145, 177, 189, 142, 72, 196, 61, 255, 169, 44, 189, 181, 96, 103, 60, 250, 217, 205, 188, 78, 139, 143, 189, 236, 59, 66, 189, 46, 91, 1, 188, 93, 79, 232, 189, 250, 113, 230, 189, 202, 107, 228, 60, 152, 126, 10, 190, 19, 143, 190, 189, 183, 21, 77, 190, 43, 3, 250, 187, 39, 133, 99, 189, 121, 245, 21, 62, 144, 255, 25, 190, 89, 185, 232, 189, 117, 206, 66, 190, 140, 202, 5, 62, 167, 97, 216, 189, 141, 210, 251, 61, 175, 11, 205, 61, 252, 199, 19, 62, 161, 113, 218, 61, 123, 77, 250, 61, 112, 100, 15, 190, 183, 175, 194, 189, 150, 78, 44, 61, 185, 177, 58, 189, 28, 164, 134, 61, 43, 197, 38, 190, 146, 65, 20, 190, 202, 83, 228, 61, 111, 141, 229, 62, 120, 50, 224, 61, 213, 188, 136, 189, 50, 123, 159, 190, 242, 104, 41, 62, 3, 152, 18, 60, 70, 5, 153, 62, 144, 17, 174, 191, 183, 199, 199, 190, 254, 0, 239, 60, 196, 106, 126, 191, 207, 39, 201, 189, 36, 197, 65, 190, 140, 46, 224, 62, 61, 45, 42, 62, 55, 93, 88, 189, 156, 19, 208, 62, 208, 132, 62, 191, 53, 7, 203, 189, 246, 175, 238, 191, 39, 35, 39, 62, 236, 14, 8, 62, 112, 235, 75, 190, 70, 145, 38, 62, 199, 136, 176, 61, 170, 53, 9, 190, 76, 255, 169, 189, 254, 193, 226, 62, 207, 9, 203, 61, 5, 178, 26, 190, 116, 130, 110, 189, 188, 4, 140, 62, 171, 209, 28, 189, 124, 53, 91, 62, 151, 120, 117, 62, 67, 203, 149, 62, 226, 6, 136, 190, 19, 98, 92, 62, 108, 181, 111, 189, 191, 220, 161, 62, 180, 46, 104, 62, 93, 83, 48, 190, 159, 17, 76, 189, 5, 73, 173, 190, 137, 214, 141, 189, 65, 240, 73, 191, 203, 51, 197, 189, 181, 243, 39, 190, 36, 94, 97, 62, 8, 255, 120, 62, 166, 148, 233, 190, 73, 181, 214, 61, 209, 131, 148, 190, 40, 238, 62, 190, 28, 32, 63, 61, 214, 99, 24, 62, 221, 217, 74, 62, 46, 155, 210, 61, 73, 166, 237, 189, 232, 149, 192, 189, 23, 4, 76, 62, 175, 119, 32, 62, 28, 172, 30, 62, 158, 28, 80, 62, 152, 196, 229, 190, 94, 95, 83, 62, 246, 111, 169, 189, 136, 124, 40, 190, 93, 51, 119, 189, 203, 4, 81, 61, 22, 232, 165, 190, 45, 220, 141, 62, 178, 123, 90, 61, 22, 122, 128, 189, 164, 118, 56, 190, 228, 77, 199, 62, 213, 45, 167, 62, 196, 142, 54, 62, 17, 243, 3, 190, 168, 92, 131, 62, 106, 139, 160, 191, 78, 144, 167, 62, 153, 105, 179, 61, 64, 235, 18, 62, 62, 216, 10, 190, 244, 69, 170, 190, 173, 71, 33, 62, 171, 121, 42, 62, 146, 138, 19, 191, 128, 144, 0, 190, 98, 110, 186, 62, 165, 247, 19, 62, 189, 28, 176, 189, 109, 60, 21, 62, 177, 224, 200, 59, 171, 144, 23, 62, 123, 201, 74, 61, 106, 114, 50, 190, 229, 32, 233, 188, 4, 227, 128, 61, 244, 42, 239, 189, 166, 220, 41, 190, 249, 222, 39, 62, 24, 242, 32, 61, 248, 123, 10, 189, 132, 81, 160, 189, 144, 189, 179, 189, 3, 119, 190, 188, 10, 56, 180, 189, 31, 202, 118, 189, 14, 99, 138, 189, 158, 158, 132, 189, 4, 158, 227, 189, 89, 77, 3, 190, 59, 90, 41, 190, 103, 58, 36, 61, 20, 40, 113, 185, 74, 255, 193, 60, 92, 5, 183, 189, 128, 55, 152, 189, 196, 74, 142, 189, 235, 162, 121, 61, 5, 70, 167, 61, 245, 226, 225, 189, 177, 184, 137, 189};
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
                alignas(float) const unsigned char memory[] = {148, 229, 112, 62, 181, 77, 77, 62, 244, 230, 83, 190, 211, 178, 15, 62, 112, 119, 14, 190, 177, 104, 254, 61, 12, 63, 194, 190, 42, 43, 212, 61, 124, 179, 189, 61, 191, 27, 74, 62, 224, 192, 237, 61, 254, 173, 181, 61, 45, 39, 101, 62, 67, 128, 26, 61, 135, 59, 220, 61, 107, 47, 13, 62, 240, 14, 237, 189, 140, 145, 184, 189, 116, 238, 176, 62, 172, 168, 6, 190, 32, 255, 74, 62, 94, 229, 203, 62, 254, 101, 205, 62, 202, 94, 246, 189, 116, 168, 76, 62, 198, 202, 188, 62, 134, 66, 105, 61, 142, 160, 184, 189, 233, 49, 43, 61, 186, 190, 237, 61, 216, 50, 163, 190, 236, 135, 195, 189};
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
                alignas(float) const unsigned char memory[] = {6, 174, 255, 62, 198, 69, 24, 191, 244, 136, 76, 62, 104, 134, 25, 63, 5, 66, 33, 61, 187, 225, 158, 62, 173, 51, 30, 63, 7, 244, 198, 62, 128, 68, 43, 63, 229, 110, 86, 63, 42, 237, 183, 63, 120, 24, 115, 63, 253, 169, 67, 62, 64, 121, 199, 62, 187, 18, 255, 189, 54, 203, 253, 189, 227, 49, 103, 191, 93, 7, 25, 191, 190, 132, 52, 191, 82, 96, 225, 189, 168, 15, 246, 190, 1, 252, 44, 190, 94, 185, 97, 190, 45, 193, 143, 189, 118, 103, 65, 191, 16, 173, 111, 63, 90, 114, 102, 62, 227, 117, 136, 189, 97, 123, 117, 191, 1, 240, 16, 190, 236, 37, 213, 62, 212, 96, 26, 189, 175, 157, 183, 62, 119, 167, 63, 189, 10, 238, 171, 62, 200, 248, 93, 189, 20, 229, 19, 190, 106, 9, 73, 62, 8, 225, 43, 189, 125, 207, 241, 58, 93, 34, 232, 188, 114, 137, 86, 61, 240, 52, 234, 62, 207, 115, 161, 62, 43, 22, 209, 190, 155, 41, 248, 188, 245, 126, 129, 190, 64, 133, 232, 189, 88, 239, 100, 62, 110, 186, 41, 61, 204, 8, 114, 61, 243, 97, 226, 187, 155, 145, 138, 62, 115, 23, 178, 190, 3, 181, 121, 190, 193, 9, 142, 188, 62, 121, 98, 61, 247, 137, 253, 186, 63, 219, 131, 190, 75, 151, 35, 62, 39, 203, 130, 61, 158, 81, 16, 189, 85, 19, 77, 189, 29, 164, 223, 188};
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
                alignas(float) const unsigned char memory[] = {20, 46, 218, 59, 181, 240, 155, 190};
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
    alignas(float) const unsigned char memory[] = {54, 245, 200, 63, 119, 193, 231, 63, 79, 146, 136, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {41, 62, 83, 64, 242, 110, 146, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0057/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}