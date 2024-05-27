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
                alignas(float) const unsigned char memory[] = {70, 44, 0, 191, 247, 70, 90, 63, 235, 249, 78, 190, 58, 40, 133, 59, 23, 109, 27, 191, 179, 136, 221, 62, 222, 144, 21, 63, 166, 10, 46, 191, 19, 186, 19, 190, 78, 235, 218, 188, 153, 95, 159, 63, 84, 198, 185, 62, 222, 234, 245, 62, 63, 134, 166, 190, 126, 91, 6, 189, 241, 176, 0, 191, 188, 98, 181, 62, 78, 246, 175, 190, 44, 164, 38, 63, 60, 157, 148, 191, 53, 196, 118, 190, 200, 62, 166, 190, 155, 182, 150, 191, 250, 0, 66, 190, 175, 87, 1, 191, 124, 5, 130, 63, 177, 89, 190, 62, 180, 230, 81, 63, 217, 86, 72, 190, 33, 210, 202, 190, 93, 157, 171, 62, 212, 170, 81, 63, 230, 68, 166, 62, 78, 194, 143, 62, 5, 235, 52, 62, 8, 32, 6, 189, 210, 231, 207, 189, 178, 49, 4, 62, 208, 94, 236, 60, 19, 183, 101, 191, 201, 3, 188, 62, 69, 223, 115, 62, 203, 141, 77, 191, 170, 45, 33, 190, 96, 158, 87, 63, 156, 142, 242, 62, 123, 244, 143, 191, 124, 252, 153, 190, 75, 5, 7, 63, 69, 76, 202, 189, 120, 67, 8, 63, 24, 174, 220, 62, 108, 124, 117, 191, 84, 187, 230, 189, 65, 72, 14, 191, 140, 113, 28, 63, 184, 161, 192, 189, 174, 157, 249, 190, 228, 94, 132, 63, 51, 106, 25, 63, 148, 37, 154, 190, 62, 246, 149, 191, 76, 20, 228, 189, 39, 49, 239, 62, 180, 103, 223, 62, 122, 208, 240, 62, 158, 53, 33, 62, 227, 255, 208, 190, 150, 69, 178, 190, 153, 249, 174, 62, 195, 108, 20, 191, 67, 238, 6, 63, 24, 0, 225, 189, 88, 118, 39, 63, 81, 67, 57, 190, 58, 92, 7, 63, 158, 95, 194, 63, 187, 50, 167, 62, 226, 205, 3, 63, 3, 34, 75, 63, 20, 131, 176, 190, 172, 231, 57, 63, 250, 145, 42, 191, 54, 241, 122, 190, 91, 139, 196, 62, 64, 75, 141, 190, 252, 109, 197, 62, 9, 78, 86, 191, 175, 126, 156, 189, 82, 180, 160, 62, 63, 63, 202, 62, 245, 130, 167, 190, 180, 96, 100, 189, 144, 21, 81, 63, 135, 98, 125, 63, 128, 102, 140, 62};
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
                alignas(float) const unsigned char memory[] = {198, 73, 164, 190, 170, 104, 243, 190, 69, 58, 97, 62, 63, 154, 130, 62, 15, 101, 12, 191, 116, 67, 3, 62, 169, 34, 125, 61, 150, 227, 208, 62, 193, 64, 138, 190, 66, 103, 201, 61, 210, 167, 78, 190, 111, 224, 40, 191, 186, 234, 72, 63, 17, 72, 8, 63, 156, 17, 95, 190, 45, 26, 95, 190, 138, 197, 98, 191, 17, 76, 128, 61, 216, 232, 0, 62, 42, 88, 45, 190, 19, 66, 222, 62, 113, 161, 131, 190, 36, 106, 50, 63, 104, 80, 162, 190, 93, 52, 146, 189, 194, 51, 47, 188, 91, 58, 222, 190, 89, 196, 226, 190, 206, 215, 128, 62, 150, 206, 245, 188, 156, 49, 107, 191, 213, 85, 128, 62};
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
                alignas(float) const unsigned char memory[] = {15, 79, 33, 62, 91, 53, 147, 189, 88, 156, 184, 188, 25, 136, 44, 62, 85, 243, 244, 190, 31, 214, 28, 188, 192, 75, 233, 61, 193, 81, 242, 61, 81, 223, 211, 61, 151, 156, 47, 62, 40, 33, 135, 189, 202, 99, 9, 62, 157, 180, 22, 61, 101, 229, 248, 61, 222, 166, 3, 62, 16, 180, 14, 62, 219, 139, 150, 61, 199, 241, 146, 60, 206, 193, 99, 190, 41, 196, 60, 61, 74, 194, 163, 187, 117, 142, 44, 189, 204, 98, 151, 188, 97, 98, 17, 190, 55, 212, 11, 190, 146, 74, 170, 190, 9, 2, 159, 60, 151, 245, 48, 61, 241, 62, 174, 62, 3, 228, 1, 190, 103, 162, 134, 190, 159, 127, 16, 61, 35, 244, 2, 62, 74, 230, 130, 189, 215, 39, 129, 189, 89, 98, 131, 61, 242, 193, 28, 190, 61, 90, 41, 189, 244, 159, 20, 191, 102, 227, 57, 191, 210, 19, 162, 60, 228, 19, 7, 190, 9, 89, 186, 61, 64, 55, 187, 61, 219, 95, 165, 61, 122, 125, 94, 189, 130, 51, 191, 188, 14, 59, 239, 189, 162, 45, 42, 61, 239, 212, 38, 191, 38, 236, 0, 190, 253, 63, 236, 61, 114, 63, 68, 191, 220, 199, 160, 61, 74, 53, 150, 190, 9, 196, 0, 190, 111, 62, 81, 62, 8, 130, 223, 62, 109, 118, 133, 60, 203, 94, 164, 190, 226, 106, 174, 190, 244, 48, 42, 190, 206, 59, 178, 61, 231, 211, 172, 62, 11, 45, 31, 190, 218, 163, 158, 62, 225, 0, 40, 61, 120, 161, 216, 61, 28, 244, 10, 60, 222, 221, 142, 62, 76, 76, 253, 190, 49, 103, 206, 190, 69, 53, 120, 189, 145, 66, 75, 190, 99, 150, 3, 62, 55, 228, 39, 188, 57, 46, 68, 62, 182, 249, 159, 189, 71, 225, 64, 190, 38, 131, 42, 191, 178, 160, 193, 62, 72, 147, 228, 190, 168, 3, 76, 61, 30, 179, 31, 190, 236, 200, 151, 190, 255, 146, 178, 62, 207, 102, 100, 62, 9, 255, 196, 62, 57, 223, 125, 190, 51, 229, 153, 62, 58, 118, 25, 62, 8, 7, 58, 191, 150, 10, 49, 190, 239, 60, 157, 190, 123, 63, 98, 190, 145, 150, 29, 61, 94, 128, 238, 189, 70, 118, 72, 186, 147, 176, 254, 189, 215, 171, 174, 61, 72, 7, 17, 62, 250, 186, 226, 189, 76, 107, 161, 61, 101, 81, 146, 189, 129, 10, 199, 189, 185, 226, 180, 188, 215, 251, 244, 61, 9, 67, 41, 62, 99, 59, 232, 189, 104, 24, 45, 190, 123, 72, 1, 62, 128, 15, 189, 189, 185, 168, 16, 190, 245, 160, 38, 62, 132, 233, 31, 62, 133, 24, 3, 190, 54, 133, 34, 61, 32, 179, 129, 61, 18, 205, 38, 190, 26, 4, 32, 190, 100, 23, 38, 190, 22, 136, 51, 190, 210, 57, 29, 190, 210, 15, 202, 60, 140, 221, 36, 190, 200, 0, 23, 62, 4, 243, 136, 60, 14, 137, 214, 189, 87, 172, 124, 61, 243, 254, 36, 190, 134, 1, 31, 62, 150, 43, 64, 57, 172, 172, 31, 191, 234, 146, 251, 189, 207, 245, 124, 188, 197, 247, 148, 189, 94, 227, 148, 61, 39, 87, 133, 62, 8, 156, 37, 190, 250, 97, 61, 61, 123, 107, 173, 62, 220, 29, 217, 61, 49, 124, 14, 62, 78, 60, 128, 189, 94, 241, 192, 187, 241, 70, 131, 62, 219, 99, 17, 190, 47, 232, 230, 61, 27, 232, 88, 62, 64, 119, 124, 188, 77, 13, 83, 62, 5, 1, 86, 190, 150, 93, 40, 190, 149, 16, 179, 190, 185, 184, 250, 188, 166, 233, 56, 62, 138, 182, 151, 62, 85, 187, 1, 62, 212, 218, 230, 189, 40, 232, 49, 60, 162, 86, 228, 189, 72, 86, 188, 189, 149, 15, 99, 189, 69, 146, 89, 60, 90, 26, 212, 188, 86, 194, 75, 62, 237, 128, 28, 190, 139, 214, 0, 189, 124, 222, 2, 191, 206, 198, 83, 188, 111, 174, 178, 61, 105, 149, 139, 58, 102, 154, 150, 62, 58, 224, 28, 190, 20, 151, 14, 191, 10, 60, 231, 190, 41, 37, 37, 190, 73, 90, 133, 190, 182, 39, 108, 62, 19, 144, 142, 190, 51, 30, 161, 188, 19, 91, 11, 189, 33, 58, 26, 188, 135, 138, 78, 60, 148, 239, 141, 190, 243, 166, 147, 62, 48, 246, 169, 61, 64, 138, 251, 190, 42, 233, 23, 190, 168, 91, 202, 61, 150, 229, 3, 62, 181, 156, 136, 62, 92, 205, 26, 190, 30, 137, 171, 189, 224, 148, 168, 61, 140, 140, 186, 189, 129, 143, 58, 191, 180, 141, 176, 62, 18, 17, 29, 190, 76, 50, 10, 62, 165, 206, 183, 190, 138, 222, 227, 189, 165, 178, 46, 62, 111, 215, 73, 189, 11, 85, 162, 62, 179, 134, 22, 190, 168, 151, 194, 190, 240, 201, 69, 189, 227, 108, 223, 189, 125, 175, 185, 60, 251, 189, 229, 61, 35, 37, 144, 190, 20, 200, 133, 60, 126, 147, 56, 62, 245, 235, 166, 61, 237, 6, 187, 61, 17, 170, 82, 190, 134, 101, 216, 62, 139, 105, 94, 190, 47, 49, 52, 191, 172, 209, 88, 62, 0, 242, 255, 189, 224, 185, 49, 190, 179, 177, 205, 62, 184, 231, 41, 62, 109, 130, 37, 62, 84, 154, 36, 190, 169, 52, 226, 60, 149, 39, 83, 190, 135, 136, 129, 189, 70, 1, 86, 190, 83, 40, 12, 191, 54, 35, 109, 189, 137, 181, 61, 62, 46, 206, 87, 62, 77, 128, 34, 190, 137, 227, 154, 62, 186, 27, 4, 189, 77, 73, 54, 61, 69, 9, 24, 191, 89, 196, 11, 62, 136, 108, 63, 62, 99, 105, 53, 61, 233, 71, 62, 61, 171, 110, 159, 190, 9, 83, 84, 62, 217, 237, 195, 60, 34, 249, 222, 61, 121, 131, 216, 60, 227, 72, 1, 62, 169, 230, 69, 189, 116, 147, 49, 191, 249, 156, 131, 62, 242, 153, 165, 60, 7, 238, 103, 61, 226, 5, 220, 61, 244, 80, 23, 190, 3, 193, 140, 62, 129, 219, 85, 190, 216, 41, 215, 189, 25, 110, 198, 61, 56, 130, 246, 62, 95, 79, 7, 191, 30, 161, 150, 190, 168, 224, 162, 190, 65, 107, 38, 190, 110, 35, 187, 62, 101, 78, 10, 61, 163, 191, 120, 61, 50, 188, 118, 189, 18, 174, 187, 189, 67, 172, 5, 191, 147, 136, 138, 62, 254, 209, 153, 190, 6, 170, 150, 62, 55, 240, 20, 190, 42, 46, 122, 190, 177, 242, 129, 62, 236, 92, 62, 62, 194, 91, 163, 62, 68, 83, 233, 189, 234, 103, 195, 62, 128, 123, 202, 189, 175, 6, 101, 191, 239, 67, 135, 189, 91, 199, 132, 190, 211, 127, 231, 190, 248, 80, 78, 62, 214, 184, 212, 61, 100, 203, 44, 190, 28, 26, 199, 61, 37, 253, 18, 190, 113, 215, 21, 62, 58, 35, 152, 61, 204, 150, 121, 61, 149, 190, 28, 190, 189, 188, 215, 61, 23, 184, 61, 190, 166, 47, 47, 188, 115, 120, 15, 62, 5, 135, 213, 61, 155, 247, 156, 189, 9, 24, 43, 190, 72, 147, 116, 61, 90, 36, 232, 61, 154, 224, 151, 189, 197, 235, 197, 189, 210, 20, 22, 190, 147, 227, 241, 189, 92, 111, 250, 188, 203, 78, 37, 190, 149, 224, 12, 187, 193, 252, 50, 190, 218, 69, 168, 189, 41, 128, 21, 189, 1, 126, 4, 62, 224, 227, 177, 187, 22, 104, 133, 189, 10, 45, 155, 189, 206, 206, 38, 190, 66, 12, 252, 189, 139, 96, 210, 62, 73, 213, 43, 62, 1, 75, 245, 190, 131, 68, 227, 190, 84, 178, 152, 189, 162, 102, 172, 62, 93, 190, 100, 190, 188, 208, 249, 190, 69, 103, 130, 62, 154, 123, 221, 190, 183, 216, 141, 184, 229, 136, 149, 190, 151, 170, 30, 190, 100, 124, 34, 189, 99, 58, 90, 62, 128, 171, 46, 62, 183, 159, 75, 62, 35, 24, 32, 190, 190, 127, 178, 189, 207, 103, 142, 190, 124, 17, 142, 190, 157, 239, 175, 189, 220, 193, 21, 63, 50, 208, 182, 189, 196, 95, 30, 191, 78, 86, 245, 62, 59, 18, 11, 63, 150, 7, 144, 61, 78, 40, 249, 189, 250, 213, 3, 190, 112, 152, 182, 188, 164, 215, 198, 190, 88, 169, 246, 62, 119, 217, 60, 62, 9, 249, 68, 191, 85, 187, 22, 63, 1, 32, 144, 62, 24, 12, 146, 189, 65, 37, 157, 62, 30, 75, 164, 191, 160, 41, 47, 189, 233, 44, 141, 189, 138, 178, 2, 189, 170, 70, 221, 59, 248, 133, 14, 190, 1, 130, 33, 191, 31, 197, 53, 62, 111, 129, 106, 190, 245, 126, 52, 62, 84, 188, 153, 61, 183, 82, 214, 191, 18, 159, 22, 63, 226, 133, 8, 191, 222, 204, 255, 61, 136, 40, 16, 189, 245, 62, 201, 190, 87, 227, 62, 190, 239, 149, 85, 189, 97, 6, 252, 61, 202, 140, 21, 191, 132, 29, 149, 61, 104, 42, 148, 62, 37, 172, 126, 191, 66, 34, 46, 62, 195, 27, 144, 189, 162, 164, 101, 189, 49, 205, 212, 189, 5, 222, 69, 190, 54, 52, 29, 191, 39, 7, 104, 61, 12, 238, 120, 62, 188, 167, 241, 189, 13, 194, 93, 188, 154, 236, 142, 190, 51, 209, 77, 61, 54, 88, 130, 189, 118, 31, 98, 62, 80, 90, 29, 61, 6, 43, 15, 62, 167, 209, 75, 190, 247, 215, 128, 62, 249, 10, 252, 61, 174, 74, 29, 62, 216, 13, 56, 62, 98, 61, 10, 191, 111, 131, 109, 190, 108, 235, 38, 190, 80, 18, 159, 189, 88, 127, 245, 190, 148, 54, 13, 191, 215, 111, 136, 61, 39, 101, 9, 62, 129, 118, 184, 62, 249, 199, 131, 61, 80, 131, 21, 191, 111, 187, 131, 62, 241, 207, 29, 62, 31, 196, 173, 61, 151, 136, 8, 62, 211, 149, 81, 191, 106, 229, 41, 190, 33, 200, 178, 61, 162, 223, 148, 190, 161, 209, 182, 60, 154, 75, 91, 62, 33, 162, 34, 189, 244, 113, 4, 190, 162, 203, 125, 187, 4, 152, 23, 61, 121, 243, 178, 189, 135, 96, 0, 191, 62, 148, 173, 60, 248, 177, 212, 60, 199, 68, 18, 62, 50, 230, 152, 189, 249, 138, 98, 189, 25, 12, 121, 188, 72, 78, 140, 61, 79, 137, 78, 62, 122, 121, 45, 61, 190, 11, 226, 61, 156, 92, 149, 189, 177, 97, 94, 190, 35, 173, 83, 62, 118, 139, 130, 190, 10, 167, 1, 61, 114, 140, 188, 62, 49, 191, 103, 62, 206, 16, 142, 190, 155, 99, 76, 62, 211, 44, 24, 62, 74, 162, 13, 191, 143, 100, 43, 190, 158, 72, 110, 62, 25, 16, 74, 62, 160, 96, 255, 62, 173, 37, 98, 62, 129, 194, 148, 190, 20, 9, 17, 190, 64, 212, 168, 61, 70, 119, 37, 62, 141, 153, 154, 61, 64, 137, 95, 61, 113, 65, 123, 190, 229, 91, 41, 62, 86, 60, 151, 190, 236, 6, 36, 61, 95, 37, 51, 62, 208, 200, 74, 190, 64, 46, 138, 190, 239, 124, 243, 189, 189, 135, 63, 62, 152, 202, 252, 190, 125, 200, 217, 61, 81, 26, 225, 62, 32, 243, 151, 62, 34, 194, 248, 62, 192, 64, 8, 190, 210, 20, 137, 190, 117, 106, 96, 61, 44, 236, 150, 190, 121, 171, 138, 62, 172, 32, 202, 189, 127, 169, 44, 191, 101, 246, 0, 61, 221, 90, 122, 61, 8, 14, 231, 60, 147, 116, 5, 61, 104, 219, 13, 62, 102, 127, 38, 191, 181, 157, 169, 61, 106, 155, 13, 62, 152, 46, 16, 62, 65, 127, 41, 62, 154, 154, 33, 62, 216, 102, 54, 190, 246, 80, 156, 61, 39, 144, 46, 61, 88, 191, 159, 188, 173, 222, 106, 62, 142, 94, 29, 190, 208, 15, 201, 61, 0, 182, 164, 189, 36, 86, 169, 188, 72, 51, 10, 191, 131, 28, 121, 189, 112, 13, 190, 61, 186, 201, 180, 62, 228, 177, 208, 62, 131, 28, 68, 190, 24, 241, 245, 189, 109, 99, 246, 187, 42, 46, 72, 190, 188, 56, 138, 60, 6, 13, 40, 190, 56, 220, 215, 59, 244, 54, 96, 61, 63, 210, 17, 190, 161, 173, 88, 58, 157, 120, 129, 60, 220, 97, 155, 189, 242, 250, 199, 61, 61, 202, 52, 189, 175, 228, 141, 189, 131, 93, 154, 61, 185, 196, 3, 188, 106, 81, 21, 190, 255, 109, 255, 60, 5, 250, 14, 190, 189, 204, 133, 61, 28, 123, 8, 188, 73, 226, 164, 189, 147, 255, 47, 190, 27, 209, 15, 190, 5, 84, 239, 61, 184, 229, 22, 190, 33, 63, 129, 189, 128, 38, 3, 189, 115, 224, 15, 189, 49, 110, 224, 61, 254, 207, 112, 60, 78, 171, 150, 61, 113, 150, 168, 61, 230, 192, 23, 63, 90, 175, 244, 189, 191, 22, 172, 62, 42, 198, 221, 61, 54, 46, 132, 190, 83, 92, 223, 190, 96, 154, 220, 61, 251, 13, 229, 62, 254, 234, 165, 61, 35, 74, 23, 188, 0, 103, 224, 190, 91, 252, 21, 190, 198, 0, 234, 61, 92, 115, 137, 62, 4, 192, 34, 62, 133, 60, 11, 61, 246, 233, 209, 189, 214, 199, 134, 61, 167, 121, 255, 189, 104, 68, 243, 189, 52, 202, 217, 62, 145, 116, 107, 190, 73, 78, 115, 190, 161, 241, 70, 190, 190, 210, 5, 62, 41, 206, 48, 191, 193, 210, 212, 190, 32, 97, 11, 62, 156, 246, 118, 60, 249, 40, 10, 62, 87, 114, 60, 190, 26, 176, 86, 189, 200, 182, 143, 190, 63, 79, 12, 61, 245, 118, 76, 189, 148, 198, 195, 61, 133, 159, 151, 190, 188, 80, 133, 62, 64, 189, 144, 188, 36, 201, 218, 190, 183, 226, 116, 190, 1, 88, 22, 62, 101, 251, 142, 61, 215, 129, 164, 188, 100, 99, 152, 188, 80, 100, 1, 61, 68, 112, 87, 190, 69, 233, 215, 190, 137, 195, 180, 189, 129, 206, 159, 61, 86, 226, 3, 62, 63, 149, 46, 61, 22, 105, 106, 190, 234, 187, 49, 62, 16, 29, 5, 61, 213, 240, 209, 60, 178, 31, 96, 190, 118, 27, 105, 62, 201, 35, 71, 189, 97, 82, 18, 191, 84, 217, 253, 61, 40, 150, 138, 190, 177, 142, 108, 190, 183, 25, 27, 62, 164, 85, 18, 189, 47, 48, 27, 190, 26, 120, 98, 189, 80, 182, 232, 189, 28, 132, 192, 61, 227, 82, 39, 190, 164, 93, 189, 188, 68, 172, 117, 59, 5, 88, 4, 190, 87, 62, 34, 61, 203, 153, 148, 188, 126, 85, 62, 190, 12, 75, 239, 189, 168, 70, 139, 61, 232, 38, 51, 61, 27, 141, 174, 61, 224, 1, 69, 190, 40, 63, 208, 189, 14, 14, 111, 188, 3, 209, 160, 189, 193, 158, 66, 190, 132, 246, 82, 189, 2, 58, 12, 190, 211, 213, 40, 190, 222, 117, 84, 61, 251, 58, 87, 189, 131, 216, 184, 61, 29, 203, 167, 61, 100, 231, 155, 61, 242, 98, 15, 190, 23, 214, 150, 189, 50, 51, 229, 61, 6, 220, 163, 61, 107, 237, 27, 190, 103, 61, 172, 62, 226, 146, 98, 190, 241, 229, 29, 191, 69, 89, 51, 62, 254, 53, 16, 62, 143, 23, 18, 190, 196, 162, 20, 190, 217, 244, 160, 62, 131, 223, 224, 190, 33, 65, 66, 190, 154, 109, 3, 61, 158, 190, 176, 190, 69, 51, 64, 190, 249, 215, 153, 188, 72, 151, 252, 188, 164, 17, 198, 61, 8, 91, 250, 189, 233, 35, 25, 189, 250, 148, 161, 190, 177, 249, 2, 189, 157, 110, 140, 61, 106, 243, 20, 189, 236, 190, 111, 190, 117, 42, 118, 190, 80, 248, 120, 187, 43, 185, 27, 190, 140, 50, 128, 58, 78, 22, 83, 190, 25, 244, 14, 62, 224, 50, 134, 62, 100, 91, 8, 189, 81, 141, 33, 62, 38, 30, 204, 189, 225, 118, 243, 188, 230, 67, 10, 63, 240, 147, 99, 190, 55, 51, 184, 61, 98, 130, 52, 62, 231, 162, 154, 62, 173, 48, 100, 62, 182, 18, 119, 59, 211, 114, 192, 189, 248, 12, 57, 190, 179, 223, 114, 190, 16, 39, 129, 62, 26, 74, 223, 62, 186, 114, 132, 189, 224, 94, 56, 61, 54, 112, 20, 191, 73, 76, 110, 189, 76, 231, 148, 61, 189, 13, 238, 189, 71, 16, 73, 62, 131, 249, 53, 61, 21, 109, 1, 62, 168, 163, 113, 190, 38, 76, 100, 61, 240, 194, 242, 62, 54, 205, 33, 62, 24, 95, 24, 62, 214, 58, 103, 62, 131, 69, 10, 191, 176, 88, 45, 62, 1, 191, 129, 189, 151, 216, 181, 62, 214, 135, 48, 62, 2, 56, 243, 190, 203, 82, 5, 62, 199, 168, 23, 62, 234, 156, 19, 62, 245, 37, 64, 62, 1, 185, 202, 60, 33, 12, 226, 190, 43, 19, 31, 190, 227, 40, 222, 62, 47, 163, 177, 62, 243, 159, 233, 61, 235, 191, 3, 190, 252, 149, 233, 190, 61, 56, 37, 62, 88, 117, 179, 61, 35, 24, 181, 188, 113, 179, 180, 62, 151, 76, 197, 190, 227, 53, 198, 61, 184, 121, 99, 190, 230, 9, 142, 189, 115, 125, 238, 190, 116, 186, 180, 61, 174, 135, 242, 61, 164, 123, 139, 62, 234, 205, 36, 62, 127, 79, 142, 189, 226, 184, 79, 190, 151, 210, 181, 189, 41, 56, 128, 190, 36, 39, 203, 189, 247, 136, 20, 62, 76, 211, 7, 61, 237, 134, 26, 61, 154, 93, 213, 190, 197, 224, 37, 62, 161, 13, 165, 190, 67, 135, 81, 188, 96, 48, 88, 62, 22, 254, 25, 61, 132, 190, 62, 62, 180, 142, 50, 190, 212, 159, 77, 190, 229, 48, 228, 190, 143, 240, 92, 190, 200, 154, 32, 190, 47, 227, 155, 59, 31, 107, 255, 189, 36, 111, 237, 61, 116, 125, 234, 61, 179, 237, 170, 189, 84, 61, 219, 61, 203, 168, 204, 188, 84, 110, 50, 57, 145, 216, 22, 61, 101, 207, 234, 190, 80, 74, 214, 189, 149, 240, 28, 191, 11, 35, 210, 189, 227, 95, 118, 62, 225, 225, 0, 189, 198, 98, 168, 62, 96, 39, 171, 190, 184, 121, 28, 62, 178, 190, 124, 61, 225, 247, 0, 62, 255, 157, 15, 191, 73, 156, 53, 191, 14, 5, 185, 190, 111, 55, 29, 190, 185, 232, 228, 61, 200, 153, 39, 62, 35, 238, 152, 189, 12, 68, 62, 190, 247, 237, 249, 189, 149, 193, 165, 190, 232, 207, 102, 62, 253, 184, 28, 191, 166, 38, 236, 61, 95, 214, 22, 190, 252, 232, 20, 191, 83, 75, 136, 62, 121, 106, 174, 61, 96, 219, 26, 62, 82, 165, 50, 60, 26, 215, 201, 62, 95, 71, 234, 61, 127, 48, 194, 190, 185, 76, 4, 62, 190, 19, 188, 190, 53, 56, 19, 187, 169, 75, 66, 62, 130, 172, 188, 61, 98, 179, 227, 189, 96, 68, 147, 189, 35, 181, 45, 190, 15, 58, 77, 189, 51, 16, 108, 190, 172, 111, 138, 61, 181, 19, 61, 62, 199, 116, 87, 61, 45, 192, 57, 190, 252, 87, 49, 190, 43, 36, 62, 188, 142, 96, 151, 61, 233, 31, 7, 190, 24, 245, 138, 61, 28, 13, 17, 62, 192, 98, 106, 61, 180, 19, 134, 60, 8, 37, 228, 188, 115, 70, 95, 189, 225, 64, 77, 62, 212, 9, 68, 190, 195, 8, 239, 189, 135, 183, 5, 189, 237, 59, 211, 189, 63, 79, 31, 190, 8, 152, 86, 190, 185, 185, 172, 189, 93, 98, 121, 61, 239, 36, 242, 189, 188, 88, 62, 189, 158, 134, 146, 190, 154, 219, 207, 189, 205, 60, 206, 61, 231, 242, 44, 61, 19, 44, 246, 188, 86, 245, 2, 190, 141, 150, 141, 188, 139, 233, 239, 61, 139, 80, 75, 61, 29, 124, 127, 189, 250, 44, 5, 62, 89, 2, 140, 189, 163, 165, 153, 61, 113, 19, 68, 190, 128, 184, 27, 190, 8, 95, 142, 189, 172, 132, 220, 189, 232, 166, 188, 189, 230, 232, 18, 189, 131, 230, 20, 62, 209, 123, 129, 61, 120, 63, 23, 190, 182, 112, 160, 61, 135, 105, 51, 190, 19, 245, 142, 189, 221, 68, 157, 189, 34, 127, 203, 61, 145, 120, 185, 188, 221, 54, 81, 190, 66, 61, 166, 60, 8, 26, 57, 190, 7, 247, 238, 60, 219, 125, 210, 188, 242, 15, 11, 62, 206, 8, 6, 190, 205, 70, 223, 189, 204, 250, 186, 188, 204, 82, 15, 188, 59, 128, 49, 61, 172, 136, 37, 190, 13, 43, 35, 62, 40, 45, 4, 190, 232, 211, 210, 188, 13, 177, 207, 189, 56, 34, 80, 61, 174, 171, 35, 190, 208, 16, 205, 189, 32, 43, 233, 184, 174, 33, 207, 189, 132, 251, 232, 189, 59, 247, 18, 61, 9, 159, 3, 190, 0, 96, 221, 60, 54, 115, 11, 190, 172, 75, 128, 61, 181, 76, 230, 188, 172, 148, 4, 189, 151, 126, 198, 61, 47, 57, 46, 62, 15, 30, 145, 187, 200, 49, 8, 190, 247, 90, 22, 62, 193, 120, 245, 187, 64, 130, 34, 189, 220, 244, 130, 188, 252, 192, 171, 61, 191, 179, 104, 60, 63, 165, 162, 190, 100, 254, 44, 189, 177, 93, 89, 189, 147, 204, 236, 61, 1, 29, 121, 190, 5, 240, 100, 190, 69, 0, 207, 61, 11, 154, 25, 191, 133, 240, 240, 189, 190, 19, 153, 189, 28, 167, 123, 189, 235, 68, 72, 62, 37, 195, 51, 62, 247, 98, 14, 61, 87, 65, 191, 189, 220, 169, 144, 190, 24, 17, 57, 62, 251, 150, 71, 62, 4, 195, 130, 61, 40, 166, 31, 190, 63, 16, 181, 189, 81, 109, 19, 190, 157, 129, 106, 62, 159, 59, 167, 189, 62, 159, 194, 190, 210, 155, 39, 189, 136, 193, 29, 62, 147, 234, 160, 61, 47, 126, 234, 61, 200, 67, 106, 189, 251, 201, 45, 62, 1, 243, 97, 189, 72, 215, 8, 190, 119, 153, 118, 189, 205, 192, 160, 189, 2, 76, 245, 189, 181, 140, 151, 61, 133, 39, 138, 189, 133, 79, 155, 61, 106, 102, 134, 188, 217, 186, 226, 189, 96, 116, 179, 60, 220, 163, 218, 61, 241, 211, 0, 190, 181, 84, 30, 190, 209, 117, 183, 189, 248, 113, 47, 190, 5, 235, 203, 60, 197, 62, 59, 188, 182, 155, 204, 189, 6, 186, 207, 189, 99, 196, 219, 61, 240, 94, 2, 62, 143, 12, 30, 188, 255, 234, 28, 190, 165, 225, 223, 61, 99, 92, 32, 190, 71, 18, 60, 190, 36, 220, 38, 190, 158, 174, 73, 61, 20, 118, 229, 189, 210, 127, 159, 189, 74, 150, 77, 189, 52, 7, 242, 62, 218, 102, 212, 61, 53, 116, 182, 190, 206, 132, 7, 62, 47, 45, 201, 61, 0, 193, 78, 190, 207, 179, 213, 62, 152, 28, 99, 191, 84, 204, 199, 188, 101, 248, 152, 190, 231, 67, 53, 190, 46, 98, 185, 61, 82, 205, 135, 190, 93, 163, 131, 190, 9, 174, 223, 61, 26, 20, 35, 61, 130, 254, 164, 190, 71, 91, 159, 190, 125, 227, 137, 191, 86, 121, 194, 62, 182, 224, 215, 190, 225, 144, 154, 61, 73, 20, 216, 62, 211, 10, 194, 189, 56, 9, 185, 62, 239, 227, 68, 62, 71, 153, 107, 190, 210, 31, 68, 190, 159, 128, 244, 61, 200, 61, 126, 188, 51, 5, 71, 190, 220, 26, 14, 190, 207, 112, 92, 62, 175, 135, 117, 61, 158, 189, 7, 191, 170, 247, 37, 190, 16, 126, 182, 62, 117, 162, 158, 190, 133, 44, 197, 62, 165, 93, 57, 191, 19, 7, 27, 189, 255, 221, 129, 187, 124, 194, 25, 62, 36, 31, 208, 61, 106, 242, 144, 190, 115, 237, 70, 191, 233, 94, 135, 190, 42, 212, 129, 61, 107, 0, 203, 190, 167, 32, 232, 61, 52, 204, 149, 191, 158, 38, 50, 62, 96, 186, 137, 61, 60, 248, 134, 62, 241, 120, 63, 60, 204, 16, 155, 190, 223, 90, 223, 62, 86, 77, 191, 190, 192, 73, 61, 191, 59, 14, 61, 191, 180, 202, 193, 60, 104, 73, 0, 191, 84, 104, 225, 61};
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
                alignas(float) const unsigned char memory[] = {163, 59, 180, 62, 65, 154, 157, 189, 219, 74, 48, 62, 77, 128, 47, 190, 93, 188, 180, 62, 150, 94, 149, 62, 178, 126, 143, 62, 112, 51, 238, 61, 187, 75, 64, 62, 112, 48, 195, 61, 245, 142, 33, 190, 11, 64, 113, 62, 160, 131, 24, 188, 108, 81, 91, 189, 61, 216, 90, 189, 82, 190, 45, 62, 125, 112, 196, 189, 95, 152, 67, 61, 79, 172, 148, 62, 239, 216, 126, 61, 41, 0, 3, 189, 140, 9, 218, 190, 17, 207, 105, 62, 200, 53, 4, 62, 174, 228, 131, 190, 21, 229, 146, 189, 56, 231, 212, 187, 103, 183, 57, 190, 40, 137, 173, 186, 41, 173, 0, 189, 31, 102, 161, 62, 47, 134, 188, 62};
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
                alignas(float) const unsigned char memory[] = {84, 216, 99, 61, 144, 193, 13, 63, 230, 105, 8, 191, 185, 139, 214, 60, 73, 105, 75, 62, 94, 185, 237, 190, 193, 224, 5, 191, 100, 206, 60, 190, 123, 93, 32, 191, 113, 57, 242, 189, 76, 133, 121, 63, 30, 107, 92, 191, 55, 104, 241, 190, 66, 101, 20, 190, 191, 218, 231, 62, 159, 154, 173, 62, 147, 177, 68, 189, 180, 32, 237, 62, 21, 146, 141, 190, 89, 125, 120, 188, 205, 164, 18, 61, 59, 202, 11, 191, 157, 138, 183, 62, 255, 244, 109, 62, 145, 157, 56, 63, 1, 158, 179, 189, 29, 162, 215, 189, 202, 124, 5, 190, 12, 64, 251, 189, 222, 226, 183, 189, 140, 212, 40, 191, 28, 254, 145, 191, 29, 34, 13, 190, 90, 194, 199, 61, 112, 217, 70, 62, 3, 82, 41, 190, 197, 83, 157, 190, 129, 244, 9, 189, 170, 16, 149, 190, 199, 141, 69, 188, 80, 70, 54, 61, 249, 73, 239, 61, 109, 123, 170, 62, 219, 204, 130, 189, 139, 112, 42, 61, 74, 55, 174, 190, 174, 249, 108, 62, 31, 3, 82, 190, 238, 203, 224, 189, 31, 115, 67, 62, 98, 161, 33, 190, 15, 84, 39, 61, 89, 63, 199, 190, 254, 144, 191, 61, 120, 193, 19, 190, 128, 24, 28, 63, 53, 207, 48, 62, 156, 234, 226, 61, 69, 240, 24, 61, 235, 182, 20, 190, 39, 80, 244, 61, 83, 17, 200, 61, 223, 17, 164, 62, 64, 176, 156, 62};
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
                alignas(float) const unsigned char memory[] = {130, 253, 134, 61, 160, 166, 129, 190};
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
    alignas(float) const unsigned char memory[] = {43, 213, 114, 62, 164, 29, 111, 62, 120, 148, 49, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {200, 197, 227, 191, 191, 54, 61, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0065/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}