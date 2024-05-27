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
                alignas(float) const unsigned char memory[] = {36, 156, 173, 62, 175, 131, 2, 191, 76, 55, 210, 62, 118, 149, 88, 189, 181, 128, 189, 191, 48, 234, 187, 190, 205, 89, 116, 190, 38, 219, 11, 62, 148, 46, 134, 190, 145, 42, 209, 62, 173, 147, 17, 62, 123, 192, 38, 63, 187, 212, 129, 191, 73, 175, 85, 63, 168, 177, 236, 61, 203, 181, 112, 62, 83, 82, 215, 191, 218, 175, 219, 190, 71, 104, 150, 61, 19, 3, 155, 190, 26, 88, 94, 190, 101, 126, 11, 63, 167, 108, 178, 190, 147, 0, 90, 190, 43, 181, 51, 190, 185, 244, 113, 191, 0, 181, 171, 190, 151, 153, 2, 191, 229, 3, 249, 62, 23, 70, 170, 190, 70, 150, 181, 62, 134, 52, 183, 191, 28, 150, 193, 190, 173, 6, 27, 190, 138, 1, 199, 63, 19, 153, 218, 62, 238, 114, 50, 191, 21, 221, 252, 190, 23, 144, 232, 61, 55, 220, 74, 62, 173, 166, 121, 191, 247, 176, 144, 62, 30, 45, 108, 191, 255, 105, 220, 59, 120, 48, 2, 62, 78, 233, 13, 191, 249, 126, 116, 63, 160, 141, 251, 62, 1, 65, 217, 62, 14, 136, 10, 190, 146, 235, 37, 190, 77, 39, 129, 190, 54, 63, 147, 191, 119, 106, 184, 62, 94, 167, 59, 62, 200, 16, 98, 189, 49, 56, 9, 191, 38, 215, 242, 190, 228, 21, 187, 190, 30, 98, 64, 188, 155, 73, 247, 62, 112, 234, 140, 191, 41, 103, 96, 190, 149, 27, 219, 62, 49, 32, 233, 190, 33, 57, 120, 190, 62, 196, 122, 62, 92, 246, 149, 62, 66, 148, 80, 60, 152, 208, 87, 190, 189, 238, 135, 63, 223, 5, 75, 62, 15, 208, 223, 62, 149, 16, 100, 63, 204, 74, 99, 62, 207, 164, 70, 191, 71, 140, 10, 62, 108, 181, 62, 63, 204, 38, 214, 190, 74, 21, 142, 63, 192, 176, 0, 63, 235, 33, 116, 63, 165, 42, 138, 63, 11, 115, 244, 62, 154, 153, 245, 62, 202, 187, 13, 63, 215, 74, 46, 190, 10, 178, 20, 63, 43, 17, 88, 191, 72, 62, 150, 61, 116, 59, 167, 62, 220, 18, 6, 191, 42, 13, 104, 62, 73, 65, 3, 62, 75, 11, 26, 191, 34, 236, 161, 62};
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
                alignas(float) const unsigned char memory[] = {247, 194, 32, 191, 242, 149, 161, 62, 249, 243, 58, 191, 8, 219, 237, 189, 72, 93, 24, 63, 170, 170, 3, 62, 201, 56, 221, 61, 234, 197, 5, 190, 194, 35, 119, 190, 103, 236, 122, 62, 5, 183, 147, 62, 33, 218, 180, 62, 109, 127, 3, 63, 230, 17, 122, 60, 94, 143, 5, 63, 7, 189, 68, 190, 242, 118, 186, 62, 178, 68, 85, 60, 154, 236, 160, 62, 134, 18, 58, 190, 16, 112, 147, 190, 169, 176, 216, 190, 253, 220, 3, 63, 101, 75, 197, 62, 154, 43, 42, 190, 164, 231, 253, 190, 133, 64, 70, 190, 64, 25, 164, 62, 248, 26, 229, 61, 61, 234, 139, 62, 102, 168, 130, 62, 200, 163, 247, 62};
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
                alignas(float) const unsigned char memory[] = {233, 110, 53, 62, 216, 64, 169, 61, 25, 217, 46, 189, 123, 232, 13, 188, 112, 6, 12, 190, 138, 217, 18, 62, 49, 236, 220, 61, 69, 207, 4, 62, 161, 88, 212, 189, 189, 217, 38, 60, 102, 92, 208, 61, 123, 216, 81, 188, 114, 99, 82, 62, 98, 54, 118, 186, 234, 255, 33, 190, 129, 40, 19, 61, 230, 36, 199, 189, 98, 19, 242, 61, 73, 14, 250, 61, 188, 227, 16, 190, 209, 47, 32, 189, 88, 125, 76, 62, 41, 197, 73, 62, 75, 58, 172, 61, 232, 77, 105, 62, 16, 220, 82, 62, 63, 165, 142, 61, 10, 228, 31, 62, 207, 139, 133, 190, 175, 154, 142, 61, 156, 50, 234, 188, 49, 11, 126, 62, 182, 13, 223, 61, 104, 86, 109, 62, 25, 61, 60, 61, 187, 194, 161, 190, 37, 201, 38, 190, 143, 26, 159, 62, 140, 165, 23, 61, 234, 120, 202, 61, 198, 12, 133, 61, 65, 174, 239, 188, 19, 97, 42, 62, 223, 17, 97, 191, 127, 91, 10, 63, 254, 177, 93, 62, 122, 61, 47, 62, 106, 87, 149, 186, 198, 123, 169, 62, 67, 212, 141, 62, 252, 27, 84, 61, 240, 196, 185, 62, 170, 234, 226, 61, 65, 227, 75, 190, 196, 6, 166, 189, 60, 221, 132, 191, 52, 241, 171, 191, 129, 33, 168, 189, 171, 154, 214, 190, 109, 177, 9, 191, 242, 229, 193, 189, 60, 220, 199, 61, 163, 240, 201, 62, 40, 23, 143, 62, 192, 204, 191, 62, 86, 19, 4, 61, 13, 103, 204, 188, 135, 240, 21, 189, 230, 119, 61, 191, 209, 242, 156, 189, 110, 180, 51, 62, 162, 7, 83, 62, 113, 243, 133, 62, 141, 143, 132, 62, 190, 131, 170, 189, 30, 163, 188, 191, 68, 209, 69, 190, 248, 249, 247, 61, 195, 158, 118, 191, 3, 150, 138, 190, 129, 69, 28, 62, 190, 49, 213, 189, 80, 114, 251, 61, 195, 135, 3, 191, 215, 55, 104, 190, 247, 78, 172, 61, 32, 226, 84, 62, 150, 68, 248, 190, 179, 167, 40, 190, 93, 91, 14, 62, 90, 14, 188, 190, 45, 57, 85, 62, 176, 183, 127, 62, 5, 194, 56, 62, 125, 255, 166, 61, 229, 240, 182, 61, 107, 39, 238, 189, 162, 176, 134, 61, 133, 10, 164, 189, 165, 204, 164, 187, 118, 19, 3, 191, 235, 208, 234, 61, 248, 191, 192, 61, 32, 29, 134, 62, 107, 145, 20, 190, 73, 86, 187, 189, 102, 16, 49, 62, 82, 75, 208, 191, 157, 130, 113, 62, 36, 88, 78, 62, 228, 198, 48, 190, 60, 16, 129, 190, 204, 140, 68, 62, 28, 35, 172, 62, 156, 49, 53, 62, 30, 45, 144, 188, 86, 38, 172, 61, 251, 122, 165, 189, 107, 48, 62, 61, 97, 36, 25, 191, 46, 213, 173, 190, 134, 219, 159, 190, 33, 187, 33, 191, 13, 124, 8, 189, 95, 194, 50, 62, 137, 183, 207, 61, 146, 85, 202, 62, 11, 158, 5, 62, 203, 252, 140, 190, 214, 1, 74, 189, 212, 98, 5, 190, 55, 59, 35, 190, 91, 128, 37, 61, 58, 5, 161, 61, 87, 97, 30, 62, 186, 218, 188, 60, 34, 82, 29, 62, 181, 252, 57, 188, 4, 48, 98, 60, 73, 109, 195, 61, 197, 135, 241, 61, 125, 95, 85, 61, 47, 170, 29, 62, 177, 233, 217, 61, 124, 224, 159, 62, 215, 24, 169, 61, 95, 241, 28, 62, 203, 112, 70, 189, 242, 185, 22, 190, 60, 33, 27, 59, 149, 98, 37, 62, 56, 140, 255, 61, 255, 69, 67, 61, 219, 191, 22, 62, 116, 66, 23, 190, 109, 24, 0, 62, 19, 209, 53, 62, 127, 23, 91, 61, 36, 237, 156, 61, 171, 123, 2, 62, 66, 107, 82, 62, 203, 99, 234, 190, 29, 231, 253, 189, 147, 94, 95, 62, 92, 10, 123, 190, 215, 220, 1, 191, 137, 220, 158, 190, 166, 165, 45, 191, 56, 211, 3, 62, 35, 67, 175, 62, 140, 56, 45, 191, 118, 167, 232, 59, 106, 151, 222, 190, 215, 123, 32, 62, 4, 134, 248, 190, 45, 113, 153, 189, 179, 205, 173, 190, 179, 8, 9, 61, 59, 95, 128, 62, 249, 142, 219, 189, 63, 123, 21, 191, 38, 136, 30, 190, 226, 14, 45, 190, 97, 214, 28, 189, 208, 159, 235, 62, 117, 209, 8, 190, 17, 87, 201, 61, 250, 156, 153, 62, 179, 207, 56, 63, 20, 130, 121, 62, 60, 203, 18, 62, 222, 91, 155, 61, 85, 240, 13, 189, 52, 237, 72, 188, 207, 121, 140, 61, 107, 217, 145, 61, 86, 176, 40, 189, 152, 149, 45, 190, 41, 88, 163, 60, 122, 102, 141, 190, 122, 94, 158, 62, 235, 64, 152, 62, 95, 5, 189, 189, 27, 144, 128, 190, 66, 160, 207, 61, 75, 162, 111, 189, 70, 181, 100, 62, 77, 173, 229, 190, 253, 225, 173, 189, 200, 120, 98, 190, 235, 251, 47, 61, 250, 164, 242, 62, 206, 207, 25, 191, 68, 185, 220, 190, 23, 26, 93, 62, 41, 164, 122, 61, 0, 225, 178, 62, 186, 107, 8, 191, 187, 118, 162, 190, 162, 38, 151, 62, 109, 106, 45, 189, 123, 34, 25, 61, 98, 137, 32, 189, 181, 238, 194, 59, 169, 211, 221, 190, 195, 150, 130, 190, 116, 109, 175, 62, 92, 33, 45, 190, 178, 0, 133, 61, 15, 210, 226, 189, 179, 212, 118, 189, 1, 147, 245, 189, 135, 41, 216, 61, 132, 69, 45, 62, 252, 0, 182, 189, 129, 161, 226, 61, 160, 48, 166, 61, 20, 81, 132, 189, 41, 93, 42, 61, 173, 170, 234, 61, 80, 160, 243, 61, 122, 46, 203, 190, 212, 252, 223, 188, 177, 38, 141, 190, 94, 207, 194, 190, 32, 100, 46, 189, 110, 195, 116, 62, 52, 241, 149, 60, 197, 156, 141, 62, 116, 29, 48, 190, 190, 94, 3, 62, 87, 158, 204, 61, 120, 152, 151, 61, 249, 173, 251, 189, 8, 210, 118, 61, 98, 4, 95, 62, 173, 42, 202, 189, 195, 14, 211, 189, 111, 82, 203, 61, 141, 201, 142, 189, 150, 129, 10, 191, 115, 56, 129, 61, 101, 95, 2, 190, 80, 14, 162, 62, 130, 35, 47, 189, 249, 43, 13, 190, 10, 47, 13, 62, 240, 123, 208, 191, 189, 80, 121, 62, 80, 106, 221, 62, 43, 109, 69, 190, 105, 144, 136, 190, 124, 113, 177, 62, 52, 193, 90, 62, 129, 238, 16, 62, 125, 60, 65, 62, 137, 199, 5, 62, 240, 6, 0, 189, 171, 72, 62, 62, 125, 186, 170, 190, 3, 14, 4, 191, 145, 156, 112, 190, 121, 27, 63, 191, 81, 46, 76, 190, 190, 233, 138, 62, 219, 231, 141, 62, 64, 27, 154, 62, 250, 251, 199, 61, 45, 108, 218, 61, 64, 62, 141, 190, 109, 221, 127, 62, 177, 49, 113, 62, 106, 224, 159, 190, 49, 105, 127, 190, 50, 24, 156, 61, 43, 213, 159, 190, 114, 8, 209, 188, 55, 12, 47, 61, 204, 109, 8, 61, 13, 50, 250, 189, 139, 52, 83, 190, 188, 138, 227, 61, 56, 230, 225, 190, 118, 227, 189, 60, 156, 124, 152, 190, 171, 151, 34, 190, 234, 203, 129, 62, 97, 252, 210, 61, 211, 246, 133, 191, 158, 213, 227, 190, 194, 4, 112, 62, 242, 234, 229, 188, 70, 20, 207, 62, 247, 72, 109, 188, 116, 159, 217, 189, 171, 233, 1, 63, 43, 169, 124, 62, 106, 93, 56, 189, 46, 61, 166, 189, 14, 147, 173, 61, 156, 35, 150, 62, 188, 11, 82, 62, 63, 253, 184, 190, 80, 235, 120, 62, 43, 157, 25, 61, 73, 56, 27, 62, 131, 181, 230, 61, 185, 7, 192, 61, 44, 182, 205, 188, 182, 225, 55, 61, 41, 45, 150, 62, 182, 4, 8, 189, 41, 148, 137, 61, 43, 8, 0, 190, 60, 95, 128, 62, 170, 9, 96, 62, 119, 103, 200, 189, 171, 248, 126, 188, 210, 223, 116, 61, 122, 160, 105, 60, 32, 182, 140, 62, 102, 214, 148, 62, 27, 231, 173, 190, 60, 233, 65, 62, 186, 112, 61, 188, 144, 157, 149, 62, 254, 53, 51, 62, 73, 171, 156, 190, 118, 13, 35, 191, 65, 49, 34, 62, 70, 144, 161, 61, 76, 223, 211, 61, 203, 105, 213, 60, 87, 172, 142, 190, 154, 5, 61, 190, 175, 10, 223, 190, 6, 122, 251, 189, 186, 249, 228, 190, 61, 90, 176, 61, 242, 0, 137, 61, 21, 33, 210, 190, 177, 116, 102, 189, 72, 160, 227, 189, 30, 87, 206, 190, 196, 146, 219, 61, 62, 5, 149, 62, 234, 179, 139, 62, 97, 239, 58, 61, 248, 20, 214, 61, 98, 68, 77, 62, 121, 143, 194, 60, 245, 175, 91, 62, 49, 90, 173, 189, 86, 98, 95, 188, 156, 179, 6, 62, 41, 228, 214, 190, 147, 78, 39, 191, 164, 237, 156, 61, 128, 54, 194, 61, 151, 52, 97, 190, 142, 242, 188, 61, 192, 205, 51, 61, 43, 182, 11, 62, 52, 154, 244, 61, 187, 25, 100, 190, 108, 31, 142, 191, 12, 157, 4, 191, 35, 171, 29, 191, 186, 113, 72, 62, 114, 98, 211, 190, 230, 70, 115, 62, 249, 13, 58, 62, 166, 113, 189, 190, 185, 148, 181, 61, 182, 3, 41, 190, 62, 92, 93, 62, 243, 232, 222, 189, 40, 130, 174, 189, 116, 38, 203, 60, 133, 198, 147, 190, 20, 83, 175, 62, 140, 196, 137, 190, 11, 35, 134, 61, 90, 168, 254, 61, 56, 11, 1, 191, 48, 236, 198, 60, 3, 193, 238, 60, 228, 219, 8, 61, 247, 49, 43, 190, 19, 106, 195, 190, 65, 175, 61, 190, 210, 196, 234, 61, 69, 10, 155, 61, 111, 121, 119, 62, 199, 155, 8, 191, 101, 232, 184, 190, 74, 194, 11, 190, 17, 251, 4, 61, 254, 30, 87, 189, 148, 171, 12, 62, 245, 132, 97, 189, 87, 69, 200, 189, 163, 60, 63, 62, 146, 72, 233, 189, 105, 3, 35, 61, 226, 193, 30, 62, 207, 94, 31, 62, 60, 5, 4, 190, 148, 184, 120, 62, 98, 3, 28, 62, 71, 103, 208, 189, 55, 124, 214, 61, 70, 92, 41, 189, 105, 121, 142, 61, 95, 27, 190, 61, 114, 50, 162, 189, 201, 34, 50, 60, 221, 221, 127, 189, 148, 161, 182, 61, 136, 107, 242, 61, 213, 6, 136, 62, 99, 93, 65, 189, 202, 97, 64, 62, 62, 228, 86, 62, 26, 166, 2, 190, 109, 164, 4, 62, 63, 96, 233, 61, 171, 131, 133, 62, 228, 238, 111, 190, 244, 37, 95, 62, 199, 97, 129, 190, 57, 242, 233, 190, 28, 247, 10, 62, 217, 255, 176, 191, 119, 165, 154, 191, 108, 230, 12, 189, 3, 251, 141, 191, 13, 196, 74, 61, 126, 226, 181, 191, 9, 86, 102, 62, 60, 103, 79, 189, 160, 158, 235, 189, 182, 174, 35, 62, 99, 181, 175, 189, 216, 123, 129, 191, 73, 165, 131, 189, 25, 213, 41, 191, 218, 44, 172, 190, 125, 112, 196, 61, 87, 47, 253, 61, 244, 63, 23, 189, 5, 221, 170, 62, 124, 218, 175, 61, 109, 72, 246, 59, 181, 68, 44, 62, 188, 113, 62, 190, 47, 18, 14, 191, 82, 28, 36, 191, 19, 78, 164, 190, 149, 250, 0, 191, 58, 146, 19, 188, 210, 72, 139, 190, 180, 245, 18, 190, 203, 22, 218, 61, 119, 236, 140, 191, 72, 227, 178, 190, 11, 169, 98, 61, 221, 48, 10, 190, 36, 250, 55, 190, 202, 172, 15, 190, 9, 138, 140, 187, 108, 125, 138, 191, 66, 186, 114, 190, 20, 21, 151, 187, 75, 46, 249, 188, 68, 43, 140, 190, 86, 190, 99, 62, 60, 70, 45, 60, 99, 32, 107, 190, 130, 35, 138, 190, 212, 111, 219, 191, 115, 127, 231, 190, 228, 8, 222, 188, 69, 66, 20, 191, 136, 219, 62, 61, 42, 9, 2, 189, 3, 244, 208, 189, 7, 167, 114, 61, 137, 241, 154, 187, 9, 151, 175, 61, 77, 155, 192, 189, 70, 10, 31, 62, 243, 227, 135, 190, 135, 45, 227, 60, 197, 18, 95, 189, 75, 252, 194, 190, 209, 211, 21, 62, 117, 181, 200, 189, 103, 10, 46, 188, 174, 76, 6, 62, 80, 23, 166, 189, 251, 16, 38, 189, 227, 165, 52, 60, 96, 180, 76, 62, 138, 115, 13, 62, 51, 25, 198, 62, 64, 11, 12, 61, 94, 108, 246, 61, 214, 125, 252, 61, 51, 138, 138, 62, 240, 110, 182, 187, 125, 242, 41, 190, 237, 184, 143, 189, 28, 121, 190, 61, 87, 21, 9, 189, 74, 98, 183, 189, 57, 143, 226, 190, 73, 8, 150, 189, 228, 33, 179, 189, 145, 197, 193, 190, 176, 9, 114, 61, 63, 236, 41, 62, 27, 255, 164, 62, 240, 245, 166, 189, 225, 187, 74, 62, 223, 219, 223, 61, 153, 230, 221, 189, 187, 173, 5, 190, 89, 6, 115, 62, 214, 239, 160, 62, 232, 166, 224, 61, 106, 194, 41, 62, 239, 183, 167, 61, 25, 86, 255, 61, 214, 151, 144, 61, 205, 194, 92, 61, 66, 103, 14, 63, 45, 50, 8, 191, 71, 194, 46, 62, 251, 44, 85, 190, 128, 72, 161, 189, 214, 185, 104, 190, 169, 100, 246, 61, 201, 53, 56, 63, 159, 158, 14, 190, 175, 234, 183, 188, 86, 227, 152, 62, 112, 254, 203, 62, 13, 147, 146, 62, 220, 111, 192, 190, 99, 112, 247, 189, 194, 116, 93, 61, 91, 125, 12, 190, 243, 154, 204, 61, 171, 176, 160, 189, 71, 74, 186, 61, 15, 202, 77, 189, 15, 165, 35, 190, 51, 82, 211, 189, 96, 250, 206, 189, 95, 83, 101, 189, 111, 17, 7, 190, 249, 149, 7, 59, 28, 150, 163, 61, 179, 163, 226, 60, 61, 86, 207, 189, 176, 163, 147, 61, 33, 51, 126, 190, 42, 255, 85, 62, 228, 78, 208, 189, 200, 16, 247, 61, 94, 18, 147, 189, 229, 78, 112, 59, 234, 30, 86, 62, 179, 215, 180, 189, 146, 81, 22, 60, 124, 6, 31, 62, 111, 184, 31, 190, 78, 94, 4, 61, 225, 53, 101, 190, 133, 204, 103, 189, 224, 240, 62, 190, 16, 223, 157, 190, 231, 83, 185, 187, 224, 7, 159, 190, 161, 227, 42, 62, 234, 205, 28, 190, 192, 150, 139, 62, 219, 253, 223, 189, 141, 205, 2, 189, 200, 154, 105, 61, 130, 122, 109, 61, 31, 106, 221, 189, 220, 240, 50, 190, 235, 223, 169, 188, 7, 135, 199, 61, 128, 93, 81, 189, 184, 199, 83, 61, 234, 185, 173, 189, 195, 134, 207, 189, 58, 37, 145, 188, 56, 89, 224, 189, 213, 59, 34, 60, 85, 232, 39, 190, 174, 186, 104, 60, 247, 114, 31, 61, 77, 5, 215, 189, 207, 66, 166, 189, 163, 168, 210, 189, 214, 157, 196, 61, 11, 219, 192, 189, 23, 7, 126, 58, 130, 129, 48, 60, 110, 246, 172, 188, 161, 56, 22, 61, 221, 62, 9, 190, 93, 192, 17, 190, 112, 72, 249, 60, 181, 232, 127, 61, 119, 108, 224, 61, 21, 212, 61, 190, 44, 204, 22, 188, 140, 102, 141, 62, 77, 69, 48, 189, 218, 38, 211, 190, 236, 10, 78, 61, 197, 3, 9, 190, 13, 112, 149, 61, 136, 230, 214, 189, 249, 224, 171, 190, 199, 28, 250, 61, 90, 110, 90, 191, 231, 207, 212, 187, 30, 136, 100, 62, 190, 121, 210, 60, 197, 217, 119, 190, 152, 185, 208, 61, 166, 55, 195, 62, 221, 127, 81, 188, 13, 85, 181, 62, 217, 221, 11, 61, 150, 106, 71, 62, 123, 251, 4, 190, 232, 208, 66, 191, 199, 236, 80, 191, 26, 134, 235, 189, 240, 2, 229, 190, 110, 71, 41, 190, 104, 154, 77, 61, 230, 132, 247, 61, 138, 149, 108, 61, 73, 83, 97, 62, 242, 10, 64, 63, 233, 251, 36, 62, 157, 98, 207, 190, 154, 109, 224, 62, 194, 217, 207, 61, 180, 247, 160, 62, 105, 78, 162, 61, 212, 255, 150, 62, 98, 52, 138, 189, 64, 253, 20, 190, 125, 254, 146, 62, 247, 127, 246, 190, 213, 229, 73, 62, 37, 102, 158, 189, 54, 213, 110, 61, 136, 134, 59, 191, 183, 249, 61, 62, 133, 54, 135, 61, 126, 87, 145, 189, 125, 158, 176, 61, 209, 74, 203, 61, 239, 31, 32, 62, 200, 240, 116, 190, 178, 235, 42, 190, 69, 93, 42, 191, 18, 171, 21, 191, 163, 43, 134, 191, 21, 122, 160, 191, 44, 183, 180, 190, 140, 69, 216, 62, 65, 208, 171, 189, 183, 48, 40, 188, 65, 214, 115, 190, 36, 53, 114, 62, 247, 224, 18, 63, 237, 33, 125, 187, 150, 244, 193, 62, 173, 39, 158, 191, 27, 108, 236, 190, 67, 228, 82, 191, 148, 100, 133, 191, 221, 61, 78, 62, 250, 213, 124, 191, 193, 214, 107, 62, 17, 206, 7, 190, 93, 174, 34, 61, 106, 37, 134, 62, 233, 247, 130, 60, 33, 179, 81, 61, 74, 88, 187, 60, 225, 74, 209, 60, 140, 186, 57, 190, 207, 3, 161, 190, 172, 36, 163, 187, 189, 136, 241, 61, 223, 226, 20, 62, 38, 80, 145, 61, 16, 232, 135, 61, 218, 163, 132, 62, 60, 7, 78, 189, 104, 214, 6, 62, 144, 186, 18, 188, 110, 47, 250, 61, 193, 36, 37, 190, 184, 252, 148, 62, 101, 246, 244, 60, 183, 81, 167, 62, 121, 114, 49, 62, 191, 85, 33, 191, 119, 229, 194, 189, 106, 235, 54, 62, 184, 32, 68, 61, 141, 146, 146, 190, 133, 213, 140, 61, 173, 99, 190, 188, 253, 120, 146, 191, 52, 82, 209, 190, 208, 191, 220, 62, 214, 240, 143, 191, 164, 110, 162, 190, 95, 51, 41, 62, 238, 195, 32, 60, 167, 159, 83, 62, 71, 239, 167, 189, 144, 207, 40, 188, 137, 239, 213, 62, 129, 93, 231, 189, 31, 33, 173, 191, 79, 129, 78, 191, 237, 179, 221, 189, 57, 214, 193, 190, 148, 217, 198, 190, 238, 116, 119, 62, 223, 115, 147, 62, 73, 43, 176, 62, 95, 182, 58, 62, 162, 180, 235, 61, 50, 100, 31, 188, 95, 79, 68, 189, 105, 76, 238, 189, 110, 155, 216, 60, 234, 72, 176, 189, 200, 110, 204, 189, 16, 191, 103, 61, 10, 141, 29, 190, 216, 248, 201, 60, 62, 126, 17, 62, 16, 119, 4, 189, 77, 144, 36, 190, 59, 229, 60, 187, 143, 129, 46, 189, 183, 198, 47, 190, 25, 215, 231, 188, 65, 228, 148, 189, 9, 32, 40, 190, 227, 164, 100, 61, 101, 0, 0, 62, 124, 118, 155, 189, 32, 52, 186, 61, 11, 37, 254, 188, 234, 77, 215, 189, 189, 194, 44, 190, 249, 191, 50, 190, 11, 95, 4, 190, 217, 216, 155, 59, 41, 53, 165, 189, 26, 140, 10, 62, 131, 130, 43, 59, 82, 137, 232, 62, 80, 175, 214, 189, 180, 105, 74, 62, 175, 187, 95, 62, 165, 0, 69, 62, 87, 54, 97, 190, 56, 13, 74, 61, 144, 20, 114, 190, 2, 173, 59, 62, 112, 23, 14, 62, 156, 126, 50, 190, 183, 254, 58, 190, 135, 83, 66, 62, 157, 165, 160, 190, 202, 244, 123, 62, 14, 158, 42, 191, 23, 40, 88, 190, 13, 232, 178, 61, 248, 212, 132, 61, 80, 39, 57, 62, 86, 167, 141, 191, 116, 207, 31, 191, 143, 10, 95, 61, 166, 116, 43, 62, 218, 144, 168, 62, 170, 154, 81, 191, 197, 157, 41, 191, 87, 45, 188, 62, 187, 9, 61, 61, 97, 9, 58, 190, 192, 31, 234, 189, 33, 168, 4, 189, 180, 177, 167, 189, 5, 97, 32, 61, 70, 236, 75, 62, 229, 19, 66, 190, 177, 217, 230, 61, 230, 241, 178, 191, 108, 56, 16, 191, 94, 197, 159, 190, 119, 191, 198, 191, 38, 13, 19, 62, 5, 153, 100, 191, 199, 134, 46, 62, 145, 65, 99, 62, 54, 175, 113, 189, 161, 99, 139, 62, 44, 117, 221, 60, 26, 182, 0, 189, 109, 225, 64, 62, 127, 2, 45, 190, 63, 93, 182, 189, 24, 85, 235, 189, 5, 67, 135, 62, 163, 206, 79, 190, 222, 165, 123, 61, 204, 23, 190, 190, 155, 149, 38, 62, 118, 114, 161, 60, 205, 145, 103, 190, 92, 74, 141, 190, 91, 238, 182, 190, 247, 98, 203, 61, 242, 71, 35, 190, 64, 210, 86, 62, 247, 180, 129, 62, 182, 14, 6, 62, 46, 30, 211, 62, 164, 133, 175, 190, 208, 84, 0, 62, 190, 15, 6, 190, 115, 171, 23, 189, 87, 189, 235, 61, 23, 206, 111, 62, 245, 78, 9, 60, 108, 96, 170, 190, 198, 169, 208, 61, 207, 203, 64, 190, 153, 17, 0, 190, 98, 23, 97, 190, 158, 201, 65, 61, 155, 176, 97, 189, 136, 104, 170, 61, 60, 109, 56, 62, 182, 60, 64, 190, 207, 134, 128, 189, 94, 81, 79, 190, 233, 33, 48, 190, 231, 197, 140, 62, 93, 169, 15, 190, 130, 107, 200, 190, 150, 58, 141, 62, 142, 182, 147, 189, 75, 61, 8, 62, 9, 66, 80, 60, 233, 1, 120, 62, 85, 64, 42, 190, 103, 234, 231, 189, 61, 98, 233, 61, 167, 88, 111, 189, 159, 48, 198, 61, 88, 228, 38, 62, 52, 36, 53, 190, 165, 38, 223, 61, 124, 211, 234, 60, 192, 96, 43, 190, 102, 33, 46, 190, 57, 111, 178, 189, 41, 16, 1, 190, 61, 108, 143, 61, 32, 187, 190, 189, 145, 129, 208, 189, 222, 38, 127, 61, 124, 177, 154, 61, 92, 200, 172, 61, 23, 86, 21, 62, 10, 69, 170, 189, 125, 82, 199, 61, 96, 188, 146, 189, 94, 99, 195, 189, 132, 53, 40, 190, 124, 196, 192, 60, 160, 199, 138, 61, 121, 153, 117, 188, 126, 146, 12, 62, 23, 57, 158, 189, 78, 134, 23, 190, 121, 224, 190, 61, 30, 26, 55, 61, 65, 173, 159, 189, 137, 172, 231, 61, 225, 140, 229, 189, 67, 119, 43, 190, 99, 193, 180, 61, 229, 40, 210, 189, 236, 52, 163, 61, 244, 1, 12, 189, 230, 106, 212, 61, 120, 30, 239, 189, 46, 247, 67, 189, 226, 147, 137, 189, 192, 95, 183, 188, 133, 152, 163, 189, 12, 150, 21, 190, 214, 22, 115, 61, 236, 64, 35, 62, 69, 237, 150, 189, 197, 227, 167, 61, 229, 106, 21, 62, 131, 203, 23, 190, 197, 211, 229, 61, 255, 173, 117, 190, 216, 90, 174, 189, 89, 0, 29, 60, 8, 117, 234, 61, 34, 121, 0, 189, 184, 216, 0, 62, 95, 25, 46, 190, 234, 225, 173, 61, 79, 233, 117, 190, 96, 239, 184, 190, 211, 86, 180, 60, 187, 127, 214, 190, 202, 184, 21, 191, 146, 154, 225, 62, 218, 62, 12, 191, 223, 110, 249, 190, 81, 109, 88, 62, 22, 32, 71, 191, 244, 187, 165, 190, 68, 159, 166, 190, 224, 107, 8, 62, 113, 135, 150, 62, 171, 105, 109, 62, 134, 70, 171, 62, 150, 66, 253, 61, 56, 211, 138, 190, 227, 241, 171, 62, 149, 175, 7, 191, 25, 186, 204, 59, 60, 112, 129, 61, 71, 97, 156, 190, 227, 115, 5, 190, 126, 155, 86, 62, 23, 236, 253, 190, 163, 201, 16, 62, 207, 249, 102, 62, 226, 203, 169, 190, 188, 99, 220, 189, 126, 234, 45, 61, 241, 119, 10, 189, 248, 139, 49, 190, 187, 57, 143, 189, 30, 119, 253, 61, 1, 8, 223, 189, 227, 107, 242, 59, 84, 200, 10, 62, 16, 230, 143, 62, 50, 229, 134, 189, 112, 41, 10, 62, 105, 155, 78, 189, 65, 109, 90, 60, 65, 21, 141, 62, 172, 67, 161, 62, 156, 43, 178, 62, 251, 18, 135, 190, 41, 45, 187, 62, 177, 50, 201, 60, 123, 107, 127, 62, 85, 33, 40, 188, 117, 112, 6, 187, 243, 186, 232, 187, 12, 198, 68, 62, 92, 157, 139, 62, 191, 4, 136, 190, 84, 243, 105, 61, 217, 45, 214, 190, 32, 228, 196, 188, 179, 125, 28, 190, 143, 37, 3, 191, 181, 238, 135, 190, 47, 0, 147, 62, 42, 217, 250, 189, 219, 79, 81, 61};
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
                alignas(float) const unsigned char memory[] = {156, 41, 37, 189, 171, 166, 23, 61, 231, 95, 214, 189, 5, 162, 22, 61, 129, 96, 172, 62, 117, 209, 147, 190, 89, 151, 75, 62, 254, 66, 60, 62, 147, 56, 35, 59, 152, 157, 206, 189, 176, 236, 88, 190, 182, 114, 151, 62, 59, 171, 90, 62, 170, 85, 138, 62, 198, 8, 65, 62, 247, 131, 228, 61, 26, 99, 184, 61, 41, 209, 185, 62, 17, 193, 54, 60, 165, 101, 30, 61, 135, 34, 201, 189, 96, 141, 237, 60, 84, 34, 24, 189, 252, 137, 144, 190, 213, 255, 160, 189, 28, 35, 19, 62, 204, 56, 87, 61, 84, 41, 154, 59, 98, 182, 97, 190, 210, 243, 60, 190, 195, 168, 119, 62, 251, 22, 143, 186};
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
                alignas(float) const unsigned char memory[] = {207, 44, 179, 189, 242, 242, 44, 63, 122, 203, 51, 62, 176, 135, 176, 62, 20, 97, 77, 189, 73, 7, 29, 191, 228, 245, 215, 190, 12, 120, 137, 189, 103, 77, 196, 62, 8, 155, 238, 190, 67, 63, 126, 190, 163, 252, 56, 62, 254, 235, 62, 191, 135, 149, 193, 189, 175, 131, 98, 63, 0, 140, 129, 190, 229, 186, 205, 60, 172, 46, 235, 190, 28, 172, 123, 61, 247, 231, 216, 189, 92, 35, 222, 62, 113, 200, 17, 191, 200, 108, 251, 62, 83, 195, 71, 63, 54, 122, 145, 61, 214, 182, 41, 191, 192, 60, 229, 62, 46, 4, 133, 190, 42, 221, 43, 188, 24, 250, 32, 189, 187, 127, 93, 63, 155, 239, 153, 190, 145, 158, 214, 189, 39, 242, 169, 61, 248, 231, 12, 191, 205, 64, 22, 190, 58, 67, 83, 190, 237, 228, 59, 62, 32, 136, 171, 189, 241, 217, 62, 190, 203, 103, 147, 189, 26, 58, 33, 60, 175, 125, 156, 60, 136, 220, 215, 190, 100, 68, 148, 61, 223, 242, 65, 190, 231, 223, 224, 188, 206, 181, 67, 191, 245, 13, 86, 188, 134, 15, 251, 189, 55, 36, 15, 61, 53, 21, 166, 61, 160, 170, 114, 62, 157, 129, 54, 61, 33, 101, 193, 61, 133, 161, 9, 63, 248, 86, 24, 59, 81, 233, 131, 62, 245, 251, 20, 62, 201, 191, 154, 189, 251, 237, 174, 60, 155, 202, 184, 189, 45, 97, 22, 62, 197, 232, 135, 61};
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
                alignas(float) const unsigned char memory[] = {81, 110, 103, 59, 62, 186, 139, 190};
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
    alignas(float) const unsigned char memory[] = {245, 236, 80, 191, 92, 196, 32, 191, 26, 149, 167, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {51, 222, 227, 191, 7, 148, 97, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0027/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}