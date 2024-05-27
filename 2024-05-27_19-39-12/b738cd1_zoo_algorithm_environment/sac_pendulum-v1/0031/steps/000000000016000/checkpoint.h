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
                alignas(float) const unsigned char memory[] = {180, 120, 58, 191, 121, 92, 52, 191, 144, 167, 202, 62, 190, 254, 14, 191, 124, 203, 75, 63, 27, 111, 16, 63, 17, 147, 154, 62, 33, 203, 208, 62, 187, 66, 184, 62, 15, 113, 211, 190, 231, 124, 228, 63, 151, 86, 209, 62, 186, 35, 24, 63, 237, 150, 137, 191, 181, 113, 134, 190, 61, 150, 31, 63, 135, 244, 181, 63, 35, 153, 148, 62, 238, 231, 101, 63, 208, 86, 143, 63, 198, 177, 193, 62, 125, 117, 36, 190, 203, 235, 85, 191, 107, 92, 185, 62, 212, 113, 178, 60, 232, 42, 129, 61, 210, 63, 132, 59, 206, 236, 52, 191, 203, 139, 144, 63, 128, 130, 86, 62, 10, 223, 65, 60, 176, 201, 167, 191, 116, 195, 166, 190, 132, 191, 198, 190, 110, 81, 130, 191, 85, 41, 21, 190, 175, 145, 251, 62, 55, 250, 52, 63, 229, 103, 2, 190, 164, 98, 95, 63, 175, 128, 49, 191, 123, 120, 54, 190, 112, 8, 35, 62, 3, 46, 69, 191, 133, 45, 57, 63, 29, 23, 50, 191, 76, 165, 49, 190, 95, 206, 151, 190, 22, 73, 9, 63, 94, 142, 226, 60, 233, 225, 17, 63, 235, 116, 205, 189, 20, 173, 182, 191, 235, 160, 116, 190, 55, 191, 171, 60, 217, 154, 136, 63, 42, 15, 24, 63, 199, 81, 252, 190, 240, 231, 144, 62, 240, 74, 130, 62, 63, 89, 100, 191, 144, 202, 49, 60, 48, 1, 20, 191, 220, 176, 106, 190, 198, 180, 149, 191, 73, 253, 56, 190, 53, 94, 160, 190, 184, 87, 132, 61, 245, 119, 125, 61, 149, 225, 211, 190, 172, 111, 221, 62, 233, 78, 218, 190, 85, 64, 249, 62, 193, 248, 101, 190, 180, 138, 226, 190, 45, 222, 46, 189, 147, 185, 59, 191, 207, 90, 19, 63, 11, 38, 179, 190, 136, 208, 117, 61, 192, 33, 244, 190, 170, 13, 142, 63, 9, 40, 31, 63, 18, 187, 186, 62, 126, 192, 174, 62, 237, 103, 155, 63, 105, 145, 184, 62, 56, 124, 52, 190, 242, 233, 209, 62, 219, 73, 1, 191, 0, 106, 96, 63, 228, 145, 112, 191, 111, 238, 55, 190, 199, 41, 211, 62, 160, 71, 128, 191, 1, 159, 192, 62};
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
                alignas(float) const unsigned char memory[] = {220, 26, 237, 190, 230, 235, 222, 190, 181, 60, 156, 62, 57, 244, 184, 59, 89, 106, 154, 190, 244, 206, 53, 62, 225, 91, 225, 190, 154, 136, 84, 190, 52, 10, 240, 189, 68, 88, 117, 190, 16, 131, 167, 58, 62, 165, 172, 62, 170, 243, 11, 63, 108, 43, 161, 189, 46, 57, 41, 62, 177, 197, 30, 63, 149, 51, 85, 62, 191, 158, 86, 190, 11, 113, 88, 62, 44, 45, 227, 190, 122, 242, 151, 190, 5, 167, 78, 62, 29, 94, 69, 63, 184, 191, 91, 190, 179, 160, 145, 190, 218, 237, 37, 61, 100, 206, 239, 62, 212, 65, 142, 191, 176, 135, 219, 62, 247, 10, 18, 190, 158, 144, 204, 62, 98, 107, 224, 62};
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
                alignas(float) const unsigned char memory[] = {109, 131, 17, 191, 94, 34, 10, 191, 161, 127, 86, 62, 30, 153, 42, 61, 129, 232, 166, 190, 21, 114, 231, 62, 63, 76, 38, 62, 100, 142, 11, 191, 204, 15, 160, 61, 194, 153, 126, 62, 46, 55, 112, 190, 190, 189, 224, 61, 28, 201, 59, 62, 169, 235, 79, 190, 239, 100, 91, 61, 129, 164, 185, 61, 17, 55, 19, 62, 216, 218, 165, 191, 147, 148, 188, 190, 133, 201, 43, 190, 21, 132, 142, 62, 128, 190, 139, 62, 245, 208, 229, 61, 110, 8, 2, 190, 66, 143, 136, 190, 194, 56, 194, 62, 14, 143, 181, 186, 190, 110, 7, 62, 109, 107, 125, 62, 13, 203, 193, 61, 21, 224, 30, 190, 123, 192, 174, 61, 157, 170, 141, 188, 244, 218, 185, 58, 191, 184, 7, 62, 188, 103, 88, 61, 163, 40, 31, 61, 156, 86, 118, 60, 231, 163, 130, 189, 125, 196, 21, 190, 192, 165, 218, 189, 187, 15, 230, 189, 245, 162, 17, 62, 150, 111, 243, 189, 53, 162, 11, 190, 215, 40, 170, 59, 89, 230, 73, 190, 134, 225, 171, 189, 126, 248, 30, 190, 254, 151, 165, 60, 32, 165, 74, 190, 202, 228, 24, 188, 130, 176, 237, 61, 102, 213, 190, 61, 177, 177, 98, 62, 56, 156, 213, 61, 71, 171, 36, 61, 136, 6, 22, 190, 219, 210, 77, 190, 12, 158, 137, 60, 149, 23, 27, 190, 125, 123, 36, 190, 103, 178, 0, 190, 155, 46, 60, 190, 219, 165, 194, 62, 82, 200, 63, 191, 224, 190, 34, 62, 50, 2, 149, 191, 239, 161, 94, 61, 254, 22, 4, 190, 208, 234, 16, 190, 140, 208, 160, 62, 231, 25, 111, 60, 45, 239, 242, 191, 16, 250, 1, 189, 27, 156, 171, 189, 48, 128, 26, 62, 19, 215, 176, 61, 85, 167, 146, 189, 216, 235, 15, 189, 2, 244, 76, 62, 225, 29, 93, 61, 63, 199, 19, 191, 113, 197, 223, 61, 69, 82, 214, 61, 84, 203, 109, 61, 215, 1, 67, 61, 74, 158, 180, 60, 33, 22, 169, 61, 87, 61, 149, 62, 15, 130, 32, 62, 178, 157, 248, 190, 238, 104, 90, 190, 215, 156, 124, 61, 244, 77, 174, 62, 173, 141, 17, 62, 16, 50, 158, 190, 223, 31, 187, 61, 59, 113, 76, 62, 120, 208, 134, 61, 93, 62, 131, 189, 172, 218, 100, 190, 20, 21, 83, 190, 142, 235, 128, 62, 227, 188, 15, 62, 205, 186, 157, 62, 118, 146, 75, 191, 55, 151, 64, 62, 125, 57, 100, 191, 18, 232, 192, 189, 228, 238, 146, 62, 17, 34, 141, 61, 92, 126, 236, 188, 77, 185, 44, 191, 133, 189, 100, 62, 55, 74, 217, 59, 227, 124, 36, 190, 196, 117, 187, 61, 31, 53, 165, 189, 39, 47, 238, 61, 87, 38, 172, 190, 83, 19, 155, 190, 16, 170, 48, 190, 130, 149, 178, 190, 220, 192, 17, 62, 92, 62, 185, 62, 94, 6, 120, 61, 191, 217, 134, 62, 14, 0, 182, 62, 81, 153, 149, 191, 22, 195, 39, 184, 198, 141, 43, 191, 183, 197, 129, 190, 216, 58, 240, 62, 14, 92, 227, 61, 191, 0, 186, 190, 159, 253, 166, 188, 105, 235, 99, 190, 22, 147, 227, 61, 99, 145, 90, 62, 4, 140, 178, 61, 194, 8, 157, 190, 135, 221, 201, 60, 101, 239, 133, 62, 216, 47, 230, 61, 50, 215, 25, 61, 208, 91, 68, 191, 60, 181, 75, 189, 217, 65, 154, 61, 30, 232, 80, 62, 91, 96, 51, 188, 129, 104, 62, 61, 88, 8, 187, 190, 115, 237, 14, 63, 248, 44, 51, 62, 70, 171, 141, 62, 137, 44, 129, 186, 95, 74, 249, 189, 53, 59, 85, 190, 211, 27, 18, 61, 127, 213, 86, 188, 112, 61, 187, 189, 32, 190, 50, 190, 190, 64, 148, 189, 158, 235, 164, 189, 117, 179, 225, 188, 250, 233, 168, 189, 54, 244, 18, 190, 215, 52, 218, 188, 22, 27, 172, 189, 21, 164, 221, 61, 203, 78, 1, 190, 14, 180, 170, 189, 196, 147, 216, 189, 231, 64, 47, 189, 132, 204, 186, 61, 130, 65, 36, 189, 2, 64, 243, 61, 126, 185, 151, 61, 86, 147, 223, 61, 223, 219, 142, 60, 199, 16, 201, 186, 152, 207, 178, 60, 92, 11, 236, 189, 215, 32, 48, 60, 70, 82, 155, 59, 251, 37, 44, 190, 36, 170, 219, 61, 27, 126, 63, 61, 208, 98, 12, 190, 205, 69, 117, 189, 225, 9, 16, 62, 55, 152, 134, 189, 197, 223, 28, 62, 150, 91, 90, 62, 34, 53, 78, 188, 45, 141, 83, 62, 203, 36, 183, 61, 255, 232, 136, 189, 202, 192, 97, 61, 108, 119, 1, 189, 85, 21, 217, 62, 8, 216, 144, 61, 242, 220, 188, 62, 45, 133, 218, 189, 6, 97, 118, 62, 114, 80, 84, 61, 119, 57, 44, 61, 110, 123, 35, 190, 250, 31, 213, 61, 39, 3, 44, 187, 132, 94, 35, 58, 87, 184, 225, 190, 114, 6, 2, 61, 124, 130, 90, 62, 228, 248, 169, 190, 112, 198, 42, 190, 133, 219, 229, 189, 214, 23, 120, 188, 92, 129, 178, 190, 108, 147, 87, 62, 214, 30, 85, 190, 254, 94, 108, 61, 162, 213, 42, 188, 197, 12, 81, 188, 116, 26, 247, 188, 164, 32, 106, 61, 180, 177, 135, 187, 141, 72, 28, 189, 88, 238, 140, 189, 213, 69, 192, 187, 204, 101, 56, 190, 12, 44, 15, 62, 160, 73, 80, 190, 52, 181, 52, 190, 223, 74, 129, 189, 5, 76, 40, 190, 15, 67, 3, 61, 25, 141, 32, 190, 52, 14, 34, 189, 142, 253, 210, 60, 49, 140, 16, 62, 252, 215, 245, 59, 199, 61, 47, 190, 246, 110, 238, 60, 97, 58, 40, 190, 245, 153, 183, 61, 128, 221, 41, 190, 233, 37, 50, 189, 57, 143, 29, 190, 135, 156, 124, 61, 189, 7, 26, 59, 50, 182, 6, 190, 81, 69, 218, 61, 172, 119, 74, 190, 221, 144, 201, 61, 66, 134, 23, 63, 160, 89, 48, 191, 242, 77, 184, 190, 19, 128, 238, 191, 70, 221, 140, 191, 134, 5, 78, 63, 85, 90, 47, 63, 161, 132, 128, 190, 117, 116, 31, 190, 66, 217, 92, 191, 185, 218, 14, 190, 180, 200, 6, 190, 157, 30, 149, 62, 164, 230, 62, 191, 94, 209, 202, 60, 73, 44, 153, 62, 3, 44, 192, 61, 19, 82, 130, 190, 226, 155, 255, 190, 31, 69, 70, 62, 231, 160, 116, 62, 160, 174, 33, 190, 153, 102, 90, 62, 142, 230, 64, 190, 5, 151, 232, 190, 3, 91, 160, 62, 48, 229, 4, 62, 212, 12, 112, 62, 226, 51, 33, 60, 223, 196, 1, 190, 215, 224, 178, 190, 123, 127, 130, 190, 89, 80, 253, 189, 238, 194, 128, 61, 150, 120, 177, 189, 166, 98, 129, 187, 141, 197, 163, 61, 21, 174, 238, 60, 1, 157, 245, 61, 34, 200, 189, 60, 120, 177, 79, 189, 165, 119, 33, 190, 228, 209, 136, 189, 36, 179, 236, 61, 235, 106, 45, 190, 131, 230, 57, 61, 47, 235, 180, 188, 20, 38, 129, 60, 110, 201, 172, 61, 236, 125, 3, 190, 82, 238, 11, 190, 216, 34, 24, 62, 97, 201, 35, 190, 10, 146, 81, 190, 53, 235, 222, 189, 210, 244, 181, 60, 166, 181, 50, 189, 97, 54, 42, 190, 157, 162, 16, 61, 167, 121, 39, 60, 106, 33, 53, 189, 127, 2, 170, 61, 246, 59, 252, 189, 241, 44, 153, 189, 115, 226, 52, 190, 17, 96, 69, 189, 14, 171, 80, 62, 208, 193, 69, 62, 111, 249, 177, 59, 154, 126, 68, 189, 108, 13, 5, 189, 248, 69, 218, 61, 184, 161, 147, 189, 149, 75, 194, 62, 199, 36, 39, 61, 153, 110, 6, 62, 211, 197, 164, 61, 36, 58, 38, 62, 200, 172, 132, 61, 189, 0, 2, 190, 86, 84, 217, 186, 108, 114, 240, 61, 207, 73, 143, 62, 189, 140, 148, 190, 223, 35, 174, 189, 196, 119, 204, 61, 216, 26, 100, 189, 225, 18, 175, 61, 188, 12, 2, 62, 216, 190, 25, 190, 30, 157, 59, 61, 4, 203, 78, 190, 249, 111, 201, 189, 240, 180, 164, 59, 192, 2, 80, 62, 11, 155, 129, 62, 11, 129, 166, 190, 155, 183, 170, 62, 5, 246, 38, 62, 41, 18, 134, 190, 237, 183, 169, 61, 178, 174, 0, 191, 83, 207, 5, 191, 39, 101, 0, 63, 248, 165, 167, 61, 24, 162, 153, 62, 109, 40, 255, 189, 242, 23, 229, 61, 193, 203, 94, 62, 78, 75, 78, 62, 28, 128, 173, 62, 105, 215, 23, 190, 100, 241, 192, 190, 62, 121, 152, 60, 72, 91, 114, 62, 124, 41, 178, 190, 182, 140, 4, 190, 234, 20, 232, 61, 158, 197, 203, 61, 90, 117, 2, 188, 75, 200, 151, 62, 41, 204, 14, 191, 63, 240, 2, 62, 211, 88, 130, 191, 14, 147, 84, 190, 42, 12, 126, 61, 100, 146, 200, 62, 197, 57, 147, 62, 65, 85, 81, 63, 136, 246, 25, 191, 86, 194, 31, 190, 201, 97, 222, 191, 211, 234, 69, 190, 5, 145, 12, 63, 22, 205, 3, 63, 1, 29, 138, 61, 205, 60, 27, 190, 12, 241, 14, 191, 46, 32, 168, 189, 180, 191, 141, 61, 245, 196, 119, 62, 105, 53, 54, 190, 222, 49, 171, 190, 120, 199, 66, 62, 179, 201, 216, 187, 117, 38, 150, 62, 190, 38, 136, 189, 35, 232, 127, 62, 217, 103, 247, 61, 43, 211, 160, 62, 194, 145, 241, 60, 241, 38, 96, 61, 242, 38, 130, 190, 39, 118, 9, 63, 11, 143, 175, 61, 55, 174, 164, 62, 246, 18, 104, 62, 22, 162, 35, 190, 200, 94, 54, 190, 200, 151, 18, 191, 82, 97, 43, 61, 116, 57, 128, 190, 155, 93, 241, 61, 114, 192, 160, 189, 142, 168, 16, 191, 123, 180, 142, 62, 98, 168, 19, 62, 9, 61, 251, 190, 147, 92, 110, 61, 252, 17, 11, 190, 92, 105, 63, 189, 145, 235, 205, 189, 253, 198, 174, 62, 37, 223, 77, 190, 168, 224, 251, 189, 159, 147, 107, 61, 177, 158, 157, 62, 87, 251, 139, 191, 159, 239, 147, 189, 127, 226, 84, 61, 250, 71, 100, 62, 51, 30, 238, 189, 11, 235, 142, 61, 204, 60, 177, 189, 119, 71, 164, 190, 32, 253, 229, 62, 181, 184, 99, 62, 236, 58, 181, 62, 151, 144, 148, 61, 18, 77, 49, 190, 142, 225, 128, 189, 17, 61, 231, 189, 126, 168, 171, 190, 228, 34, 34, 62, 84, 130, 171, 62, 81, 45, 102, 62, 238, 241, 219, 59, 122, 129, 241, 190, 164, 157, 136, 190, 52, 197, 181, 62, 149, 84, 205, 189, 227, 154, 47, 63, 128, 135, 120, 190, 178, 60, 32, 62, 113, 71, 183, 189, 76, 216, 165, 62, 77, 10, 161, 62, 50, 228, 232, 61, 108, 35, 200, 190, 246, 131, 215, 190, 75, 9, 158, 62, 124, 170, 73, 190, 33, 103, 121, 61, 44, 123, 238, 59, 177, 126, 182, 61, 22, 219, 159, 62, 116, 214, 57, 62, 142, 251, 173, 190, 140, 80, 114, 187, 10, 177, 157, 190, 210, 59, 10, 190, 210, 178, 162, 62, 216, 3, 151, 190, 201, 213, 166, 62, 106, 205, 35, 60, 7, 33, 138, 190, 174, 89, 159, 60, 212, 68, 63, 62, 20, 4, 49, 190, 31, 8, 255, 62, 221, 81, 222, 62, 174, 242, 163, 190, 194, 150, 202, 61, 35, 196, 110, 61, 151, 57, 241, 190, 25, 240, 69, 191, 83, 148, 197, 62, 53, 180, 204, 62, 253, 188, 102, 188, 126, 214, 171, 190, 90, 33, 133, 62, 125, 184, 186, 190, 132, 80, 82, 62, 155, 244, 115, 62, 153, 118, 123, 190, 167, 183, 100, 191, 178, 233, 150, 189, 197, 220, 48, 190, 54, 255, 85, 190, 183, 34, 94, 190, 47, 230, 81, 189, 123, 104, 232, 62, 176, 176, 69, 62, 233, 232, 43, 190, 136, 96, 173, 189, 115, 135, 93, 190, 102, 28, 187, 61, 87, 57, 17, 62, 228, 228, 151, 189, 80, 91, 39, 189, 128, 210, 192, 60, 91, 148, 74, 189, 151, 142, 243, 189, 142, 226, 230, 61, 239, 18, 1, 190, 211, 85, 132, 189, 58, 36, 36, 190, 172, 26, 31, 190, 187, 76, 132, 189, 165, 13, 187, 188, 84, 195, 17, 190, 69, 229, 25, 190, 247, 120, 135, 61, 34, 98, 93, 189, 131, 216, 141, 61, 66, 94, 35, 190, 169, 175, 60, 189, 221, 134, 174, 61, 168, 94, 108, 189, 53, 201, 238, 61, 153, 220, 10, 61, 217, 143, 190, 61, 127, 222, 124, 61, 148, 132, 32, 190, 209, 246, 238, 188, 137, 112, 20, 189, 96, 82, 192, 189, 126, 120, 233, 189, 246, 12, 217, 190, 195, 203, 127, 62, 113, 86, 159, 61, 152, 146, 31, 62, 11, 242, 128, 62, 55, 40, 14, 191, 126, 61, 174, 190, 180, 44, 189, 62, 48, 91, 10, 190, 159, 174, 53, 63, 122, 233, 3, 190, 26, 180, 210, 189, 82, 74, 101, 62, 68, 137, 171, 62, 97, 167, 128, 62, 148, 100, 82, 190, 77, 116, 146, 190, 89, 236, 112, 190, 225, 186, 152, 62, 56, 79, 226, 190, 26, 45, 25, 190, 24, 213, 14, 190, 244, 196, 201, 61, 147, 93, 17, 190, 125, 210, 193, 62, 123, 156, 247, 190, 35, 216, 5, 190, 152, 23, 142, 191, 53, 40, 7, 190, 211, 211, 246, 61, 229, 138, 216, 62, 166, 77, 209, 62, 191, 169, 85, 190, 149, 135, 223, 189, 16, 194, 142, 60, 120, 14, 94, 190, 41, 165, 37, 191, 84, 14, 129, 62, 241, 138, 64, 62, 207, 254, 21, 191, 87, 98, 255, 61, 212, 229, 162, 189, 5, 20, 51, 189, 190, 4, 192, 189, 230, 43, 177, 62, 61, 75, 202, 190, 248, 212, 115, 61, 244, 36, 59, 187, 110, 16, 151, 61, 119, 122, 150, 191, 132, 216, 231, 60, 238, 246, 18, 61, 201, 214, 6, 61, 221, 180, 94, 187, 9, 148, 132, 60, 171, 97, 4, 62, 49, 104, 131, 189, 251, 56, 45, 62, 60, 12, 88, 62, 161, 59, 141, 61, 80, 110, 120, 62, 197, 250, 59, 62, 22, 17, 162, 189, 215, 60, 198, 61, 178, 32, 64, 61, 136, 163, 224, 187, 165, 254, 176, 190, 97, 58, 216, 190, 163, 33, 149, 62, 180, 151, 135, 191, 31, 144, 130, 191, 158, 6, 193, 62, 250, 101, 9, 190, 0, 38, 154, 61, 177, 123, 16, 61, 134, 18, 177, 61, 148, 9, 157, 60, 91, 25, 46, 62, 188, 228, 204, 62, 156, 242, 14, 189, 190, 57, 182, 190, 99, 99, 197, 188, 209, 155, 197, 61, 158, 169, 66, 191, 22, 42, 66, 189, 252, 73, 70, 62, 75, 156, 85, 62, 57, 113, 145, 61, 38, 104, 88, 59, 6, 17, 185, 189, 131, 49, 198, 61, 137, 102, 210, 189, 207, 137, 190, 190, 194, 51, 146, 189, 156, 43, 35, 62, 228, 203, 172, 62, 120, 28, 102, 62, 203, 75, 93, 62, 142, 176, 163, 62, 44, 234, 181, 189, 20, 204, 206, 190, 117, 81, 81, 186, 176, 226, 194, 61, 232, 182, 164, 62, 108, 246, 71, 188, 123, 248, 36, 190, 171, 99, 22, 190, 11, 255, 93, 62, 73, 151, 131, 62, 244, 182, 141, 190, 237, 25, 166, 62, 134, 125, 247, 61, 213, 31, 46, 62, 119, 16, 96, 190, 4, 141, 89, 62, 241, 74, 6, 62, 151, 197, 42, 191, 6, 26, 61, 190, 73, 99, 68, 62, 102, 45, 98, 63, 249, 16, 200, 190, 31, 203, 171, 62, 198, 17, 175, 190, 53, 71, 196, 62, 73, 8, 5, 190, 245, 237, 245, 62, 62, 59, 32, 61, 56, 249, 136, 62, 155, 145, 81, 56, 112, 223, 7, 62, 189, 77, 251, 189, 87, 89, 107, 189, 215, 252, 21, 190, 223, 148, 2, 61, 252, 185, 51, 190, 33, 175, 46, 190, 175, 10, 16, 190, 143, 22, 45, 61, 179, 38, 123, 189, 152, 174, 136, 61, 191, 122, 13, 190, 203, 59, 194, 60, 225, 65, 43, 61, 66, 60, 24, 190, 46, 125, 185, 189, 235, 29, 52, 190, 20, 63, 15, 62, 218, 146, 113, 188, 83, 29, 248, 60, 251, 8, 156, 189, 196, 40, 125, 61, 202, 225, 40, 61, 192, 74, 125, 59, 126, 208, 196, 189, 185, 97, 9, 190, 155, 9, 216, 61, 168, 190, 24, 190, 37, 48, 12, 61, 22, 28, 240, 186, 251, 179, 240, 188, 61, 12, 61, 190, 216, 25, 236, 189, 243, 108, 167, 189, 177, 73, 219, 61, 132, 138, 142, 62, 120, 64, 42, 190, 1, 219, 214, 61, 161, 178, 4, 63, 0, 19, 129, 61, 156, 249, 235, 188, 45, 234, 189, 59, 216, 97, 201, 189, 167, 252, 70, 61, 170, 191, 154, 62, 27, 240, 83, 190, 216, 154, 0, 62, 93, 189, 232, 190, 72, 238, 233, 59, 144, 168, 228, 62, 240, 68, 216, 190, 191, 38, 250, 189, 160, 91, 69, 190, 60, 227, 78, 62, 32, 41, 221, 61, 183, 197, 93, 62, 114, 98, 66, 191, 220, 180, 88, 189, 17, 7, 15, 191, 149, 13, 207, 61, 74, 146, 160, 60, 90, 56, 171, 62, 93, 147, 72, 189, 79, 242, 233, 189, 52, 142, 218, 189, 212, 78, 136, 189, 166, 3, 38, 62, 253, 237, 167, 189, 211, 122, 185, 189, 72, 222, 21, 189, 243, 3, 136, 61, 166, 2, 70, 61, 191, 112, 204, 60, 51, 190, 35, 190, 145, 172, 136, 188, 244, 215, 44, 189, 0, 99, 28, 61, 12, 246, 220, 189, 164, 247, 44, 61, 41, 196, 122, 189, 226, 145, 104, 189, 140, 237, 140, 189, 116, 139, 27, 190, 158, 132, 103, 61, 141, 217, 165, 189, 131, 213, 9, 190, 122, 67, 47, 188, 206, 22, 5, 190, 252, 6, 40, 60, 7, 249, 61, 190, 55, 61, 138, 188, 93, 80, 218, 189, 91, 112, 67, 61, 8, 112, 13, 62, 92, 14, 140, 189, 197, 192, 33, 190, 172, 198, 237, 189, 212, 166, 165, 62, 161, 147, 50, 191, 147, 15, 105, 188, 117, 8, 199, 189, 16, 169, 23, 190, 24, 206, 221, 62, 71, 121, 190, 189, 44, 65, 22, 189, 157, 65, 96, 189, 119, 69, 26, 62, 226, 199, 138, 60, 234, 187, 232, 62, 177, 225, 129, 188, 123, 181, 101, 62, 226, 233, 146, 61, 174, 223, 16, 62, 105, 141, 13, 61, 204, 24, 42, 190, 153, 17, 103, 190, 191, 170, 140, 61, 8, 97, 188, 61, 182, 219, 120, 61, 252, 138, 104, 61, 193, 134, 167, 189, 168, 106, 139, 61, 218, 198, 0, 191, 196, 113, 3, 61, 33, 12, 228, 61, 27, 107, 221, 62, 234, 184, 61, 189, 114, 17, 50, 62, 93, 17, 25, 61, 24, 183, 239, 189, 65, 252, 98, 190, 250, 223, 248, 61, 77, 254, 166, 189, 16, 232, 103, 190, 79, 179, 140, 189, 114, 40, 152, 189, 161, 205, 46, 183, 159, 85, 42, 60, 51, 208, 39, 190, 32, 187, 177, 189, 103, 143, 222, 188, 168, 41, 170, 187, 3, 242, 247, 189, 252, 187, 209, 61, 37, 7, 158, 61, 79, 116, 237, 61, 45, 217, 120, 190, 143, 47, 217, 61, 152, 236, 206, 61, 146, 60, 57, 61, 101, 111, 29, 190, 195, 191, 148, 189, 134, 83, 101, 187, 101, 204, 28, 190, 95, 213, 129, 190, 65, 64, 62, 190, 221, 231, 152, 189, 220, 160, 132, 61, 46, 96, 246, 189, 2, 180, 52, 62, 206, 57, 130, 190, 27, 56, 246, 61, 21, 30, 58, 190, 214, 161, 188, 190, 249, 99, 191, 62, 243, 23, 91, 62, 38, 147, 114, 190, 156, 253, 252, 189, 20, 167, 13, 191, 80, 173, 233, 61, 243, 140, 183, 189, 162, 244, 138, 62, 112, 255, 243, 190, 97, 103, 12, 190, 219, 188, 76, 189, 176, 154, 179, 62, 125, 215, 46, 191, 121, 157, 20, 190, 90, 37, 128, 188, 137, 96, 87, 62, 11, 166, 36, 189, 128, 199, 125, 62, 62, 40, 168, 61, 181, 123, 177, 190, 89, 245, 160, 62, 77, 219, 79, 62, 74, 127, 139, 62, 125, 7, 187, 61, 89, 43, 147, 190, 233, 198, 22, 189, 103, 32, 215, 189, 214, 111, 139, 189, 82, 21, 47, 190, 9, 173, 236, 189, 183, 215, 75, 189, 206, 81, 0, 62, 188, 97, 246, 189, 186, 162, 173, 188, 33, 191, 230, 61, 29, 222, 233, 61, 171, 170, 32, 62, 150, 243, 4, 190, 234, 196, 255, 60, 102, 53, 29, 62, 97, 1, 141, 61, 58, 199, 249, 60, 149, 214, 48, 190, 80, 123, 74, 190, 179, 165, 21, 190, 2, 160, 79, 60, 145, 111, 210, 189, 191, 75, 108, 61, 232, 230, 1, 62, 182, 93, 64, 190, 195, 148, 197, 57, 208, 11, 246, 188, 115, 242, 215, 60, 20, 105, 139, 189, 250, 87, 227, 61, 122, 218, 181, 187, 102, 0, 172, 189, 4, 58, 55, 190, 204, 181, 25, 61, 146, 181, 128, 63, 135, 213, 123, 191, 11, 8, 77, 191, 118, 78, 211, 191, 126, 61, 98, 62, 22, 235, 150, 191, 18, 180, 48, 191, 246, 146, 71, 189, 83, 46, 6, 190, 246, 15, 61, 191, 29, 171, 166, 61, 84, 247, 221, 62, 51, 216, 145, 189, 165, 55, 222, 59, 254, 140, 190, 61, 212, 218, 141, 62, 122, 59, 20, 62, 226, 104, 104, 62, 209, 195, 245, 190, 102, 87, 176, 62, 144, 92, 94, 62, 142, 113, 191, 62, 19, 118, 32, 62, 169, 48, 136, 190, 101, 133, 170, 189, 38, 105, 10, 63, 115, 211, 238, 60, 222, 185, 132, 61, 252, 47, 248, 191, 48, 97, 244, 190, 251, 23, 93, 62, 105, 79, 9, 190, 243, 156, 246, 190, 168, 176, 166, 60, 159, 203, 25, 190, 221, 84, 61, 60, 164, 144, 223, 190, 30, 70, 81, 189, 236, 154, 217, 188, 215, 117, 57, 62, 233, 208, 35, 62, 50, 236, 22, 60, 242, 97, 150, 189, 158, 201, 5, 63, 208, 52, 16, 190, 170, 199, 174, 191, 192, 101, 215, 61, 15, 157, 149, 62, 35, 112, 3, 191, 144, 206, 89, 190, 47, 3, 229, 61, 96, 121, 209, 190, 169, 213, 223, 189, 40, 88, 238, 62, 252, 176, 237, 62, 168, 225, 235, 61, 9, 128, 182, 190, 33, 236, 25, 191, 48, 72, 43, 62, 33, 185, 10, 191, 129, 145, 185, 62, 174, 245, 43, 61, 190, 31, 226, 190, 45, 214, 161, 61, 196, 131, 133, 190, 57, 4, 150, 189, 160, 56, 47, 62, 173, 56, 218, 189, 58, 10, 194, 61, 47, 54, 7, 191, 223, 165, 32, 191, 61, 121, 17, 62, 20, 37, 154, 61, 144, 36, 156, 62, 194, 143, 55, 191, 112, 49, 216, 61, 105, 231, 228, 190, 198, 164, 185, 189, 188, 133, 10, 62, 236, 167, 185, 189, 110, 194, 192, 189, 104, 252, 79, 191, 161, 157, 194, 61, 220, 214, 56, 190, 192, 241, 87, 190, 122, 73, 122, 60, 233, 66, 205, 62, 81, 120, 102, 62, 17, 74, 222, 190, 73, 167, 29, 60, 124, 106, 47, 190, 217, 193, 94, 191, 254, 133, 73, 60, 228, 136, 90, 62, 189, 33, 131, 61, 64, 243, 39, 62, 91, 158, 20, 190, 54, 61, 255, 189, 193, 8, 44, 62, 157, 20, 0, 190, 207, 133, 227, 60, 4, 136, 176, 189, 225, 128, 234, 60, 137, 105, 145, 189, 103, 130, 249, 61, 29, 202, 47, 190, 35, 217, 176, 61, 98, 177, 4, 190, 230, 87, 9, 60, 132, 30, 16, 62, 174, 130, 164, 189, 128, 147, 5, 190, 139, 161, 49, 190, 128, 234, 2, 189, 214, 60, 45, 190, 237, 116, 236, 61, 100, 49, 43, 190, 2, 58, 227, 61, 212, 136, 33, 190, 162, 184, 158, 60, 64, 236, 118, 189, 69, 160, 28, 190, 201, 40, 217, 188, 1, 86, 42, 190, 62, 186, 31, 62, 129, 201, 189, 189, 87, 225, 107, 189, 250, 48, 43, 190};
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
                alignas(float) const unsigned char memory[] = {120, 112, 63, 62, 48, 213, 244, 189, 35, 215, 144, 188, 77, 203, 74, 62, 236, 173, 132, 62, 172, 210, 206, 189, 255, 68, 180, 62, 11, 89, 10, 188, 183, 0, 209, 62, 140, 78, 168, 61, 177, 112, 235, 188, 17, 253, 179, 62, 23, 58, 4, 62, 82, 115, 102, 62, 49, 224, 64, 190, 6, 31, 94, 190, 197, 99, 40, 189, 25, 168, 69, 62, 28, 36, 232, 61, 211, 59, 159, 187, 201, 26, 106, 61, 20, 252, 5, 190, 160, 175, 63, 62, 98, 44, 224, 61, 111, 207, 103, 62, 84, 19, 9, 190, 178, 236, 68, 62, 229, 5, 37, 188, 216, 30, 25, 62, 141, 107, 29, 62, 137, 126, 58, 62, 136, 14, 200, 60};
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
                alignas(float) const unsigned char memory[] = {249, 39, 68, 191, 204, 215, 139, 189, 163, 140, 75, 62, 83, 109, 184, 62, 98, 79, 13, 191, 220, 46, 129, 189, 229, 40, 99, 62, 24, 74, 238, 58, 95, 218, 251, 191, 216, 143, 173, 61, 159, 182, 157, 61, 3, 175, 254, 62, 0, 247, 44, 191, 74, 234, 152, 190, 252, 207, 17, 63, 243, 249, 57, 63, 219, 228, 21, 188, 75, 231, 55, 63, 145, 103, 219, 189, 69, 17, 28, 63, 83, 81, 165, 190, 199, 237, 40, 62, 103, 172, 138, 62, 22, 52, 229, 60, 166, 213, 104, 62, 250, 226, 222, 188, 10, 215, 1, 191, 178, 160, 52, 187, 210, 199, 136, 191, 242, 127, 71, 63, 202, 53, 69, 63, 86, 155, 126, 61, 157, 151, 140, 189, 103, 128, 246, 61, 242, 46, 8, 61, 137, 46, 59, 190, 6, 244, 83, 190, 226, 14, 116, 189, 57, 5, 106, 190, 135, 94, 193, 61, 68, 128, 130, 190, 31, 58, 59, 189, 179, 224, 251, 189, 171, 47, 59, 61, 209, 192, 199, 190, 110, 192, 57, 190, 49, 98, 56, 62, 153, 56, 40, 62, 5, 15, 134, 61, 84, 142, 175, 62, 110, 210, 222, 190, 61, 225, 224, 61, 91, 208, 113, 189, 68, 75, 86, 61, 112, 251, 14, 189, 150, 92, 27, 62, 92, 53, 215, 190, 36, 1, 188, 61, 206, 162, 71, 189, 224, 173, 232, 188, 104, 29, 193, 61, 185, 56, 70, 62, 11, 94, 140, 190, 159, 99, 93, 189};
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
                alignas(float) const unsigned char memory[] = {92, 226, 4, 188, 251, 29, 140, 190};
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
    alignas(float) const unsigned char memory[] = {199, 62, 238, 62, 56, 60, 27, 191, 138, 32, 5, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {249, 90, 255, 63, 192, 183, 61, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0031/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}