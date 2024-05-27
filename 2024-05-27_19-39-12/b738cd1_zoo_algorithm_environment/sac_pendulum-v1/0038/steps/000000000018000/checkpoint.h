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
                alignas(float) const unsigned char memory[] = {60, 210, 79, 189, 192, 161, 175, 62, 53, 209, 211, 62, 199, 60, 59, 62, 220, 232, 220, 62, 199, 82, 12, 191, 170, 40, 36, 60, 223, 241, 21, 63, 81, 52, 54, 191, 180, 22, 208, 61, 82, 97, 223, 62, 29, 148, 235, 62, 200, 72, 227, 190, 185, 108, 62, 63, 199, 232, 186, 190, 255, 43, 203, 59, 204, 214, 116, 63, 83, 57, 221, 190, 196, 136, 109, 61, 226, 221, 204, 61, 199, 224, 86, 59, 117, 0, 145, 62, 224, 19, 194, 61, 238, 146, 75, 62, 192, 62, 73, 63, 132, 47, 134, 63, 39, 75, 158, 62, 204, 89, 207, 190, 93, 182, 190, 191, 250, 21, 136, 190, 220, 92, 166, 190, 112, 103, 224, 190, 227, 150, 197, 61, 252, 72, 36, 62, 169, 54, 79, 63, 6, 158, 134, 61, 223, 65, 131, 191, 253, 17, 53, 63, 85, 110, 122, 61, 54, 221, 211, 190, 103, 189, 26, 191, 235, 152, 132, 61, 224, 192, 109, 191, 84, 36, 0, 191, 90, 169, 84, 189, 55, 59, 173, 62, 224, 54, 158, 191, 205, 128, 129, 190, 27, 136, 102, 190, 56, 252, 54, 63, 204, 243, 160, 62, 96, 88, 153, 63, 73, 119, 52, 63, 145, 174, 194, 62, 72, 193, 129, 189, 183, 57, 143, 191, 51, 186, 174, 190, 34, 50, 37, 63, 113, 52, 184, 189, 177, 67, 59, 191, 26, 91, 36, 63, 13, 179, 37, 63, 241, 157, 162, 62, 223, 90, 146, 62, 207, 72, 239, 62, 174, 250, 230, 190, 13, 7, 138, 62, 48, 252, 178, 190, 8, 139, 203, 62, 51, 28, 108, 190, 217, 162, 92, 63, 142, 38, 8, 63, 51, 79, 60, 63, 77, 7, 191, 60, 184, 201, 230, 190, 197, 64, 204, 189, 5, 226, 172, 63, 145, 132, 238, 62, 70, 50, 224, 190, 192, 201, 20, 191, 183, 38, 45, 190, 111, 34, 20, 191, 250, 26, 45, 191, 111, 223, 79, 190, 212, 168, 82, 63, 82, 72, 119, 189, 6, 1, 166, 62, 114, 109, 44, 191, 179, 1, 58, 191, 204, 198, 18, 191, 97, 71, 248, 62, 48, 40, 197, 191, 41, 161, 153, 190, 231, 195, 234, 62, 80, 128, 204, 190, 240, 163, 196, 190};
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
                alignas(float) const unsigned char memory[] = {78, 249, 140, 191, 210, 227, 246, 61, 227, 232, 4, 61, 24, 86, 46, 189, 194, 12, 230, 190, 95, 53, 247, 61, 187, 166, 19, 191, 108, 148, 71, 191, 94, 36, 173, 190, 113, 54, 82, 190, 70, 122, 10, 62, 228, 172, 12, 63, 135, 113, 162, 62, 155, 235, 209, 190, 229, 43, 80, 63, 29, 242, 244, 61, 179, 11, 214, 189, 6, 187, 139, 62, 192, 117, 64, 62, 105, 162, 126, 61, 94, 113, 185, 190, 15, 251, 181, 62, 143, 238, 241, 62, 110, 213, 158, 189, 5, 13, 20, 191, 13, 85, 16, 62, 189, 230, 56, 63, 116, 202, 15, 63, 163, 157, 61, 190, 255, 163, 167, 190, 149, 131, 176, 60, 38, 5, 27, 191};
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
                alignas(float) const unsigned char memory[] = {33, 122, 161, 60, 142, 108, 94, 62, 164, 29, 71, 190, 59, 101, 253, 61, 189, 113, 205, 62, 113, 49, 108, 62, 188, 27, 9, 190, 1, 185, 127, 61, 187, 143, 158, 62, 183, 161, 109, 190, 8, 2, 227, 61, 154, 202, 144, 62, 77, 145, 12, 189, 77, 28, 167, 188, 144, 97, 199, 189, 100, 213, 181, 190, 114, 49, 46, 62, 193, 72, 252, 61, 225, 43, 203, 190, 23, 116, 12, 62, 49, 13, 196, 189, 88, 10, 161, 189, 55, 204, 146, 61, 72, 144, 13, 62, 107, 239, 28, 62, 3, 147, 68, 59, 90, 81, 38, 189, 41, 114, 76, 190, 106, 209, 43, 61, 78, 235, 2, 191, 231, 97, 209, 190, 6, 111, 58, 190, 181, 211, 160, 190, 163, 139, 130, 190, 8, 57, 18, 191, 246, 148, 107, 62, 200, 235, 138, 191, 220, 16, 91, 62, 198, 162, 35, 62, 33, 113, 1, 191, 97, 173, 52, 191, 27, 218, 72, 191, 49, 129, 220, 61, 155, 236, 160, 62, 203, 235, 61, 62, 243, 115, 106, 190, 165, 84, 224, 188, 103, 150, 190, 62, 41, 89, 178, 62, 255, 63, 196, 189, 60, 83, 106, 190, 254, 197, 44, 61, 73, 40, 171, 190, 44, 199, 154, 190, 128, 199, 120, 61, 138, 46, 58, 62, 219, 67, 211, 62, 163, 215, 24, 62, 5, 222, 90, 188, 248, 137, 68, 190, 120, 208, 130, 190, 85, 220, 0, 191, 130, 153, 127, 62, 55, 255, 144, 62, 143, 22, 44, 190, 255, 60, 50, 190, 1, 153, 63, 61, 138, 240, 7, 190, 58, 192, 9, 190, 91, 149, 214, 61, 245, 0, 37, 189, 150, 153, 209, 186, 227, 224, 17, 190, 59, 72, 1, 190, 157, 203, 224, 189, 101, 186, 221, 61, 73, 14, 67, 190, 45, 15, 47, 190, 129, 104, 29, 190, 163, 232, 160, 187, 49, 177, 238, 189, 239, 79, 46, 190, 222, 110, 14, 189, 72, 53, 5, 62, 242, 186, 211, 61, 17, 213, 1, 190, 135, 102, 1, 189, 14, 162, 1, 62, 175, 194, 149, 61, 200, 58, 155, 188, 223, 96, 46, 189, 182, 93, 60, 190, 143, 157, 17, 189, 177, 110, 202, 61, 145, 108, 47, 190, 202, 17, 53, 190, 83, 166, 204, 61, 104, 78, 129, 61, 194, 115, 150, 61, 113, 149, 152, 61, 133, 79, 209, 189, 132, 103, 65, 189, 121, 15, 184, 60, 162, 149, 246, 60, 48, 243, 38, 189, 201, 16, 110, 189, 132, 250, 157, 189, 26, 17, 51, 190, 192, 95, 143, 189, 167, 239, 253, 189, 193, 80, 238, 189, 24, 125, 107, 188, 194, 106, 187, 189, 184, 168, 206, 189, 179, 23, 19, 62, 126, 7, 28, 62, 92, 107, 196, 60, 121, 175, 62, 190, 126, 72, 53, 190, 185, 155, 40, 190, 186, 196, 7, 190, 47, 237, 92, 189, 104, 63, 32, 189, 36, 34, 190, 189, 39, 232, 9, 61, 208, 148, 114, 187, 242, 104, 66, 190, 96, 126, 3, 61, 168, 203, 2, 62, 194, 250, 154, 62, 208, 239, 187, 61, 8, 26, 191, 61, 19, 125, 164, 62, 11, 213, 205, 188, 152, 156, 120, 189, 246, 188, 154, 61, 230, 134, 248, 60, 61, 239, 40, 191, 5, 141, 34, 190, 144, 30, 246, 61, 205, 46, 201, 190, 196, 131, 187, 62, 114, 3, 64, 191, 18, 41, 4, 191, 243, 129, 12, 190, 222, 247, 124, 62, 222, 188, 192, 190, 46, 44, 229, 61, 131, 156, 204, 61, 214, 37, 42, 62, 15, 41, 249, 61, 187, 49, 45, 189, 226, 195, 121, 62, 170, 221, 9, 190, 238, 181, 153, 190, 94, 8, 111, 191, 254, 99, 210, 62, 238, 173, 163, 190, 212, 26, 158, 190, 63, 44, 51, 190, 60, 208, 202, 190, 94, 130, 77, 61, 47, 4, 248, 189, 34, 228, 122, 62, 29, 94, 33, 191, 195, 13, 94, 62, 46, 234, 250, 189, 112, 176, 233, 190, 235, 70, 25, 191, 219, 217, 36, 191, 239, 198, 218, 188, 111, 85, 232, 60, 67, 247, 35, 62, 189, 76, 137, 189, 159, 167, 228, 189, 220, 93, 161, 62, 83, 196, 173, 62, 160, 15, 248, 189, 24, 177, 27, 190, 127, 97, 46, 62, 31, 166, 48, 189, 127, 115, 15, 190, 244, 174, 215, 61, 229, 15, 220, 61, 29, 111, 217, 62, 60, 28, 11, 62, 252, 128, 144, 188, 121, 204, 65, 189, 97, 95, 255, 57, 14, 151, 140, 190, 81, 74, 222, 61, 43, 52, 121, 62, 179, 106, 44, 62, 186, 196, 186, 60, 31, 56, 114, 62, 189, 215, 132, 61, 131, 120, 151, 62, 103, 4, 158, 61, 3, 50, 209, 188, 82, 178, 214, 60, 165, 177, 236, 190, 52, 182, 144, 189, 109, 5, 29, 190, 120, 227, 24, 62, 77, 17, 122, 62, 106, 179, 23, 191, 60, 230, 143, 190, 35, 202, 44, 61, 75, 23, 70, 191, 121, 233, 156, 190, 202, 44, 5, 62, 236, 206, 125, 62, 210, 6, 37, 190, 38, 150, 27, 62, 17, 196, 253, 61, 70, 242, 32, 191, 254, 232, 81, 62, 186, 84, 64, 190, 98, 124, 193, 189, 193, 173, 12, 190, 165, 230, 114, 61, 171, 22, 9, 190, 92, 204, 17, 61, 176, 30, 156, 187, 164, 65, 103, 189, 142, 199, 86, 60, 163, 55, 87, 61, 195, 112, 25, 190, 193, 191, 159, 189, 167, 112, 181, 61, 14, 212, 19, 189, 163, 100, 241, 61, 126, 136, 49, 61, 64, 213, 14, 62, 103, 202, 28, 190, 193, 51, 179, 61, 235, 186, 245, 61, 169, 202, 2, 62, 227, 92, 179, 189, 248, 198, 205, 60, 22, 98, 24, 61, 169, 245, 42, 190, 120, 245, 133, 61, 86, 252, 168, 189, 48, 225, 117, 61, 19, 178, 24, 190, 139, 41, 17, 62, 220, 224, 15, 189, 104, 36, 119, 61, 124, 233, 241, 189, 110, 184, 132, 189, 214, 155, 15, 190, 30, 130, 74, 189, 135, 127, 213, 189, 245, 249, 34, 60, 187, 192, 9, 190, 4, 63, 2, 190, 74, 121, 233, 61, 112, 144, 250, 61, 34, 229, 4, 191, 95, 81, 165, 61, 171, 248, 156, 190, 56, 201, 239, 188, 191, 60, 55, 190, 42, 20, 23, 62, 171, 185, 129, 61, 185, 189, 199, 61, 11, 155, 92, 191, 246, 205, 112, 62, 36, 167, 130, 61, 73, 238, 148, 61, 11, 70, 132, 190, 76, 50, 165, 191, 245, 63, 126, 189, 161, 135, 37, 190, 249, 10, 21, 190, 216, 236, 42, 60, 119, 201, 229, 61, 226, 195, 196, 190, 219, 79, 176, 190, 152, 6, 155, 190, 130, 175, 97, 191, 21, 227, 104, 61, 56, 138, 43, 62, 230, 186, 7, 187, 252, 170, 36, 62, 197, 246, 144, 190, 189, 55, 53, 190, 82, 196, 150, 190, 234, 232, 94, 61, 247, 61, 35, 190, 47, 235, 29, 61, 211, 157, 91, 190, 15, 173, 52, 62, 243, 37, 187, 189, 161, 1, 55, 190, 195, 225, 159, 190, 69, 41, 66, 191, 238, 74, 134, 60, 187, 84, 247, 61, 242, 9, 155, 189, 211, 252, 39, 190, 204, 216, 19, 190, 161, 197, 52, 62, 50, 0, 54, 61, 45, 234, 37, 62, 47, 234, 119, 190, 107, 21, 43, 62, 53, 165, 207, 61, 118, 254, 44, 61, 55, 130, 158, 61, 2, 198, 59, 62, 47, 188, 26, 62, 91, 245, 56, 62, 41, 164, 123, 189, 129, 35, 148, 190, 111, 236, 0, 62, 6, 205, 72, 190, 192, 215, 94, 62, 74, 224, 64, 190, 205, 246, 18, 190, 51, 51, 139, 61, 21, 179, 55, 190, 213, 78, 32, 189, 90, 200, 76, 190, 184, 18, 52, 190, 42, 246, 48, 61, 171, 21, 70, 190, 169, 232, 169, 190, 45, 92, 161, 190, 92, 62, 9, 62, 62, 117, 222, 61, 154, 133, 141, 190, 141, 109, 149, 62, 234, 121, 230, 61, 225, 17, 163, 61, 250, 136, 10, 190, 196, 165, 236, 189, 136, 13, 21, 62, 8, 104, 65, 62, 252, 31, 6, 190, 56, 98, 244, 61, 147, 42, 109, 62, 146, 175, 79, 190, 201, 147, 132, 62, 39, 181, 134, 190, 204, 52, 119, 189, 13, 31, 45, 62, 132, 199, 0, 62, 209, 222, 170, 190, 20, 16, 141, 62, 22, 113, 246, 188, 60, 213, 218, 189, 11, 22, 246, 60, 233, 158, 162, 59, 250, 119, 14, 189, 159, 59, 50, 62, 232, 4, 82, 61, 49, 213, 31, 62, 9, 233, 149, 188, 84, 225, 40, 190, 243, 180, 148, 187, 78, 12, 187, 61, 178, 44, 12, 190, 206, 50, 58, 188, 77, 174, 88, 188, 8, 250, 45, 190, 94, 97, 198, 189, 183, 152, 253, 61, 200, 67, 202, 61, 152, 252, 6, 62, 108, 209, 46, 190, 195, 207, 3, 62, 79, 45, 202, 189, 173, 254, 28, 61, 6, 242, 125, 61, 9, 172, 254, 189, 116, 100, 7, 190, 75, 177, 74, 189, 54, 80, 19, 190, 74, 125, 218, 189, 25, 153, 182, 189, 44, 181, 14, 190, 14, 157, 141, 60, 207, 142, 224, 61, 220, 64, 90, 62, 217, 7, 90, 62, 255, 95, 76, 61, 122, 157, 231, 62, 191, 28, 4, 63, 200, 20, 133, 61, 216, 167, 220, 62, 35, 164, 164, 62, 209, 23, 56, 189, 181, 214, 241, 56, 11, 74, 203, 61, 66, 69, 131, 61, 217, 155, 165, 61, 80, 93, 39, 191, 38, 106, 82, 191, 37, 156, 90, 189, 209, 58, 46, 62, 177, 237, 18, 191, 7, 17, 240, 190, 220, 51, 182, 62, 218, 3, 196, 62, 158, 147, 35, 60, 186, 3, 23, 189, 55, 238, 128, 191, 7, 246, 85, 62, 230, 15, 181, 191, 22, 166, 220, 190, 134, 148, 128, 61, 75, 37, 164, 62, 86, 91, 137, 191, 113, 244, 149, 191, 226, 154, 19, 62, 210, 204, 2, 190, 35, 222, 19, 190, 13, 250, 172, 60, 92, 196, 139, 189, 7, 66, 223, 189, 180, 15, 19, 190, 103, 111, 53, 62, 44, 169, 149, 56, 100, 11, 200, 60, 210, 88, 154, 190, 72, 227, 197, 60, 159, 196, 62, 190, 31, 122, 36, 61, 244, 76, 205, 190, 216, 10, 73, 189, 101, 197, 28, 190, 62, 106, 45, 62, 235, 136, 57, 190, 141, 229, 149, 190, 26, 217, 176, 188, 125, 136, 184, 190, 247, 93, 255, 188, 176, 46, 25, 62, 32, 207, 238, 60, 99, 217, 216, 189, 77, 118, 176, 190, 180, 174, 134, 190, 65, 248, 201, 189, 200, 69, 15, 62, 24, 30, 107, 189, 66, 32, 66, 61, 39, 232, 8, 62, 11, 200, 28, 62, 58, 153, 165, 62, 37, 237, 98, 190, 6, 144, 29, 62, 193, 95, 200, 189, 247, 238, 251, 61, 43, 21, 168, 61, 96, 253, 170, 62, 90, 77, 6, 63, 134, 255, 239, 61, 160, 5, 13, 63, 44, 30, 149, 61, 228, 213, 7, 189, 238, 174, 254, 189, 82, 68, 69, 191, 93, 83, 30, 190, 182, 178, 193, 62, 165, 210, 54, 62, 52, 251, 133, 190, 16, 84, 98, 62, 220, 124, 31, 62, 231, 152, 116, 189, 149, 174, 75, 189, 40, 130, 177, 190, 134, 180, 32, 60, 95, 68, 55, 189, 41, 25, 188, 189, 172, 12, 23, 62, 164, 9, 60, 62, 173, 191, 3, 191, 81, 171, 53, 191, 248, 97, 43, 62, 83, 72, 16, 61, 169, 120, 132, 62, 194, 116, 154, 190, 122, 233, 112, 187, 25, 32, 181, 61, 241, 137, 34, 190, 141, 14, 178, 62, 58, 49, 127, 62, 134, 203, 217, 62, 106, 215, 27, 190, 179, 137, 171, 188, 47, 17, 10, 190, 145, 223, 132, 62, 62, 186, 18, 62, 230, 144, 139, 190, 136, 66, 13, 190, 127, 162, 167, 62, 49, 97, 200, 60, 60, 23, 243, 189, 210, 150, 135, 62, 35, 159, 150, 62, 61, 233, 11, 190, 54, 132, 63, 190, 102, 236, 215, 190, 161, 209, 212, 60, 0, 86, 60, 188, 176, 122, 191, 189, 35, 221, 104, 62, 195, 252, 109, 62, 51, 13, 149, 190, 18, 104, 89, 190, 79, 219, 101, 189, 225, 145, 217, 190, 160, 40, 11, 191, 8, 30, 142, 189, 243, 84, 205, 190, 174, 249, 36, 191, 79, 75, 188, 189, 82, 127, 27, 186, 9, 26, 74, 190, 10, 158, 106, 190, 116, 226, 75, 188, 90, 10, 175, 59, 107, 202, 62, 189, 151, 163, 220, 61, 251, 16, 13, 62, 40, 91, 8, 62, 167, 1, 34, 59, 133, 106, 31, 62, 208, 127, 149, 190, 224, 240, 1, 190, 13, 116, 93, 61, 255, 87, 142, 190, 97, 129, 104, 189, 60, 130, 66, 190, 177, 14, 81, 191, 181, 89, 10, 190, 169, 67, 99, 62, 220, 244, 31, 62, 38, 32, 224, 61, 109, 71, 122, 62, 110, 240, 79, 188, 212, 221, 208, 190, 194, 209, 208, 190, 36, 14, 49, 190, 8, 150, 156, 190, 146, 127, 27, 62, 116, 101, 122, 190, 52, 30, 32, 63, 18, 136, 185, 189, 87, 24, 11, 191, 215, 87, 179, 190, 208, 140, 238, 191, 80, 198, 218, 61, 193, 11, 46, 62, 218, 110, 4, 62, 71, 67, 25, 190, 226, 250, 200, 61, 243, 232, 222, 62, 242, 182, 130, 62, 92, 244, 113, 58, 43, 220, 231, 190, 19, 85, 50, 62, 54, 156, 197, 190, 89, 218, 5, 189, 116, 27, 33, 62, 65, 12, 16, 62, 188, 16, 72, 186, 219, 69, 37, 61, 25, 12, 150, 61, 19, 23, 234, 189, 233, 115, 39, 190, 136, 42, 51, 191, 210, 49, 173, 62, 120, 50, 128, 61, 156, 232, 212, 188, 72, 121, 207, 190, 9, 154, 180, 191, 55, 169, 8, 62, 143, 230, 29, 190, 168, 255, 180, 61, 181, 72, 150, 61, 99, 71, 173, 189, 12, 80, 37, 190, 50, 150, 181, 191, 245, 112, 124, 62, 220, 228, 142, 62, 169, 84, 128, 62, 170, 218, 70, 190, 46, 59, 131, 188, 11, 180, 231, 61, 65, 130, 80, 189, 69, 224, 159, 59, 169, 108, 153, 190, 192, 34, 170, 57, 251, 71, 134, 190, 228, 24, 130, 190, 22, 109, 66, 62, 59, 78, 152, 61, 128, 60, 75, 191, 158, 236, 14, 62, 254, 142, 130, 61, 192, 77, 85, 61, 10, 65, 136, 186, 74, 225, 199, 190, 31, 149, 67, 62, 115, 136, 132, 190, 14, 187, 164, 61, 13, 200, 231, 61, 192, 11, 206, 189, 251, 101, 57, 189, 180, 162, 44, 190, 146, 189, 236, 189, 220, 222, 9, 62, 121, 2, 8, 62, 120, 23, 232, 189, 169, 9, 4, 189, 132, 204, 136, 60, 123, 225, 160, 60, 40, 28, 183, 189, 160, 58, 22, 62, 172, 155, 253, 189, 62, 149, 114, 189, 66, 131, 37, 62, 84, 47, 5, 62, 46, 186, 191, 188, 156, 172, 40, 62, 13, 198, 135, 61, 42, 169, 243, 189, 9, 200, 152, 189, 198, 57, 119, 189, 116, 103, 167, 189, 50, 182, 6, 190, 44, 122, 198, 189, 142, 2, 209, 61, 158, 31, 223, 189, 149, 47, 219, 61, 253, 78, 229, 188, 129, 217, 159, 188, 222, 196, 242, 60, 212, 7, 58, 190, 29, 3, 49, 191, 206, 173, 214, 62, 183, 73, 143, 190, 178, 22, 204, 187, 191, 60, 255, 189, 108, 168, 240, 189, 232, 193, 205, 60, 211, 29, 164, 189, 122, 127, 2, 62, 11, 239, 171, 190, 41, 192, 135, 190, 45, 5, 5, 62, 175, 152, 51, 62, 149, 144, 174, 62, 64, 115, 5, 63, 13, 255, 160, 190, 181, 94, 89, 62, 124, 142, 169, 62, 19, 10, 231, 189, 202, 226, 31, 60, 237, 81, 72, 62, 92, 189, 180, 61, 107, 46, 76, 62, 191, 87, 86, 61, 83, 172, 46, 61, 165, 154, 67, 62, 64, 136, 162, 190, 156, 40, 9, 191, 26, 96, 146, 62, 137, 44, 217, 62, 233, 184, 207, 190, 68, 224, 140, 61, 196, 196, 120, 189, 226, 119, 165, 60, 131, 83, 148, 190, 84, 36, 195, 189, 178, 247, 31, 62, 253, 43, 251, 189, 159, 216, 134, 189, 222, 46, 207, 190, 217, 79, 11, 62, 137, 58, 23, 63, 181, 204, 13, 190, 57, 87, 132, 62, 170, 193, 130, 188, 61, 83, 32, 62, 227, 236, 153, 62, 67, 193, 134, 62, 171, 26, 236, 60, 112, 94, 152, 62, 38, 17, 13, 62, 172, 27, 23, 62, 240, 206, 18, 62, 48, 7, 211, 187, 167, 27, 5, 59, 143, 99, 28, 189, 182, 202, 167, 61, 82, 141, 114, 61, 63, 184, 128, 61, 0, 164, 111, 190, 198, 76, 206, 61, 92, 221, 65, 62, 189, 103, 70, 62, 20, 173, 235, 61, 77, 210, 153, 62, 182, 134, 176, 189, 158, 254, 21, 61, 253, 172, 164, 58, 117, 123, 44, 189, 211, 2, 14, 62, 151, 204, 90, 62, 169, 249, 214, 62, 180, 137, 211, 189, 23, 5, 59, 62, 118, 222, 153, 62, 157, 113, 4, 62, 65, 11, 176, 62, 176, 27, 231, 60, 134, 29, 123, 189, 147, 27, 159, 189, 74, 29, 155, 62, 163, 100, 138, 189, 56, 154, 21, 188, 24, 16, 22, 189, 160, 226, 22, 62, 36, 35, 179, 61, 204, 89, 12, 190, 87, 235, 232, 61, 85, 148, 140, 62, 53, 0, 180, 62, 197, 123, 37, 62, 25, 207, 149, 61, 255, 208, 100, 62, 235, 217, 4, 190, 180, 26, 182, 190, 171, 90, 119, 59, 127, 95, 159, 61, 62, 71, 85, 61, 124, 247, 193, 61, 134, 81, 228, 60, 114, 60, 25, 62, 57, 7, 170, 190, 188, 226, 229, 190, 160, 203, 35, 191, 216, 231, 191, 62, 133, 209, 241, 59, 66, 93, 56, 191, 156, 198, 6, 62, 56, 9, 242, 190, 36, 143, 166, 62, 236, 205, 126, 189, 33, 229, 84, 190, 139, 119, 170, 189, 186, 192, 31, 189, 242, 174, 64, 190, 67, 238, 204, 189, 14, 228, 175, 62, 36, 16, 69, 62, 38, 178, 163, 62, 165, 116, 143, 190, 55, 45, 57, 190, 253, 250, 98, 190, 192, 73, 130, 61, 93, 251, 50, 189, 52, 38, 142, 62, 2, 12, 172, 62, 147, 52, 157, 62, 86, 79, 55, 191, 57, 147, 55, 190, 154, 61, 250, 61, 168, 253, 185, 61, 106, 224, 64, 191, 140, 228, 52, 190, 13, 31, 191, 62, 144, 151, 182, 62, 89, 88, 144, 190, 165, 246, 27, 190, 192, 71, 52, 190, 74, 4, 52, 191, 54, 64, 26, 61, 205, 43, 140, 191, 54, 30, 169, 190, 196, 216, 58, 58, 223, 111, 215, 62, 29, 25, 63, 190, 131, 169, 182, 61, 95, 148, 55, 62, 195, 130, 166, 190, 81, 241, 246, 61, 171, 194, 207, 61, 182, 61, 32, 191, 7, 199, 155, 189, 209, 160, 234, 190, 194, 166, 158, 191, 7, 138, 220, 62, 209, 146, 99, 189, 119, 46, 200, 190, 227, 96, 138, 188, 47, 126, 174, 62, 215, 224, 166, 62, 66, 219, 230, 61, 123, 210, 101, 190, 23, 95, 53, 62, 191, 84, 152, 61, 68, 59, 13, 190, 193, 78, 197, 61, 73, 212, 239, 62, 149, 223, 130, 190, 116, 12, 146, 61, 103, 202, 55, 62, 147, 191, 211, 189, 50, 12, 123, 62, 160, 195, 26, 60, 217, 247, 116, 191, 200, 105, 126, 190, 209, 63, 25, 62, 50, 141, 9, 189, 85, 100, 169, 190, 27, 138, 137, 61, 207, 243, 246, 61, 203, 78, 48, 61, 73, 67, 165, 189, 76, 116, 175, 189, 115, 248, 152, 190, 38, 239, 158, 188, 175, 56, 213, 189, 251, 118, 183, 62, 111, 57, 89, 190, 61, 74, 206, 190, 128, 183, 204, 190, 180, 49, 237, 189, 176, 180, 184, 61, 174, 2, 131, 62, 127, 59, 63, 191, 177, 236, 128, 62, 90, 87, 200, 189, 249, 76, 47, 62, 216, 102, 49, 61, 52, 152, 40, 62, 222, 201, 111, 62, 54, 198, 93, 190, 144, 25, 169, 62, 7, 130, 164, 62, 221, 79, 193, 187, 223, 159, 20, 62, 98, 64, 223, 190, 205, 227, 80, 191, 210, 66, 61, 62, 95, 71, 150, 188, 97, 128, 107, 190, 56, 188, 29, 188, 16, 156, 84, 62, 42, 145, 236, 188, 79, 216, 3, 191, 183, 168, 17, 191, 75, 247, 22, 191, 60, 142, 183, 62, 77, 199, 131, 189, 24, 39, 41, 62, 157, 31, 253, 189, 4, 232, 242, 190, 43, 35, 22, 191, 184, 54, 23, 190, 159, 234, 250, 60, 60, 234, 90, 62, 128, 166, 98, 191, 197, 162, 12, 62, 24, 175, 181, 60, 55, 194, 222, 187, 198, 41, 252, 188, 125, 62, 12, 190, 104, 16, 212, 62, 34, 131, 73, 191, 16, 3, 243, 61, 151, 191, 124, 62, 75, 31, 77, 190, 107, 177, 70, 62, 130, 228, 4, 191, 74, 33, 44, 191, 6, 230, 86, 62, 217, 247, 33, 190, 7, 237, 98, 190, 209, 144, 126, 61, 198, 174, 40, 62, 60, 216, 5, 189, 154, 134, 111, 190, 156, 169, 226, 189, 246, 108, 18, 190, 204, 145, 238, 61, 68, 94, 222, 60, 226, 73, 223, 189, 239, 26, 109, 62, 213, 164, 188, 189, 253, 228, 76, 190, 24, 33, 89, 62, 181, 173, 71, 62, 88, 222, 155, 62, 85, 100, 5, 60, 233, 66, 101, 62, 177, 80, 72, 190, 37, 247, 70, 189, 151, 212, 36, 62, 26, 13, 209, 61, 57, 82, 155, 58, 86, 122, 127, 60, 183, 64, 61, 62, 156, 27, 44, 61, 218, 172, 42, 62, 24, 127, 157, 60, 137, 98, 37, 191, 156, 119, 230, 190, 196, 49, 137, 62, 202, 157, 47, 190, 200, 116, 18, 190, 74, 137, 31, 62, 191, 165, 129, 62, 189, 21, 180, 61, 194, 52, 101, 190, 5, 12, 170, 190, 178, 194, 87, 189, 167, 39, 249, 189, 83, 234, 30, 61, 100, 160, 86, 61, 28, 124, 50, 189, 93, 95, 3, 191, 21, 143, 3, 191, 180, 245, 47, 187, 8, 190, 191, 62, 192, 21, 11, 62, 34, 239, 108, 189, 205, 181, 152, 61, 66, 240, 229, 61, 163, 81, 162, 61, 204, 254, 28, 190, 15, 241, 222, 190, 20, 200, 10, 191, 62, 68, 181, 62, 175, 5, 153, 62, 78, 239, 241, 190, 19, 214, 7, 62, 233, 205, 112, 190, 205, 241, 63, 62, 206, 152, 58, 190, 104, 18, 193, 188, 84, 189, 96, 190, 210, 190, 138, 61, 34, 105, 60, 61, 159, 182, 174, 62, 135, 223, 185, 62, 255, 173, 155, 190, 127, 116, 248, 61, 209, 111, 107, 189, 190, 139, 168, 189, 148, 76, 171, 190, 190, 169, 98, 62, 120, 240, 165, 189, 147, 184, 199, 189, 160, 42, 69, 190, 109, 222, 190, 189, 29, 85, 37, 189, 48, 108, 137, 62, 239, 214, 253, 190, 85, 57, 186, 61, 47, 179, 31, 191, 122, 109, 249, 61, 119, 14, 22, 190, 239, 110, 118, 189, 124, 131, 178, 189, 173, 80, 212, 59, 129, 194, 144, 191, 178, 140, 115, 62, 165, 183, 169, 58, 116, 53, 241, 61, 83, 247, 28, 191, 142, 2, 120, 191, 15, 222, 70, 190, 87, 70, 17, 190, 76, 166, 19, 191, 197, 160, 165, 61, 107, 43, 104, 61, 6, 190, 255, 187, 31, 27, 217, 190, 198, 111, 28, 60, 171, 29, 103, 191, 75, 39, 22, 62, 230, 76, 65, 61, 199, 74, 160, 61, 21, 192, 129, 190, 122, 157, 19, 191, 248, 42, 16, 190, 62, 103, 135, 190, 147, 200, 59, 191, 74, 172, 239, 191, 129, 42, 11, 62, 167, 89, 84, 191, 96, 217, 170, 61, 218, 82, 0, 190, 17, 7, 128, 190, 96, 161, 101, 190, 160, 7, 239, 190, 156, 114, 19, 62, 37, 32, 3, 63, 21, 186, 252, 61, 39, 26, 184, 189, 89, 150, 178, 62, 138, 34, 27, 62, 172, 53, 183, 62, 145, 174, 217, 61, 221, 111, 185, 190, 144, 34, 132, 190, 160, 79, 26, 190, 25, 52, 2, 191, 111, 94, 39, 62, 39, 95, 127, 62, 135, 199, 20, 191, 0, 44, 148, 61, 243, 46, 138, 62, 218, 166, 198, 62, 214, 124, 48, 59, 96, 125, 10, 191, 145, 232, 74, 61, 228, 200, 137, 191};
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
                alignas(float) const unsigned char memory[] = {10, 172, 186, 189, 25, 45, 217, 61, 241, 93, 135, 189, 74, 197, 38, 60, 84, 10, 137, 61, 184, 108, 1, 190, 26, 19, 132, 190, 151, 151, 86, 189, 137, 229, 59, 190, 77, 222, 126, 62, 13, 27, 12, 62, 158, 124, 213, 189, 68, 84, 163, 190, 117, 66, 218, 189, 45, 158, 252, 61, 109, 108, 177, 188, 188, 223, 159, 61, 28, 237, 65, 61, 79, 4, 139, 189, 213, 229, 250, 189, 133, 240, 73, 190, 253, 34, 66, 62, 168, 140, 154, 62, 50, 59, 213, 189, 40, 57, 226, 189, 135, 158, 236, 61, 64, 43, 190, 62, 170, 103, 63, 61, 29, 82, 3, 61, 64, 141, 180, 188, 114, 242, 88, 190, 233, 27, 19, 62};
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
                alignas(float) const unsigned char memory[] = {169, 172, 28, 190, 131, 128, 84, 63, 203, 213, 215, 61, 67, 219, 113, 60, 143, 144, 21, 191, 139, 222, 208, 62, 208, 232, 128, 62, 74, 71, 237, 189, 40, 182, 34, 191, 91, 232, 39, 62, 104, 187, 96, 62, 51, 20, 6, 59, 239, 88, 160, 63, 164, 98, 137, 188, 12, 193, 178, 190, 23, 113, 242, 189, 242, 181, 167, 61, 160, 86, 31, 63, 250, 47, 151, 62, 158, 217, 150, 60, 10, 167, 12, 191, 171, 142, 122, 61, 217, 17, 31, 190, 103, 26, 194, 62, 95, 145, 158, 191, 122, 101, 21, 191, 80, 69, 33, 191, 127, 235, 108, 190, 125, 93, 194, 190, 242, 113, 120, 62, 220, 126, 142, 191, 46, 11, 213, 62, 166, 208, 191, 61, 156, 5, 47, 63, 12, 42, 22, 61, 144, 96, 247, 61, 126, 125, 237, 190, 94, 244, 128, 62, 216, 130, 39, 62, 209, 42, 35, 189, 233, 71, 138, 62, 70, 54, 150, 190, 166, 31, 145, 60, 16, 73, 72, 59, 153, 178, 252, 62, 220, 204, 51, 62, 3, 91, 159, 61, 191, 54, 183, 189, 205, 193, 185, 190, 144, 25, 230, 61, 175, 156, 193, 189, 184, 211, 23, 190, 24, 104, 142, 61, 75, 30, 216, 190, 60, 228, 160, 190, 58, 19, 203, 62, 125, 114, 114, 189, 76, 149, 94, 61, 240, 89, 142, 61, 37, 76, 203, 61, 143, 245, 0, 62, 180, 207, 114, 190, 177, 103, 135, 189, 218, 23, 144, 189};
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
                alignas(float) const unsigned char memory[] = {246, 227, 238, 61, 141, 151, 5, 191};
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
    alignas(float) const unsigned char memory[] = {139, 127, 87, 190, 103, 237, 219, 62, 13, 140, 175, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {117, 68, 229, 63, 223, 90, 94, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0038/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}