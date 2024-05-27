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
                alignas(float) const unsigned char memory[] = {195, 214, 202, 190, 212, 17, 216, 190, 220, 141, 17, 191, 98, 213, 144, 190, 187, 75, 219, 190, 40, 13, 117, 190, 207, 81, 159, 189, 187, 247, 174, 190, 119, 215, 32, 189, 95, 240, 194, 62, 184, 62, 128, 190, 126, 159, 123, 62, 195, 95, 186, 190, 170, 49, 176, 190, 135, 114, 246, 61, 118, 28, 165, 188, 216, 135, 215, 190, 150, 114, 72, 190, 221, 249, 44, 62, 105, 33, 173, 190, 12, 116, 101, 62, 90, 65, 194, 62, 1, 144, 205, 62, 58, 13, 117, 190, 130, 86, 213, 190, 78, 61, 68, 62, 150, 64, 223, 62, 44, 165, 204, 190, 228, 110, 168, 62, 229, 132, 158, 62, 71, 10, 192, 61, 96, 162, 56, 190, 206, 252, 247, 190, 239, 134, 144, 62, 174, 118, 201, 190, 137, 222, 157, 190, 232, 34, 247, 188, 4, 61, 246, 189, 199, 224, 34, 189, 4, 50, 231, 61, 245, 173, 16, 62, 155, 171, 18, 63, 47, 237, 78, 61, 40, 198, 189, 62, 172, 184, 91, 189, 156, 109, 231, 190, 232, 223, 0, 190, 45, 100, 57, 62, 134, 35, 210, 62, 36, 15, 5, 190, 123, 156, 190, 190, 217, 156, 159, 62, 3, 201, 14, 191, 193, 226, 165, 190, 2, 45, 255, 62, 103, 246, 124, 62, 153, 223, 208, 190, 157, 43, 176, 190, 89, 58, 132, 190, 209, 191, 142, 188, 163, 53, 17, 191, 16, 234, 12, 190, 42, 224, 216, 60, 16, 35, 231, 190, 124, 73, 72, 62, 110, 25, 213, 189, 52, 14, 78, 190, 223, 159, 228, 61, 215, 82, 47, 190, 208, 134, 86, 190, 174, 53, 185, 190, 186, 70, 104, 190, 108, 147, 179, 190, 55, 23, 44, 189, 242, 198, 10, 63, 168, 157, 159, 190, 202, 102, 232, 62, 53, 37, 130, 190, 178, 229, 129, 62, 44, 58, 143, 190, 34, 101, 173, 62, 215, 4, 9, 63, 245, 108, 253, 62, 92, 176, 7, 63, 20, 156, 16, 190, 131, 187, 18, 63, 254, 17, 172, 190, 247, 233, 232, 190, 35, 32, 205, 190, 156, 152, 218, 190, 143, 27, 213, 61, 200, 10, 253, 190, 175, 246, 2, 63, 231, 65, 9, 191, 132, 100, 52, 60, 185, 114, 152, 62};
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
                alignas(float) const unsigned char memory[] = {3, 191, 19, 191, 101, 84, 169, 62, 11, 205, 104, 190, 132, 0, 3, 63, 140, 255, 231, 190, 54, 253, 13, 191, 91, 4, 99, 190, 69, 17, 15, 63, 13, 209, 109, 190, 82, 56, 187, 190, 149, 150, 253, 62, 218, 85, 33, 62, 11, 5, 85, 61, 66, 69, 116, 62, 24, 153, 80, 62, 82, 73, 122, 62, 58, 35, 84, 62, 152, 163, 145, 62, 136, 81, 49, 62, 244, 129, 197, 61, 41, 86, 217, 62, 131, 201, 199, 62, 162, 244, 15, 63, 136, 220, 178, 189, 195, 136, 230, 62, 136, 179, 233, 62, 121, 206, 95, 62, 62, 52, 193, 62, 215, 164, 96, 190, 48, 182, 197, 62, 91, 245, 186, 190, 143, 124, 43, 62};
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
                alignas(float) const unsigned char memory[] = {20, 39, 47, 61, 170, 170, 153, 189, 215, 93, 88, 61, 238, 117, 28, 61, 20, 225, 85, 189, 48, 26, 174, 189, 76, 230, 140, 189, 233, 196, 50, 62, 10, 75, 108, 60, 211, 137, 19, 190, 21, 75, 149, 189, 132, 76, 244, 189, 199, 155, 27, 62, 62, 213, 92, 189, 179, 36, 161, 60, 134, 213, 15, 61, 12, 193, 224, 61, 132, 126, 11, 189, 83, 188, 166, 60, 11, 139, 34, 190, 56, 114, 162, 61, 78, 132, 3, 190, 174, 5, 29, 190, 15, 16, 44, 190, 251, 0, 213, 61, 250, 150, 106, 61, 201, 236, 15, 190, 123, 36, 38, 190, 227, 99, 60, 61, 203, 197, 23, 62, 52, 210, 163, 189, 59, 68, 34, 62, 3, 148, 98, 189, 128, 218, 8, 62, 167, 15, 131, 61, 166, 250, 74, 61, 141, 51, 191, 189, 205, 127, 4, 189, 128, 140, 173, 61, 77, 160, 251, 61, 201, 126, 254, 189, 41, 254, 176, 189, 204, 105, 208, 189, 58, 50, 14, 62, 0, 209, 148, 61, 213, 38, 194, 61, 65, 116, 26, 190, 10, 92, 186, 189, 163, 23, 214, 61, 233, 185, 26, 62, 171, 90, 33, 189, 252, 152, 0, 62, 80, 36, 247, 188, 15, 121, 74, 189, 121, 6, 74, 61, 178, 222, 241, 189, 239, 106, 137, 189, 114, 115, 227, 61, 149, 237, 51, 190, 57, 160, 104, 61, 71, 92, 137, 189, 232, 68, 1, 190, 124, 33, 3, 189, 89, 234, 47, 61, 5, 8, 19, 190, 143, 252, 240, 61, 129, 142, 227, 189, 204, 116, 126, 60, 230, 246, 211, 61, 113, 225, 77, 60, 237, 145, 255, 61, 176, 167, 138, 61, 237, 248, 18, 62, 221, 95, 201, 188, 168, 152, 32, 62, 149, 43, 16, 62, 229, 99, 94, 189, 27, 188, 203, 187, 170, 24, 30, 62, 1, 14, 247, 61, 56, 106, 39, 190, 61, 119, 176, 60, 96, 140, 161, 59, 104, 45, 3, 62, 30, 6, 235, 189, 153, 180, 204, 189, 218, 101, 37, 62, 40, 20, 218, 61, 111, 7, 114, 188, 108, 87, 170, 189, 177, 96, 16, 61, 179, 170, 9, 190, 62, 65, 187, 60, 46, 205, 8, 190, 253, 228, 169, 61, 1, 57, 44, 190, 83, 124, 209, 61, 14, 188, 52, 62, 89, 153, 203, 61, 170, 23, 74, 189, 191, 49, 33, 190, 85, 184, 102, 189, 202, 66, 223, 61, 134, 46, 177, 61, 12, 241, 236, 189, 111, 30, 148, 61, 135, 176, 224, 60, 210, 147, 86, 189, 210, 2, 249, 189, 185, 179, 154, 60, 122, 48, 202, 189, 228, 82, 75, 189, 194, 1, 191, 61, 245, 86, 25, 190, 17, 88, 45, 62, 190, 11, 135, 61, 8, 85, 5, 190, 0, 186, 211, 61, 91, 217, 47, 190, 187, 97, 45, 190, 201, 19, 175, 60, 26, 165, 126, 188, 150, 21, 104, 61, 175, 213, 43, 190, 162, 250, 45, 189, 190, 34, 113, 189, 235, 84, 26, 62, 87, 51, 26, 190, 104, 212, 12, 62, 74, 35, 167, 189, 122, 39, 39, 62, 35, 84, 109, 189, 132, 75, 13, 190, 6, 17, 5, 190, 75, 184, 7, 190, 255, 69, 33, 62, 14, 164, 115, 189, 236, 192, 254, 61, 199, 143, 174, 61, 149, 212, 79, 189, 109, 5, 97, 188, 15, 70, 34, 61, 212, 106, 229, 61, 216, 169, 81, 61, 73, 119, 226, 61, 221, 174, 2, 190, 254, 194, 196, 61, 27, 200, 96, 61, 13, 99, 165, 189, 47, 71, 22, 61, 243, 108, 13, 61, 108, 91, 1, 62, 231, 37, 123, 61, 245, 249, 162, 189, 165, 152, 160, 60, 186, 106, 219, 188, 227, 139, 184, 189, 175, 194, 9, 62, 83, 194, 206, 61, 220, 104, 152, 61, 61, 14, 26, 61, 127, 208, 175, 188, 234, 137, 169, 189, 159, 43, 193, 189, 181, 214, 147, 61, 107, 14, 26, 190, 107, 238, 151, 61, 101, 120, 27, 190, 170, 56, 28, 190, 131, 139, 215, 189, 186, 152, 82, 189, 43, 204, 78, 189, 67, 18, 150, 188, 49, 49, 90, 61, 157, 88, 214, 61, 220, 155, 230, 61, 36, 150, 143, 189, 21, 219, 55, 61, 157, 64, 149, 189, 61, 145, 12, 190, 83, 40, 21, 62, 29, 150, 6, 62, 141, 205, 193, 188, 238, 193, 9, 62, 24, 11, 86, 61, 250, 149, 82, 61, 66, 231, 212, 59, 40, 221, 68, 189, 198, 210, 170, 61, 211, 204, 243, 60, 166, 124, 182, 189, 171, 17, 134, 61, 155, 111, 11, 190, 134, 35, 191, 188, 196, 51, 103, 189, 217, 94, 208, 189, 113, 138, 11, 62, 178, 185, 195, 188, 145, 194, 162, 61, 76, 85, 227, 188, 66, 15, 139, 189, 255, 2, 147, 61, 35, 247, 8, 62, 65, 85, 7, 62, 93, 240, 18, 190, 203, 141, 8, 190, 105, 186, 195, 189, 116, 181, 111, 189, 216, 59, 155, 187, 54, 244, 145, 189, 182, 19, 124, 61, 138, 122, 32, 190, 8, 30, 185, 60, 231, 113, 157, 61, 234, 195, 34, 190, 250, 45, 0, 189, 246, 222, 6, 62, 248, 132, 80, 61, 41, 201, 76, 60, 213, 247, 126, 61, 94, 129, 30, 61, 133, 51, 23, 190, 103, 216, 179, 189, 47, 164, 52, 190, 1, 113, 17, 62, 174, 117, 76, 189, 198, 178, 234, 60, 175, 106, 198, 188, 47, 46, 14, 190, 219, 193, 42, 190, 103, 171, 18, 189, 114, 202, 157, 189, 70, 162, 24, 62, 88, 26, 177, 189, 19, 188, 98, 61, 58, 150, 30, 62, 46, 236, 31, 61, 90, 212, 45, 60, 179, 153, 1, 62, 206, 255, 40, 62, 32, 157, 48, 62, 229, 140, 239, 187, 216, 23, 45, 62, 20, 41, 38, 190, 164, 230, 214, 61, 218, 34, 142, 61, 232, 207, 150, 61, 202, 116, 19, 190, 7, 208, 13, 190, 171, 14, 16, 190, 84, 148, 15, 62, 133, 85, 23, 62, 61, 221, 21, 62, 118, 198, 129, 61, 172, 74, 211, 61, 41, 42, 24, 62, 109, 213, 251, 189, 4, 99, 40, 190, 120, 177, 163, 188, 224, 45, 23, 61, 62, 140, 32, 190, 160, 19, 84, 189, 133, 213, 231, 189, 150, 227, 174, 189, 149, 216, 36, 190, 55, 188, 229, 61, 149, 114, 44, 190, 228, 231, 26, 62, 95, 81, 164, 61, 28, 147, 238, 60, 246, 42, 26, 62, 162, 103, 66, 188, 18, 9, 162, 188, 74, 153, 199, 189, 14, 105, 77, 187, 94, 244, 140, 58, 117, 105, 47, 61, 255, 99, 147, 189, 112, 250, 122, 189, 219, 93, 141, 61, 73, 242, 250, 61, 108, 200, 59, 189, 124, 124, 6, 190, 92, 192, 206, 189, 211, 101, 61, 188, 63, 215, 42, 62, 252, 231, 234, 187, 55, 56, 156, 61, 14, 72, 3, 62, 22, 253, 49, 190, 27, 105, 141, 61, 102, 187, 4, 62, 45, 50, 92, 189, 237, 67, 34, 62, 85, 163, 46, 189, 217, 23, 134, 61, 253, 180, 46, 190, 64, 158, 38, 190, 169, 211, 140, 60, 188, 24, 148, 61, 235, 219, 30, 190, 27, 53, 182, 61, 83, 155, 237, 61, 62, 42, 170, 61, 90, 240, 141, 189, 154, 25, 6, 62, 27, 51, 0, 62, 95, 91, 31, 62, 95, 247, 73, 189, 249, 180, 215, 59, 150, 246, 197, 188, 67, 16, 173, 61, 248, 115, 239, 60, 6, 234, 44, 190, 61, 124, 167, 189, 106, 157, 15, 62, 243, 187, 191, 60, 126, 150, 11, 190, 19, 205, 42, 189, 46, 100, 205, 189, 168, 195, 228, 189, 49, 95, 152, 59, 140, 165, 144, 60, 186, 250, 5, 62, 106, 136, 177, 189, 120, 173, 127, 61, 194, 100, 249, 61, 41, 178, 122, 189, 138, 233, 42, 62, 192, 143, 215, 61, 68, 87, 42, 190, 254, 62, 165, 61, 164, 229, 6, 190, 53, 50, 0, 190, 237, 74, 200, 189, 73, 21, 39, 189, 25, 88, 66, 189, 220, 213, 45, 62, 126, 53, 62, 186, 66, 83, 50, 190, 216, 13, 28, 190, 248, 45, 41, 62, 90, 75, 74, 189, 141, 245, 152, 61, 199, 31, 27, 62, 230, 2, 3, 62, 207, 17, 66, 188, 248, 43, 241, 188, 145, 171, 51, 190, 105, 217, 62, 61, 199, 4, 111, 188, 151, 161, 52, 62, 97, 132, 7, 190, 191, 197, 74, 189, 51, 99, 244, 189, 239, 249, 6, 62, 138, 91, 67, 60, 151, 82, 130, 189, 9, 254, 98, 58, 49, 241, 107, 61, 242, 62, 216, 61, 123, 79, 22, 62, 158, 185, 23, 189, 134, 67, 29, 61, 86, 124, 121, 61, 219, 152, 46, 62, 153, 202, 1, 62, 194, 249, 241, 61, 46, 33, 1, 190, 37, 106, 12, 62, 106, 138, 52, 62, 133, 147, 202, 61, 16, 66, 46, 61, 0, 169, 18, 62, 227, 16, 30, 62, 56, 206, 200, 188, 3, 146, 184, 189, 68, 139, 125, 189, 18, 82, 23, 62, 201, 5, 153, 189, 175, 161, 15, 61, 173, 144, 102, 188, 230, 109, 26, 60, 14, 139, 198, 60, 232, 20, 138, 188, 29, 140, 198, 189, 212, 218, 15, 62, 55, 126, 146, 61, 135, 39, 245, 61, 152, 5, 27, 62, 63, 18, 12, 190, 1, 120, 31, 62, 229, 176, 154, 60, 113, 197, 248, 189, 181, 241, 9, 190, 189, 40, 136, 61, 51, 4, 43, 62, 35, 80, 63, 61, 168, 161, 247, 61, 5, 77, 217, 188, 146, 140, 13, 60, 76, 204, 218, 189, 151, 41, 250, 61, 29, 129, 236, 189, 242, 238, 255, 61, 221, 184, 7, 190, 120, 21, 248, 61, 86, 242, 25, 62, 179, 190, 218, 189, 130, 167, 24, 190, 209, 151, 213, 61, 115, 103, 107, 189, 4, 252, 156, 188, 246, 158, 71, 60, 109, 148, 137, 61, 227, 59, 34, 62, 220, 160, 75, 61, 37, 234, 195, 61, 39, 222, 50, 62, 231, 86, 10, 190, 150, 224, 107, 189, 53, 130, 36, 62, 22, 32, 223, 59, 21, 25, 222, 189, 182, 36, 182, 189, 126, 150, 101, 61, 94, 78, 34, 190, 142, 172, 164, 61, 189, 110, 253, 61, 197, 241, 24, 190, 108, 54, 121, 189, 34, 30, 226, 189, 10, 203, 32, 62, 92, 153, 40, 190, 102, 155, 0, 61, 15, 254, 20, 190, 158, 153, 211, 61, 246, 246, 24, 190, 49, 216, 35, 189, 133, 213, 35, 62, 252, 230, 213, 189, 134, 192, 187, 187, 184, 86, 8, 190, 48, 245, 204, 189, 26, 159, 16, 190, 131, 124, 148, 61, 189, 4, 14, 190, 61, 14, 127, 60, 141, 254, 103, 189, 126, 14, 46, 190, 10, 51, 194, 189, 148, 194, 231, 61, 48, 73, 44, 190, 104, 81, 189, 188, 12, 36, 19, 62, 103, 0, 181, 189, 233, 129, 244, 189, 133, 24, 21, 190, 64, 225, 50, 62, 105, 4, 130, 61, 118, 248, 2, 189, 45, 182, 213, 187, 162, 184, 84, 188, 216, 27, 145, 189, 145, 86, 150, 189, 44, 66, 20, 62, 136, 216, 3, 190, 112, 218, 211, 61, 206, 192, 36, 62, 36, 94, 6, 62, 112, 90, 157, 189, 151, 226, 24, 190, 77, 197, 23, 190, 123, 108, 228, 61, 86, 47, 239, 60, 157, 39, 67, 188, 26, 3, 168, 189, 7, 3, 116, 61, 179, 10, 134, 188, 22, 245, 115, 61, 188, 64, 204, 60, 148, 198, 187, 61, 82, 113, 25, 190, 54, 150, 218, 189, 232, 146, 180, 61, 167, 101, 20, 62, 167, 96, 202, 60, 71, 95, 8, 62, 181, 44, 111, 189, 173, 163, 134, 61, 19, 197, 141, 61, 41, 0, 213, 189, 212, 191, 252, 188, 179, 243, 231, 61, 119, 204, 248, 187, 252, 190, 177, 60, 86, 39, 32, 62, 75, 79, 91, 189, 16, 193, 192, 189, 199, 30, 66, 189, 253, 123, 227, 60, 179, 13, 202, 60, 74, 223, 51, 62, 242, 26, 179, 61, 103, 144, 232, 61, 225, 174, 134, 61, 187, 130, 153, 61, 69, 125, 166, 61, 89, 224, 47, 62, 192, 100, 183, 189, 185, 106, 75, 61, 171, 144, 132, 189, 190, 128, 90, 60, 67, 73, 13, 188, 121, 86, 188, 60, 145, 108, 8, 189, 123, 123, 225, 189, 117, 42, 139, 61, 147, 119, 190, 61, 157, 172, 136, 60, 15, 214, 27, 61, 9, 114, 15, 190, 232, 37, 144, 189, 222, 187, 3, 61, 91, 12, 50, 189, 177, 88, 14, 190, 229, 130, 130, 189, 56, 148, 8, 190, 50, 182, 29, 190, 179, 103, 47, 190, 148, 96, 63, 61, 130, 20, 252, 60, 69, 135, 147, 189, 235, 109, 6, 190, 180, 206, 0, 62, 232, 127, 249, 189, 57, 123, 208, 189, 4, 150, 135, 189, 173, 42, 117, 189, 90, 38, 1, 190, 40, 248, 34, 62, 134, 177, 30, 190, 207, 203, 175, 188, 87, 65, 57, 189, 58, 117, 202, 61, 38, 109, 7, 62, 17, 22, 212, 188, 52, 27, 206, 61, 45, 16, 168, 60, 178, 25, 184, 61, 205, 42, 192, 61, 218, 177, 49, 190, 157, 12, 106, 189, 17, 47, 239, 189, 57, 97, 100, 61, 1, 188, 41, 190, 235, 169, 10, 62, 21, 214, 157, 61, 63, 193, 4, 190, 239, 135, 4, 61, 253, 27, 59, 61, 31, 65, 33, 190, 25, 186, 152, 60, 147, 21, 188, 61, 212, 32, 189, 189, 41, 4, 43, 60, 226, 126, 141, 61, 108, 56, 247, 61, 185, 207, 10, 62, 68, 127, 209, 60, 30, 144, 223, 189, 131, 110, 185, 189, 219, 57, 115, 189, 14, 87, 113, 61, 208, 75, 156, 188, 166, 103, 38, 60, 238, 149, 130, 61, 91, 65, 21, 61, 7, 4, 165, 61, 198, 101, 203, 61, 236, 130, 133, 61, 17, 84, 171, 59, 146, 160, 34, 190, 176, 66, 232, 61, 144, 14, 74, 61, 194, 171, 62, 60, 126, 25, 161, 61, 122, 227, 9, 62, 5, 206, 167, 61, 89, 167, 209, 59, 8, 189, 88, 61, 73, 116, 25, 62, 232, 135, 104, 189, 157, 120, 211, 61, 12, 221, 21, 190, 211, 215, 80, 189, 29, 203, 150, 61, 82, 174, 100, 61, 145, 90, 25, 60, 136, 100, 149, 188, 235, 43, 0, 61, 164, 169, 40, 190, 77, 116, 69, 61, 70, 45, 11, 190, 163, 112, 89, 188, 12, 22, 29, 61, 192, 217, 31, 61, 134, 173, 140, 61, 195, 133, 243, 189, 115, 52, 35, 62, 143, 91, 51, 62, 211, 21, 2, 62, 186, 62, 12, 188, 7, 78, 248, 60, 30, 233, 33, 189, 130, 124, 21, 189, 232, 220, 2, 61, 31, 168, 166, 189, 234, 30, 6, 190, 126, 153, 229, 189, 13, 11, 8, 190, 63, 165, 30, 62, 114, 153, 111, 189, 110, 165, 185, 61, 228, 174, 84, 61, 97, 45, 2, 62, 40, 33, 179, 61, 22, 123, 39, 189, 88, 121, 181, 61, 145, 63, 220, 61, 138, 224, 229, 61, 84, 219, 131, 189, 242, 61, 14, 62, 87, 226, 238, 61, 208, 7, 38, 189, 11, 152, 237, 60, 76, 74, 192, 189, 10, 74, 4, 190, 59, 197, 210, 189, 212, 71, 232, 189, 104, 207, 61, 61, 190, 4, 17, 189, 41, 224, 163, 188, 127, 55, 133, 60, 97, 132, 125, 60, 124, 120, 28, 190, 103, 37, 59, 61, 169, 201, 218, 187, 67, 35, 17, 190, 241, 196, 172, 61, 14, 177, 183, 61, 127, 111, 160, 189, 228, 8, 64, 60, 200, 141, 129, 61, 208, 54, 93, 61, 192, 45, 5, 62, 247, 91, 22, 190, 250, 133, 103, 189, 141, 28, 168, 187, 67, 28, 40, 61, 102, 216, 164, 60, 183, 185, 23, 190, 143, 220, 22, 62, 56, 151, 45, 62, 9, 195, 2, 190, 44, 188, 11, 190, 126, 102, 142, 60, 99, 149, 242, 61, 30, 19, 178, 189, 133, 219, 16, 190, 30, 49, 180, 61, 4, 141, 37, 190, 61, 44, 53, 61, 55, 189, 248, 189, 9, 9, 4, 62, 119, 228, 51, 190, 201, 120, 134, 189, 153, 143, 222, 189, 219, 56, 120, 58, 193, 11, 152, 59, 64, 73, 25, 190, 37, 208, 76, 188, 253, 176, 184, 189, 122, 7, 192, 59, 76, 93, 23, 190, 96, 219, 125, 61, 47, 187, 154, 61, 110, 110, 31, 190, 91, 160, 229, 189, 57, 70, 45, 58, 139, 176, 24, 62, 168, 225, 248, 61, 229, 243, 175, 188, 17, 34, 84, 188, 139, 206, 50, 190, 36, 215, 153, 61, 115, 37, 41, 189, 150, 103, 228, 188, 135, 74, 20, 190, 116, 0, 91, 189, 99, 110, 223, 61, 135, 20, 143, 61, 73, 100, 47, 61, 150, 84, 30, 190, 199, 88, 191, 61, 210, 30, 41, 62, 246, 144, 35, 61, 8, 254, 229, 61, 186, 10, 50, 62, 52, 114, 201, 61, 87, 215, 33, 189, 134, 27, 215, 189, 185, 120, 73, 59, 38, 98, 75, 61, 186, 218, 26, 62, 209, 135, 104, 189, 168, 131, 214, 61, 196, 162, 160, 61, 60, 20, 11, 190, 251, 203, 51, 190, 75, 219, 183, 61, 92, 20, 14, 190, 237, 13, 153, 61, 41, 191, 2, 190, 181, 6, 229, 61, 218, 105, 192, 60, 34, 173, 32, 190, 154, 170, 32, 189, 105, 234, 243, 61, 251, 226, 234, 189, 127, 52, 12, 189, 1, 127, 139, 189, 199, 87, 205, 60, 240, 88, 22, 190, 58, 14, 13, 62, 71, 159, 183, 61, 131, 230, 41, 189, 27, 60, 116, 61, 7, 29, 38, 190, 85, 127, 46, 62, 253, 18, 195, 189, 199, 37, 170, 59, 248, 123, 107, 189, 178, 7, 184, 59, 222, 11, 2, 188, 49, 255, 233, 189, 109, 122, 32, 190, 24, 165, 243, 60, 119, 26, 92, 189, 182, 143, 44, 190, 197, 157, 83, 61, 199, 27, 2, 188, 167, 202, 51, 62, 17, 95, 51, 190, 156, 185, 220, 58, 254, 216, 152, 60, 26, 18, 107, 188, 180, 69, 133, 188, 194, 118, 4, 190, 55, 217, 16, 190, 71, 45, 241, 189, 165, 131, 21, 189, 57, 194, 168, 189, 232, 219, 104, 189, 152, 57, 47, 62, 177, 72, 50, 190, 168, 185, 47, 62, 169, 223, 194, 189, 130, 133, 50, 62, 67, 60, 37, 190, 87, 119, 174, 61, 214, 35, 2, 190, 107, 254, 46, 62, 86, 169, 161, 189, 162, 23, 25, 190, 145, 110, 92, 188, 182, 216, 26, 62, 207, 103, 43, 62, 30, 245, 140, 61, 41, 251, 88, 189, 42, 250, 173, 189, 233, 170, 210, 189, 148, 172, 189, 60, 92, 16, 246, 189, 121, 195, 38, 62, 138, 121, 216, 189, 141, 62, 197, 61, 208, 228, 1, 62, 46, 252, 255, 60, 41, 76, 37, 62, 191, 224, 1, 190, 236, 7, 254, 189, 125, 14, 41, 190, 136, 27, 91, 189, 106, 125, 233, 60, 255, 161, 235, 188, 175, 35, 0, 190, 194, 60, 1, 62, 249, 245, 11, 190, 64, 109, 28, 190, 28, 246, 172, 61, 121, 218, 208, 189, 99, 117, 127, 61, 54, 47, 143, 189, 39, 88, 38, 62, 251, 220, 173, 61, 118, 175, 0, 190, 172, 126, 101, 59, 5, 55, 41, 62, 246, 161, 52, 190, 235, 56, 35, 62, 215, 190, 221, 61, 225, 51, 199, 60, 133, 70, 133, 188, 45, 66, 11, 190, 181, 129, 121, 61, 27, 221, 198, 189, 18, 165, 155, 60, 140, 94, 138, 61, 29, 221, 162, 189, 170, 55, 238, 189, 223, 114, 20, 190, 233, 55, 41, 190, 138, 59, 244, 61, 228, 41, 50, 60, 14, 24, 195, 188, 243, 46, 33, 189, 229, 8, 244, 61, 236, 32, 31, 62, 165, 235, 189, 61, 227, 132, 2, 62, 126, 69, 41, 61, 219, 197, 74, 61, 249, 176, 247, 61, 11, 38, 227, 61, 128, 74, 47, 62, 32, 150, 26, 190, 245, 129, 16, 190, 10, 128, 49, 62, 246, 226, 57, 61, 20, 103, 3, 62, 0, 227, 66, 61, 104, 62, 132, 189, 3, 59, 20, 62, 84, 93, 244, 61, 225, 141, 8, 61, 49, 90, 129, 189, 208, 9, 44, 190, 82, 185, 26, 62, 30, 70, 158, 189, 233, 205, 150, 61, 163, 203, 20, 62, 223, 223, 29, 190, 90, 228, 116, 188, 227, 191, 37, 62, 17, 147, 6, 190, 42, 188, 9, 190, 235, 174, 20, 189, 213, 186, 20, 62, 182, 25, 47, 190, 44, 205, 198, 61, 121, 171, 52, 190, 26, 182, 198, 189, 134, 104, 20, 190, 107, 219, 205, 61, 225, 187, 198, 61, 172, 212, 192, 188, 133, 161, 254, 59, 113, 217, 16, 62, 108, 122, 7, 62, 21, 19, 242, 61, 141, 146, 176, 188, 135, 244, 4, 62, 136, 125, 150, 61, 225, 19, 50, 61, 183, 139, 192, 189, 25, 228, 214, 189, 229, 55, 68, 60, 48, 78, 230, 61, 181, 232, 173, 189, 24, 126, 211, 61, 219, 136, 238, 60, 203, 206, 139, 61, 195, 185, 109, 61, 233, 8, 115, 186, 236, 86, 208, 188, 96, 31, 24, 60, 206, 13, 8, 62, 6, 129, 177, 60, 184, 194, 95, 60, 100, 44, 167, 61, 124, 126, 3, 62, 201, 244, 8, 62, 77, 247, 153, 188, 88, 225, 34, 190, 46, 15, 26, 190, 1, 79, 204, 189, 115, 65, 240, 189, 207, 76, 202, 61, 125, 99, 210, 189, 187, 15, 38, 190, 114, 252, 26, 189, 12, 108, 189, 61, 139, 225, 151, 189, 251, 227, 17, 190, 171, 188, 210, 61, 139, 233, 36, 190, 76, 185, 174, 61, 232, 15, 9, 190, 222, 92, 67, 61, 42, 76, 247, 61, 248, 10, 123, 61, 60, 147, 33, 190, 246, 176, 106, 61, 196, 150, 158, 189, 150, 213, 22, 189, 246, 149, 33, 62, 184, 106, 240, 61, 127, 128, 39, 62, 86, 39, 239, 187, 70, 215, 155, 60, 208, 93, 238, 61, 238, 40, 62, 189, 3, 140, 111, 60, 125, 11, 66, 60, 66, 38, 133, 59, 143, 93, 108, 61, 123, 92, 153, 61, 223, 99, 50, 62, 127, 122, 32, 62, 247, 31, 208, 188, 225, 187, 196, 61, 166, 85, 49, 190, 39, 203, 31, 190, 86, 28, 62, 189, 39, 80, 12, 190, 229, 54, 155, 61, 120, 3, 162, 189, 224, 131, 18, 62, 253, 18, 214, 189, 118, 90, 16, 187, 148, 243, 210, 61, 220, 196, 44, 190, 135, 70, 50, 190, 33, 55, 49, 189, 102, 222, 197, 61, 120, 127, 86, 189, 71, 101, 24, 190, 46, 173, 220, 61, 253, 168, 185, 61, 150, 8, 42, 62, 209, 136, 51, 190, 241, 222, 28, 62, 253, 14, 35, 62, 42, 93, 215, 189, 60, 174, 164, 60, 152, 137, 7, 190, 252, 69, 248, 188, 229, 197, 212, 61, 15, 32, 142, 189, 183, 4, 30, 189, 225, 85, 200, 60, 243, 87, 43, 190, 132, 71, 231, 189, 142, 131, 4, 190, 224, 31, 202, 61, 26, 31, 4, 190, 202, 49, 51, 62, 157, 235, 155, 189, 164, 73, 107, 189, 90, 108, 215, 61, 146, 10, 232, 61, 250, 169, 150, 60, 27, 201, 208, 61, 34, 189, 180, 61, 126, 188, 172, 61, 136, 114, 48, 62, 227, 74, 185, 61, 208, 124, 179, 188, 51, 95, 35, 62, 216, 20, 180, 61, 116, 205, 241, 187, 146, 216, 152, 61, 59, 210, 143, 189, 133, 55, 233, 189, 250, 84, 245, 189, 94, 71, 35, 62, 228, 226, 211, 188, 52, 12, 33, 62, 94, 90, 254, 61, 122, 154, 165, 188, 21, 25, 227, 59, 1, 184, 28, 190, 49, 248, 12, 190, 75, 171, 186, 189, 1, 209, 30, 61, 50, 116, 139, 61, 68, 103, 146, 188, 204, 191, 29, 62, 47, 51, 163, 61, 166, 62, 65, 61, 178, 44, 173, 189, 87, 135, 245, 61, 236, 104, 39, 61, 21, 107, 215, 188, 62, 177, 147, 188, 220, 191, 128, 188, 103, 29, 46, 189, 73, 35, 186, 61, 249, 182, 31, 190, 111, 1, 43, 190, 21, 237, 5, 62, 63, 112, 203, 61, 132, 22, 66, 61, 188, 7, 36, 190, 79, 33, 137, 61, 30, 181, 114, 59, 0, 127, 146, 60, 112, 173, 20, 61, 189, 1, 45, 190, 59, 100, 41, 62, 224, 234, 217, 189, 9, 228, 155, 189, 168, 15, 44, 190};
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
                alignas(float) const unsigned char memory[] = {168, 135, 101, 189, 177, 26, 190, 188, 204, 62, 2, 190, 2, 115, 61, 189, 161, 234, 47, 190, 122, 118, 237, 189, 133, 214, 116, 188, 237, 61, 137, 60, 8, 91, 21, 188, 160, 164, 27, 61, 3, 191, 39, 190, 69, 132, 46, 62, 147, 222, 55, 61, 109, 175, 24, 62, 192, 59, 53, 60, 114, 8, 233, 61, 154, 50, 143, 188, 72, 19, 80, 188, 205, 139, 133, 189, 223, 187, 1, 62, 28, 160, 14, 62, 76, 190, 17, 190, 225, 233, 149, 189, 206, 10, 112, 61, 213, 219, 239, 189, 176, 159, 113, 61, 213, 183, 41, 190, 38, 31, 20, 62, 68, 199, 207, 60, 249, 31, 173, 189, 232, 110, 130, 60, 104, 136, 37, 62};
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
                alignas(float) const unsigned char memory[] = {133, 117, 48, 190, 98, 216, 146, 61, 233, 249, 47, 190, 202, 90, 10, 190, 3, 122, 63, 61, 27, 23, 174, 61, 55, 10, 247, 188, 252, 148, 35, 62, 95, 76, 27, 58, 177, 225, 105, 61, 20, 28, 11, 62, 181, 174, 234, 188, 104, 155, 104, 61, 252, 136, 19, 190, 96, 138, 155, 188, 126, 164, 21, 62, 186, 192, 33, 189, 214, 237, 196, 189, 187, 77, 105, 188, 199, 8, 235, 60, 61, 211, 44, 189, 48, 226, 162, 61, 153, 117, 152, 189, 16, 34, 122, 61, 235, 165, 216, 186, 31, 50, 26, 62, 154, 62, 191, 61, 57, 236, 6, 61, 251, 86, 35, 189, 253, 21, 225, 61, 9, 173, 14, 190, 117, 5, 44, 190, 173, 126, 212, 189, 172, 66, 251, 189, 151, 81, 102, 189, 241, 59, 67, 188, 165, 88, 39, 190, 46, 60, 179, 61, 150, 29, 242, 61, 40, 54, 28, 189, 180, 96, 98, 60, 148, 233, 126, 189, 57, 249, 39, 190, 8, 187, 57, 61, 30, 219, 33, 190, 19, 66, 56, 61, 98, 186, 39, 62, 243, 95, 44, 62, 139, 182, 139, 61, 175, 175, 72, 188, 125, 142, 203, 189, 230, 148, 51, 61, 90, 217, 136, 61, 211, 241, 47, 62, 60, 218, 243, 188, 156, 53, 151, 188, 57, 56, 36, 190, 143, 147, 15, 62, 117, 179, 201, 61, 176, 17, 141, 189, 234, 149, 31, 190, 41, 232, 44, 190, 188, 32, 26, 61, 214, 117, 160, 189};
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
                alignas(float) const unsigned char memory[] = {77, 23, 5, 62, 131, 71, 157, 61};
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
    alignas(float) const unsigned char memory[] = {215, 23, 137, 190, 227, 7, 67, 191, 9, 50, 116, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {48, 72, 50, 62, 108, 10, 157, 61};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0023/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}