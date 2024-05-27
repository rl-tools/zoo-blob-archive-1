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
                alignas(float) const unsigned char memory[] = {0, 179, 168, 62, 39, 47, 66, 191, 52, 196, 101, 190, 212, 6, 31, 190, 241, 107, 54, 63, 32, 53, 179, 190, 28, 197, 1, 62, 197, 178, 111, 62, 238, 0, 199, 62, 218, 98, 130, 62, 106, 109, 129, 191, 248, 242, 177, 190, 173, 7, 44, 190, 217, 111, 17, 190, 1, 14, 127, 62, 177, 58, 175, 61, 191, 5, 223, 191, 223, 170, 243, 190, 215, 180, 3, 190, 92, 187, 16, 191, 196, 17, 43, 191, 144, 230, 33, 191, 60, 84, 213, 190, 158, 233, 207, 188, 194, 52, 0, 63, 90, 221, 65, 189, 14, 227, 214, 190, 1, 14, 254, 189, 104, 100, 124, 62, 231, 174, 169, 190, 98, 119, 168, 61, 238, 81, 9, 63, 217, 188, 36, 191, 204, 79, 78, 63, 63, 209, 56, 191, 13, 11, 141, 190, 199, 194, 225, 62, 91, 231, 123, 191, 210, 185, 214, 190, 23, 202, 143, 62, 149, 199, 138, 190, 207, 101, 165, 62, 119, 142, 54, 63, 153, 15, 10, 189, 104, 132, 202, 61, 247, 104, 122, 190, 149, 217, 159, 63, 118, 21, 140, 62, 245, 199, 4, 63, 145, 210, 48, 63, 241, 118, 23, 62, 71, 42, 86, 63, 73, 0, 129, 191, 242, 247, 30, 190, 176, 149, 0, 191, 184, 153, 7, 191, 187, 55, 69, 62, 196, 130, 19, 191, 120, 28, 76, 63, 128, 240, 224, 62, 255, 222, 242, 190, 52, 23, 30, 189, 253, 245, 190, 190, 35, 115, 26, 191, 74, 63, 128, 191, 252, 52, 202, 190, 223, 203, 11, 62, 165, 223, 70, 191, 116, 192, 111, 189, 157, 190, 99, 63, 209, 108, 21, 63, 190, 206, 175, 62, 30, 122, 251, 62, 202, 8, 66, 63, 128, 230, 27, 62, 140, 226, 107, 62, 254, 251, 194, 190, 20, 120, 0, 191, 220, 162, 48, 63, 67, 230, 150, 191, 182, 178, 156, 190, 252, 58, 144, 61, 224, 116, 232, 190, 154, 224, 15, 63, 184, 204, 9, 63, 110, 111, 130, 63, 18, 154, 126, 62, 134, 79, 220, 61, 254, 76, 24, 189, 175, 57, 237, 190, 71, 105, 145, 62, 139, 28, 84, 191, 122, 94, 229, 62, 212, 117, 228, 62, 228, 243, 236, 60, 5, 32, 63, 62};
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
                alignas(float) const unsigned char memory[] = {154, 115, 115, 191, 178, 17, 132, 187, 123, 38, 25, 191, 69, 236, 199, 189, 113, 74, 34, 63, 182, 206, 153, 61, 55, 245, 183, 190, 52, 215, 139, 62, 150, 119, 113, 62, 151, 180, 142, 190, 100, 115, 174, 62, 56, 39, 3, 191, 179, 87, 218, 62, 221, 250, 187, 62, 185, 79, 135, 61, 178, 41, 60, 190, 1, 200, 204, 60, 207, 159, 244, 62, 89, 82, 178, 190, 57, 34, 177, 61, 157, 176, 33, 191, 88, 81, 128, 62, 244, 57, 232, 62, 91, 253, 92, 191, 116, 140, 162, 61, 252, 68, 180, 189, 217, 54, 108, 190, 71, 174, 189, 61, 223, 171, 60, 190, 51, 134, 92, 190, 12, 127, 151, 62, 54, 191, 38, 191};
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
                alignas(float) const unsigned char memory[] = {86, 25, 187, 189, 88, 248, 48, 62, 53, 15, 30, 190, 33, 55, 28, 191, 67, 21, 1, 191, 233, 26, 168, 190, 146, 165, 162, 189, 73, 94, 54, 62, 78, 41, 101, 62, 232, 247, 157, 189, 168, 220, 129, 62, 238, 73, 81, 191, 125, 135, 240, 189, 132, 186, 178, 190, 219, 111, 148, 61, 8, 211, 154, 62, 248, 161, 22, 189, 83, 87, 36, 60, 71, 242, 10, 61, 210, 152, 178, 190, 125, 64, 141, 190, 40, 98, 145, 190, 210, 84, 166, 189, 154, 163, 25, 191, 234, 212, 140, 62, 30, 89, 179, 61, 211, 83, 149, 191, 247, 192, 100, 190, 97, 14, 73, 190, 66, 6, 68, 62, 5, 214, 152, 189, 192, 195, 21, 62, 4, 217, 253, 190, 69, 173, 12, 60, 192, 149, 137, 61, 50, 194, 124, 60, 170, 138, 134, 190, 222, 254, 125, 62, 163, 59, 188, 62, 54, 63, 52, 61, 230, 153, 89, 189, 228, 169, 117, 62, 85, 127, 142, 62, 85, 218, 195, 61, 112, 40, 136, 62, 147, 161, 102, 62, 141, 208, 183, 190, 228, 160, 225, 62, 74, 41, 202, 62, 212, 236, 207, 190, 230, 69, 139, 62, 187, 194, 157, 189, 206, 48, 77, 62, 81, 175, 7, 62, 112, 38, 187, 190, 231, 131, 212, 62, 237, 254, 201, 62, 166, 170, 116, 61, 64, 29, 148, 190, 200, 69, 34, 62, 187, 44, 59, 63, 144, 204, 87, 60, 168, 25, 185, 190, 212, 191, 97, 58, 168, 91, 108, 187, 111, 55, 33, 190, 240, 171, 175, 189, 72, 225, 209, 60, 65, 112, 232, 61, 107, 73, 164, 60, 38, 205, 37, 190, 240, 17, 158, 189, 96, 43, 234, 189, 81, 174, 53, 190, 121, 179, 87, 60, 245, 165, 137, 186, 142, 45, 213, 60, 18, 160, 26, 190, 53, 117, 43, 60, 73, 52, 41, 190, 192, 189, 41, 190, 24, 103, 111, 60, 24, 56, 242, 189, 200, 191, 41, 61, 11, 198, 187, 60, 233, 183, 44, 190, 60, 2, 233, 189, 37, 146, 88, 61, 157, 228, 161, 61, 110, 44, 170, 188, 14, 207, 51, 62, 38, 5, 46, 188, 12, 167, 24, 61, 195, 180, 85, 60, 15, 175, 51, 187, 39, 210, 146, 61, 255, 117, 3, 63, 252, 100, 40, 61, 237, 242, 19, 62, 54, 0, 244, 188, 163, 129, 36, 61, 97, 212, 122, 62, 169, 233, 196, 188, 67, 11, 253, 61, 46, 50, 162, 61, 132, 22, 102, 62, 211, 160, 146, 62, 165, 41, 142, 190, 21, 217, 39, 62, 19, 115, 55, 62, 211, 76, 129, 62, 108, 160, 53, 190, 57, 173, 190, 62, 183, 75, 55, 62, 176, 190, 17, 190, 233, 208, 204, 190, 183, 181, 31, 60, 140, 122, 138, 62, 158, 13, 173, 61, 123, 73, 233, 189, 215, 80, 249, 62, 234, 214, 43, 190, 227, 162, 94, 188, 13, 93, 131, 62, 100, 127, 31, 62, 94, 19, 49, 190, 95, 207, 227, 190, 104, 222, 115, 188, 94, 146, 74, 190, 12, 96, 31, 62, 36, 22, 135, 190, 2, 115, 195, 190, 80, 133, 53, 62, 55, 221, 23, 191, 176, 238, 123, 190, 177, 112, 151, 189, 52, 22, 132, 189, 179, 54, 30, 191, 153, 182, 130, 61, 109, 5, 251, 61, 213, 249, 24, 190, 105, 98, 97, 62, 241, 72, 49, 62, 35, 137, 132, 190, 150, 94, 94, 62, 89, 22, 58, 62, 132, 251, 133, 190, 58, 182, 162, 62, 236, 84, 216, 190, 242, 216, 75, 190, 237, 176, 82, 188, 23, 64, 160, 190, 157, 161, 180, 62, 131, 115, 71, 190, 215, 149, 141, 62, 99, 180, 102, 190, 185, 108, 107, 190, 63, 107, 162, 189, 185, 252, 30, 62, 74, 214, 247, 190, 163, 150, 27, 191, 16, 45, 14, 61, 202, 196, 170, 61, 148, 93, 216, 190, 40, 101, 145, 61, 172, 253, 152, 62, 102, 252, 171, 189, 218, 93, 28, 190, 238, 62, 142, 61, 146, 51, 39, 190, 255, 130, 199, 188, 94, 64, 215, 62, 67, 165, 182, 189, 18, 198, 16, 62, 214, 181, 74, 62, 171, 4, 0, 63, 223, 74, 71, 62, 141, 16, 147, 190, 199, 145, 27, 190, 194, 220, 16, 62, 200, 105, 35, 190, 72, 148, 9, 191, 162, 179, 193, 189, 4, 53, 20, 62, 227, 97, 60, 62, 204, 167, 0, 190, 145, 120, 162, 62, 54, 151, 4, 190, 10, 27, 165, 62, 12, 21, 132, 62, 78, 248, 95, 190, 47, 238, 80, 190, 224, 155, 228, 188, 157, 177, 14, 191, 117, 35, 145, 189, 10, 6, 114, 191, 94, 155, 80, 62, 131, 220, 154, 190, 28, 125, 165, 189, 140, 105, 219, 189, 229, 67, 163, 61, 236, 43, 12, 190, 102, 175, 170, 190, 13, 17, 26, 191, 5, 96, 174, 190, 140, 246, 49, 62, 199, 228, 21, 61, 189, 109, 9, 190, 226, 158, 152, 189, 16, 226, 41, 62, 4, 50, 150, 61, 133, 39, 188, 60, 160, 35, 113, 61, 177, 60, 34, 62, 214, 74, 221, 189, 93, 239, 72, 62, 11, 225, 158, 61, 170, 218, 210, 190, 100, 165, 52, 191, 38, 203, 120, 60, 156, 245, 74, 190, 68, 58, 253, 60, 28, 88, 56, 62, 230, 254, 130, 62, 196, 254, 31, 62, 206, 91, 188, 189, 123, 239, 29, 62, 56, 60, 144, 190, 162, 107, 215, 185, 219, 70, 241, 61, 38, 69, 234, 61, 51, 55, 98, 62, 49, 113, 209, 60, 165, 145, 13, 62, 34, 40, 89, 62, 198, 238, 76, 191, 125, 3, 209, 61, 191, 166, 100, 62, 16, 124, 2, 62, 129, 184, 174, 190, 74, 97, 237, 61, 239, 90, 76, 189, 167, 115, 244, 62, 12, 234, 12, 191, 180, 232, 125, 62, 143, 176, 109, 62, 178, 86, 123, 189, 180, 141, 129, 190, 104, 215, 170, 62, 129, 35, 144, 190, 205, 207, 14, 191, 51, 117, 54, 190, 71, 21, 14, 61, 221, 70, 161, 190, 31, 23, 153, 190, 160, 64, 38, 62, 231, 119, 202, 62, 51, 68, 152, 190, 250, 232, 2, 62, 92, 131, 247, 189, 52, 14, 113, 189, 211, 98, 130, 62, 72, 37, 176, 62, 128, 62, 142, 61, 132, 126, 202, 190, 147, 147, 48, 62, 185, 93, 80, 62, 77, 140, 103, 190, 247, 113, 108, 61, 60, 53, 131, 62, 143, 0, 67, 62, 231, 64, 32, 190, 240, 92, 96, 190, 34, 166, 243, 190, 148, 55, 36, 63, 149, 30, 132, 190, 163, 8, 181, 62, 121, 35, 165, 62, 243, 101, 236, 188, 96, 98, 165, 62, 128, 217, 29, 190, 147, 189, 111, 189, 47, 51, 201, 186, 14, 20, 148, 61, 158, 186, 100, 190, 220, 149, 136, 190, 30, 228, 55, 190, 158, 152, 163, 62, 9, 116, 180, 188, 133, 39, 93, 189, 64, 119, 203, 61, 145, 209, 12, 190, 220, 99, 220, 189, 95, 49, 183, 189, 29, 136, 145, 189, 218, 73, 200, 188, 131, 184, 141, 61, 204, 9, 44, 190, 103, 174, 182, 189, 248, 227, 235, 189, 229, 21, 16, 190, 199, 124, 186, 60, 164, 15, 36, 190, 175, 221, 0, 60, 149, 225, 238, 189, 155, 92, 73, 188, 177, 149, 13, 189, 237, 112, 1, 62, 224, 113, 18, 62, 115, 193, 51, 60, 23, 120, 42, 190, 127, 133, 59, 60, 177, 243, 161, 189, 189, 130, 39, 190, 51, 146, 11, 190, 170, 19, 6, 190, 81, 46, 158, 189, 15, 103, 11, 60, 212, 176, 32, 62, 192, 73, 117, 189, 13, 116, 13, 191, 219, 96, 41, 61, 10, 244, 205, 189, 185, 15, 66, 61, 245, 157, 107, 62, 71, 175, 25, 189, 93, 114, 141, 190, 219, 248, 12, 189, 246, 186, 93, 62, 140, 161, 243, 190, 182, 48, 152, 189, 22, 250, 18, 62, 125, 156, 9, 62, 129, 56, 160, 189, 198, 128, 169, 61, 81, 49, 104, 190, 45, 156, 95, 190, 203, 125, 113, 62, 155, 190, 243, 189, 165, 219, 12, 190, 232, 193, 12, 191, 210, 179, 237, 188, 130, 28, 144, 62, 124, 178, 61, 191, 31, 79, 44, 190, 121, 216, 51, 62, 174, 63, 54, 62, 215, 66, 110, 190, 146, 189, 74, 191, 146, 41, 18, 61, 159, 169, 255, 62, 151, 218, 143, 190, 62, 164, 212, 190, 132, 206, 224, 61, 130, 159, 249, 189, 209, 59, 170, 190, 28, 223, 8, 190, 141, 132, 24, 190, 189, 1, 3, 189, 43, 180, 135, 190, 147, 45, 18, 62, 101, 49, 17, 62, 254, 236, 48, 62, 215, 153, 151, 190, 198, 190, 92, 190, 167, 50, 163, 61, 38, 15, 2, 62, 74, 132, 179, 189, 238, 161, 57, 62, 11, 230, 70, 189, 179, 62, 137, 62, 187, 0, 39, 62, 243, 142, 67, 190, 141, 248, 191, 188, 209, 170, 244, 189, 52, 234, 157, 189, 238, 134, 86, 62, 199, 245, 72, 62, 181, 5, 158, 190, 81, 151, 178, 189, 70, 6, 154, 60, 94, 132, 133, 62, 177, 216, 198, 61, 81, 229, 113, 61, 195, 183, 96, 191, 48, 25, 61, 62, 168, 233, 167, 190, 24, 175, 195, 61, 145, 109, 228, 61, 57, 37, 147, 190, 78, 177, 50, 61, 31, 44, 199, 60, 132, 97, 72, 62, 206, 38, 249, 189, 51, 173, 240, 189, 238, 186, 205, 62, 236, 115, 10, 62, 104, 205, 36, 190, 172, 14, 122, 62, 239, 235, 0, 191, 206, 36, 131, 190, 116, 57, 163, 62, 49, 53, 51, 189, 185, 243, 154, 61, 39, 135, 197, 190, 230, 121, 54, 190, 33, 110, 100, 189, 39, 229, 192, 190, 231, 219, 171, 190, 253, 48, 147, 61, 254, 147, 189, 62, 215, 250, 177, 189, 127, 150, 42, 191, 156, 154, 152, 60, 221, 167, 170, 62, 116, 150, 126, 190, 217, 4, 188, 190, 107, 217, 24, 61, 61, 190, 175, 190, 29, 68, 173, 190, 16, 214, 182, 62, 26, 155, 25, 191, 12, 143, 187, 190, 41, 48, 236, 61, 214, 136, 6, 61, 66, 164, 89, 191, 14, 76, 116, 61, 64, 180, 134, 62, 3, 5, 129, 187, 24, 148, 211, 189, 99, 7, 160, 62, 239, 154, 78, 190, 64, 141, 141, 190, 123, 66, 93, 62, 255, 49, 194, 190, 228, 166, 136, 62, 243, 59, 167, 190, 254, 2, 254, 190, 107, 89, 236, 61, 36, 101, 82, 191, 121, 85, 219, 190, 87, 160, 105, 59, 186, 147, 129, 62, 57, 114, 134, 190, 28, 94, 8, 191, 162, 86, 154, 62, 120, 31, 226, 62, 196, 55, 47, 191, 7, 226, 215, 188, 164, 176, 32, 61, 16, 99, 22, 62, 223, 144, 22, 191, 95, 211, 246, 189, 79, 71, 32, 190, 81, 69, 158, 60, 6, 180, 197, 190, 243, 78, 165, 189, 44, 3, 23, 62, 51, 236, 164, 62, 117, 200, 90, 191, 139, 166, 88, 62, 137, 67, 42, 62, 92, 113, 165, 62, 117, 125, 91, 190, 125, 103, 166, 62, 186, 74, 202, 61, 173, 176, 8, 187, 220, 144, 84, 189, 127, 6, 47, 60, 167, 108, 201, 61, 50, 169, 176, 61, 69, 243, 238, 60, 247, 212, 0, 62, 214, 253, 116, 190, 84, 158, 46, 191, 113, 76, 6, 62, 215, 40, 74, 62, 212, 235, 29, 190, 29, 226, 108, 190, 148, 65, 64, 62, 121, 124, 20, 62, 53, 250, 7, 62, 121, 192, 198, 189, 123, 168, 222, 190, 60, 112, 65, 61, 202, 228, 34, 191, 32, 61, 90, 189, 127, 131, 247, 190, 177, 69, 237, 60, 45, 228, 36, 189, 31, 17, 184, 62, 200, 133, 52, 191, 103, 177, 143, 190, 84, 220, 251, 61, 209, 112, 92, 62, 36, 12, 129, 190, 250, 94, 96, 62, 59, 99, 146, 61, 218, 107, 70, 61, 122, 43, 175, 190, 170, 168, 31, 187, 198, 216, 83, 190, 48, 245, 9, 60, 187, 131, 243, 61, 127, 151, 203, 60, 22, 183, 123, 60, 23, 0, 68, 191, 175, 136, 219, 189, 215, 91, 3, 62, 139, 67, 12, 62, 166, 46, 140, 188, 53, 87, 59, 62, 59, 63, 10, 191, 133, 143, 173, 188, 148, 222, 2, 190, 250, 89, 61, 61, 73, 103, 83, 62, 128, 94, 223, 189, 141, 213, 13, 62, 187, 188, 98, 188, 6, 231, 25, 62, 230, 230, 103, 189, 189, 232, 114, 61, 50, 2, 224, 61, 233, 218, 16, 61, 199, 38, 1, 62, 174, 162, 54, 62, 241, 196, 30, 191, 46, 171, 47, 190, 28, 92, 152, 62, 57, 244, 13, 190, 16, 104, 98, 187, 247, 37, 187, 190, 255, 76, 168, 189, 193, 153, 161, 186, 6, 11, 16, 191, 142, 43, 187, 190, 102, 90, 123, 188, 5, 34, 219, 189, 44, 54, 213, 189, 227, 172, 71, 191, 33, 62, 68, 62, 129, 194, 122, 62, 154, 106, 48, 61, 234, 126, 134, 62, 121, 176, 38, 190, 222, 93, 26, 190, 191, 130, 246, 189, 191, 237, 73, 188, 46, 139, 117, 189, 55, 32, 75, 62, 85, 62, 50, 62, 118, 109, 158, 61, 116, 122, 214, 62, 71, 239, 37, 188, 28, 13, 161, 190, 31, 68, 11, 62, 122, 50, 192, 62, 249, 83, 69, 62, 80, 220, 5, 191, 185, 190, 223, 61, 24, 28, 88, 190, 25, 204, 54, 63, 252, 156, 33, 191, 245, 48, 51, 62, 49, 16, 70, 62, 3, 35, 85, 62, 233, 200, 182, 190, 4, 153, 185, 62, 160, 90, 86, 190, 113, 121, 211, 190, 182, 249, 254, 189, 14, 6, 178, 62, 88, 47, 42, 190, 48, 114, 11, 191, 57, 138, 168, 62, 211, 207, 53, 62, 30, 188, 143, 190, 44, 49, 197, 62, 91, 72, 129, 190, 51, 51, 226, 189, 24, 202, 234, 61, 91, 183, 184, 62, 161, 130, 3, 189, 20, 66, 62, 190, 110, 173, 83, 61, 100, 35, 176, 62, 161, 196, 55, 191, 46, 153, 77, 62, 106, 106, 16, 62, 186, 227, 140, 62, 212, 234, 172, 189, 70, 238, 147, 62, 84, 58, 46, 59, 68, 50, 227, 62, 102, 178, 207, 190, 228, 251, 241, 62, 31, 79, 246, 61, 148, 41, 60, 62, 238, 74, 3, 63, 225, 3, 159, 62, 244, 135, 119, 190, 106, 74, 57, 191, 19, 115, 135, 61, 84, 244, 77, 61, 67, 44, 145, 190, 154, 17, 11, 190, 149, 172, 138, 62, 51, 216, 226, 189, 109, 83, 199, 62, 92, 65, 73, 190, 48, 224, 57, 190, 57, 239, 92, 189, 58, 127, 0, 192, 56, 170, 185, 190, 6, 75, 184, 62, 240, 102, 4, 61, 68, 191, 171, 61, 96, 111, 33, 62, 3, 98, 146, 189, 47, 172, 70, 191, 228, 18, 2, 191, 173, 146, 127, 61, 86, 83, 122, 191, 181, 192, 37, 190, 10, 147, 140, 190, 211, 77, 143, 190, 55, 155, 23, 61, 146, 119, 148, 190, 20, 18, 151, 62, 179, 160, 111, 60, 12, 214, 145, 190, 33, 4, 122, 190, 37, 229, 50, 61, 155, 191, 185, 189, 193, 179, 110, 190, 253, 71, 107, 189, 255, 76, 24, 188, 137, 21, 110, 190, 205, 100, 247, 187, 17, 178, 135, 191, 215, 237, 211, 60, 189, 214, 143, 190, 132, 184, 128, 188, 105, 251, 88, 62, 213, 195, 148, 189, 43, 240, 140, 190, 12, 178, 181, 61, 22, 208, 147, 62, 89, 212, 104, 190, 178, 189, 188, 189, 216, 201, 166, 61, 191, 125, 1, 62, 206, 75, 226, 189, 72, 136, 168, 186, 102, 67, 168, 190, 157, 69, 94, 190, 83, 53, 143, 62, 116, 238, 177, 189, 192, 237, 82, 190, 119, 65, 196, 190, 185, 173, 140, 189, 232, 33, 223, 59, 96, 143, 218, 190, 249, 37, 186, 190, 228, 61, 176, 61, 150, 39, 17, 62, 42, 226, 154, 189, 182, 143, 23, 191, 62, 177, 15, 189, 38, 12, 239, 62, 38, 181, 185, 190, 116, 195, 52, 189, 89, 78, 8, 61, 2, 103, 170, 188, 47, 223, 120, 61, 157, 76, 1, 62, 59, 146, 48, 62, 133, 218, 206, 58, 206, 104, 253, 59, 30, 204, 6, 190, 145, 176, 198, 61, 109, 235, 4, 189, 92, 174, 2, 62, 51, 152, 3, 190, 87, 126, 110, 188, 170, 53, 4, 60, 21, 10, 17, 190, 255, 89, 141, 189, 108, 101, 144, 58, 155, 205, 5, 62, 48, 163, 26, 190, 163, 11, 168, 61, 217, 198, 14, 190, 228, 155, 98, 189, 54, 170, 240, 59, 198, 206, 72, 61, 140, 67, 40, 190, 212, 241, 252, 189, 95, 128, 182, 189, 112, 170, 92, 189, 254, 24, 185, 186, 10, 102, 62, 189, 47, 79, 196, 61, 235, 172, 12, 62, 56, 137, 207, 189, 3, 106, 52, 190, 215, 60, 251, 61, 171, 121, 128, 62, 52, 81, 178, 62, 207, 192, 54, 191, 31, 43, 169, 61, 239, 45, 188, 189, 78, 119, 195, 190, 165, 208, 46, 191, 209, 238, 127, 190, 255, 58, 250, 189, 130, 170, 98, 59, 211, 199, 63, 61, 192, 55, 242, 190, 38, 25, 26, 61, 120, 131, 140, 61, 6, 28, 67, 62, 123, 11, 210, 189, 239, 94, 188, 189, 152, 253, 165, 62, 43, 183, 128, 62, 145, 10, 133, 189, 135, 52, 108, 189, 40, 126, 230, 190, 231, 152, 222, 190, 115, 28, 13, 190, 60, 182, 41, 62, 176, 79, 39, 191, 96, 36, 153, 62, 206, 186, 165, 61, 221, 10, 7, 62, 123, 225, 114, 190, 105, 24, 76, 61, 159, 93, 199, 61, 222, 62, 2, 188, 199, 152, 48, 191, 3, 33, 216, 189, 89, 45, 218, 59, 43, 213, 220, 61, 35, 156, 15, 62, 46, 71, 59, 189, 249, 160, 50, 191, 19, 221, 74, 190, 149, 54, 129, 189, 98, 16, 96, 62, 171, 71, 154, 189, 174, 96, 118, 60, 242, 76, 32, 62, 233, 121, 133, 190, 204, 164, 5, 61, 91, 169, 249, 61, 8, 145, 195, 190, 23, 223, 19, 190, 23, 41, 81, 62, 5, 90, 169, 189, 229, 79, 36, 189, 49, 113, 153, 190, 127, 186, 73, 60, 108, 29, 46, 189, 248, 48, 178, 189, 96, 219, 84, 62, 166, 232, 203, 61, 195, 213, 92, 190, 21, 93, 26, 190, 220, 223, 168, 189, 125, 254, 23, 190, 223, 142, 218, 61, 248, 27, 249, 61, 246, 64, 31, 62, 21, 24, 13, 62, 219, 129, 142, 61, 6, 159, 177, 188, 192, 117, 64, 62, 223, 168, 168, 190, 91, 73, 119, 62, 133, 195, 4, 62, 8, 210, 48, 61, 243, 144, 235, 189, 224, 176, 116, 62, 197, 43, 157, 61, 27, 217, 68, 62, 93, 148, 68, 190, 165, 137, 89, 189, 205, 63, 146, 61, 179, 37, 195, 62, 56, 189, 183, 60, 43, 141, 126, 62, 164, 53, 120, 189, 72, 198, 81, 190, 128, 76, 60, 188, 135, 24, 79, 60, 212, 43, 154, 61, 3, 145, 140, 61, 21, 7, 205, 59, 92, 168, 45, 191, 153, 67, 217, 61, 21, 150, 212, 189, 174, 140, 236, 187, 149, 114, 154, 62, 189, 151, 146, 190, 185, 194, 8, 190, 221, 77, 237, 189, 1, 29, 133, 62, 241, 93, 89, 188, 209, 55, 206, 189, 231, 76, 168, 62, 145, 19, 18, 190, 25, 228, 131, 189, 46, 184, 85, 62, 11, 103, 149, 62, 154, 215, 194, 189, 253, 61, 126, 62, 63, 57, 211, 190, 194, 237, 196, 62, 232, 228, 91, 189, 227, 204, 132, 190, 212, 89, 172, 189, 206, 158, 56, 191, 194, 110, 185, 190, 140, 91, 105, 62, 78, 45, 142, 62, 61, 21, 88, 190, 101, 182, 9, 191, 157, 95, 212, 62, 137, 81, 51, 62, 44, 162, 190, 190, 247, 205, 28, 190, 112, 176, 95, 61, 57, 252, 10, 62, 10, 8, 51, 190, 142, 80, 150, 189, 81, 134, 70, 191, 2, 26, 53, 189, 215, 54, 28, 191, 226, 184, 67, 189, 46, 76, 27, 62, 13, 152, 228, 61, 222, 8, 97, 191, 89, 100, 57, 190, 173, 197, 255, 61, 85, 80, 148, 62, 33, 222, 150, 190, 244, 181, 149, 62, 11, 119, 20, 190, 61, 101, 201, 62, 74, 247, 144, 189, 136, 22, 59, 189, 162, 105, 135, 190, 73, 84, 228, 187, 214, 62, 215, 61, 198, 110, 141, 62, 99, 56, 112, 190, 50, 150, 102, 191, 108, 149, 236, 61, 6, 134, 130, 62, 165, 183, 10, 190, 155, 97, 74, 190, 144, 163, 87, 189, 221, 251, 163, 61, 169, 134, 29, 190, 138, 140, 113, 189, 160, 214, 4, 191, 68, 24, 242, 61, 232, 10, 19, 189, 241, 183, 109, 188, 141, 136, 57, 62, 172, 43, 30, 189, 9, 79, 141, 189, 56, 93, 180, 62, 87, 2, 130, 191, 139, 48, 39, 62, 20, 148, 82, 62, 213, 63, 49, 62, 246, 9, 41, 189, 243, 109, 31, 61, 171, 22, 182, 60, 202, 118, 7, 62, 215, 193, 2, 59, 53, 50, 163, 62, 94, 155, 206, 60, 48, 165, 221, 61, 184, 154, 88, 61, 62, 131, 164, 61, 116, 72, 42, 189, 165, 212, 22, 191, 99, 27, 49, 62, 42, 173, 135, 189, 50, 141, 176, 190, 148, 251, 165, 190, 183, 226, 122, 62, 155, 69, 140, 61, 14, 180, 161, 189, 11, 19, 175, 189, 69, 252, 48, 190, 78, 39, 181, 189, 90, 246, 57, 61, 154, 165, 16, 62, 9, 123, 71, 189, 190, 44, 250, 189, 252, 181, 33, 62, 134, 248, 31, 190, 7, 131, 191, 189, 46, 147, 227, 189, 142, 128, 34, 190, 172, 205, 170, 61, 162, 232, 29, 190, 87, 126, 185, 61, 236, 114, 14, 190, 89, 10, 171, 188, 92, 214, 16, 60, 23, 227, 234, 189, 28, 228, 108, 61, 168, 7, 6, 62, 174, 34, 5, 190, 123, 37, 25, 62, 149, 100, 43, 190, 54, 32, 34, 62, 218, 252, 11, 62, 224, 238, 200, 189, 193, 246, 96, 187, 244, 135, 15, 189, 190, 29, 227, 189, 105, 94, 167, 60, 45, 32, 15, 62, 88, 60, 155, 190, 235, 230, 131, 188, 116, 82, 25, 62, 120, 24, 151, 191, 190, 99, 130, 61, 230, 58, 16, 62, 61, 203, 28, 190, 242, 233, 46, 190, 14, 80, 207, 187, 38, 125, 177, 62, 197, 23, 226, 190, 233, 164, 157, 60, 212, 137, 186, 61, 192, 1, 185, 190, 18, 209, 244, 190, 30, 204, 142, 62, 38, 108, 220, 189, 99, 148, 40, 62, 173, 92, 50, 190, 82, 47, 220, 189, 44, 111, 101, 62, 236, 164, 137, 191, 133, 129, 65, 191, 53, 14, 95, 61, 48, 35, 175, 62, 231, 20, 158, 60, 209, 242, 142, 191, 214, 160, 200, 61, 126, 154, 93, 62, 144, 230, 253, 190, 152, 39, 49, 61, 85, 214, 241, 62, 76, 209, 32, 189, 230, 77, 77, 190, 21, 204, 118, 62, 242, 245, 8, 192, 160, 11, 222, 190, 220, 87, 212, 62, 53, 250, 21, 191, 224, 89, 10, 190, 123, 141, 162, 190, 5, 5, 180, 190, 53, 119, 128, 191, 37, 215, 149, 190, 231, 224, 9, 191, 78, 195, 142, 60, 192, 157, 97, 190, 154, 60, 86, 189, 134, 81, 54, 190, 126, 51, 234, 62, 64, 196, 137, 190, 88, 132, 253, 61, 89, 188, 121, 190, 20, 218, 131, 190, 106, 248, 166, 190, 203, 6, 133, 60, 82, 230, 81, 189, 188, 220, 227, 189, 85, 79, 48, 190, 204, 233, 201, 60, 245, 30, 23, 62, 152, 118, 195, 190, 230, 49, 130, 190, 229, 133, 153, 190, 64, 215, 107, 62, 241, 62, 150, 190, 43, 83, 100, 189, 10, 20, 40, 190, 6, 78, 20, 62, 252, 169, 89, 62, 90, 65, 141, 190, 225, 0, 61, 62, 7, 55, 232, 62, 137, 142, 233, 190, 14, 127, 114, 62, 109, 176, 234, 61, 83, 57, 88, 62, 195, 192, 110, 62, 127, 152, 81, 61, 149, 25, 1, 62, 68, 178, 188, 189, 19, 197, 179, 188, 98, 207, 51, 62, 42, 231, 134, 190, 40, 30, 196, 189, 225, 81, 189, 189, 207, 93, 126, 61, 66, 132, 6, 190, 16, 73, 217, 190, 191, 36, 144, 189, 107, 170, 113, 62, 225, 73, 176, 190, 85, 113, 135, 190, 223, 190, 150, 61};
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
                alignas(float) const unsigned char memory[] = {237, 110, 65, 61, 173, 100, 29, 188, 237, 17, 45, 190, 27, 170, 15, 62, 166, 214, 86, 62, 87, 182, 165, 189, 103, 202, 222, 61, 240, 193, 90, 62, 105, 172, 44, 190, 176, 122, 67, 190, 188, 2, 72, 61, 100, 58, 56, 62, 205, 127, 232, 61, 176, 21, 37, 62, 169, 24, 4, 62, 68, 136, 216, 189, 62, 22, 34, 62, 180, 102, 193, 61, 41, 58, 177, 61, 151, 159, 235, 188, 209, 155, 234, 61, 184, 115, 244, 189, 140, 84, 124, 189, 15, 14, 242, 189, 56, 231, 212, 62, 86, 3, 22, 62, 221, 109, 24, 189, 113, 113, 180, 61, 152, 77, 250, 189, 202, 4, 151, 61, 236, 169, 165, 61, 135, 74, 91, 61};
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
                alignas(float) const unsigned char memory[] = {242, 196, 117, 191, 70, 18, 19, 63, 23, 135, 34, 189, 167, 249, 144, 190, 101, 116, 200, 62, 23, 161, 201, 62, 19, 81, 25, 190, 165, 182, 18, 191, 61, 28, 74, 191, 211, 226, 238, 189, 110, 244, 233, 62, 117, 106, 156, 60, 231, 99, 158, 62, 12, 246, 109, 63, 253, 4, 236, 190, 11, 227, 215, 190, 14, 89, 51, 62, 38, 150, 198, 190, 3, 123, 79, 191, 238, 104, 165, 63, 39, 48, 4, 63, 225, 62, 211, 189, 233, 167, 4, 191, 85, 174, 206, 189, 198, 184, 151, 189, 150, 138, 36, 63, 123, 141, 240, 188, 211, 207, 165, 190, 27, 183, 27, 62, 197, 121, 133, 63, 183, 99, 95, 63, 40, 153, 102, 190, 75, 207, 241, 189, 254, 104, 249, 61, 88, 97, 240, 61, 49, 168, 190, 190, 21, 154, 132, 190, 226, 217, 201, 189, 199, 98, 65, 190, 188, 109, 19, 62, 79, 201, 141, 62, 223, 63, 10, 61, 106, 103, 35, 189, 148, 18, 28, 190, 227, 127, 133, 62, 28, 29, 138, 189, 48, 88, 245, 189, 194, 13, 145, 62, 93, 22, 47, 190, 160, 4, 195, 62, 245, 89, 204, 61, 174, 173, 106, 189, 204, 91, 196, 61, 97, 152, 137, 189, 238, 249, 47, 188, 49, 94, 32, 189, 72, 254, 196, 190, 116, 118, 118, 62, 207, 82, 19, 63, 71, 33, 41, 189, 13, 200, 14, 189, 124, 182, 246, 61, 226, 31, 136, 187, 179, 109, 86, 62};
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
                alignas(float) const unsigned char memory[] = {148, 143, 7, 190, 161, 196, 163, 190};
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
    alignas(float) const unsigned char memory[] = {146, 149, 54, 191, 14, 128, 3, 190, 120, 138, 129, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {236, 248, 223, 191, 172, 138, 54, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0039/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}