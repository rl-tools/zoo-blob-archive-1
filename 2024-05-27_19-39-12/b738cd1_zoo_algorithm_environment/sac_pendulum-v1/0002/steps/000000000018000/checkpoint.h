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
                alignas(float) const unsigned char memory[] = {103, 36, 69, 63, 235, 175, 35, 190, 254, 232, 156, 190, 228, 12, 132, 62, 110, 83, 184, 191, 199, 0, 199, 190, 18, 67, 237, 60, 191, 19, 27, 191, 208, 119, 245, 62, 2, 107, 152, 190, 85, 160, 9, 191, 211, 39, 11, 63, 127, 70, 61, 191, 36, 193, 238, 191, 178, 242, 232, 190, 4, 41, 16, 63, 79, 193, 49, 63, 172, 141, 89, 62, 210, 198, 57, 63, 39, 132, 0, 190, 181, 81, 29, 63, 111, 200, 103, 191, 166, 149, 163, 190, 168, 6, 201, 189, 97, 79, 97, 61, 163, 72, 227, 63, 250, 103, 77, 63, 183, 30, 42, 191, 190, 77, 104, 62, 239, 199, 7, 191, 142, 151, 28, 63, 23, 246, 82, 191, 227, 121, 22, 189, 31, 12, 185, 190, 117, 49, 124, 63, 191, 232, 199, 60, 217, 40, 227, 190, 192, 87, 67, 191, 206, 169, 237, 189, 183, 69, 206, 62, 36, 207, 6, 191, 56, 119, 30, 63, 84, 7, 191, 190, 228, 80, 200, 188, 107, 12, 243, 190, 113, 51, 115, 63, 108, 117, 3, 63, 151, 246, 9, 63, 207, 246, 175, 61, 191, 158, 177, 62, 52, 152, 178, 190, 244, 92, 70, 191, 191, 14, 22, 191, 84, 75, 158, 189, 110, 44, 233, 61, 79, 64, 75, 191, 221, 43, 22, 190, 18, 173, 76, 191, 180, 190, 207, 190, 169, 37, 15, 190, 95, 66, 48, 191, 21, 87, 208, 191, 57, 158, 145, 190, 176, 52, 246, 62, 3, 255, 89, 191, 180, 254, 216, 190, 177, 202, 219, 62, 102, 164, 136, 63, 4, 119, 0, 63, 33, 158, 175, 62, 64, 123, 144, 62, 53, 48, 40, 61, 46, 121, 201, 190, 138, 134, 189, 62, 149, 97, 229, 190, 10, 203, 225, 61, 78, 203, 128, 62, 91, 222, 244, 189, 55, 148, 73, 63, 204, 7, 210, 190, 47, 173, 198, 190, 167, 67, 19, 190, 19, 182, 22, 63, 71, 55, 165, 190, 178, 80, 238, 62, 117, 11, 229, 62, 5, 227, 135, 188, 65, 143, 120, 60, 0, 18, 174, 190, 125, 49, 190, 62, 254, 141, 54, 63, 217, 98, 171, 191, 91, 194, 97, 190, 130, 194, 55, 63, 247, 169, 77, 63, 124, 134, 169, 62};
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
                alignas(float) const unsigned char memory[] = {205, 41, 112, 191, 175, 64, 235, 61, 33, 56, 103, 190, 133, 200, 6, 189, 20, 227, 139, 190, 248, 141, 96, 191, 65, 100, 149, 190, 174, 249, 251, 190, 46, 63, 123, 61, 150, 215, 242, 62, 10, 145, 46, 63, 184, 172, 78, 63, 82, 173, 23, 63, 193, 214, 82, 62, 12, 119, 187, 189, 238, 184, 90, 190, 115, 216, 36, 63, 111, 227, 57, 63, 58, 58, 207, 62, 251, 240, 61, 63, 246, 20, 205, 61, 99, 112, 4, 62, 83, 51, 242, 62, 133, 82, 65, 191, 222, 118, 63, 190, 49, 76, 143, 62, 223, 82, 188, 190, 35, 42, 24, 62, 59, 192, 230, 62, 144, 22, 61, 60, 236, 47, 156, 60, 224, 54, 40, 191};
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
                alignas(float) const unsigned char memory[] = {62, 45, 189, 190, 132, 51, 170, 187, 199, 53, 69, 62, 141, 57, 33, 190, 27, 137, 150, 190, 188, 35, 172, 62, 174, 113, 171, 60, 27, 163, 140, 61, 7, 156, 47, 190, 201, 100, 112, 62, 234, 214, 50, 61, 56, 183, 226, 61, 142, 111, 100, 62, 188, 252, 102, 61, 12, 52, 39, 60, 86, 90, 165, 62, 203, 213, 24, 189, 194, 63, 19, 190, 10, 7, 204, 61, 28, 71, 172, 188, 142, 121, 238, 190, 158, 189, 8, 190, 150, 202, 238, 61, 56, 138, 122, 190, 156, 7, 149, 61, 169, 29, 54, 62, 116, 138, 141, 188, 20, 81, 166, 188, 124, 2, 50, 62, 44, 45, 54, 61, 99, 171, 52, 190, 33, 132, 117, 61, 119, 201, 114, 191, 193, 139, 129, 190, 238, 121, 229, 61, 139, 254, 189, 61, 201, 52, 16, 191, 86, 255, 22, 63, 138, 196, 56, 62, 144, 195, 250, 190, 71, 199, 170, 61, 83, 212, 189, 59, 138, 68, 214, 189, 105, 145, 116, 62, 70, 125, 114, 190, 91, 88, 96, 189, 96, 128, 250, 60, 141, 110, 88, 61, 52, 97, 52, 62, 54, 253, 173, 189, 155, 137, 97, 190, 67, 124, 52, 190, 91, 148, 47, 191, 119, 105, 142, 61, 169, 238, 147, 62, 219, 143, 202, 190, 141, 123, 230, 189, 105, 117, 173, 62, 123, 56, 41, 62, 171, 110, 3, 62, 247, 81, 243, 62, 75, 147, 17, 61, 208, 55, 20, 191, 20, 143, 62, 61, 101, 142, 20, 189, 10, 176, 249, 61, 142, 112, 16, 62, 227, 209, 140, 189, 238, 22, 72, 60, 146, 200, 28, 190, 144, 82, 45, 190, 33, 50, 36, 62, 197, 172, 255, 61, 219, 106, 197, 60, 1, 208, 4, 62, 96, 165, 215, 59, 233, 87, 13, 187, 78, 11, 190, 189, 46, 252, 163, 189, 7, 216, 87, 61, 114, 141, 231, 60, 108, 120, 139, 189, 98, 168, 249, 189, 145, 157, 32, 61, 105, 180, 213, 189, 199, 52, 26, 189, 90, 53, 38, 190, 171, 3, 199, 189, 70, 63, 28, 190, 40, 142, 3, 61, 82, 180, 76, 60, 244, 8, 21, 189, 190, 225, 0, 190, 228, 225, 5, 190, 52, 222, 70, 188, 89, 236, 51, 190, 97, 61, 250, 61, 172, 216, 9, 62, 35, 233, 251, 190, 55, 142, 171, 62, 16, 105, 184, 191, 127, 74, 13, 191, 122, 210, 27, 190, 14, 39, 36, 191, 162, 14, 76, 62, 144, 215, 190, 189, 241, 85, 192, 62, 105, 163, 91, 62, 254, 3, 137, 62, 8, 216, 3, 62, 158, 177, 143, 190, 0, 190, 204, 189, 156, 50, 113, 190, 74, 194, 251, 61, 156, 251, 133, 62, 210, 35, 172, 61, 53, 247, 70, 191, 90, 194, 83, 62, 28, 13, 181, 189, 102, 80, 188, 62, 82, 189, 144, 61, 8, 180, 16, 190, 33, 199, 82, 62, 205, 100, 6, 62, 62, 112, 163, 190, 131, 220, 79, 189, 42, 176, 154, 62, 253, 14, 107, 190, 253, 148, 83, 190, 250, 21, 238, 188, 255, 238, 68, 62, 76, 235, 218, 188, 80, 119, 207, 61, 108, 207, 237, 189, 33, 189, 246, 61, 37, 187, 242, 188, 237, 113, 239, 190, 239, 78, 224, 61, 108, 243, 237, 62, 32, 184, 18, 191, 32, 5, 191, 62, 177, 146, 126, 62, 160, 183, 25, 62, 228, 146, 34, 190, 157, 247, 202, 188, 206, 200, 61, 61, 222, 229, 231, 62, 227, 234, 20, 62, 205, 233, 168, 190, 114, 95, 162, 61, 180, 150, 15, 61, 237, 132, 162, 57, 237, 46, 23, 60, 39, 202, 173, 189, 47, 137, 209, 189, 98, 22, 241, 61, 205, 16, 160, 189, 197, 147, 129, 62, 29, 179, 4, 62, 212, 103, 165, 191, 215, 68, 43, 62, 28, 28, 100, 61, 120, 5, 248, 190, 121, 79, 218, 62, 124, 240, 168, 190, 92, 252, 53, 191, 8, 171, 144, 190, 142, 248, 2, 190, 84, 221, 57, 189, 252, 177, 76, 62, 205, 99, 7, 62, 61, 73, 147, 62, 66, 12, 173, 62, 205, 165, 5, 63, 195, 35, 38, 190, 218, 127, 12, 190, 86, 136, 66, 189, 237, 33, 231, 61, 177, 1, 161, 62, 179, 176, 138, 62, 243, 168, 91, 61, 204, 147, 42, 189, 4, 216, 116, 61, 70, 79, 247, 62, 105, 239, 208, 61, 100, 109, 29, 61, 24, 232, 225, 57, 128, 114, 43, 62, 211, 56, 78, 190, 199, 127, 164, 62, 111, 54, 50, 62, 175, 42, 254, 190, 156, 214, 10, 63, 27, 14, 12, 62, 158, 117, 63, 62, 86, 58, 155, 62, 187, 113, 181, 189, 87, 72, 231, 189, 86, 221, 55, 190, 120, 118, 212, 189, 255, 187, 60, 61, 211, 42, 16, 61, 37, 157, 214, 60, 242, 13, 164, 191, 253, 194, 121, 61, 148, 243, 31, 190, 252, 192, 88, 190, 85, 135, 78, 191, 211, 155, 67, 190, 135, 141, 101, 190, 252, 107, 213, 61, 164, 190, 2, 190, 50, 18, 97, 62, 91, 140, 148, 62, 29, 185, 0, 191, 115, 249, 148, 60, 182, 201, 189, 61, 24, 63, 169, 190, 244, 251, 148, 62, 143, 84, 124, 61, 250, 21, 187, 190, 154, 15, 27, 61, 196, 22, 84, 62, 95, 22, 237, 190, 27, 39, 64, 191, 168, 213, 25, 191, 44, 95, 129, 63, 26, 225, 187, 61, 74, 1, 238, 60, 162, 90, 168, 61, 62, 82, 136, 62, 108, 169, 252, 61, 75, 73, 149, 191, 46, 24, 153, 62, 223, 213, 138, 61, 1, 217, 17, 62, 213, 126, 228, 189, 2, 102, 172, 190, 225, 18, 27, 187, 57, 41, 103, 62, 231, 32, 155, 62, 210, 7, 80, 189, 156, 16, 148, 62, 176, 237, 180, 188, 100, 160, 153, 61, 106, 135, 209, 190, 172, 17, 2, 191, 242, 141, 163, 189, 150, 233, 147, 190, 201, 252, 56, 62, 135, 55, 8, 190, 121, 196, 220, 189, 142, 182, 9, 63, 130, 194, 226, 189, 89, 186, 93, 191, 197, 101, 188, 62, 254, 47, 9, 190, 237, 250, 26, 62, 141, 51, 238, 190, 105, 164, 122, 60, 90, 162, 12, 190, 193, 105, 28, 191, 248, 106, 128, 189, 223, 106, 3, 190, 164, 147, 85, 62, 168, 173, 91, 62, 54, 140, 79, 61, 54, 7, 72, 62, 155, 245, 144, 62, 238, 250, 76, 62, 0, 55, 54, 190, 58, 16, 60, 190, 159, 249, 18, 62, 11, 71, 14, 190, 87, 55, 0, 62, 165, 223, 230, 61, 229, 194, 121, 190, 211, 169, 163, 61, 70, 12, 10, 60, 96, 80, 134, 62, 75, 100, 139, 61, 7, 183, 228, 189, 236, 208, 185, 61, 111, 166, 138, 189, 39, 73, 250, 189, 142, 222, 70, 61, 81, 188, 43, 62, 18, 88, 156, 190, 198, 148, 240, 61, 86, 213, 105, 58, 195, 141, 21, 190, 64, 213, 169, 61, 110, 46, 44, 190, 210, 172, 50, 62, 204, 104, 237, 189, 54, 138, 18, 62, 21, 7, 59, 61, 190, 29, 52, 190, 89, 228, 73, 60, 30, 75, 24, 190, 153, 64, 19, 190, 250, 118, 177, 188, 181, 67, 124, 61, 17, 12, 205, 189, 59, 191, 57, 190, 197, 73, 21, 61, 232, 34, 30, 190, 197, 51, 97, 189, 21, 218, 25, 62, 10, 48, 93, 60, 179, 65, 33, 190, 55, 232, 247, 61, 245, 70, 204, 61, 99, 146, 91, 189, 200, 22, 78, 61, 246, 239, 228, 61, 78, 82, 32, 190, 116, 90, 126, 187, 201, 185, 15, 62, 170, 153, 200, 61, 152, 205, 181, 191, 185, 65, 16, 190, 229, 103, 50, 62, 13, 234, 97, 188, 200, 20, 254, 190, 170, 174, 34, 63, 198, 100, 226, 61, 34, 197, 123, 189, 244, 58, 207, 61, 6, 177, 43, 62, 132, 83, 139, 62, 124, 19, 58, 188, 44, 77, 240, 60, 28, 254, 4, 190, 107, 201, 39, 62, 105, 179, 134, 62, 92, 160, 134, 62, 9, 0, 168, 190, 16, 55, 176, 61, 36, 129, 172, 190, 26, 52, 232, 191, 208, 221, 53, 61, 186, 140, 38, 62, 176, 189, 237, 190, 222, 197, 66, 189, 77, 83, 99, 62, 82, 42, 113, 60, 125, 70, 111, 62, 46, 58, 213, 62, 216, 73, 68, 190, 31, 172, 229, 189, 227, 0, 8, 61, 17, 40, 131, 190, 210, 255, 131, 191, 223, 114, 42, 63, 162, 214, 10, 190, 206, 23, 11, 62, 62, 39, 220, 61, 71, 208, 234, 60, 116, 185, 82, 62, 144, 74, 214, 190, 174, 80, 88, 189, 90, 9, 61, 191, 114, 78, 96, 61, 208, 8, 66, 62, 240, 222, 75, 191, 224, 223, 201, 190, 15, 223, 149, 59, 54, 122, 74, 190, 152, 86, 147, 62, 253, 0, 4, 190, 174, 177, 70, 62, 67, 239, 16, 60, 92, 85, 6, 191, 125, 189, 113, 191, 157, 21, 33, 190, 135, 236, 33, 191, 91, 45, 45, 190, 128, 232, 161, 190, 25, 117, 83, 191, 132, 73, 239, 189, 22, 160, 164, 190, 245, 23, 191, 190, 191, 132, 117, 61, 1, 60, 28, 62, 46, 140, 112, 189, 165, 22, 22, 62, 81, 92, 55, 190, 63, 161, 195, 189, 163, 175, 163, 61, 27, 37, 208, 60, 85, 117, 10, 190, 30, 140, 52, 61, 164, 4, 22, 62, 4, 123, 25, 190, 217, 31, 115, 190, 143, 153, 31, 191, 201, 66, 193, 189, 18, 60, 233, 59, 72, 74, 24, 61, 102, 201, 119, 190, 173, 21, 254, 190, 238, 168, 60, 190, 107, 27, 88, 191, 84, 225, 7, 62, 126, 188, 27, 190, 7, 177, 72, 61, 39, 178, 14, 63, 47, 142, 163, 189, 227, 79, 153, 189, 77, 229, 21, 190, 185, 100, 248, 189, 184, 52, 157, 189, 14, 11, 3, 190, 14, 226, 40, 190, 124, 176, 209, 61, 134, 98, 35, 191, 220, 205, 12, 190, 133, 96, 140, 62, 68, 241, 77, 62, 51, 140, 167, 61, 15, 42, 171, 189, 53, 134, 35, 189, 238, 165, 108, 62, 128, 13, 145, 191, 215, 171, 76, 62, 176, 225, 8, 191, 9, 191, 204, 60, 102, 85, 120, 62, 102, 43, 74, 191, 158, 41, 70, 62, 142, 214, 194, 190, 243, 246, 58, 61, 238, 59, 45, 62, 121, 219, 250, 60, 221, 152, 45, 62, 232, 19, 148, 61, 58, 76, 194, 190, 66, 24, 182, 191, 8, 140, 50, 62, 121, 144, 134, 190, 161, 192, 19, 62, 232, 130, 84, 189, 204, 24, 14, 190, 15, 78, 97, 189, 60, 128, 76, 62, 244, 167, 168, 190, 28, 25, 117, 62, 21, 91, 36, 191, 4, 200, 99, 60, 143, 119, 24, 63, 182, 93, 147, 61, 204, 107, 111, 62, 148, 191, 32, 190, 129, 207, 239, 61, 30, 138, 83, 62, 93, 8, 179, 190, 154, 215, 4, 62, 64, 245, 37, 190, 232, 144, 233, 189, 54, 98, 132, 61, 84, 133, 224, 190, 65, 169, 197, 60, 138, 225, 151, 190, 89, 212, 152, 62, 51, 55, 189, 62, 78, 167, 91, 61, 69, 159, 245, 61, 150, 34, 237, 61, 60, 219, 68, 190, 119, 43, 24, 191, 99, 121, 242, 189, 158, 122, 205, 190, 121, 124, 23, 62, 159, 117, 103, 189, 137, 63, 101, 190, 173, 221, 35, 188, 162, 252, 77, 190, 45, 179, 233, 60, 203, 81, 192, 60, 1, 81, 250, 60, 29, 144, 35, 190, 51, 170, 101, 189, 1, 73, 95, 61, 239, 103, 126, 188, 208, 208, 37, 62, 85, 216, 136, 61, 135, 230, 227, 57, 80, 159, 190, 189, 116, 150, 32, 190, 51, 151, 18, 62, 16, 48, 217, 61, 221, 22, 182, 189, 166, 40, 201, 60, 162, 209, 247, 61, 208, 153, 231, 188, 241, 160, 196, 61, 212, 255, 204, 61, 83, 187, 174, 189, 207, 53, 180, 60, 12, 197, 36, 190, 51, 212, 14, 189, 78, 3, 239, 60, 241, 243, 153, 61, 49, 12, 19, 189, 174, 152, 172, 61, 20, 101, 7, 189, 96, 192, 88, 189, 51, 57, 25, 190, 184, 26, 51, 190, 106, 167, 143, 189, 223, 62, 139, 189, 83, 175, 28, 190, 145, 142, 133, 61, 193, 143, 204, 60, 209, 233, 146, 60, 12, 124, 44, 190, 225, 224, 208, 189, 220, 124, 18, 190, 162, 65, 28, 190, 120, 250, 219, 60, 150, 82, 48, 190, 179, 102, 39, 190, 114, 10, 218, 189, 11, 136, 225, 188, 3, 176, 190, 61, 180, 230, 110, 61, 159, 53, 2, 190, 163, 216, 186, 61, 163, 167, 51, 58, 80, 105, 24, 190, 3, 116, 26, 190, 159, 52, 154, 189, 213, 240, 1, 190, 131, 18, 194, 189, 51, 22, 195, 61, 202, 54, 200, 61, 111, 83, 209, 61, 98, 22, 151, 189, 83, 122, 207, 59, 78, 102, 16, 187, 205, 153, 186, 61, 209, 199, 220, 61, 69, 218, 237, 189, 223, 112, 95, 188, 51, 205, 229, 188, 23, 9, 238, 61, 196, 82, 99, 61, 178, 122, 221, 61, 168, 157, 8, 61, 162, 190, 64, 190, 74, 216, 62, 190, 127, 85, 1, 190, 94, 128, 142, 60, 237, 15, 157, 61, 3, 61, 86, 190, 223, 196, 62, 189, 91, 20, 240, 60, 127, 76, 122, 61, 253, 252, 221, 189, 61, 85, 93, 189, 37, 108, 136, 188, 174, 194, 29, 190, 39, 110, 49, 190, 51, 89, 11, 190, 39, 130, 1, 188, 3, 250, 221, 61, 206, 240, 14, 190, 124, 55, 103, 61, 68, 164, 182, 189, 249, 82, 22, 190, 95, 69, 203, 60, 32, 67, 127, 61, 160, 85, 152, 61, 122, 206, 172, 61, 24, 42, 133, 189, 35, 207, 92, 62, 136, 180, 87, 62, 140, 38, 113, 62, 145, 162, 134, 189, 146, 96, 75, 189, 143, 216, 36, 191, 68, 18, 5, 189, 30, 226, 31, 61, 89, 111, 44, 188, 237, 152, 43, 62, 147, 12, 105, 62, 41, 53, 32, 190, 75, 197, 207, 61, 231, 97, 155, 62, 251, 16, 32, 62, 56, 76, 22, 190, 52, 72, 12, 62, 141, 29, 140, 188, 35, 17, 16, 62, 182, 199, 163, 189, 114, 209, 156, 188, 158, 103, 207, 60, 220, 126, 1, 187, 20, 101, 232, 61, 114, 24, 235, 61, 148, 109, 229, 61, 12, 58, 247, 61, 154, 7, 0, 190, 223, 46, 25, 62, 35, 156, 119, 62, 222, 142, 57, 62, 68, 250, 196, 61, 28, 181, 80, 191, 229, 208, 53, 190, 125, 240, 102, 61, 17, 100, 47, 191, 92, 116, 235, 61, 57, 145, 139, 62, 143, 88, 124, 62, 136, 191, 161, 60, 57, 16, 209, 190, 204, 182, 93, 189, 209, 235, 92, 62, 115, 165, 157, 60, 92, 237, 69, 190, 240, 38, 152, 61, 224, 143, 250, 185, 163, 9, 238, 62, 85, 46, 236, 61, 55, 135, 147, 61, 191, 236, 62, 62, 222, 51, 250, 61, 110, 172, 199, 61, 151, 146, 52, 189, 176, 158, 175, 188, 214, 15, 229, 61, 20, 150, 6, 189, 90, 113, 216, 61, 125, 160, 220, 189, 44, 60, 153, 188, 157, 25, 95, 62, 87, 3, 198, 190, 180, 220, 104, 190, 86, 220, 241, 190, 218, 143, 8, 63, 34, 242, 34, 62, 45, 36, 35, 63, 244, 29, 14, 190, 58, 129, 129, 61, 160, 121, 235, 61, 27, 122, 39, 190, 240, 43, 152, 189, 0, 169, 154, 190, 129, 5, 20, 62, 45, 48, 75, 190, 8, 86, 18, 189, 203, 0, 165, 189, 38, 172, 97, 190, 109, 199, 80, 62, 105, 192, 12, 190, 199, 162, 45, 62, 36, 69, 20, 190, 182, 212, 22, 61, 208, 123, 40, 187, 245, 112, 11, 62, 168, 46, 28, 190, 104, 171, 210, 61, 18, 85, 203, 189, 142, 142, 116, 61, 34, 131, 3, 59, 114, 4, 9, 188, 56, 205, 167, 189, 192, 165, 36, 62, 108, 249, 24, 190, 189, 107, 251, 189, 191, 165, 105, 190, 179, 219, 24, 190, 160, 65, 220, 189, 165, 100, 197, 187, 212, 188, 180, 189, 207, 146, 152, 189, 78, 77, 44, 190, 108, 47, 80, 61, 152, 68, 176, 188, 205, 226, 66, 61, 227, 81, 153, 189, 87, 158, 191, 61, 184, 224, 88, 61, 1, 89, 36, 61, 209, 18, 36, 189, 79, 48, 119, 189, 77, 67, 29, 190, 149, 222, 26, 190, 0, 61, 32, 190, 213, 206, 162, 189, 101, 188, 208, 189, 45, 146, 232, 188, 121, 54, 100, 189, 195, 49, 39, 190, 154, 254, 154, 61, 135, 216, 236, 189, 13, 73, 17, 62, 71, 90, 227, 61, 200, 90, 39, 190, 162, 66, 77, 61, 99, 162, 22, 190, 101, 90, 244, 187, 195, 172, 41, 189, 223, 60, 235, 190, 38, 207, 124, 190, 145, 119, 192, 62, 205, 134, 93, 190, 95, 102, 162, 62, 161, 190, 189, 62, 93, 85, 156, 62, 26, 156, 207, 62, 213, 251, 136, 190, 123, 4, 131, 62, 120, 236, 251, 189, 154, 31, 140, 189, 70, 223, 88, 189, 36, 53, 9, 190, 254, 152, 131, 62, 225, 114, 13, 62, 175, 61, 170, 62, 69, 33, 152, 61, 20, 115, 91, 62, 210, 73, 3, 190, 221, 194, 221, 62, 239, 94, 147, 190, 75, 6, 142, 189, 254, 179, 31, 191, 70, 255, 205, 190, 36, 90, 163, 60, 73, 225, 21, 188, 232, 203, 45, 190, 247, 246, 21, 62, 212, 144, 175, 190, 182, 96, 97, 190, 121, 199, 12, 61, 168, 178, 46, 191, 199, 194, 110, 191, 101, 108, 149, 61, 157, 247, 33, 190, 132, 149, 42, 190, 213, 85, 47, 191, 179, 7, 175, 62, 215, 188, 16, 62, 170, 37, 189, 62, 200, 163, 151, 62, 173, 229, 27, 191, 214, 141, 147, 62, 20, 55, 176, 191, 176, 41, 212, 189, 159, 9, 75, 60, 110, 62, 129, 62, 112, 94, 132, 62, 212, 2, 78, 191, 193, 167, 154, 191, 31, 238, 35, 191, 91, 173, 201, 188, 70, 152, 172, 191, 103, 215, 26, 62, 134, 220, 43, 63, 248, 71, 7, 62, 103, 178, 139, 62, 54, 34, 170, 191, 222, 132, 9, 63, 192, 152, 4, 63, 56, 169, 179, 189, 1, 118, 2, 192, 216, 146, 4, 63, 181, 110, 61, 189, 111, 103, 14, 190, 147, 128, 75, 188, 84, 24, 186, 189, 132, 78, 41, 62, 2, 203, 40, 190, 49, 143, 136, 189, 66, 234, 100, 61, 63, 179, 190, 61, 7, 99, 220, 189, 75, 87, 18, 62, 13, 34, 30, 188, 238, 214, 252, 189, 84, 132, 153, 188, 81, 164, 101, 61, 108, 91, 145, 189, 98, 162, 28, 190, 247, 246, 3, 190, 219, 182, 209, 189, 95, 185, 2, 61, 6, 38, 129, 61, 192, 110, 38, 188, 15, 22, 240, 189, 254, 3, 216, 59, 163, 206, 250, 61, 71, 76, 104, 59, 184, 135, 35, 190, 46, 160, 201, 61, 184, 59, 143, 61, 188, 195, 24, 190, 251, 200, 45, 189, 112, 197, 240, 61, 38, 194, 35, 191, 189, 21, 165, 190, 222, 18, 178, 62, 108, 4, 6, 190, 232, 68, 63, 62, 2, 120, 208, 62, 14, 212, 43, 62, 183, 115, 72, 61, 225, 8, 106, 189, 187, 173, 99, 61, 151, 180, 135, 61, 224, 140, 179, 189, 129, 119, 11, 189, 28, 212, 151, 190, 62, 147, 6, 62, 73, 161, 100, 62, 18, 170, 160, 62, 28, 177, 174, 189, 144, 186, 15, 62, 58, 182, 163, 190, 28, 94, 107, 62, 102, 62, 0, 190, 141, 7, 169, 189, 152, 24, 5, 62, 76, 180, 161, 190, 48, 170, 120, 62, 232, 36, 125, 190, 70, 122, 221, 188, 0, 228, 160, 62, 3, 68, 155, 189, 47, 5, 157, 190, 241, 131, 238, 59, 67, 164, 5, 62, 128, 176, 141, 188, 91, 18, 236, 62, 78, 146, 92, 190, 19, 21, 24, 62, 131, 177, 99, 63, 158, 164, 245, 62, 1, 73, 170, 61, 155, 20, 177, 189, 98, 131, 92, 189, 45, 87, 37, 62, 164, 47, 203, 190, 120, 125, 184, 190, 152, 60, 24, 60, 149, 54, 33, 62, 101, 23, 81, 62, 230, 129, 48, 62, 116, 45, 237, 190, 68, 111, 145, 61, 249, 242, 48, 191, 189, 106, 98, 191, 15, 50, 245, 61, 66, 124, 102, 61, 18, 144, 2, 191, 252, 78, 180, 190, 74, 67, 220, 189, 224, 244, 45, 62, 97, 7, 15, 191, 110, 158, 249, 60, 245, 37, 169, 190, 253, 213, 161, 190, 193, 106, 141, 62, 195, 1, 255, 190, 163, 30, 172, 190, 102, 204, 199, 62, 173, 51, 30, 62, 215, 8, 222, 61, 167, 142, 93, 62, 248, 136, 130, 60, 96, 120, 12, 62, 37, 2, 125, 191, 254, 24, 146, 62, 107, 214, 131, 190, 34, 165, 110, 188, 179, 122, 64, 62, 98, 9, 35, 191, 9, 223, 141, 62, 186, 251, 2, 62, 202, 61, 26, 60, 171, 210, 254, 61, 150, 148, 47, 61, 219, 225, 169, 62, 251, 34, 131, 62, 169, 42, 112, 190, 228, 26, 177, 191, 201, 89, 41, 61, 150, 120, 110, 190, 198, 227, 47, 62, 234, 198, 130, 189, 42, 255, 56, 189, 138, 222, 154, 61, 19, 84, 26, 190, 206, 74, 185, 190, 28, 159, 69, 62, 172, 115, 92, 61, 175, 137, 41, 190, 171, 79, 133, 61, 196, 68, 67, 190, 93, 162, 9, 62, 5, 55, 37, 62, 247, 191, 193, 61, 245, 63, 255, 188, 244, 150, 120, 189, 210, 200, 52, 189, 110, 237, 232, 188, 204, 20, 245, 61, 150, 53, 85, 190, 155, 87, 171, 187, 21, 242, 70, 189, 195, 179, 164, 61, 37, 27, 151, 190, 181, 148, 6, 60, 175, 184, 79, 190, 86, 88, 199, 190, 80, 61, 189, 187, 48, 127, 154, 61, 140, 29, 93, 189, 129, 49, 249, 189, 178, 211, 32, 62, 71, 157, 215, 58, 183, 122, 133, 60, 3, 127, 35, 190, 99, 24, 110, 189, 23, 165, 195, 189, 177, 193, 21, 190, 140, 246, 164, 188, 31, 197, 158, 62, 119, 217, 201, 61, 181, 108, 39, 190, 249, 237, 180, 190, 71, 114, 136, 62, 182, 130, 178, 190, 210, 224, 0, 62, 179, 88, 154, 189, 53, 68, 167, 189, 243, 103, 147, 62, 181, 53, 143, 190, 248, 86, 167, 60, 191, 86, 45, 190, 97, 133, 157, 190, 93, 233, 106, 62, 9, 136, 80, 61, 79, 20, 193, 61, 113, 11, 253, 61, 22, 240, 165, 186, 196, 190, 243, 187, 75, 140, 50, 62, 25, 206, 133, 190, 51, 176, 106, 62, 125, 251, 202, 62, 227, 5, 53, 188, 185, 132, 226, 61, 161, 140, 147, 190, 136, 185, 169, 188, 249, 186, 6, 62, 83, 26, 164, 190, 253, 229, 91, 190, 57, 201, 248, 62, 252, 103, 152, 191, 193, 122, 232, 190, 250, 240, 165, 62, 150, 165, 15, 58, 197, 8, 225, 190, 169, 149, 94, 63, 41, 187, 2, 62, 54, 5, 9, 190, 121, 255, 224, 61, 141, 242, 194, 61, 64, 180, 194, 62, 146, 109, 125, 189, 220, 80, 61, 191, 107, 163, 239, 61, 229, 126, 191, 61, 77, 2, 86, 62, 234, 250, 163, 62, 254, 91, 110, 191, 59, 40, 178, 61, 143, 152, 108, 191, 73, 216, 229, 191, 35, 193, 158, 188, 52, 255, 145, 62, 220, 133, 56, 191, 167, 65, 43, 61, 126, 123, 217, 62, 168, 206, 64, 62, 133, 173, 81, 61, 245, 221, 3, 63, 60, 110, 51, 190, 121, 206, 81, 191, 225, 142, 41, 61, 12, 210, 192, 61, 195, 155, 215, 61, 77, 143, 57, 191, 31, 117, 16, 63, 42, 26, 241, 191, 73, 173, 13, 191, 246, 33, 139, 190, 27, 127, 0, 191, 117, 74, 149, 61, 189, 1, 142, 189, 145, 243, 162, 62, 19, 202, 94, 190, 101, 54, 9, 63, 127, 69, 137, 62, 36, 239, 252, 190, 99, 16, 219, 190, 113, 240, 81, 61, 56, 165, 42, 62, 203, 123, 111, 62, 93, 200, 132, 61, 244, 61, 154, 191, 122, 82, 69, 62, 149, 161, 63, 189, 252, 158, 220, 189, 37, 65, 32, 62, 82, 24, 171, 61, 16, 217, 149, 62, 225, 8, 109, 62, 114, 49, 255, 190, 69, 150, 30, 62, 185, 70, 0, 63, 7, 135, 133, 191};
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
                alignas(float) const unsigned char memory[] = {136, 46, 217, 61, 98, 233, 239, 61, 21, 88, 208, 189, 104, 158, 24, 189, 103, 190, 9, 61, 58, 199, 201, 62, 153, 86, 22, 189, 117, 139, 99, 62, 234, 134, 20, 62, 196, 103, 21, 189, 37, 107, 95, 62, 91, 240, 212, 189, 155, 170, 134, 190, 149, 232, 133, 61, 195, 91, 124, 188, 120, 144, 78, 190, 162, 30, 163, 60, 242, 19, 227, 188, 191, 171, 81, 61, 219, 40, 139, 62, 248, 251, 244, 189, 79, 42, 250, 59, 182, 116, 112, 189, 9, 70, 165, 188, 186, 25, 26, 190, 7, 83, 140, 61, 224, 234, 9, 190, 230, 118, 175, 61, 197, 13, 157, 189, 190, 149, 32, 190, 101, 68, 157, 189, 82, 251, 210, 61};
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
                alignas(float) const unsigned char memory[] = {143, 169, 21, 61, 30, 123, 93, 190, 224, 133, 7, 189, 110, 239, 182, 62, 27, 135, 154, 62, 215, 156, 111, 62, 66, 57, 11, 191, 6, 184, 143, 191, 164, 32, 132, 61, 40, 217, 83, 188, 239, 174, 241, 189, 108, 106, 125, 191, 239, 197, 164, 62, 114, 192, 106, 191, 183, 172, 7, 191, 245, 203, 211, 186, 32, 117, 221, 188, 181, 247, 236, 188, 90, 162, 249, 61, 223, 25, 2, 191, 222, 7, 71, 62, 134, 51, 40, 62, 138, 99, 7, 191, 123, 255, 184, 63, 243, 113, 125, 188, 251, 42, 37, 61, 220, 205, 242, 190, 72, 34, 32, 191, 114, 74, 61, 62, 12, 109, 170, 62, 40, 65, 119, 191, 105, 220, 99, 63, 27, 237, 98, 190, 255, 36, 16, 61, 178, 227, 83, 61, 222, 230, 247, 189, 15, 165, 18, 191, 247, 199, 145, 189, 243, 177, 29, 62, 157, 74, 177, 187, 40, 84, 134, 189, 218, 176, 128, 60, 91, 230, 182, 190, 243, 96, 194, 61, 185, 125, 8, 188, 185, 139, 246, 188, 68, 165, 95, 62, 61, 246, 214, 61, 189, 31, 39, 62, 255, 24, 0, 62, 223, 203, 239, 188, 158, 165, 227, 189, 106, 61, 160, 61, 76, 247, 50, 61, 36, 57, 189, 62, 227, 30, 132, 61, 117, 145, 4, 190, 207, 127, 64, 62, 219, 102, 30, 190, 17, 255, 29, 190, 25, 40, 255, 61, 211, 38, 1, 190, 118, 36, 104, 61, 119, 18, 177, 190};
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
                alignas(float) const unsigned char memory[] = {157, 111, 93, 62, 68, 234, 222, 189};
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
    alignas(float) const unsigned char memory[] = {19, 76, 218, 62, 24, 189, 17, 191, 174, 13, 12, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {218, 218, 188, 62, 213, 174, 134, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0002/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}