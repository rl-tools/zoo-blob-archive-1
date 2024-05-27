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
                alignas(float) const unsigned char memory[] = {155, 249, 112, 62, 81, 182, 53, 61, 44, 80, 62, 62, 53, 120, 221, 190, 125, 203, 210, 60, 132, 13, 13, 63, 134, 23, 183, 189, 127, 1, 57, 63, 45, 41, 248, 190, 94, 159, 173, 190, 151, 7, 16, 60, 100, 218, 243, 190, 117, 208, 107, 191, 132, 134, 35, 63, 252, 249, 88, 61, 27, 23, 7, 190, 234, 35, 38, 63, 174, 40, 75, 191, 105, 5, 156, 190, 196, 205, 47, 63, 200, 51, 36, 190, 248, 8, 2, 191, 106, 20, 29, 191, 74, 208, 246, 62, 119, 128, 226, 189, 179, 105, 41, 190, 129, 163, 251, 190, 130, 60, 230, 62, 23, 73, 225, 62, 214, 164, 104, 62, 69, 245, 40, 63, 154, 234, 251, 190, 14, 63, 205, 61, 99, 64, 252, 189, 38, 255, 165, 189, 69, 27, 214, 62, 60, 96, 222, 190, 195, 215, 176, 62, 41, 249, 22, 62, 34, 166, 3, 63, 5, 210, 155, 62, 183, 96, 141, 62, 24, 33, 27, 63, 224, 102, 40, 191, 162, 197, 43, 62, 184, 230, 162, 190, 152, 236, 26, 191, 225, 169, 193, 190, 142, 65, 48, 63, 207, 43, 82, 62, 79, 231, 194, 62, 228, 8, 120, 62, 87, 160, 204, 190, 55, 142, 9, 63, 228, 132, 137, 190, 33, 143, 227, 190, 179, 70, 201, 62, 211, 12, 169, 190, 118, 47, 237, 62, 14, 113, 185, 62, 117, 120, 218, 190, 45, 181, 129, 190, 242, 103, 31, 63, 94, 214, 139, 190, 146, 84, 175, 190, 192, 238, 208, 189, 196, 247, 16, 63, 112, 93, 9, 191, 57, 24, 253, 190, 202, 129, 155, 190, 71, 5, 83, 63, 17, 242, 144, 190, 28, 170, 1, 62, 221, 200, 229, 61, 9, 176, 38, 191, 142, 15, 25, 63, 69, 174, 19, 63, 112, 185, 183, 62, 224, 106, 83, 63, 216, 10, 191, 190, 171, 226, 28, 190, 144, 77, 50, 63, 140, 252, 205, 62, 244, 36, 35, 62, 32, 76, 41, 63, 101, 183, 79, 190, 97, 203, 1, 61, 20, 31, 147, 190, 127, 251, 53, 191, 106, 145, 13, 190, 137, 107, 7, 63, 187, 22, 135, 191, 228, 133, 149, 190, 138, 125, 47, 191, 126, 64, 82, 190, 104, 57, 0, 61};
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
                alignas(float) const unsigned char memory[] = {142, 58, 46, 191, 254, 10, 12, 190, 92, 27, 160, 62, 123, 1, 51, 190, 136, 95, 239, 62, 186, 243, 235, 60, 215, 219, 189, 61, 215, 249, 212, 190, 51, 155, 51, 62, 80, 5, 88, 190, 205, 84, 199, 61, 245, 217, 126, 61, 87, 88, 34, 63, 198, 199, 141, 189, 3, 98, 251, 62, 142, 147, 114, 191, 234, 141, 19, 63, 215, 143, 254, 187, 78, 64, 243, 61, 104, 156, 248, 61, 32, 162, 52, 190, 178, 171, 179, 62, 88, 228, 27, 63, 244, 211, 34, 190, 25, 191, 236, 190, 7, 255, 89, 190, 189, 215, 211, 190, 71, 44, 178, 60, 228, 183, 227, 62, 74, 64, 152, 188, 247, 241, 226, 62, 136, 250, 34, 190};
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
                alignas(float) const unsigned char memory[] = {219, 69, 220, 190, 41, 161, 19, 62, 105, 170, 226, 188, 36, 228, 121, 59, 196, 134, 14, 62, 92, 243, 18, 62, 246, 183, 10, 62, 133, 179, 223, 61, 221, 147, 137, 189, 161, 63, 84, 61, 28, 135, 154, 61, 236, 103, 21, 62, 142, 141, 67, 188, 178, 8, 216, 189, 87, 197, 229, 60, 150, 94, 47, 62, 46, 108, 237, 189, 224, 77, 178, 189, 68, 159, 79, 61, 67, 246, 81, 60, 234, 43, 29, 62, 5, 0, 4, 60, 237, 129, 102, 61, 5, 201, 19, 190, 214, 214, 217, 61, 127, 247, 109, 190, 200, 12, 167, 190, 177, 57, 186, 189, 186, 140, 152, 61, 192, 177, 246, 189, 64, 117, 230, 189, 139, 76, 122, 189, 146, 124, 248, 61, 233, 96, 85, 190, 2, 108, 2, 190, 235, 245, 46, 190, 247, 183, 223, 189, 188, 144, 131, 189, 23, 170, 4, 189, 101, 2, 30, 190, 21, 177, 210, 189, 111, 157, 181, 61, 94, 77, 205, 61, 9, 56, 114, 187, 226, 82, 187, 60, 208, 246, 102, 188, 133, 240, 35, 189, 175, 163, 87, 189, 136, 60, 138, 61, 223, 92, 11, 189, 176, 119, 67, 189, 16, 155, 19, 189, 180, 186, 69, 190, 111, 77, 154, 189, 126, 252, 18, 189, 219, 74, 1, 190, 109, 116, 202, 61, 57, 88, 70, 190, 190, 90, 1, 188, 123, 190, 206, 188, 171, 133, 214, 187, 167, 111, 31, 190, 191, 250, 83, 190, 68, 225, 234, 189, 133, 144, 83, 189, 206, 138, 175, 189, 183, 239, 12, 189, 47, 72, 236, 188, 236, 92, 137, 190, 162, 23, 111, 62, 209, 240, 231, 190, 33, 215, 155, 62, 112, 155, 223, 61, 28, 22, 189, 190, 85, 9, 208, 62, 206, 114, 161, 189, 67, 152, 21, 191, 124, 27, 124, 190, 23, 78, 205, 61, 96, 207, 88, 62, 122, 196, 189, 61, 66, 50, 176, 189, 82, 201, 121, 188, 30, 13, 236, 188, 224, 132, 66, 190, 107, 94, 224, 189, 196, 13, 27, 60, 239, 109, 251, 189, 133, 31, 41, 189, 6, 66, 253, 189, 236, 212, 81, 190, 204, 13, 30, 62, 119, 101, 92, 62, 29, 16, 144, 189, 14, 137, 196, 62, 11, 81, 204, 188, 125, 113, 159, 190, 109, 102, 216, 189, 197, 209, 175, 189, 127, 39, 4, 191, 16, 1, 36, 62, 62, 134, 87, 191, 210, 137, 194, 189, 197, 146, 164, 62, 207, 170, 218, 190, 227, 37, 169, 190, 192, 145, 237, 185, 7, 120, 54, 190, 73, 169, 56, 62, 187, 1, 219, 190, 15, 161, 113, 62, 79, 58, 25, 190, 110, 150, 93, 60, 124, 225, 162, 190, 149, 254, 181, 62, 130, 127, 148, 61, 4, 173, 182, 189, 106, 119, 25, 189, 223, 31, 183, 190, 75, 139, 149, 190, 151, 158, 229, 188, 111, 112, 233, 190, 223, 179, 88, 61, 230, 96, 205, 190, 238, 241, 99, 62, 91, 148, 168, 61, 244, 231, 15, 190, 215, 226, 74, 62, 150, 20, 148, 190, 159, 215, 222, 61, 104, 165, 21, 62, 236, 93, 97, 61, 161, 156, 169, 189, 115, 76, 196, 189, 213, 107, 75, 189, 106, 26, 187, 188, 57, 222, 19, 62, 122, 209, 170, 189, 216, 232, 168, 60, 26, 162, 243, 61, 101, 121, 94, 61, 121, 96, 7, 62, 81, 250, 233, 61, 86, 254, 143, 59, 195, 240, 215, 61, 104, 2, 239, 189, 58, 254, 208, 61, 125, 55, 160, 61, 159, 114, 48, 190, 91, 0, 5, 62, 124, 31, 49, 62, 236, 229, 175, 188, 228, 133, 132, 190, 41, 112, 1, 190, 216, 247, 166, 61, 129, 98, 238, 189, 1, 18, 73, 62, 111, 40, 154, 189, 243, 227, 113, 61, 176, 131, 18, 62, 208, 57, 161, 189, 31, 187, 224, 189, 214, 77, 93, 189, 123, 176, 117, 190, 217, 54, 232, 62, 229, 56, 41, 61, 139, 10, 163, 62, 145, 192, 226, 61, 91, 25, 32, 190, 42, 3, 82, 189, 161, 236, 158, 190, 155, 192, 5, 62, 107, 214, 239, 61, 233, 162, 133, 190, 51, 228, 22, 61, 211, 5, 132, 190, 60, 140, 68, 60, 190, 247, 85, 190, 249, 123, 115, 61, 244, 168, 72, 62, 231, 179, 64, 189, 40, 189, 130, 189, 16, 161, 171, 190, 231, 213, 84, 62, 70, 94, 34, 62, 132, 86, 45, 187, 170, 161, 239, 189, 82, 131, 59, 190, 163, 21, 6, 191, 102, 17, 76, 190, 1, 11, 172, 190, 179, 72, 239, 61, 134, 1, 10, 62, 121, 25, 231, 189, 100, 242, 235, 189, 142, 184, 91, 60, 111, 7, 136, 61, 169, 149, 218, 61, 173, 216, 167, 188, 56, 130, 187, 61, 192, 16, 211, 61, 181, 26, 212, 61, 72, 49, 205, 61, 136, 242, 142, 61, 207, 12, 69, 60, 22, 253, 158, 61, 56, 24, 185, 61, 147, 36, 10, 190, 96, 4, 153, 189, 225, 169, 211, 189, 117, 249, 151, 188, 255, 233, 26, 61, 7, 116, 14, 189, 254, 187, 240, 189, 126, 43, 35, 188, 34, 129, 5, 190, 227, 69, 58, 60, 125, 228, 46, 190, 0, 148, 38, 190, 251, 227, 254, 61, 156, 80, 214, 187, 132, 19, 136, 61, 32, 224, 90, 189, 99, 25, 240, 188, 35, 168, 241, 61, 49, 139, 90, 60, 44, 201, 130, 189, 94, 117, 73, 191, 47, 142, 110, 62, 6, 164, 21, 191, 249, 31, 36, 61, 130, 60, 149, 62, 243, 103, 127, 190, 105, 134, 243, 59, 75, 33, 113, 62, 253, 223, 240, 61, 27, 228, 56, 61, 215, 106, 95, 190, 161, 29, 42, 62, 143, 197, 131, 190, 15, 140, 126, 189, 238, 106, 226, 188, 80, 229, 141, 62, 190, 147, 21, 62, 22, 36, 141, 62, 183, 223, 31, 62, 252, 118, 115, 61, 100, 237, 20, 190, 31, 188, 1, 189, 62, 192, 111, 190, 10, 206, 172, 62, 197, 68, 255, 189, 122, 150, 10, 61, 13, 49, 115, 190, 220, 203, 60, 62, 65, 237, 35, 61, 90, 15, 30, 190, 225, 226, 251, 61, 187, 202, 0, 190, 63, 148, 80, 61, 233, 30, 173, 188, 175, 90, 2, 62, 109, 114, 247, 189, 202, 127, 1, 62, 200, 14, 196, 189, 51, 27, 3, 61, 99, 235, 19, 190, 187, 51, 36, 189, 179, 80, 219, 61, 111, 173, 246, 189, 58, 105, 156, 61, 237, 53, 225, 61, 47, 52, 16, 190, 125, 45, 19, 190, 142, 69, 39, 190, 133, 69, 210, 189, 196, 100, 187, 61, 143, 150, 235, 189, 33, 128, 203, 187, 51, 109, 146, 61, 210, 146, 174, 60, 139, 248, 189, 189, 141, 40, 32, 62, 229, 159, 11, 59, 210, 215, 195, 61, 3, 232, 15, 60, 83, 225, 5, 190, 139, 122, 117, 188, 241, 207, 93, 190, 211, 189, 138, 188, 162, 7, 48, 62, 19, 39, 240, 61, 92, 101, 32, 62, 73, 255, 154, 188, 140, 35, 217, 61, 61, 71, 172, 61, 232, 123, 51, 189, 163, 157, 130, 190, 10, 92, 192, 61, 226, 80, 79, 189, 117, 196, 226, 61, 253, 181, 201, 188, 109, 130, 17, 62, 253, 130, 38, 189, 196, 63, 43, 62, 43, 213, 130, 189, 41, 75, 226, 188, 247, 125, 207, 189, 68, 54, 1, 62, 32, 65, 212, 61, 195, 204, 150, 61, 5, 152, 24, 190, 195, 97, 130, 190, 22, 251, 95, 190, 171, 180, 12, 190, 186, 97, 50, 60, 245, 105, 239, 61, 26, 162, 87, 189, 7, 239, 35, 62, 198, 87, 3, 60, 255, 211, 185, 189, 158, 59, 40, 190, 49, 117, 128, 61, 99, 238, 130, 189, 222, 91, 254, 190, 182, 35, 152, 61, 86, 75, 79, 190, 194, 113, 25, 190, 176, 25, 62, 189, 36, 204, 19, 190, 86, 102, 114, 190, 107, 97, 83, 190, 188, 136, 51, 190, 139, 96, 105, 190, 127, 119, 136, 190, 207, 68, 20, 62, 211, 214, 217, 190, 80, 0, 101, 60, 101, 207, 159, 188, 79, 209, 105, 61, 81, 120, 172, 189, 245, 203, 132, 190, 27, 164, 148, 61, 48, 207, 157, 190, 141, 225, 89, 62, 121, 250, 223, 61, 85, 244, 1, 63, 89, 53, 192, 190, 49, 118, 232, 61, 73, 166, 239, 189, 18, 207, 94, 61, 95, 197, 25, 189, 62, 241, 53, 61, 134, 107, 40, 62, 106, 66, 178, 190, 165, 223, 187, 189, 242, 142, 14, 190, 120, 2, 56, 190, 169, 65, 188, 61, 83, 100, 172, 61, 244, 193, 35, 190, 209, 57, 5, 62, 199, 179, 172, 61, 110, 38, 34, 61, 127, 14, 191, 60, 253, 182, 88, 62, 198, 133, 51, 62, 142, 28, 43, 61, 48, 10, 194, 61, 5, 10, 11, 62, 31, 252, 24, 189, 48, 94, 173, 61, 34, 200, 60, 62, 92, 155, 234, 189, 97, 24, 17, 190, 98, 236, 168, 190, 241, 233, 32, 188, 133, 104, 15, 60, 36, 32, 4, 190, 24, 57, 151, 62, 61, 88, 135, 62, 149, 198, 69, 61, 87, 63, 244, 60, 6, 225, 134, 58, 67, 206, 196, 61, 111, 83, 17, 60, 115, 11, 180, 189, 140, 153, 223, 60, 85, 62, 151, 189, 184, 111, 7, 190, 16, 138, 170, 59, 63, 177, 30, 62, 84, 193, 136, 59, 150, 25, 61, 61, 151, 186, 74, 60, 159, 100, 226, 60, 201, 157, 25, 190, 174, 146, 128, 190, 26, 109, 238, 61, 59, 83, 66, 189, 22, 38, 140, 190, 108, 218, 183, 189, 4, 44, 4, 62, 236, 174, 21, 190, 22, 212, 214, 189, 151, 220, 58, 189, 119, 22, 78, 62, 233, 80, 9, 61, 246, 144, 14, 62, 206, 253, 209, 189, 240, 53, 114, 62, 50, 129, 155, 189, 232, 151, 74, 189, 165, 108, 96, 189, 97, 122, 47, 62, 149, 3, 49, 189, 82, 230, 0, 191, 167, 2, 198, 189, 218, 254, 142, 62, 146, 12, 149, 189, 245, 253, 52, 62, 33, 156, 123, 62, 194, 224, 42, 60, 188, 138, 209, 190, 197, 69, 22, 189, 138, 66, 113, 189, 204, 204, 160, 189, 133, 20, 20, 61, 233, 252, 192, 61, 158, 246, 188, 189, 249, 63, 27, 190, 206, 155, 50, 189, 36, 158, 29, 62, 27, 128, 112, 60, 69, 77, 7, 190, 138, 52, 9, 62, 35, 202, 145, 61, 49, 153, 0, 190, 32, 190, 85, 62, 149, 66, 37, 62, 158, 77, 168, 190, 13, 107, 34, 62, 61, 80, 18, 61, 74, 243, 219, 61, 188, 38, 62, 62, 0, 85, 166, 60, 210, 42, 4, 62, 28, 38, 206, 189, 223, 213, 15, 191, 107, 147, 57, 62, 74, 143, 189, 190, 72, 148, 133, 191, 23, 134, 115, 62, 110, 209, 166, 191, 50, 155, 2, 190, 250, 211, 171, 61, 60, 215, 207, 190, 250, 223, 209, 190, 81, 32, 132, 62, 117, 151, 197, 188, 95, 221, 99, 62, 0, 220, 241, 190, 94, 93, 62, 62, 118, 250, 39, 190, 187, 251, 223, 189, 184, 70, 163, 190, 176, 61, 205, 62, 246, 189, 130, 62, 43, 233, 33, 190, 135, 226, 104, 62, 150, 168, 31, 190, 20, 94, 128, 190, 2, 120, 241, 189, 46, 116, 32, 191, 216, 249, 247, 61, 196, 195, 194, 190, 164, 38, 121, 62, 227, 106, 72, 187, 215, 180, 195, 61, 245, 207, 110, 62, 70, 229, 143, 190, 104, 214, 215, 188, 241, 39, 166, 190, 103, 78, 73, 188, 230, 244, 19, 190, 198, 25, 107, 190, 97, 198, 109, 60, 208, 133, 51, 61, 28, 15, 185, 190, 25, 216, 46, 190, 57, 74, 168, 62, 83, 196, 10, 62, 255, 164, 220, 60, 109, 32, 18, 62, 179, 71, 169, 61, 232, 250, 123, 189, 170, 57, 129, 62, 170, 130, 5, 61, 156, 215, 10, 62, 253, 102, 18, 188, 215, 154, 69, 62, 59, 127, 11, 190, 57, 10, 199, 60, 188, 88, 198, 189, 209, 83, 95, 190, 38, 104, 147, 60, 0, 13, 161, 190, 95, 216, 102, 62, 103, 255, 137, 62, 56, 140, 100, 62, 212, 93, 27, 189, 187, 171, 110, 188, 94, 1, 19, 189, 164, 23, 251, 60, 159, 218, 169, 189, 246, 235, 250, 189, 53, 203, 134, 60, 245, 107, 70, 189, 250, 40, 192, 61, 130, 153, 250, 189, 115, 157, 237, 61, 103, 92, 129, 61, 6, 117, 113, 189, 135, 64, 59, 61, 251, 6, 172, 189, 103, 20, 247, 189, 39, 185, 10, 190, 144, 13, 218, 61, 253, 144, 208, 61, 245, 240, 94, 61, 61, 132, 9, 190, 194, 79, 6, 62, 160, 161, 42, 61, 224, 157, 105, 190, 53, 240, 104, 61, 52, 190, 63, 188, 152, 236, 178, 189, 125, 247, 147, 189, 126, 181, 142, 189, 37, 96, 68, 190, 146, 229, 240, 189, 215, 133, 44, 190, 24, 14, 52, 190, 24, 239, 240, 189, 246, 77, 78, 61, 6, 45, 52, 191, 29, 185, 157, 62, 247, 243, 111, 188, 155, 54, 112, 62, 56, 148, 149, 189, 100, 213, 168, 62, 158, 234, 41, 191, 30, 223, 189, 62, 109, 110, 137, 61, 224, 157, 26, 190, 102, 121, 185, 190, 93, 25, 175, 62, 236, 12, 237, 62, 188, 80, 165, 190, 96, 149, 219, 190, 101, 28, 17, 190, 156, 188, 163, 59, 233, 245, 49, 190, 167, 66, 46, 191, 146, 110, 68, 191, 174, 14, 19, 62, 125, 185, 102, 58, 157, 51, 215, 61, 117, 221, 9, 191, 126, 29, 27, 61, 54, 163, 138, 188, 13, 225, 98, 62, 168, 209, 154, 62, 231, 241, 95, 61, 41, 75, 238, 189, 8, 45, 197, 62, 255, 207, 240, 187, 178, 187, 3, 190, 121, 177, 137, 62, 222, 23, 55, 190, 234, 198, 180, 62, 177, 11, 22, 187, 98, 218, 41, 62, 220, 220, 20, 191, 55, 14, 58, 62, 237, 75, 154, 61, 86, 109, 12, 188, 113, 22, 76, 190, 209, 7, 188, 62, 22, 241, 160, 62, 253, 0, 40, 191, 208, 195, 151, 190, 239, 168, 134, 62, 235, 111, 171, 62, 50, 59, 15, 190, 160, 71, 166, 60, 58, 197, 178, 190, 191, 194, 234, 188, 233, 212, 142, 189, 219, 127, 15, 62, 66, 18, 129, 187, 125, 66, 161, 62, 115, 99, 182, 62, 184, 116, 196, 60, 122, 16, 134, 60, 208, 218, 13, 62, 213, 45, 224, 188, 40, 128, 123, 62, 201, 1, 214, 190, 59, 122, 13, 190, 218, 104, 3, 190, 166, 186, 29, 190, 43, 86, 96, 190, 161, 71, 185, 189, 176, 175, 89, 190, 105, 37, 202, 62, 36, 172, 14, 61, 158, 64, 130, 190, 118, 253, 241, 62, 173, 145, 1, 61, 247, 25, 196, 190, 143, 116, 20, 190, 183, 69, 143, 62, 211, 61, 139, 62, 48, 17, 247, 61, 92, 160, 64, 190, 133, 172, 45, 188, 121, 2, 249, 61, 65, 83, 26, 61, 45, 204, 62, 62, 142, 31, 45, 62, 44, 14, 101, 190, 83, 122, 78, 62, 84, 61, 35, 190, 250, 77, 195, 189, 144, 224, 11, 61, 51, 7, 133, 62, 135, 100, 36, 62, 27, 46, 147, 62, 161, 14, 8, 190, 23, 111, 221, 189, 64, 54, 129, 190, 160, 133, 132, 188, 127, 41, 250, 189, 193, 27, 0, 61, 162, 190, 1, 190, 6, 128, 214, 190, 52, 234, 247, 62, 207, 26, 231, 61, 30, 179, 192, 190, 22, 140, 111, 62, 197, 213, 147, 190, 38, 153, 3, 191, 172, 222, 70, 190, 38, 234, 176, 62, 235, 246, 128, 62, 185, 7, 192, 186, 118, 63, 168, 188, 46, 123, 171, 60, 25, 30, 238, 189, 54, 200, 63, 190, 47, 11, 171, 189, 221, 35, 59, 62, 179, 117, 158, 189, 126, 227, 187, 62, 205, 234, 214, 190, 32, 187, 42, 62, 221, 105, 128, 189, 233, 8, 234, 60, 243, 222, 35, 62, 42, 37, 113, 62, 188, 139, 129, 190, 220, 201, 134, 190, 174, 143, 191, 61, 145, 38, 160, 61, 13, 130, 2, 190, 142, 235, 29, 62, 37, 233, 1, 62, 146, 5, 225, 61, 169, 138, 129, 190, 136, 25, 218, 61, 221, 198, 1, 189, 55, 55, 37, 186, 233, 210, 9, 62, 113, 180, 163, 61, 37, 200, 149, 61, 9, 135, 255, 189, 116, 175, 45, 61, 244, 78, 228, 61, 37, 249, 196, 61, 30, 32, 220, 189, 122, 200, 165, 60, 82, 212, 136, 189, 27, 146, 174, 61, 214, 24, 146, 189, 185, 53, 1, 189, 165, 14, 46, 189, 93, 251, 101, 187, 36, 104, 53, 190, 253, 91, 34, 62, 189, 213, 76, 59, 221, 70, 128, 61, 9, 63, 217, 61, 17, 235, 25, 62, 69, 204, 236, 189, 32, 211, 56, 62, 63, 194, 42, 61, 173, 220, 156, 188, 208, 143, 94, 62, 206, 225, 160, 60, 75, 199, 245, 189, 242, 77, 41, 190, 109, 241, 228, 189, 75, 146, 86, 190, 130, 52, 4, 62, 135, 92, 76, 61, 248, 179, 49, 190, 84, 59, 29, 190, 13, 198, 130, 61, 113, 206, 70, 188, 80, 211, 64, 62, 37, 208, 51, 190, 90, 189, 40, 62, 163, 162, 27, 189, 9, 233, 173, 61, 95, 220, 248, 189, 9, 172, 33, 62, 82, 174, 82, 190, 237, 228, 88, 61, 42, 23, 154, 187, 31, 97, 176, 190, 157, 72, 217, 189, 178, 83, 192, 189, 122, 7, 32, 57, 134, 6, 102, 62, 70, 109, 123, 61, 97, 76, 186, 60, 17, 5, 168, 189, 189, 22, 104, 62, 64, 149, 149, 62, 54, 204, 84, 61, 131, 241, 106, 62, 88, 28, 166, 61, 247, 116, 138, 187, 119, 92, 97, 188, 10, 228, 56, 62, 10, 232, 159, 190, 132, 91, 214, 187, 157, 243, 123, 62, 102, 67, 14, 190, 88, 72, 231, 60, 241, 16, 85, 62, 154, 212, 33, 62, 23, 2, 82, 188, 113, 179, 120, 187, 223, 182, 198, 189, 89, 38, 198, 188, 42, 11, 47, 190, 122, 68, 111, 190, 224, 21, 164, 61, 59, 72, 128, 62, 66, 52, 3, 190, 237, 195, 18, 191, 49, 70, 45, 189, 77, 123, 249, 190, 245, 125, 210, 189, 59, 70, 92, 190, 201, 119, 18, 189, 122, 8, 233, 60, 55, 95, 114, 61, 49, 138, 160, 188, 140, 102, 89, 61, 139, 123, 10, 191, 135, 216, 211, 189, 194, 240, 143, 189, 223, 159, 23, 190, 94, 237, 222, 61, 50, 4, 13, 190, 58, 227, 117, 190, 81, 223, 108, 190, 85, 37, 165, 190, 106, 138, 250, 188, 126, 231, 206, 190, 182, 86, 206, 61, 213, 139, 111, 190, 138, 42, 9, 190, 223, 5, 245, 189, 161, 49, 78, 190, 33, 61, 2, 59, 121, 14, 72, 190, 27, 92, 47, 189, 2, 176, 128, 190, 154, 5, 175, 62, 213, 143, 172, 61, 141, 11, 246, 62, 191, 134, 118, 190, 203, 235, 154, 62, 184, 79, 33, 189, 251, 103, 179, 61, 119, 185, 144, 190, 23, 18, 32, 190, 174, 165, 154, 188, 161, 17, 99, 189, 19, 31, 11, 62, 231, 171, 227, 188, 100, 232, 177, 60, 23, 27, 183, 189, 203, 27, 56, 190, 32, 136, 144, 60, 58, 91, 179, 189, 195, 184, 218, 61, 109, 193, 31, 60, 211, 205, 186, 61, 97, 230, 229, 189, 130, 213, 238, 189, 180, 196, 1, 62, 236, 233, 37, 61, 66, 55, 234, 189, 23, 176, 167, 61, 95, 206, 3, 190, 127, 209, 251, 61, 208, 79, 145, 189, 46, 212, 205, 189, 81, 244, 24, 60, 185, 37, 215, 189, 20, 225, 69, 189, 63, 102, 147, 188, 188, 17, 91, 189, 28, 117, 56, 61, 187, 190, 247, 189, 177, 77, 229, 60, 24, 99, 53, 189, 230, 40, 170, 188, 249, 58, 64, 61, 119, 169, 225, 190, 58, 81, 80, 190, 134, 80, 165, 189, 92, 127, 227, 189, 9, 104, 114, 61, 153, 210, 175, 188, 96, 233, 97, 189, 254, 46, 173, 189, 93, 205, 153, 61, 133, 78, 240, 61, 136, 247, 24, 60, 48, 244, 160, 61, 76, 177, 177, 62, 179, 24, 253, 189, 210, 61, 154, 61, 144, 185, 65, 62, 72, 72, 110, 62, 1, 119, 243, 61, 175, 224, 32, 188, 51, 207, 215, 189, 57, 97, 208, 189, 243, 93, 56, 190, 50, 165, 166, 189, 225, 199, 94, 62, 82, 62, 123, 190, 232, 227, 174, 62, 44, 73, 35, 62, 103, 110, 152, 61, 4, 0, 66, 61, 244, 176, 16, 190, 239, 26, 35, 189, 65, 97, 59, 190, 192, 100, 181, 61, 152, 212, 208, 60, 176, 151, 50, 189, 150, 1, 11, 61, 189, 146, 94, 62, 93, 111, 127, 190, 151, 9, 158, 60, 244, 89, 81, 61, 217, 189, 156, 189, 119, 14, 40, 61, 133, 172, 215, 61, 145, 193, 130, 62, 252, 229, 157, 60, 204, 247, 203, 187, 127, 161, 225, 189, 248, 158, 25, 62, 227, 68, 13, 188, 123, 245, 135, 189, 52, 43, 124, 61, 211, 99, 252, 189, 168, 128, 200, 61, 248, 217, 200, 189, 100, 193, 190, 188, 199, 185, 153, 61, 57, 160, 202, 60, 30, 81, 222, 61, 235, 202, 182, 61, 81, 143, 11, 61, 238, 15, 123, 190, 247, 13, 36, 188, 94, 61, 18, 190, 225, 56, 11, 190, 49, 152, 112, 61, 213, 68, 254, 188, 0, 243, 245, 59, 5, 87, 20, 189, 72, 89, 129, 61, 201, 159, 60, 189, 36, 39, 251, 189, 200, 80, 143, 189, 37, 190, 117, 190, 4, 225, 31, 61, 128, 130, 43, 190, 169, 132, 250, 189, 234, 19, 3, 190, 235, 30, 71, 190, 222, 184, 174, 61, 125, 60, 220, 61, 145, 249, 197, 61, 130, 189, 49, 62, 229, 228, 74, 189, 127, 178, 160, 189, 109, 55, 3, 190, 180, 89, 231, 189, 165, 74, 221, 188, 44, 167, 29, 190, 246, 177, 187, 188, 198, 236, 0, 190, 123, 7, 74, 190, 72, 91, 178, 61, 30, 190, 18, 60, 49, 87, 68, 61, 168, 83, 208, 61, 85, 99, 37, 62, 199, 211, 140, 189, 213, 232, 168, 60, 102, 166, 39, 62, 30, 144, 76, 59, 179, 93, 147, 190, 16, 216, 128, 62, 31, 1, 63, 190, 160, 56, 14, 62, 17, 35, 39, 62, 119, 118, 31, 189, 115, 130, 200, 189, 0, 89, 168, 61, 12, 162, 144, 188, 144, 92, 205, 62, 186, 45, 93, 60, 32, 136, 38, 61, 2, 226, 254, 61, 235, 216, 14, 62, 240, 230, 20, 189, 191, 249, 178, 61, 66, 190, 133, 62, 131, 49, 17, 190, 136, 46, 205, 61, 29, 164, 160, 60, 254, 61, 170, 189, 84, 91, 152, 61, 215, 138, 58, 190, 67, 26, 29, 189, 232, 79, 0, 62, 101, 206, 144, 189, 194, 109, 105, 62, 173, 12, 24, 62, 143, 3, 187, 61, 135, 64, 120, 60, 236, 244, 86, 190, 95, 228, 192, 61, 212, 23, 161, 60, 227, 121, 21, 190, 225, 26, 174, 189, 119, 184, 246, 61, 32, 104, 36, 189, 25, 12, 214, 61, 166, 229, 106, 189, 170, 226, 5, 190, 60, 213, 79, 62, 198, 77, 156, 188, 185, 253, 36, 62, 184, 45, 58, 62, 49, 22, 46, 190, 12, 178, 38, 61, 29, 5, 231, 189, 33, 5, 11, 62, 190, 120, 174, 60, 109, 217, 173, 189, 112, 3, 98, 62, 48, 34, 133, 189, 111, 70, 31, 60, 107, 82, 37, 189, 22, 93, 2, 190, 103, 146, 4, 62, 208, 105, 88, 62, 83, 129, 71, 190, 18, 69, 201, 61, 252, 164, 147, 189, 170, 159, 100, 189, 73, 214, 37, 189, 142, 24, 45, 61, 241, 172, 171, 188, 164, 247, 221, 61, 52, 86, 145, 61, 216, 122, 128, 61, 220, 241, 167, 188, 85, 89, 13, 62, 197, 252, 242, 189, 26, 149, 215, 188, 42, 173, 92, 189, 194, 202, 144, 188, 36, 4, 154, 188, 174, 34, 201, 61, 192, 109, 230, 189, 252, 138, 190, 189, 58, 250, 156, 188, 238, 49, 218, 60, 14, 206, 133, 61, 90, 200, 32, 189, 95, 185, 15, 190, 61, 190, 135, 187, 226, 76, 0, 190, 61, 244, 42, 190, 74, 130, 200, 189, 78, 200, 93, 61, 223, 111, 164, 189, 210, 186, 25, 188, 109, 13, 183, 189};
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
                alignas(float) const unsigned char memory[] = {215, 231, 53, 62, 95, 122, 10, 61, 19, 67, 139, 61, 75, 161, 150, 62, 209, 199, 105, 189, 5, 168, 31, 62, 137, 36, 39, 190, 36, 140, 119, 61, 140, 201, 97, 189, 188, 213, 243, 61, 135, 207, 102, 190, 91, 76, 141, 61, 104, 108, 120, 57, 211, 51, 101, 62, 198, 82, 157, 62, 236, 55, 193, 61, 158, 80, 105, 190, 64, 98, 5, 62, 79, 135, 55, 60, 199, 249, 229, 60, 223, 150, 38, 190, 25, 130, 94, 62, 74, 47, 166, 188, 20, 106, 60, 190, 188, 19, 116, 190, 194, 43, 54, 189, 79, 14, 184, 60, 237, 50, 170, 188, 152, 201, 180, 188, 81, 121, 235, 189, 95, 176, 154, 190, 135, 19, 237, 189};
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
                alignas(float) const unsigned char memory[] = {164, 61, 212, 60, 226, 47, 156, 61, 182, 67, 155, 62, 215, 63, 20, 63, 55, 189, 186, 188, 197, 64, 218, 62, 210, 115, 241, 61, 216, 26, 124, 62, 245, 127, 205, 59, 96, 56, 202, 187, 110, 100, 203, 190, 118, 166, 131, 190, 3, 102, 11, 61, 134, 209, 67, 190, 50, 112, 72, 63, 246, 181, 92, 190, 177, 9, 252, 60, 192, 169, 130, 191, 239, 159, 194, 190, 245, 71, 226, 62, 157, 70, 253, 62, 151, 96, 83, 186, 45, 245, 172, 59, 70, 120, 84, 62, 192, 94, 19, 191, 1, 105, 235, 189, 100, 232, 37, 190, 15, 40, 205, 189, 168, 56, 162, 61, 173, 72, 244, 61, 159, 13, 206, 61, 234, 251, 13, 189, 192, 41, 30, 190, 77, 90, 0, 62, 91, 9, 59, 190, 149, 62, 175, 61, 197, 97, 1, 190, 185, 165, 140, 188, 61, 45, 17, 190, 5, 232, 72, 190, 125, 118, 197, 189, 32, 166, 68, 190, 47, 81, 7, 62, 248, 137, 142, 61, 63, 154, 77, 62, 9, 112, 139, 190, 5, 15, 4, 62, 214, 22, 198, 189, 67, 75, 73, 61, 30, 98, 131, 61, 7, 104, 185, 61, 223, 96, 24, 190, 32, 108, 123, 62, 175, 216, 44, 190, 18, 17, 129, 189, 163, 55, 157, 61, 160, 231, 143, 62, 234, 109, 176, 189, 231, 11, 217, 60, 124, 172, 37, 58, 123, 224, 206, 61, 206, 210, 76, 187, 71, 219, 132, 61, 54, 74, 248, 61};
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
                alignas(float) const unsigned char memory[] = {17, 22, 79, 190, 59, 106, 56, 190};
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
    alignas(float) const unsigned char memory[] = {40, 96, 172, 60, 53, 176, 7, 64, 48, 19, 137, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {217, 32, 9, 192, 245, 15, 33, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0009/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}