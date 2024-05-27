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
                alignas(float) const unsigned char memory[] = {79, 108, 127, 63, 62, 211, 60, 63, 209, 22, 144, 62, 192, 16, 195, 61, 164, 203, 196, 190, 29, 221, 177, 62, 139, 178, 247, 190, 19, 77, 183, 62, 22, 170, 178, 190, 50, 195, 154, 190, 113, 0, 192, 190, 34, 24, 128, 191, 202, 216, 249, 62, 115, 104, 9, 190, 108, 125, 28, 191, 32, 231, 225, 190, 126, 225, 190, 62, 55, 178, 195, 61, 80, 6, 254, 62, 142, 64, 22, 190, 194, 181, 180, 187, 67, 36, 239, 62, 100, 42, 48, 63, 156, 21, 15, 191, 52, 65, 13, 191, 165, 221, 98, 63, 177, 86, 96, 62, 60, 207, 92, 62, 235, 163, 11, 191, 171, 157, 17, 62, 122, 69, 155, 61, 153, 243, 98, 63, 188, 216, 6, 62, 71, 73, 7, 62, 253, 235, 200, 188, 38, 242, 29, 60, 17, 188, 191, 62, 228, 102, 50, 191, 153, 14, 173, 190, 89, 102, 23, 191, 72, 110, 201, 190, 29, 165, 222, 190, 163, 130, 209, 62, 84, 197, 176, 62, 239, 130, 8, 62, 222, 167, 177, 61, 223, 87, 75, 63, 74, 204, 45, 191, 97, 143, 5, 63, 72, 24, 32, 191, 227, 236, 130, 62, 241, 127, 20, 62, 161, 41, 41, 63, 187, 138, 13, 63, 167, 227, 31, 191, 1, 245, 107, 191, 11, 148, 77, 62, 9, 19, 44, 63, 214, 245, 50, 191, 113, 136, 249, 190, 106, 134, 185, 189, 139, 233, 24, 63, 168, 237, 82, 62, 51, 121, 45, 191, 103, 253, 108, 190, 195, 241, 176, 191, 156, 89, 191, 62, 97, 165, 49, 188, 226, 113, 38, 63, 195, 90, 45, 63, 140, 36, 146, 63, 150, 206, 151, 62, 184, 45, 197, 62, 38, 35, 19, 63, 127, 231, 191, 62, 228, 203, 149, 61, 42, 30, 245, 190, 155, 217, 249, 59, 127, 197, 37, 191, 110, 125, 80, 191, 241, 9, 7, 190, 127, 252, 182, 61, 213, 201, 46, 63, 214, 223, 86, 191, 221, 28, 250, 190, 133, 203, 126, 63, 5, 47, 50, 61, 27, 168, 46, 190, 218, 247, 146, 189, 61, 169, 65, 63, 58, 232, 137, 189, 40, 212, 58, 191, 252, 2, 212, 62, 88, 154, 76, 190, 232, 97, 155, 190, 136, 51, 242, 62};
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
                alignas(float) const unsigned char memory[] = {140, 66, 3, 191, 15, 94, 174, 62, 121, 18, 22, 63, 16, 78, 110, 188, 17, 180, 165, 190, 70, 12, 52, 63, 220, 187, 25, 191, 94, 103, 152, 62, 209, 60, 75, 63, 237, 105, 186, 62, 196, 155, 2, 61, 85, 114, 122, 190, 164, 36, 1, 63, 81, 46, 251, 61, 237, 225, 185, 190, 114, 44, 119, 61, 22, 230, 9, 63, 196, 212, 214, 189, 170, 65, 186, 190, 133, 116, 107, 190, 149, 70, 57, 190, 5, 123, 171, 190, 112, 61, 20, 63, 51, 18, 81, 62, 40, 121, 170, 61, 156, 195, 25, 63, 45, 203, 11, 63, 179, 187, 142, 189, 195, 113, 42, 62, 73, 28, 194, 189, 77, 163, 63, 62, 251, 85, 199, 61};
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
                alignas(float) const unsigned char memory[] = {238, 112, 10, 62, 2, 237, 147, 61, 67, 132, 108, 189, 100, 176, 130, 61, 189, 28, 52, 190, 38, 116, 21, 190, 228, 30, 157, 189, 180, 184, 68, 188, 142, 77, 26, 189, 223, 52, 191, 188, 254, 40, 31, 62, 43, 187, 144, 61, 186, 16, 28, 62, 1, 72, 30, 61, 24, 128, 217, 187, 14, 219, 222, 187, 170, 214, 218, 189, 152, 122, 11, 62, 251, 113, 8, 189, 180, 144, 32, 62, 97, 193, 147, 188, 115, 213, 197, 189, 248, 123, 182, 188, 238, 233, 198, 188, 142, 193, 245, 189, 105, 75, 34, 190, 203, 63, 171, 189, 64, 115, 50, 60, 78, 16, 177, 189, 40, 106, 177, 60, 240, 239, 25, 190, 31, 151, 114, 60, 95, 120, 57, 62, 9, 227, 195, 61, 84, 192, 180, 62, 84, 55, 235, 61, 77, 189, 156, 189, 191, 0, 145, 62, 108, 235, 201, 189, 168, 15, 168, 62, 214, 56, 111, 62, 165, 120, 247, 189, 234, 124, 172, 61, 60, 79, 188, 61, 59, 14, 174, 62, 246, 186, 97, 62, 235, 26, 198, 190, 119, 152, 61, 190, 139, 62, 156, 190, 134, 64, 232, 61, 3, 139, 152, 62, 14, 1, 151, 190, 160, 176, 204, 61, 149, 104, 190, 62, 215, 153, 206, 190, 180, 211, 58, 62, 125, 3, 119, 62, 157, 9, 88, 188, 253, 9, 63, 62, 167, 252, 76, 62, 56, 38, 168, 61, 5, 27, 33, 191, 181, 228, 148, 62, 67, 147, 223, 60, 212, 190, 203, 189, 248, 176, 121, 189, 225, 11, 107, 57, 151, 78, 3, 62, 10, 30, 118, 189, 45, 2, 65, 61, 147, 4, 17, 62, 60, 19, 64, 62, 67, 159, 5, 61, 193, 0, 207, 61, 41, 86, 171, 190, 251, 228, 18, 62, 19, 101, 129, 62, 59, 127, 167, 189, 204, 221, 141, 190, 30, 94, 232, 61, 103, 233, 165, 62, 138, 243, 204, 190, 136, 255, 100, 190, 164, 211, 164, 59, 30, 190, 158, 190, 157, 245, 221, 61, 199, 89, 233, 188, 221, 75, 139, 62, 54, 223, 159, 61, 46, 47, 8, 62, 114, 240, 49, 60, 173, 178, 242, 189, 36, 55, 10, 59, 122, 1, 192, 60, 55, 95, 163, 190, 81, 153, 8, 190, 182, 143, 246, 189, 22, 255, 249, 188, 44, 214, 213, 61, 172, 3, 50, 62, 203, 130, 130, 185, 238, 120, 113, 61, 39, 93, 46, 62, 74, 112, 41, 190, 89, 60, 36, 61, 208, 65, 255, 60, 114, 187, 167, 61, 124, 217, 241, 61, 41, 1, 205, 189, 75, 148, 47, 190, 53, 120, 131, 60, 79, 94, 9, 189, 129, 242, 195, 189, 242, 77, 182, 189, 195, 234, 23, 62, 167, 14, 45, 62, 80, 215, 53, 189, 195, 51, 21, 190, 84, 106, 33, 190, 107, 15, 24, 190, 139, 248, 52, 189, 35, 73, 226, 189, 99, 171, 36, 190, 59, 93, 48, 190, 74, 74, 14, 190, 237, 22, 28, 62, 208, 124, 129, 61, 214, 171, 11, 190, 103, 165, 50, 62, 101, 150, 42, 61, 133, 253, 192, 61, 24, 120, 187, 61, 164, 12, 76, 190, 30, 207, 85, 62, 191, 42, 196, 188, 133, 179, 61, 62, 20, 155, 103, 61, 21, 22, 95, 62, 48, 23, 254, 189, 251, 26, 7, 188, 129, 216, 109, 62, 190, 180, 132, 62, 2, 213, 198, 60, 219, 97, 131, 59, 77, 4, 9, 62, 212, 31, 165, 189, 162, 137, 162, 62, 39, 121, 185, 188, 83, 158, 66, 190, 13, 64, 95, 61, 73, 196, 30, 61, 120, 99, 25, 62, 163, 69, 146, 61, 53, 43, 251, 61, 145, 247, 233, 188, 211, 59, 58, 62, 98, 184, 55, 190, 41, 0, 217, 189, 13, 104, 8, 190, 119, 221, 3, 62, 44, 195, 11, 191, 146, 69, 108, 190, 4, 108, 148, 62, 235, 123, 133, 62, 77, 155, 84, 62, 100, 161, 36, 189, 130, 12, 77, 189, 172, 41, 66, 62, 107, 73, 81, 62, 88, 119, 34, 62, 138, 159, 213, 61, 86, 102, 180, 188, 76, 193, 108, 62, 65, 195, 105, 189, 31, 25, 85, 62, 13, 46, 134, 62, 92, 203, 249, 61, 157, 170, 224, 60, 191, 192, 131, 190, 247, 67, 76, 62, 185, 140, 129, 62, 141, 155, 177, 62, 240, 145, 1, 191, 51, 172, 93, 190, 249, 57, 184, 190, 22, 94, 97, 188, 164, 213, 196, 189, 221, 219, 89, 62, 138, 40, 105, 62, 149, 190, 221, 190, 41, 41, 186, 62, 91, 68, 82, 191, 17, 205, 75, 190, 13, 47, 151, 190, 39, 5, 207, 61, 176, 229, 60, 191, 97, 150, 24, 188, 41, 196, 193, 62, 49, 168, 110, 61, 220, 118, 161, 190, 208, 129, 135, 62, 192, 121, 95, 190, 221, 234, 102, 189, 2, 48, 84, 61, 76, 73, 226, 191, 161, 181, 221, 188, 97, 74, 90, 189, 22, 228, 168, 62, 163, 4, 137, 190, 158, 109, 147, 189, 173, 193, 17, 62, 229, 184, 152, 61, 0, 75, 45, 189, 52, 176, 79, 191, 198, 158, 61, 62, 89, 202, 48, 190, 213, 58, 47, 190, 132, 39, 101, 59, 76, 115, 223, 188, 241, 236, 162, 189, 37, 42, 176, 62, 85, 45, 123, 62, 107, 37, 183, 190, 196, 149, 27, 190, 30, 75, 209, 188, 129, 233, 134, 189, 208, 40, 13, 62, 205, 88, 58, 186, 220, 173, 143, 61, 157, 221, 93, 188, 101, 119, 172, 189, 233, 153, 188, 189, 131, 102, 30, 189, 30, 127, 218, 61, 228, 217, 19, 190, 69, 28, 26, 188, 176, 254, 152, 189, 52, 83, 50, 190, 23, 149, 57, 61, 17, 165, 114, 189, 171, 80, 254, 188, 1, 145, 131, 61, 36, 231, 52, 190, 215, 173, 8, 189, 251, 83, 233, 189, 194, 227, 139, 189, 158, 216, 43, 189, 4, 163, 114, 60, 137, 174, 247, 59, 16, 141, 36, 189, 134, 194, 14, 190, 41, 89, 155, 189, 133, 149, 199, 61, 102, 158, 253, 189, 27, 181, 208, 189, 134, 76, 15, 62, 149, 73, 223, 60, 238, 230, 205, 189, 156, 151, 230, 189, 226, 217, 22, 190, 110, 146, 12, 59, 203, 129, 71, 188, 198, 247, 74, 61, 165, 255, 14, 190, 74, 243, 36, 190, 154, 141, 43, 62, 116, 84, 139, 60, 62, 112, 46, 190, 205, 201, 17, 59, 0, 37, 181, 189, 164, 236, 248, 61, 42, 138, 187, 188, 213, 217, 198, 189, 23, 225, 253, 61, 24, 178, 157, 188, 225, 37, 6, 189, 39, 55, 24, 61, 189, 52, 23, 190, 52, 6, 42, 190, 232, 48, 209, 188, 81, 249, 245, 60, 36, 61, 3, 62, 16, 132, 42, 190, 163, 209, 23, 61, 102, 120, 229, 187, 16, 83, 19, 61, 178, 23, 131, 189, 7, 15, 61, 61, 146, 42, 80, 191, 155, 152, 73, 60, 111, 195, 202, 188, 88, 59, 20, 190, 33, 102, 72, 63, 211, 251, 61, 188, 198, 157, 194, 189, 246, 43, 70, 61, 209, 19, 206, 61, 38, 204, 80, 61, 88, 234, 55, 60, 176, 35, 120, 61, 48, 43, 3, 62, 252, 203, 227, 189, 40, 186, 150, 190, 214, 40, 196, 62, 220, 49, 199, 62, 141, 142, 229, 188, 106, 99, 181, 190, 116, 35, 34, 63, 106, 49, 126, 189, 157, 54, 16, 191, 235, 52, 138, 62, 241, 194, 63, 190, 145, 231, 129, 190, 135, 111, 19, 62, 204, 165, 201, 189, 211, 241, 204, 60, 79, 17, 176, 62, 109, 194, 232, 61, 197, 67, 112, 189, 35, 134, 174, 189, 72, 218, 199, 190, 247, 141, 200, 61, 40, 44, 205, 60, 164, 76, 149, 190, 125, 206, 208, 60, 214, 111, 252, 188, 45, 32, 10, 190, 236, 166, 90, 62, 114, 131, 58, 61, 92, 246, 138, 61, 154, 116, 97, 191, 93, 53, 97, 189, 3, 113, 40, 62, 208, 97, 116, 190, 250, 169, 37, 191, 9, 12, 253, 61, 113, 128, 175, 61, 117, 57, 9, 190, 99, 65, 95, 190, 157, 199, 16, 62, 77, 196, 49, 190, 31, 83, 150, 190, 142, 97, 245, 61, 130, 239, 227, 60, 211, 193, 13, 190, 109, 180, 127, 62, 145, 215, 158, 190, 172, 19, 129, 61, 175, 193, 63, 62, 89, 5, 29, 62, 46, 223, 55, 60, 87, 12, 226, 189, 107, 43, 1, 190, 127, 149, 41, 190, 252, 200, 234, 61, 190, 3, 173, 189, 43, 0, 31, 62, 168, 57, 239, 189, 212, 140, 219, 189, 90, 217, 84, 189, 99, 183, 12, 190, 252, 58, 212, 61, 69, 10, 138, 188, 201, 124, 169, 189, 154, 218, 13, 189, 247, 77, 33, 190, 89, 148, 154, 61, 119, 17, 233, 187, 165, 121, 130, 189, 80, 61, 187, 189, 200, 211, 75, 189, 16, 111, 115, 189, 233, 36, 31, 190, 165, 39, 126, 188, 33, 103, 234, 189, 185, 136, 64, 61, 19, 112, 48, 190, 1, 57, 119, 61, 175, 63, 0, 190, 46, 32, 237, 61, 61, 33, 226, 189, 245, 179, 184, 189, 71, 64, 183, 189, 197, 251, 33, 62, 137, 191, 193, 188, 175, 103, 237, 61, 201, 142, 96, 61, 2, 249, 56, 189, 137, 227, 109, 62, 254, 95, 16, 190, 162, 92, 10, 61, 108, 118, 40, 62, 48, 108, 213, 190, 40, 50, 137, 62, 238, 99, 21, 191, 237, 21, 16, 189, 2, 144, 146, 61, 132, 240, 11, 61, 174, 117, 170, 190, 83, 70, 41, 60, 171, 254, 159, 62, 220, 191, 25, 190, 197, 4, 98, 190, 204, 80, 144, 62, 193, 237, 164, 189, 224, 131, 190, 61, 183, 25, 32, 62, 200, 40, 191, 59, 116, 84, 99, 190, 86, 210, 5, 189, 228, 152, 136, 189, 200, 118, 162, 189, 247, 133, 236, 190, 51, 162, 42, 190, 164, 169, 201, 61, 223, 22, 165, 190, 71, 6, 114, 62, 2, 167, 75, 62, 22, 182, 74, 62, 85, 250, 194, 61, 245, 216, 185, 188, 123, 59, 55, 61, 204, 188, 150, 60, 55, 178, 159, 62, 161, 2, 100, 62, 27, 98, 40, 62, 95, 162, 92, 62, 14, 126, 4, 61, 5, 169, 21, 62, 76, 60, 127, 62, 175, 27, 26, 62, 0, 148, 168, 188, 117, 239, 186, 189, 160, 6, 89, 62, 88, 184, 84, 62, 183, 66, 77, 190, 251, 163, 235, 61, 109, 97, 186, 60, 234, 189, 136, 190, 11, 54, 23, 62, 244, 15, 58, 62, 131, 249, 7, 190, 6, 90, 58, 62, 116, 146, 17, 61, 147, 152, 220, 189, 173, 154, 196, 190, 79, 52, 51, 62, 242, 22, 48, 189, 214, 239, 8, 62, 132, 31, 216, 61, 178, 162, 241, 61, 180, 251, 2, 189, 12, 30, 109, 58, 30, 115, 218, 188, 90, 15, 45, 62, 25, 187, 235, 62, 223, 29, 0, 61, 202, 1, 19, 190, 182, 194, 222, 60, 26, 134, 35, 62, 91, 66, 207, 62, 194, 135, 15, 62, 57, 127, 95, 190, 20, 99, 133, 189, 67, 104, 16, 189, 252, 150, 193, 60, 80, 113, 188, 189, 13, 62, 160, 189, 143, 108, 163, 189, 84, 91, 6, 190, 195, 130, 211, 61, 233, 147, 155, 62, 107, 160, 130, 61, 87, 235, 232, 60, 27, 241, 204, 189, 64, 47, 67, 62, 99, 12, 212, 60, 20, 130, 81, 190, 65, 100, 221, 61, 150, 33, 247, 187, 104, 99, 202, 190, 225, 237, 188, 62, 214, 8, 89, 189, 196, 75, 249, 61, 159, 24, 158, 62, 12, 168, 213, 190, 204, 214, 9, 190, 212, 215, 54, 62, 171, 213, 75, 191, 136, 205, 179, 62, 151, 193, 43, 189, 232, 244, 48, 62, 154, 57, 206, 61, 142, 206, 206, 61, 76, 57, 121, 190, 115, 195, 171, 61, 88, 250, 243, 62, 21, 170, 177, 189, 213, 103, 49, 190, 82, 142, 183, 62, 22, 58, 183, 61, 108, 207, 197, 189, 152, 152, 153, 61, 52, 239, 125, 190, 4, 54, 133, 190, 89, 132, 28, 189, 186, 91, 79, 59, 188, 188, 239, 189, 129, 132, 141, 190, 64, 201, 38, 190, 14, 221, 63, 190, 189, 194, 198, 61, 120, 243, 38, 190, 116, 158, 18, 190, 47, 27, 24, 62, 208, 127, 56, 190, 194, 197, 76, 189, 153, 115, 40, 190, 232, 117, 173, 60, 182, 83, 39, 190, 189, 33, 134, 188, 53, 27, 64, 190, 186, 161, 114, 188, 162, 72, 41, 190, 202, 185, 185, 61, 109, 249, 190, 61, 74, 105, 238, 189, 75, 124, 160, 60, 162, 129, 186, 189, 199, 200, 198, 189, 59, 95, 139, 189, 193, 24, 253, 61, 139, 125, 55, 189, 253, 249, 15, 62, 221, 204, 39, 190, 32, 175, 122, 61, 204, 45, 202, 189, 189, 208, 41, 60, 139, 87, 14, 190, 104, 118, 54, 190, 193, 33, 59, 61, 255, 237, 89, 61, 73, 80, 180, 61, 134, 162, 5, 62, 159, 204, 216, 190, 167, 251, 218, 61, 179, 78, 251, 60, 103, 4, 87, 191, 187, 189, 187, 62, 173, 182, 47, 62, 214, 62, 199, 60, 227, 194, 246, 190, 86, 67, 155, 62, 20, 163, 216, 61, 215, 21, 147, 190, 201, 65, 206, 61, 56, 96, 74, 191, 61, 249, 205, 190, 200, 17, 107, 190, 85, 120, 196, 189, 94, 251, 12, 62, 179, 207, 21, 190, 253, 26, 7, 190, 41, 37, 163, 62, 122, 54, 121, 190, 39, 181, 120, 191, 43, 161, 26, 62, 163, 126, 130, 190, 156, 94, 106, 190, 137, 204, 230, 61, 89, 220, 158, 61, 230, 148, 18, 191, 57, 171, 208, 61, 64, 31, 172, 62, 194, 250, 34, 190, 99, 124, 6, 190, 238, 131, 153, 189, 222, 220, 244, 189, 20, 156, 215, 188, 93, 232, 21, 190, 253, 107, 142, 189, 194, 184, 99, 61, 111, 155, 90, 61, 248, 77, 34, 61, 241, 93, 237, 189, 141, 182, 16, 190, 60, 178, 116, 187, 84, 159, 50, 190, 143, 62, 163, 189, 47, 79, 46, 189, 241, 238, 226, 188, 192, 83, 57, 61, 90, 52, 65, 189, 118, 177, 178, 189, 150, 22, 173, 61, 51, 54, 47, 190, 4, 119, 164, 61, 226, 14, 51, 62, 22, 174, 34, 62, 236, 197, 25, 190, 215, 9, 1, 62, 56, 113, 7, 62, 189, 11, 159, 189, 210, 238, 178, 188, 111, 210, 238, 189, 177, 75, 34, 190, 156, 23, 255, 189, 97, 238, 42, 189, 117, 137, 26, 61, 226, 31, 6, 189, 222, 14, 149, 62, 194, 93, 131, 62, 81, 239, 1, 190, 155, 173, 143, 62, 114, 138, 160, 61, 204, 225, 241, 61, 92, 121, 248, 188, 248, 9, 104, 188, 130, 177, 214, 189, 160, 146, 32, 62, 99, 23, 195, 62, 37, 106, 228, 188, 49, 109, 245, 190, 17, 178, 132, 190, 166, 18, 104, 189, 55, 39, 169, 188, 104, 242, 96, 62, 85, 19, 212, 189, 176, 7, 199, 188, 10, 210, 34, 62, 128, 58, 187, 189, 49, 242, 59, 62, 206, 160, 110, 62, 165, 96, 205, 61, 151, 36, 24, 188, 27, 97, 34, 62, 230, 0, 100, 188, 229, 49, 102, 190, 150, 60, 95, 189, 228, 252, 139, 61, 246, 182, 54, 190, 68, 88, 26, 190, 28, 138, 63, 189, 75, 63, 198, 190, 151, 14, 193, 189, 144, 66, 246, 59, 231, 24, 49, 190, 37, 146, 137, 190, 63, 186, 254, 189, 84, 79, 214, 60, 177, 94, 212, 189, 98, 196, 17, 190, 87, 103, 33, 61, 17, 37, 25, 62, 254, 24, 199, 189, 144, 122, 102, 190, 249, 98, 248, 61, 44, 236, 228, 190, 41, 252, 214, 62, 209, 196, 183, 189, 204, 50, 230, 189, 202, 146, 148, 190, 205, 54, 130, 61, 118, 84, 109, 190, 231, 252, 173, 190, 154, 177, 114, 62, 210, 100, 146, 61, 32, 12, 139, 189, 76, 113, 165, 190, 78, 145, 143, 190, 220, 230, 79, 62, 158, 187, 57, 61, 71, 135, 59, 63, 174, 21, 106, 189, 223, 67, 241, 61, 10, 248, 96, 62, 136, 119, 55, 190, 171, 174, 0, 190, 217, 0, 219, 189, 231, 78, 143, 62, 206, 254, 67, 188, 247, 152, 205, 189, 45, 201, 227, 60, 26, 94, 242, 60, 253, 190, 108, 62, 8, 144, 129, 61, 161, 236, 19, 62, 201, 37, 154, 190, 33, 200, 240, 61, 85, 173, 28, 61, 99, 168, 223, 62, 160, 235, 255, 189, 81, 197, 44, 191, 212, 186, 118, 60, 2, 58, 206, 190, 194, 199, 130, 62, 139, 54, 114, 62, 142, 205, 47, 62, 225, 10, 224, 60, 238, 99, 109, 62, 226, 0, 211, 190, 241, 65, 191, 190, 194, 133, 212, 62, 232, 153, 39, 61, 108, 88, 96, 61, 135, 204, 141, 189, 119, 71, 41, 190, 196, 233, 46, 190, 109, 161, 52, 188, 205, 162, 100, 189, 149, 190, 12, 62, 32, 203, 136, 189, 57, 114, 207, 189, 46, 218, 52, 190, 212, 39, 145, 189, 197, 11, 216, 186, 10, 213, 0, 190, 182, 113, 141, 61, 78, 183, 85, 61, 71, 161, 250, 61, 52, 118, 49, 190, 91, 216, 141, 61, 43, 232, 247, 61, 246, 70, 2, 62, 114, 197, 82, 189, 165, 180, 29, 190, 196, 240, 220, 189, 205, 189, 132, 189, 254, 248, 215, 188, 77, 226, 198, 61, 167, 155, 0, 61, 4, 83, 23, 190, 142, 188, 8, 60, 150, 215, 11, 62, 9, 30, 56, 60, 68, 196, 148, 188, 134, 230, 201, 62, 72, 28, 145, 61, 174, 35, 64, 190, 148, 90, 0, 190, 162, 125, 135, 61, 209, 177, 9, 190, 169, 85, 250, 189, 95, 51, 14, 62, 214, 184, 7, 190, 162, 38, 167, 188, 233, 59, 96, 190, 72, 103, 139, 60, 255, 68, 112, 61, 235, 90, 45, 60, 187, 217, 238, 61, 103, 57, 250, 189, 168, 112, 182, 60, 239, 59, 216, 61, 64, 93, 148, 189, 12, 97, 141, 189, 65, 50, 38, 190, 73, 220, 182, 61, 225, 54, 70, 188, 156, 210, 34, 62, 36, 194, 17, 62, 152, 15, 208, 190, 7, 128, 16, 191, 83, 66, 243, 189, 111, 139, 112, 190, 2, 129, 169, 61, 248, 136, 255, 60, 16, 215, 188, 61, 215, 166, 166, 190, 62, 174, 213, 189, 90, 78, 90, 190, 16, 36, 227, 190, 62, 212, 95, 62, 122, 234, 244, 61, 122, 103, 111, 189, 136, 253, 243, 190, 200, 192, 8, 62, 202, 194, 192, 61, 122, 181, 199, 190, 231, 74, 237, 61, 76, 80, 27, 190, 18, 42, 14, 190, 45, 35, 254, 190, 227, 236, 97, 189, 165, 38, 110, 62, 195, 230, 36, 190, 98, 131, 213, 189, 132, 179, 149, 62, 75, 187, 31, 190, 199, 169, 16, 191, 235, 228, 79, 62, 213, 75, 196, 60, 36, 241, 185, 187, 0, 26, 87, 61, 244, 173, 24, 189, 52, 251, 45, 191, 225, 195, 103, 62, 253, 90, 100, 62, 14, 63, 153, 190, 216, 185, 87, 190, 90, 205, 97, 62, 131, 142, 216, 190, 80, 36, 110, 62, 205, 171, 56, 191, 149, 135, 63, 190, 17, 46, 137, 62, 147, 45, 25, 62, 171, 119, 207, 60, 201, 12, 151, 62, 104, 66, 145, 190, 235, 116, 123, 62, 233, 103, 28, 62, 237, 65, 136, 191, 86, 11, 21, 62, 243, 245, 132, 62, 231, 172, 81, 63, 129, 245, 215, 190, 26, 168, 210, 190, 104, 83, 145, 190, 243, 181, 87, 190, 213, 128, 194, 190, 20, 243, 128, 191, 161, 46, 253, 61, 29, 198, 136, 190, 82, 197, 173, 190, 170, 105, 230, 189, 5, 70, 181, 61, 161, 36, 122, 61, 189, 61, 180, 62, 121, 66, 8, 190, 90, 38, 44, 191, 13, 114, 24, 191, 50, 162, 7, 191, 20, 212, 178, 62, 202, 28, 67, 61, 117, 115, 32, 62, 226, 37, 12, 189, 145, 123, 78, 190, 205, 69, 147, 189, 162, 77, 28, 62, 212, 66, 233, 189, 38, 49, 95, 62, 205, 105, 187, 61, 32, 240, 127, 189, 10, 172, 107, 189, 161, 160, 130, 61, 60, 173, 22, 190, 4, 189, 64, 61, 254, 214, 140, 62, 138, 90, 217, 61, 121, 55, 43, 190, 74, 252, 152, 62, 155, 129, 228, 189, 2, 32, 48, 62, 99, 33, 251, 61, 77, 146, 147, 190, 248, 146, 133, 190, 207, 49, 57, 62, 45, 31, 124, 189, 253, 101, 183, 61, 40, 250, 188, 61, 117, 155, 169, 190, 216, 95, 212, 61, 215, 128, 15, 190, 8, 146, 38, 190, 215, 13, 14, 190, 131, 178, 122, 62, 203, 101, 213, 61, 24, 88, 178, 188, 201, 205, 197, 188, 73, 241, 129, 188, 26, 118, 182, 189, 254, 168, 91, 62, 119, 176, 124, 190, 192, 231, 27, 190, 78, 99, 33, 190, 10, 13, 77, 190, 60, 147, 12, 62, 191, 236, 162, 189, 188, 65, 98, 190, 134, 104, 9, 191, 231, 31, 101, 190, 95, 170, 222, 189, 172, 11, 58, 188, 80, 183, 147, 190, 105, 40, 195, 60, 92, 13, 171, 189, 51, 110, 101, 189, 10, 127, 214, 189, 144, 124, 178, 61, 66, 60, 117, 61, 211, 29, 226, 189, 63, 226, 136, 62, 141, 52, 109, 190, 25, 82, 58, 190, 184, 229, 154, 190, 37, 66, 185, 61, 86, 46, 14, 61, 56, 235, 227, 189, 30, 121, 248, 60, 108, 132, 67, 189, 189, 153, 122, 189, 84, 32, 232, 189, 209, 99, 203, 187, 117, 68, 150, 61, 201, 41, 38, 190, 118, 132, 51, 61, 129, 133, 134, 61, 102, 138, 35, 62, 168, 121, 19, 62, 214, 232, 198, 61, 157, 14, 233, 189, 208, 238, 5, 62, 127, 115, 199, 189, 87, 49, 224, 189, 114, 85, 54, 61, 180, 197, 230, 60, 162, 16, 12, 190, 100, 135, 219, 189, 49, 212, 185, 189, 45, 5, 29, 62, 25, 14, 137, 189, 188, 147, 194, 189, 206, 246, 33, 190, 255, 230, 171, 60, 36, 213, 31, 190, 175, 170, 226, 61, 233, 129, 18, 62, 237, 167, 0, 191, 70, 168, 233, 61, 194, 79, 136, 61, 214, 120, 30, 191, 58, 118, 18, 61, 176, 254, 80, 61, 217, 21, 79, 189, 165, 255, 27, 191, 95, 14, 51, 62, 71, 135, 27, 60, 111, 190, 230, 190, 201, 220, 13, 190, 227, 6, 88, 191, 6, 134, 24, 190, 108, 76, 18, 190, 59, 223, 162, 189, 168, 205, 135, 189, 186, 99, 223, 189, 128, 255, 117, 190, 0, 47, 200, 59, 119, 117, 124, 190, 244, 21, 20, 191, 136, 66, 162, 62, 201, 46, 127, 190, 131, 59, 130, 190, 100, 149, 74, 62, 193, 172, 246, 60, 157, 73, 175, 190, 214, 225, 188, 188, 4, 155, 81, 62, 120, 161, 93, 190, 182, 32, 21, 188, 215, 138, 184, 61, 128, 101, 24, 62, 77, 166, 4, 61, 253, 178, 182, 61, 114, 217, 45, 190, 240, 185, 45, 62, 172, 87, 69, 61, 64, 114, 228, 62, 97, 144, 50, 61, 199, 235, 171, 188, 247, 70, 41, 190, 115, 14, 13, 189, 185, 247, 133, 62, 74, 32, 21, 62, 126, 145, 138, 190, 244, 95, 2, 190, 62, 51, 62, 62, 186, 105, 230, 60, 224, 165, 46, 62, 188, 223, 142, 190, 234, 49, 159, 187, 157, 107, 111, 61, 162, 9, 236, 188, 205, 171, 93, 62, 224, 121, 90, 62, 153, 90, 122, 61, 113, 70, 236, 189, 67, 53, 59, 62, 38, 95, 47, 190, 38, 86, 43, 190, 230, 254, 176, 60, 0, 112, 122, 57, 200, 158, 33, 190, 200, 36, 16, 61, 99, 2, 51, 190, 98, 90, 157, 188, 72, 33, 0, 63, 238, 146, 187, 190, 148, 104, 103, 189, 158, 56, 123, 190, 133, 174, 230, 189, 23, 114, 56, 62, 139, 175, 250, 61, 38, 211, 51, 189, 216, 181, 34, 61, 87, 75, 163, 189, 180, 249, 165, 190, 99, 113, 169, 62, 19, 97, 62, 62, 16, 35, 147, 189, 41, 144, 161, 60, 228, 134, 207, 62, 147, 181, 57, 190, 214, 197, 150, 189, 27, 243, 26, 62, 108, 73, 62, 190, 172, 144, 148, 189, 167, 111, 71, 61, 211, 245, 129, 190, 42, 2, 177, 189, 93, 200, 48, 190, 91, 44, 140, 189, 50, 196, 103, 61, 59, 126, 215, 189};
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
                alignas(float) const unsigned char memory[] = {159, 49, 160, 188, 55, 92, 2, 62, 194, 99, 126, 62, 101, 244, 28, 190, 86, 116, 124, 62, 4, 142, 217, 185, 155, 197, 248, 61, 36, 123, 93, 59, 96, 124, 155, 61, 29, 76, 87, 62, 191, 107, 139, 62, 135, 173, 243, 189, 3, 3, 161, 188, 136, 144, 204, 61, 81, 111, 174, 62, 151, 199, 41, 190, 227, 90, 6, 190, 184, 241, 106, 61, 239, 127, 138, 61, 39, 168, 148, 62, 223, 61, 28, 61, 15, 160, 63, 62, 235, 126, 61, 190, 2, 146, 18, 190, 100, 118, 60, 62, 62, 107, 143, 62, 215, 107, 39, 59, 170, 97, 157, 189, 124, 101, 68, 190, 133, 197, 138, 61, 184, 169, 109, 62, 156, 54, 131, 60};
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
                alignas(float) const unsigned char memory[] = {73, 161, 144, 189, 132, 209, 205, 190, 245, 19, 162, 188, 227, 179, 96, 61, 85, 213, 58, 190, 6, 64, 7, 63, 80, 39, 44, 63, 190, 21, 48, 189, 220, 136, 170, 61, 47, 93, 37, 63, 146, 240, 140, 62, 168, 61, 60, 61, 244, 102, 139, 62, 183, 170, 164, 190, 141, 45, 26, 190, 168, 59, 234, 62, 190, 229, 162, 61, 65, 176, 92, 63, 191, 110, 144, 61, 128, 10, 145, 190, 88, 183, 228, 190, 243, 31, 158, 190, 129, 229, 6, 62, 223, 25, 146, 190, 248, 16, 28, 63, 110, 219, 144, 63, 142, 218, 129, 62, 120, 81, 87, 62, 32, 147, 53, 61, 113, 95, 77, 63, 180, 242, 164, 190, 58, 81, 210, 62, 160, 52, 187, 189, 96, 68, 8, 62, 178, 215, 127, 190, 70, 233, 163, 61, 110, 86, 62, 190, 200, 119, 230, 61, 119, 14, 183, 190, 20, 157, 2, 62, 187, 21, 37, 190, 113, 217, 37, 60, 153, 220, 252, 190, 25, 63, 205, 189, 1, 33, 57, 190, 242, 170, 174, 61, 15, 76, 111, 190, 224, 132, 83, 62, 86, 113, 248, 188, 137, 228, 119, 62, 232, 158, 234, 60, 159, 70, 235, 189, 147, 9, 238, 62, 120, 37, 137, 61, 228, 131, 86, 188, 158, 137, 125, 62, 67, 252, 90, 190, 55, 87, 161, 62, 140, 107, 7, 188, 12, 109, 156, 189, 20, 136, 66, 189, 58, 2, 90, 61, 87, 113, 142, 190, 166, 19, 246, 61};
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
                alignas(float) const unsigned char memory[] = {226, 122, 23, 190, 167, 17, 33, 190};
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
    alignas(float) const unsigned char memory[] = {177, 233, 240, 62, 98, 1, 210, 63, 76, 224, 96, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {100, 98, 140, 191, 157, 196, 19, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0090/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}