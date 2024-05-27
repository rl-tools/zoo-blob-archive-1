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
                alignas(float) const unsigned char memory[] = {111, 81, 58, 191, 248, 32, 127, 63, 21, 160, 224, 62, 43, 199, 94, 190, 148, 207, 78, 191, 113, 100, 191, 62, 182, 149, 32, 63, 32, 149, 132, 63, 190, 65, 167, 62, 114, 202, 36, 63, 206, 63, 155, 191, 99, 33, 214, 190, 184, 60, 96, 190, 137, 60, 165, 189, 235, 185, 98, 190, 102, 126, 135, 62, 38, 179, 101, 191, 114, 11, 141, 190, 247, 190, 178, 190, 135, 183, 174, 191, 50, 110, 211, 190, 85, 72, 11, 191, 111, 37, 62, 63, 3, 234, 195, 189, 163, 226, 210, 190, 252, 214, 140, 190, 27, 228, 164, 190, 54, 251, 44, 62, 49, 100, 23, 63, 47, 52, 65, 190, 17, 88, 164, 62, 150, 85, 7, 63, 252, 237, 175, 190, 46, 82, 236, 62, 238, 213, 3, 191, 224, 103, 209, 187, 26, 80, 56, 191, 117, 251, 211, 63, 121, 152, 181, 62, 56, 54, 86, 189, 181, 109, 58, 63, 237, 22, 98, 63, 101, 231, 102, 190, 20, 176, 80, 63, 30, 195, 65, 190, 254, 132, 210, 62, 129, 1, 30, 63, 128, 100, 166, 190, 239, 215, 24, 62, 223, 15, 212, 191, 166, 28, 165, 190, 126, 114, 3, 63, 34, 170, 154, 62, 111, 5, 207, 62, 18, 252, 129, 191, 45, 88, 238, 190, 77, 0, 246, 188, 74, 184, 126, 191, 215, 159, 155, 62, 53, 242, 51, 188, 133, 140, 250, 62, 44, 96, 150, 62, 242, 34, 16, 63, 180, 34, 236, 190, 76, 82, 63, 63, 242, 192, 85, 62, 143, 151, 104, 61, 94, 199, 203, 191, 50, 194, 193, 190, 242, 248, 176, 62, 181, 12, 233, 61, 102, 201, 142, 188, 185, 241, 158, 62, 150, 143, 65, 191, 153, 8, 21, 62, 225, 219, 182, 62, 75, 181, 24, 190, 238, 114, 8, 191, 112, 231, 110, 191, 168, 52, 129, 190, 53, 48, 132, 60, 88, 241, 30, 61, 167, 3, 160, 189, 29, 97, 59, 191, 37, 6, 146, 190, 170, 7, 68, 191, 225, 220, 40, 190, 206, 242, 8, 63, 218, 251, 30, 190, 145, 66, 48, 63, 243, 152, 13, 190, 163, 120, 40, 191, 252, 193, 192, 62, 66, 199, 123, 190, 124, 196, 202, 62, 88, 90, 229, 61};
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
                alignas(float) const unsigned char memory[] = {235, 198, 3, 191, 179, 97, 218, 190, 42, 127, 152, 189, 247, 251, 3, 191, 76, 215, 161, 190, 180, 235, 129, 62, 159, 71, 228, 189, 4, 253, 4, 61, 74, 204, 9, 191, 169, 95, 39, 188, 119, 20, 28, 62, 110, 160, 64, 63, 77, 165, 134, 59, 72, 29, 135, 190, 35, 2, 46, 61, 64, 183, 96, 62, 82, 206, 58, 62, 128, 112, 152, 62, 88, 161, 170, 189, 128, 138, 152, 62, 120, 169, 103, 191, 53, 180, 26, 63, 37, 231, 239, 62, 177, 67, 0, 191, 24, 114, 69, 189, 248, 210, 150, 190, 206, 51, 113, 189, 241, 57, 198, 190, 130, 36, 168, 62, 251, 116, 46, 62, 240, 209, 142, 190, 172, 153, 161, 62};
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
                alignas(float) const unsigned char memory[] = {254, 219, 148, 190, 136, 58, 214, 188, 234, 136, 80, 190, 166, 235, 226, 190, 19, 210, 53, 61, 0, 224, 1, 62, 226, 165, 89, 62, 237, 226, 195, 61, 151, 226, 209, 189, 185, 29, 87, 60, 90, 125, 22, 188, 205, 130, 25, 189, 207, 69, 152, 61, 67, 28, 74, 189, 253, 23, 36, 190, 145, 188, 177, 61, 219, 241, 52, 61, 127, 77, 181, 190, 242, 32, 205, 62, 83, 70, 175, 62, 57, 67, 168, 190, 102, 160, 184, 62, 12, 98, 213, 189, 146, 215, 14, 62, 18, 212, 225, 190, 231, 104, 132, 190, 220, 29, 29, 62, 214, 32, 171, 61, 0, 152, 151, 62, 225, 161, 114, 190, 109, 7, 150, 189, 158, 236, 167, 62, 165, 135, 61, 62, 77, 109, 175, 61, 102, 161, 132, 190, 166, 5, 149, 62, 103, 149, 139, 190, 79, 190, 154, 189, 52, 153, 177, 190, 72, 71, 23, 190, 132, 178, 124, 191, 200, 77, 99, 190, 112, 238, 73, 190, 36, 111, 129, 62, 225, 134, 7, 60, 204, 130, 42, 189, 49, 5, 122, 62, 83, 12, 39, 190, 186, 4, 158, 190, 214, 179, 8, 190, 63, 150, 61, 189, 9, 170, 246, 189, 165, 75, 158, 190, 181, 232, 57, 190, 153, 108, 210, 61, 24, 188, 34, 62, 249, 209, 52, 62, 68, 241, 148, 62, 92, 2, 55, 62, 174, 153, 47, 190, 98, 232, 167, 62, 151, 115, 5, 190, 118, 125, 144, 62, 229, 32, 196, 60, 178, 121, 2, 190, 75, 250, 97, 185, 40, 186, 149, 190, 193, 39, 183, 189, 22, 163, 134, 62, 40, 246, 9, 62, 135, 204, 68, 189, 186, 191, 20, 62, 106, 127, 203, 62, 163, 1, 123, 61, 254, 169, 213, 61, 1, 101, 35, 190, 189, 63, 35, 61, 111, 170, 64, 190, 200, 12, 181, 60, 14, 142, 192, 189, 163, 127, 99, 190, 220, 31, 210, 190, 197, 182, 43, 62, 113, 125, 51, 62, 96, 1, 39, 190, 67, 38, 179, 189, 35, 140, 36, 189, 144, 72, 32, 190, 132, 156, 122, 190, 88, 80, 28, 188, 35, 57, 242, 189, 109, 39, 21, 62, 58, 47, 102, 61, 72, 75, 49, 190, 68, 80, 66, 190, 45, 30, 234, 189, 49, 156, 169, 190, 242, 110, 41, 190, 33, 102, 96, 62, 149, 231, 41, 191, 59, 146, 174, 59, 228, 188, 54, 189, 245, 67, 5, 61, 216, 201, 22, 62, 13, 236, 99, 62, 190, 146, 143, 59, 65, 222, 213, 60, 72, 122, 14, 62, 60, 186, 94, 191, 115, 41, 119, 190, 202, 216, 143, 57, 68, 88, 22, 62, 31, 245, 223, 190, 34, 63, 123, 62, 207, 187, 76, 62, 239, 75, 11, 62, 120, 86, 165, 61, 96, 243, 69, 188, 156, 53, 120, 190, 130, 198, 49, 190, 152, 88, 255, 60, 157, 155, 15, 189, 184, 149, 93, 189, 91, 219, 186, 61, 18, 5, 219, 189, 205, 29, 42, 62, 57, 105, 56, 60, 173, 209, 156, 189, 214, 215, 15, 191, 204, 162, 145, 190, 149, 136, 195, 61, 194, 213, 179, 190, 84, 109, 12, 189, 5, 73, 88, 62, 244, 183, 174, 61, 221, 245, 254, 61, 54, 51, 43, 62, 207, 115, 216, 61, 233, 55, 11, 62, 174, 87, 166, 62, 112, 51, 6, 191, 23, 79, 177, 188, 63, 118, 19, 190, 52, 223, 48, 62, 65, 209, 233, 190, 220, 80, 104, 62, 90, 190, 37, 61, 95, 71, 251, 60, 11, 142, 96, 190, 111, 163, 82, 190, 252, 254, 187, 60, 253, 188, 20, 61, 229, 233, 138, 62, 106, 153, 123, 190, 185, 109, 2, 190, 172, 84, 254, 61, 234, 167, 66, 190, 249, 12, 187, 188, 89, 169, 43, 190, 159, 206, 235, 189, 42, 110, 69, 61, 209, 39, 248, 61, 51, 28, 156, 190, 140, 78, 1, 62, 142, 50, 39, 191, 57, 219, 30, 61, 10, 91, 10, 191, 247, 201, 2, 190, 72, 163, 104, 191, 110, 66, 77, 189, 91, 163, 125, 188, 115, 26, 163, 62, 62, 249, 57, 190, 254, 142, 48, 61, 221, 127, 155, 188, 91, 34, 53, 62, 215, 118, 26, 190, 166, 100, 162, 189, 104, 216, 150, 62, 48, 255, 95, 189, 115, 208, 104, 190, 240, 251, 149, 190, 187, 214, 195, 189, 206, 112, 158, 61, 11, 166, 30, 62, 169, 159, 126, 62, 19, 78, 79, 62, 72, 150, 199, 189, 217, 93, 186, 62, 13, 184, 211, 189, 237, 157, 165, 61, 80, 238, 68, 190, 32, 183, 11, 60, 9, 185, 133, 62, 28, 145, 98, 190, 108, 122, 230, 62, 22, 241, 49, 190, 207, 160, 140, 189, 224, 218, 52, 190, 45, 254, 223, 188, 199, 56, 26, 189, 215, 233, 232, 189, 222, 61, 242, 61, 205, 252, 20, 62, 125, 118, 144, 189, 193, 151, 201, 188, 219, 12, 35, 61, 52, 206, 223, 61, 85, 223, 33, 62, 212, 157, 114, 189, 252, 243, 146, 61, 41, 232, 158, 190, 194, 243, 118, 190, 232, 210, 235, 190, 52, 100, 140, 61, 248, 120, 14, 62, 240, 122, 57, 62, 121, 158, 225, 61, 24, 63, 48, 61, 42, 111, 19, 58, 24, 242, 66, 62, 107, 221, 7, 190, 78, 252, 212, 62, 187, 113, 148, 190, 106, 198, 26, 190, 69, 28, 98, 189, 221, 223, 139, 189, 31, 232, 208, 61, 230, 21, 177, 60, 212, 3, 13, 190, 20, 49, 5, 190, 153, 33, 136, 189, 74, 58, 125, 61, 13, 66, 0, 189, 124, 117, 39, 62, 82, 54, 205, 187, 224, 100, 212, 61, 208, 160, 55, 59, 95, 206, 142, 61, 84, 227, 173, 189, 32, 75, 159, 189, 226, 144, 37, 190, 51, 16, 23, 189, 49, 138, 152, 189, 28, 8, 221, 61, 113, 203, 52, 190, 200, 77, 206, 188, 73, 97, 105, 189, 175, 64, 30, 62, 238, 152, 17, 190, 12, 133, 15, 189, 86, 205, 244, 61, 39, 165, 181, 61, 236, 202, 199, 61, 217, 211, 49, 190, 247, 82, 236, 189, 237, 188, 15, 190, 59, 116, 116, 189, 185, 251, 6, 62, 250, 227, 41, 60, 221, 23, 126, 188, 199, 74, 15, 62, 206, 110, 34, 62, 131, 49, 219, 61, 138, 56, 1, 189, 240, 226, 31, 190, 121, 131, 134, 189, 152, 210, 52, 190, 23, 149, 0, 189, 103, 240, 143, 61, 82, 45, 156, 60, 56, 146, 139, 61, 163, 154, 13, 190, 199, 244, 5, 190, 249, 43, 99, 189, 165, 138, 27, 62, 72, 250, 229, 61, 169, 29, 47, 190, 171, 192, 188, 189, 104, 113, 52, 61, 38, 36, 105, 187, 22, 7, 71, 61, 113, 137, 203, 61, 121, 232, 244, 189, 241, 143, 158, 61, 106, 45, 189, 188, 131, 58, 164, 61, 255, 184, 215, 189, 172, 24, 19, 191, 8, 255, 237, 190, 80, 250, 147, 62, 38, 85, 206, 190, 81, 35, 121, 61, 114, 89, 161, 189, 248, 207, 0, 190, 155, 95, 108, 62, 37, 103, 24, 190, 127, 181, 93, 189, 3, 196, 134, 60, 127, 151, 96, 190, 238, 208, 26, 59, 168, 223, 156, 190, 93, 104, 2, 188, 196, 38, 57, 62, 51, 39, 95, 190, 190, 225, 252, 189, 134, 234, 72, 190, 216, 75, 183, 62, 3, 191, 77, 62, 180, 164, 102, 62, 140, 134, 200, 190, 96, 216, 6, 190, 32, 207, 206, 190, 185, 181, 125, 61, 16, 245, 16, 190, 152, 204, 211, 61, 155, 202, 204, 190, 162, 212, 152, 189, 191, 53, 218, 190, 154, 230, 184, 62, 133, 129, 115, 62, 97, 99, 76, 62, 237, 211, 182, 190, 240, 41, 4, 63, 117, 163, 58, 190, 24, 45, 96, 62, 214, 9, 203, 189, 149, 10, 154, 190, 194, 7, 124, 190, 169, 106, 157, 189, 0, 30, 120, 61, 114, 231, 230, 61, 186, 40, 89, 61, 118, 41, 109, 189, 35, 93, 206, 188, 145, 22, 47, 61, 75, 245, 105, 62, 9, 55, 36, 59, 160, 27, 141, 62, 85, 134, 192, 189, 87, 215, 203, 190, 107, 108, 75, 190, 69, 64, 191, 60, 246, 104, 130, 61, 120, 205, 179, 62, 12, 112, 148, 62, 68, 247, 72, 62, 194, 55, 220, 189, 62, 106, 163, 62, 250, 74, 101, 190, 35, 166, 166, 62, 194, 216, 90, 190, 61, 121, 86, 189, 210, 214, 138, 60, 230, 100, 165, 189, 158, 158, 243, 61, 63, 136, 142, 189, 216, 105, 17, 190, 222, 61, 31, 62, 138, 141, 49, 190, 77, 58, 230, 189, 47, 53, 125, 60, 207, 162, 238, 189, 61, 81, 142, 189, 9, 180, 91, 190, 254, 186, 151, 61, 101, 154, 11, 190, 240, 152, 124, 61, 32, 246, 27, 190, 150, 251, 18, 190, 80, 169, 163, 61, 219, 235, 131, 61, 201, 201, 49, 190, 74, 125, 3, 190, 243, 235, 47, 190, 70, 199, 252, 188, 223, 134, 66, 59, 152, 58, 21, 61, 108, 152, 163, 189, 200, 230, 191, 189, 180, 200, 27, 190, 227, 172, 237, 61, 146, 137, 62, 61, 76, 197, 42, 189, 121, 132, 94, 190, 214, 67, 17, 62, 233, 249, 33, 189, 130, 234, 84, 189, 10, 213, 103, 190, 16, 41, 36, 62, 199, 96, 95, 62, 173, 203, 3, 190, 128, 253, 36, 62, 34, 134, 64, 190, 186, 155, 5, 62, 228, 184, 78, 62, 195, 10, 133, 190, 32, 144, 71, 190, 187, 62, 250, 189, 232, 33, 21, 62, 86, 184, 10, 62, 88, 95, 65, 61, 166, 103, 121, 62, 115, 69, 238, 189, 223, 209, 50, 189, 33, 228, 203, 190, 96, 253, 118, 61, 227, 8, 35, 190, 128, 194, 32, 62, 59, 80, 13, 190, 58, 142, 168, 187, 43, 119, 29, 62, 43, 143, 103, 62, 248, 204, 104, 62, 247, 105, 240, 61, 222, 212, 91, 190, 36, 14, 41, 190, 61, 232, 128, 61, 17, 0, 206, 189, 205, 65, 226, 189, 172, 205, 63, 61, 167, 31, 53, 62, 138, 85, 223, 60, 199, 60, 144, 62, 249, 66, 115, 189, 8, 118, 240, 189, 2, 213, 62, 61, 54, 112, 169, 62, 168, 56, 224, 188, 52, 190, 232, 189, 252, 247, 71, 190, 119, 1, 95, 62, 153, 91, 56, 188, 7, 39, 35, 189, 153, 148, 204, 61, 125, 35, 21, 61, 215, 170, 139, 190, 50, 129, 247, 189, 11, 205, 184, 189, 176, 149, 156, 189, 251, 69, 159, 62, 67, 207, 2, 190, 95, 176, 164, 188, 152, 65, 185, 189, 53, 122, 122, 61, 101, 228, 233, 60, 187, 67, 115, 62, 45, 45, 128, 62, 66, 238, 132, 61, 198, 106, 183, 61, 139, 84, 37, 62, 138, 217, 200, 190, 10, 58, 202, 189, 74, 223, 131, 62, 146, 77, 116, 190, 33, 193, 241, 61, 211, 229, 110, 61, 47, 208, 169, 61, 254, 196, 182, 62, 180, 198, 21, 62, 42, 24, 61, 190, 142, 143, 134, 189, 213, 25, 93, 62, 250, 184, 137, 62, 144, 141, 114, 191, 92, 174, 74, 62, 195, 193, 24, 191, 85, 192, 8, 190, 117, 18, 182, 60, 178, 205, 12, 60, 22, 244, 157, 190, 208, 222, 69, 189, 110, 224, 88, 62, 175, 79, 30, 61, 91, 5, 157, 190, 68, 117, 135, 190, 240, 245, 60, 191, 169, 251, 96, 62, 221, 3, 207, 187, 105, 135, 76, 190, 39, 169, 98, 191, 243, 67, 129, 189, 19, 104, 129, 189, 102, 234, 238, 190, 85, 243, 72, 62, 96, 141, 27, 189, 202, 167, 15, 189, 203, 225, 78, 61, 186, 240, 136, 61, 77, 99, 62, 61, 31, 225, 194, 61, 83, 225, 147, 190, 76, 159, 28, 191, 80, 65, 145, 60, 78, 132, 41, 190, 219, 20, 16, 60, 163, 199, 5, 190, 180, 87, 108, 61, 130, 171, 61, 62, 189, 66, 204, 61, 233, 220, 81, 62, 143, 133, 111, 62, 250, 160, 217, 189, 163, 128, 240, 189, 185, 176, 77, 190, 204, 86, 68, 188, 207, 252, 54, 62, 242, 254, 113, 61, 175, 16, 129, 60, 111, 103, 48, 62, 72, 72, 113, 190, 117, 208, 2, 189, 121, 0, 15, 59, 246, 226, 110, 62, 192, 27, 62, 61, 244, 226, 189, 190, 253, 64, 11, 187, 187, 210, 236, 61, 181, 59, 52, 190, 5, 136, 7, 62, 115, 140, 27, 189, 42, 1, 113, 61, 239, 156, 91, 62, 90, 134, 197, 60, 2, 44, 214, 189, 124, 9, 180, 189, 170, 79, 11, 190, 1, 93, 47, 62, 230, 213, 227, 190, 154, 248, 60, 62, 3, 236, 97, 61, 144, 175, 151, 62, 149, 226, 98, 60, 117, 36, 135, 61, 232, 223, 132, 189, 158, 144, 156, 60, 116, 57, 218, 59, 251, 194, 35, 190, 83, 50, 60, 62, 238, 235, 141, 61, 144, 124, 135, 190, 161, 120, 76, 189, 97, 34, 64, 62, 154, 72, 24, 62, 121, 238, 152, 189, 58, 208, 15, 61, 65, 98, 254, 188, 102, 198, 209, 189, 159, 114, 163, 189, 204, 157, 209, 189, 112, 231, 50, 190, 59, 148, 128, 189, 199, 146, 187, 189, 198, 33, 47, 61, 40, 232, 40, 190, 128, 29, 155, 189, 75, 114, 100, 189, 211, 126, 34, 190, 28, 171, 128, 60, 134, 1, 2, 190, 100, 49, 0, 189, 22, 28, 0, 188, 131, 133, 146, 61, 233, 200, 28, 61, 143, 152, 226, 189, 92, 50, 78, 190, 165, 111, 143, 189, 168, 213, 221, 61, 230, 35, 157, 60, 154, 220, 73, 188, 82, 8, 148, 61, 22, 20, 139, 61, 26, 243, 93, 61, 235, 161, 50, 190, 239, 119, 68, 186, 209, 215, 151, 61, 36, 207, 221, 189, 149, 248, 7, 62, 224, 212, 41, 190, 242, 97, 55, 189, 90, 1, 219, 189, 236, 230, 45, 190, 228, 136, 180, 189, 105, 138, 154, 189, 24, 146, 70, 189, 52, 186, 26, 62, 45, 21, 250, 188, 249, 145, 18, 190, 86, 212, 217, 189, 40, 41, 81, 60, 125, 82, 248, 188, 18, 144, 42, 58, 80, 221, 88, 61, 227, 222, 61, 190, 119, 243, 16, 190, 222, 28, 50, 61, 47, 35, 12, 62, 76, 205, 8, 190, 63, 166, 215, 189, 250, 98, 141, 189, 86, 225, 47, 61, 245, 179, 204, 61, 200, 188, 36, 62, 152, 235, 12, 190, 168, 227, 157, 188, 38, 22, 140, 189, 215, 70, 158, 61, 148, 60, 34, 189, 94, 1, 152, 190, 66, 94, 107, 62, 162, 9, 96, 61, 212, 173, 97, 191, 103, 120, 94, 58, 249, 129, 100, 61, 34, 107, 76, 62, 124, 69, 226, 61, 95, 44, 243, 60, 80, 65, 170, 62, 93, 30, 124, 62, 63, 156, 16, 60, 210, 30, 33, 191, 40, 238, 169, 189, 24, 129, 17, 190, 253, 111, 160, 61, 78, 192, 38, 191, 63, 80, 67, 62, 227, 147, 67, 190, 131, 154, 72, 188, 39, 110, 198, 62, 40, 23, 220, 189, 144, 215, 186, 189, 140, 212, 125, 59, 164, 12, 65, 62, 65, 201, 10, 190, 14, 26, 110, 190, 241, 118, 3, 60, 191, 246, 112, 190, 237, 32, 138, 62, 81, 216, 225, 189, 248, 90, 150, 60, 213, 51, 217, 59, 82, 211, 183, 61, 156, 232, 119, 190, 25, 221, 179, 62, 170, 149, 169, 61, 243, 179, 73, 189, 102, 193, 37, 61, 154, 157, 110, 189, 153, 196, 92, 62, 221, 1, 114, 189, 196, 100, 18, 62, 40, 156, 138, 188, 176, 192, 34, 190, 171, 69, 44, 62, 177, 252, 137, 189, 41, 73, 103, 62, 107, 176, 167, 61, 6, 100, 101, 62, 27, 197, 90, 190, 242, 158, 80, 191, 248, 80, 78, 62, 120, 51, 4, 191, 255, 100, 2, 189, 183, 174, 188, 189, 104, 200, 112, 62, 118, 72, 125, 62, 254, 111, 4, 191, 51, 102, 102, 189, 204, 44, 184, 61, 172, 254, 146, 61, 188, 224, 8, 63, 102, 144, 162, 190, 87, 41, 114, 191, 30, 161, 249, 190, 123, 81, 133, 62, 9, 141, 189, 190, 170, 112, 36, 189, 255, 173, 139, 189, 206, 78, 42, 62, 49, 7, 83, 62, 197, 137, 73, 190, 127, 154, 87, 62, 250, 61, 10, 61, 175, 193, 101, 190, 255, 232, 203, 190, 68, 219, 199, 189, 195, 10, 155, 59, 9, 129, 162, 61, 205, 147, 8, 190, 167, 3, 87, 62, 135, 207, 202, 187, 145, 95, 138, 62, 40, 208, 232, 62, 234, 187, 222, 62, 11, 193, 80, 190, 151, 197, 33, 188, 181, 27, 219, 190, 157, 16, 203, 189, 202, 22, 228, 189, 127, 202, 127, 61, 9, 215, 91, 189, 248, 191, 28, 62, 184, 139, 93, 190, 34, 74, 84, 59, 244, 46, 111, 61, 87, 228, 63, 189, 129, 60, 23, 190, 18, 176, 173, 189, 228, 41, 120, 189, 30, 91, 88, 190, 228, 181, 98, 189, 162, 179, 182, 61, 214, 144, 158, 189, 168, 101, 17, 189, 195, 8, 160, 61, 116, 60, 212, 189, 113, 56, 88, 189, 17, 163, 1, 189, 175, 90, 42, 190, 103, 253, 37, 190, 176, 164, 147, 188, 14, 69, 16, 62, 196, 213, 220, 188, 8, 70, 91, 61, 137, 66, 219, 189, 26, 31, 56, 190, 114, 218, 100, 189, 92, 39, 37, 62, 140, 25, 109, 189, 22, 85, 127, 61, 75, 143, 166, 61, 0, 68, 194, 61, 3, 93, 143, 189, 201, 3, 94, 189, 135, 72, 197, 61, 82, 204, 62, 190, 131, 31, 1, 191, 149, 0, 242, 188, 220, 38, 200, 190, 164, 105, 68, 62, 95, 2, 53, 190, 202, 83, 197, 191, 230, 234, 153, 60, 154, 94, 96, 62, 222, 19, 7, 191, 109, 50, 21, 191, 247, 160, 43, 191, 4, 180, 96, 190, 105, 125, 2, 61, 147, 163, 252, 190, 242, 195, 129, 62, 19, 152, 253, 190, 238, 0, 135, 191, 177, 146, 23, 191, 119, 51, 42, 62, 13, 139, 240, 188, 158, 34, 108, 190, 224, 232, 13, 62, 109, 139, 13, 190, 23, 95, 232, 189, 120, 138, 2, 190, 92, 176, 66, 62, 46, 134, 113, 62, 109, 217, 99, 191, 184, 171, 202, 61, 38, 2, 25, 191, 211, 178, 203, 189, 107, 206, 95, 61, 223, 108, 190, 61, 251, 253, 123, 62, 147, 194, 60, 190, 233, 231, 168, 62, 163, 122, 118, 190, 72, 6, 59, 61, 31, 215, 147, 190, 146, 30, 87, 62, 197, 215, 135, 190, 22, 175, 250, 61, 193, 234, 118, 60, 193, 184, 174, 62, 249, 0, 152, 61, 33, 228, 167, 188, 223, 202, 105, 62, 140, 224, 45, 62, 28, 48, 45, 189, 190, 15, 4, 190, 93, 171, 104, 59, 200, 21, 49, 190, 138, 28, 27, 191, 27, 217, 178, 190, 87, 200, 240, 60, 9, 218, 137, 189, 205, 245, 228, 62, 163, 226, 47, 62, 252, 249, 108, 190, 153, 254, 23, 190, 82, 172, 9, 62, 129, 26, 11, 190, 139, 161, 175, 62, 136, 105, 178, 189, 247, 183, 113, 189, 241, 103, 245, 189, 105, 96, 194, 189, 67, 101, 149, 61, 121, 37, 209, 189, 84, 27, 8, 62, 237, 30, 48, 190, 135, 26, 9, 189, 255, 77, 143, 189, 52, 158, 240, 189, 191, 230, 60, 189, 146, 32, 255, 189, 9, 62, 251, 60, 229, 15, 188, 188, 68, 168, 221, 189, 127, 172, 1, 188, 37, 126, 175, 189, 184, 234, 41, 190, 83, 0, 254, 188, 46, 27, 160, 60, 249, 73, 233, 60, 159, 238, 178, 189, 156, 189, 218, 189, 187, 147, 233, 189, 95, 114, 217, 61, 233, 179, 209, 61, 193, 214, 38, 190, 201, 65, 143, 189, 4, 163, 162, 189, 111, 17, 177, 188, 204, 224, 49, 62, 179, 172, 235, 189, 189, 205, 216, 61, 207, 93, 137, 62, 87, 101, 218, 189, 104, 71, 180, 61, 134, 166, 196, 190, 140, 196, 28, 192, 40, 143, 237, 190, 88, 74, 195, 61, 40, 56, 81, 191, 70, 209, 35, 191, 34, 153, 209, 191, 62, 249, 32, 62, 52, 89, 27, 62, 201, 155, 23, 62, 84, 167, 16, 62, 237, 243, 117, 191, 40, 98, 134, 191, 123, 188, 38, 190, 151, 116, 138, 62, 70, 182, 122, 62, 101, 245, 5, 191, 50, 100, 154, 62, 40, 219, 23, 191, 254, 86, 152, 189, 224, 248, 168, 62, 34, 214, 53, 190, 40, 150, 18, 61, 174, 148, 197, 191, 47, 59, 104, 62, 108, 54, 203, 190, 177, 183, 221, 61, 59, 227, 135, 62, 132, 31, 165, 190, 122, 235, 6, 190, 233, 22, 80, 190, 82, 82, 152, 61, 177, 43, 76, 60, 168, 217, 191, 61, 10, 125, 237, 189, 95, 207, 237, 187, 239, 165, 14, 190, 124, 185, 39, 62, 185, 23, 165, 61, 255, 95, 74, 186, 116, 224, 241, 190, 63, 31, 239, 189, 163, 162, 45, 62, 199, 255, 135, 62, 48, 18, 25, 61, 209, 150, 69, 62, 68, 3, 56, 191, 65, 38, 35, 191, 205, 82, 176, 188, 49, 150, 15, 191, 229, 209, 21, 62, 231, 232, 114, 61, 91, 7, 31, 190, 38, 149, 137, 188, 72, 157, 63, 191, 252, 241, 32, 62, 129, 219, 220, 61, 172, 95, 8, 62, 110, 112, 74, 61, 222, 176, 59, 191, 11, 115, 252, 191, 246, 226, 36, 191, 186, 84, 69, 62, 112, 218, 102, 191, 216, 107, 182, 60, 243, 177, 171, 61, 55, 34, 118, 60, 207, 224, 177, 61, 113, 70, 124, 62, 232, 98, 149, 62, 212, 30, 133, 61, 159, 23, 142, 189, 154, 182, 46, 191, 117, 242, 141, 191, 235, 129, 11, 190, 98, 159, 78, 62, 231, 233, 18, 190, 2, 200, 52, 189, 129, 215, 140, 61, 220, 149, 241, 187, 249, 18, 104, 190, 236, 10, 144, 62, 106, 134, 31, 62, 172, 222, 168, 61, 31, 238, 245, 190, 134, 83, 151, 190, 199, 94, 203, 189, 142, 174, 89, 189, 149, 156, 139, 61, 224, 26, 116, 189, 44, 10, 87, 191, 124, 229, 194, 62, 200, 98, 117, 190, 198, 140, 73, 62, 63, 209, 38, 191, 57, 177, 8, 62, 168, 207, 173, 188, 206, 30, 71, 62, 243, 9, 101, 190, 4, 114, 218, 61, 211, 37, 184, 190, 170, 12, 203, 61, 202, 225, 223, 188, 250, 124, 120, 62, 238, 130, 231, 190, 119, 246, 66, 190, 203, 111, 141, 61, 7, 131, 98, 189, 110, 209, 220, 61, 120, 14, 184, 189, 23, 66, 199, 190, 199, 26, 0, 191, 97, 3, 122, 190, 171, 241, 7, 191, 65, 169, 110, 62, 17, 190, 182, 189, 235, 7, 227, 62, 135, 141, 51, 62, 71, 115, 142, 190, 72, 25, 210, 61, 189, 151, 159, 62, 21, 225, 0, 62, 192, 201, 243, 62, 244, 232, 163, 190, 37, 233, 7, 190, 117, 122, 21, 190, 220, 164, 192, 189, 231, 227, 6, 62, 161, 76, 13, 62, 23, 99, 132, 188, 28, 16, 130, 61, 62, 147, 179, 61, 246, 207, 93, 189, 64, 66, 36, 60, 72, 208, 8, 190, 54, 180, 207, 189, 244, 88, 220, 189, 102, 193, 9, 62, 126, 50, 205, 59, 109, 101, 143, 60, 143, 13, 250, 189, 150, 29, 32, 190, 69, 89, 232, 188, 247, 215, 214, 189, 125, 78, 66, 61, 203, 140, 194, 60, 233, 4, 65, 190, 253, 230, 36, 62, 193, 246, 213, 61, 46, 142, 6, 62, 141, 90, 45, 61, 62, 238, 132, 189, 209, 235, 46, 190, 169, 49, 29, 190, 23, 37, 35, 190, 71, 58, 200, 61, 177, 130, 11, 192, 160, 140, 115, 191, 101, 149, 60, 191, 104, 244, 54, 62, 25, 66, 106, 189, 209, 88, 194, 189, 97, 233, 153, 62, 33, 86, 150, 190, 112, 172, 112, 61, 116, 241, 147, 189, 112, 46, 154, 59, 9, 166, 123, 62, 15, 84, 185, 190, 118, 124, 130, 191, 53, 120, 18, 191, 252, 211, 175, 189, 188, 102, 104, 62, 66, 210, 44, 191, 127, 179, 65, 62, 202, 20, 33, 188, 128, 32, 83, 62, 253, 3, 55, 62, 2, 248, 144, 62, 117, 157, 23, 190, 153, 28, 43, 191, 53, 165, 230, 188, 26, 164, 237, 62, 132, 67, 87, 62, 126, 62, 102, 62, 242, 200, 148, 189, 67, 198, 135, 191, 208, 184, 173, 61};
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
                alignas(float) const unsigned char memory[] = {109, 82, 48, 61, 166, 106, 143, 62, 130, 174, 199, 189, 81, 0, 6, 62, 124, 150, 132, 61, 120, 195, 190, 62, 214, 126, 225, 189, 18, 31, 44, 190, 211, 107, 105, 190, 145, 223, 192, 189, 163, 117, 197, 61, 209, 116, 23, 190, 131, 31, 78, 60, 251, 142, 100, 62, 198, 144, 75, 61, 146, 49, 96, 61, 38, 118, 141, 62, 227, 239, 6, 62, 53, 33, 162, 61, 232, 196, 14, 62, 54, 145, 141, 189, 65, 138, 85, 190, 215, 28, 85, 61, 87, 96, 243, 189, 255, 22, 136, 61, 109, 8, 161, 61, 178, 11, 7, 62, 240, 64, 184, 61, 62, 131, 146, 62, 168, 224, 146, 61, 42, 144, 9, 189, 125, 46, 237, 189};
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
                alignas(float) const unsigned char memory[] = {126, 16, 191, 190, 153, 150, 140, 62, 28, 117, 205, 61, 46, 203, 28, 191, 210, 103, 129, 188, 210, 98, 218, 62, 128, 205, 71, 62, 126, 35, 6, 62, 77, 96, 65, 61, 127, 21, 26, 191, 77, 76, 165, 62, 92, 207, 136, 61, 15, 162, 37, 62, 214, 7, 51, 189, 4, 46, 45, 191, 122, 185, 33, 191, 12, 108, 8, 190, 179, 47, 130, 188, 21, 102, 186, 189, 39, 204, 71, 191, 137, 18, 182, 62, 244, 232, 43, 191, 107, 161, 126, 189, 177, 28, 152, 63, 36, 170, 165, 62, 233, 216, 142, 59, 128, 11, 185, 63, 113, 11, 137, 62, 18, 249, 103, 191, 49, 207, 228, 62, 24, 223, 185, 188, 1, 253, 114, 191, 189, 126, 236, 60, 58, 106, 228, 61, 155, 115, 59, 190, 174, 179, 103, 190, 21, 235, 227, 190, 143, 195, 80, 190, 161, 38, 157, 61, 185, 197, 108, 188, 60, 128, 222, 59, 101, 32, 207, 61, 3, 105, 9, 62, 51, 193, 96, 61, 205, 146, 7, 190, 82, 205, 161, 190, 156, 252, 122, 189, 160, 78, 39, 62, 150, 104, 129, 190, 95, 158, 180, 61, 104, 165, 37, 62, 236, 49, 188, 59, 1, 156, 106, 61, 210, 2, 46, 62, 148, 57, 65, 61, 189, 21, 198, 61, 65, 189, 100, 61, 108, 195, 199, 61, 64, 111, 45, 61, 18, 60, 24, 190, 39, 254, 23, 62, 102, 139, 138, 61, 156, 90, 8, 190, 93, 250, 154, 189};
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
                alignas(float) const unsigned char memory[] = {154, 34, 243, 61, 211, 110, 151, 190};
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
    alignas(float) const unsigned char memory[] = {0, 166, 164, 191, 251, 51, 83, 191, 14, 226, 181, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {255, 139, 0, 63, 24, 232, 50, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0022/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}