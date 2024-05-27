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
                alignas(float) const unsigned char memory[] = {202, 226, 62, 187, 149, 192, 9, 191, 24, 203, 250, 59, 164, 74, 25, 63, 146, 19, 83, 191, 75, 155, 179, 190, 210, 66, 8, 63, 0, 99, 7, 63, 116, 187, 175, 189, 64, 215, 199, 62, 211, 213, 253, 62, 151, 8, 174, 62, 76, 242, 100, 190, 234, 29, 162, 62, 148, 251, 192, 190, 106, 28, 240, 62, 96, 106, 43, 63, 197, 238, 48, 62, 96, 85, 33, 63, 177, 184, 154, 190, 94, 58, 42, 191, 142, 165, 132, 190, 180, 179, 165, 190, 172, 29, 21, 191, 102, 79, 38, 191, 75, 141, 149, 191, 145, 25, 179, 189, 176, 228, 90, 191, 158, 19, 126, 62, 8, 141, 137, 62, 86, 39, 64, 191, 100, 50, 54, 63, 236, 237, 211, 62, 223, 118, 231, 60, 19, 245, 98, 63, 131, 141, 125, 190, 209, 255, 173, 190, 208, 10, 251, 62, 22, 117, 98, 190, 100, 128, 228, 189, 160, 224, 150, 191, 125, 191, 252, 190, 10, 10, 35, 63, 17, 196, 79, 63, 219, 131, 236, 62, 145, 208, 104, 190, 117, 183, 9, 191, 214, 5, 74, 62, 181, 51, 127, 189, 144, 237, 36, 191, 159, 88, 137, 62, 35, 23, 238, 188, 251, 5, 87, 63, 143, 28, 148, 62, 169, 20, 4, 63, 55, 94, 161, 63, 23, 37, 77, 62, 239, 85, 36, 189, 154, 89, 74, 61, 235, 81, 34, 62, 163, 72, 86, 191, 205, 85, 25, 63, 4, 5, 46, 62, 40, 173, 71, 63, 205, 62, 75, 191, 174, 116, 36, 190, 129, 82, 12, 62, 253, 243, 223, 191, 206, 221, 20, 191, 133, 60, 203, 190, 75, 131, 134, 62, 235, 10, 225, 190, 66, 93, 54, 63, 234, 39, 236, 190, 57, 59, 138, 190, 107, 254, 145, 189, 58, 57, 124, 191, 37, 178, 50, 62, 105, 102, 86, 191, 16, 229, 98, 190, 244, 235, 13, 60, 69, 81, 109, 62, 99, 67, 94, 63, 206, 66, 162, 62, 140, 187, 194, 62, 144, 196, 94, 190, 201, 122, 184, 190, 93, 27, 180, 61, 255, 54, 47, 191, 177, 216, 192, 61, 222, 56, 150, 62, 117, 58, 26, 191, 98, 235, 111, 61, 27, 183, 1, 63, 182, 140, 144, 63, 145, 31, 126, 62};
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
                alignas(float) const unsigned char memory[] = {53, 210, 28, 191, 133, 20, 18, 191, 14, 137, 230, 189, 177, 80, 35, 190, 151, 155, 6, 63, 250, 4, 28, 190, 122, 209, 144, 189, 180, 27, 195, 189, 160, 82, 152, 62, 152, 198, 103, 63, 136, 191, 8, 191, 54, 28, 239, 62, 3, 255, 138, 190, 205, 161, 185, 189, 172, 210, 168, 62, 6, 128, 26, 190, 238, 78, 242, 61, 0, 33, 62, 189, 56, 110, 75, 62, 240, 167, 66, 191, 89, 13, 214, 61, 122, 2, 70, 62, 141, 254, 96, 62, 164, 56, 173, 190, 156, 14, 69, 191, 203, 241, 76, 62, 74, 89, 34, 62, 77, 162, 162, 190, 213, 216, 31, 191, 136, 110, 3, 63, 49, 70, 190, 60, 67, 222, 149, 189};
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
                alignas(float) const unsigned char memory[] = {130, 179, 162, 60, 158, 145, 74, 61, 227, 237, 176, 62, 28, 243, 118, 61, 117, 88, 60, 190, 221, 91, 98, 61, 27, 166, 115, 62, 150, 172, 115, 190, 152, 193, 35, 190, 91, 91, 233, 61, 125, 215, 20, 62, 82, 3, 46, 62, 17, 235, 102, 188, 84, 157, 134, 190, 24, 27, 157, 60, 218, 122, 21, 190, 3, 51, 90, 190, 52, 179, 195, 61, 30, 119, 116, 61, 80, 5, 87, 190, 149, 193, 62, 62, 153, 116, 218, 62, 68, 9, 161, 190, 190, 241, 136, 190, 128, 209, 184, 61, 147, 183, 200, 60, 165, 36, 103, 61, 171, 0, 52, 190, 138, 5, 77, 62, 26, 233, 38, 61, 209, 133, 22, 190, 51, 119, 101, 190, 115, 35, 19, 190, 186, 203, 165, 62, 98, 248, 242, 187, 33, 205, 178, 190, 119, 252, 45, 61, 107, 78, 161, 190, 175, 211, 30, 189, 164, 189, 71, 190, 1, 225, 144, 189, 159, 240, 118, 61, 152, 135, 81, 190, 49, 205, 181, 61, 146, 105, 0, 189, 91, 246, 163, 61, 236, 110, 32, 190, 57, 202, 36, 62, 96, 1, 221, 61, 65, 169, 172, 190, 175, 213, 241, 190, 82, 138, 63, 190, 130, 237, 1, 61, 61, 35, 212, 62, 202, 227, 86, 62, 223, 159, 9, 61, 39, 251, 244, 189, 76, 116, 132, 62, 188, 252, 7, 190, 172, 113, 13, 191, 246, 78, 1, 190, 224, 83, 161, 62, 19, 231, 23, 62, 31, 13, 15, 191, 250, 167, 100, 61, 150, 211, 118, 63, 32, 131, 156, 189, 0, 119, 167, 189, 244, 173, 67, 190, 143, 227, 21, 191, 20, 117, 102, 61, 73, 176, 27, 191, 150, 127, 91, 190, 141, 168, 142, 62, 106, 125, 38, 62, 92, 13, 170, 61, 3, 24, 6, 63, 172, 223, 135, 191, 244, 74, 239, 189, 103, 28, 190, 190, 82, 41, 83, 62, 180, 251, 4, 190, 1, 101, 201, 190, 216, 238, 49, 190, 51, 225, 70, 62, 15, 99, 11, 63, 28, 126, 251, 190, 82, 83, 134, 61, 181, 86, 1, 63, 239, 166, 34, 190, 16, 39, 51, 62, 135, 111, 126, 189, 112, 146, 134, 62, 121, 110, 124, 62, 86, 106, 162, 62, 102, 78, 224, 190, 107, 254, 175, 61, 210, 98, 199, 190, 94, 181, 230, 61, 124, 52, 134, 61, 17, 226, 140, 62, 49, 160, 73, 62, 230, 120, 142, 190, 164, 75, 73, 62, 87, 55, 71, 62, 13, 203, 161, 61, 0, 179, 1, 190, 242, 209, 37, 62, 103, 120, 157, 190, 219, 0, 39, 62, 18, 216, 62, 62, 132, 4, 196, 188, 124, 21, 120, 61, 110, 38, 137, 188, 240, 82, 175, 62, 27, 8, 5, 62, 112, 94, 4, 62, 197, 131, 130, 190, 140, 42, 40, 188, 207, 120, 73, 62, 214, 5, 41, 191, 142, 245, 169, 61, 64, 108, 63, 62, 235, 238, 92, 187, 16, 86, 177, 190, 84, 27, 102, 61, 231, 137, 233, 189, 199, 198, 128, 62, 225, 60, 192, 60, 184, 177, 138, 190, 129, 34, 207, 189, 243, 58, 30, 60, 43, 30, 7, 62, 254, 237, 184, 60, 118, 32, 176, 189, 246, 89, 83, 62, 2, 6, 2, 189, 123, 228, 141, 189, 57, 154, 41, 190, 77, 209, 24, 190, 104, 129, 211, 190, 149, 73, 106, 62, 12, 222, 56, 62, 148, 252, 142, 190, 32, 184, 98, 190, 234, 112, 30, 60, 157, 199, 81, 62, 210, 163, 131, 188, 227, 7, 176, 188, 24, 198, 228, 60, 18, 186, 4, 187, 150, 54, 112, 62, 27, 19, 152, 190, 51, 116, 198, 59, 47, 92, 157, 60, 209, 207, 187, 189, 209, 27, 222, 189, 92, 143, 41, 62, 111, 209, 85, 62, 4, 223, 249, 188, 79, 91, 155, 188, 197, 220, 45, 62, 220, 212, 181, 61, 193, 101, 16, 190, 220, 60, 15, 190, 227, 164, 32, 62, 83, 15, 11, 190, 26, 172, 14, 62, 33, 240, 221, 61, 249, 60, 39, 190, 58, 79, 192, 61, 92, 174, 135, 189, 2, 90, 8, 190, 92, 242, 45, 61, 130, 176, 150, 189, 96, 54, 184, 61, 86, 26, 66, 189, 98, 197, 202, 61, 2, 188, 1, 190, 206, 132, 225, 61, 49, 200, 250, 189, 209, 1, 155, 188, 161, 174, 49, 190, 109, 8, 25, 62, 236, 106, 203, 61, 4, 169, 252, 189, 6, 113, 253, 61, 221, 181, 155, 189, 240, 96, 209, 189, 188, 50, 181, 187, 151, 28, 62, 61, 147, 103, 16, 62, 67, 125, 221, 61, 133, 116, 212, 190, 54, 36, 49, 62, 77, 197, 172, 61, 128, 178, 83, 190, 126, 29, 145, 190, 40, 94, 105, 62, 166, 225, 236, 190, 6, 67, 57, 190, 113, 203, 100, 62, 149, 224, 80, 62, 113, 255, 237, 60, 193, 35, 131, 62, 237, 88, 17, 191, 48, 131, 129, 189, 19, 234, 113, 190, 84, 127, 209, 61, 157, 248, 133, 190, 6, 102, 33, 190, 132, 172, 46, 190, 211, 115, 219, 60, 98, 125, 209, 62, 96, 221, 149, 190, 25, 10, 182, 190, 155, 61, 118, 189, 75, 248, 88, 189, 92, 207, 103, 62, 174, 128, 164, 190, 111, 12, 26, 190, 109, 217, 111, 62, 44, 211, 2, 62, 40, 199, 25, 190, 77, 42, 64, 61, 238, 102, 113, 189, 186, 108, 225, 62, 90, 245, 165, 61, 35, 202, 178, 62, 177, 178, 171, 62, 79, 100, 198, 190, 89, 68, 112, 62, 80, 39, 156, 190, 10, 80, 71, 190, 75, 71, 129, 190, 138, 250, 165, 189, 163, 46, 93, 188, 113, 85, 178, 190, 152, 143, 74, 62, 54, 14, 17, 62, 121, 165, 218, 61, 174, 100, 12, 60, 98, 61, 13, 62, 186, 124, 94, 189, 53, 42, 90, 190, 144, 9, 72, 191, 195, 46, 247, 190, 83, 7, 121, 62, 216, 115, 128, 189, 171, 17, 40, 189, 169, 95, 200, 190, 181, 94, 127, 62, 56, 147, 186, 189, 63, 70, 153, 190, 37, 122, 53, 190, 216, 115, 73, 62, 128, 40, 139, 189, 211, 144, 168, 61, 34, 119, 173, 61, 37, 100, 162, 61, 99, 228, 133, 188, 40, 0, 82, 190, 110, 243, 23, 62, 223, 190, 79, 189, 66, 15, 24, 190, 117, 227, 66, 190, 90, 9, 61, 62, 97, 231, 46, 189, 171, 91, 13, 62, 193, 181, 171, 61, 171, 125, 189, 61, 69, 8, 11, 62, 255, 172, 14, 62, 187, 0, 182, 190, 195, 89, 163, 189, 77, 195, 169, 190, 127, 10, 22, 191, 132, 37, 250, 62, 72, 103, 65, 186, 129, 21, 70, 190, 150, 232, 186, 62, 9, 13, 149, 60, 40, 29, 27, 191, 154, 103, 140, 191, 236, 194, 238, 61, 84, 39, 112, 61, 196, 122, 184, 188, 87, 170, 225, 189, 242, 84, 50, 190, 5, 236, 0, 62, 99, 185, 22, 190, 88, 213, 136, 189, 75, 29, 147, 189, 35, 66, 197, 189, 189, 106, 192, 61, 211, 194, 149, 189, 209, 89, 9, 60, 124, 120, 23, 190, 135, 41, 36, 62, 185, 117, 97, 189, 167, 12, 160, 188, 252, 62, 29, 62, 110, 181, 193, 189, 2, 185, 210, 189, 217, 118, 156, 189, 215, 106, 161, 189, 227, 24, 174, 61, 240, 253, 51, 190, 161, 199, 140, 61, 237, 168, 198, 189, 170, 141, 247, 189, 111, 98, 75, 190, 39, 72, 191, 61, 207, 110, 238, 189, 89, 182, 39, 190, 81, 34, 179, 61, 254, 166, 60, 188, 118, 161, 49, 190, 67, 210, 140, 61, 99, 205, 138, 61, 42, 163, 211, 61, 231, 75, 246, 189, 149, 225, 158, 190, 114, 187, 53, 62, 187, 16, 109, 189, 127, 179, 7, 191, 172, 43, 4, 189, 146, 65, 210, 190, 49, 61, 71, 190, 62, 66, 152, 62, 226, 116, 237, 61, 23, 59, 125, 62, 167, 229, 18, 63, 253, 27, 176, 191, 158, 168, 240, 59, 18, 207, 117, 190, 135, 87, 202, 61, 103, 195, 158, 190, 158, 234, 127, 190, 61, 40, 155, 190, 15, 71, 212, 62, 58, 128, 222, 188, 74, 215, 211, 191, 233, 26, 79, 62, 103, 188, 162, 60, 96, 195, 143, 190, 181, 16, 153, 62, 124, 74, 176, 189, 85, 132, 12, 190, 63, 208, 4, 62, 190, 250, 68, 61, 33, 14, 149, 190, 158, 189, 31, 62, 92, 39, 194, 189, 249, 212, 93, 190, 39, 37, 130, 62, 232, 15, 109, 183, 42, 131, 87, 190, 161, 169, 137, 61, 24, 252, 126, 62, 220, 227, 161, 189, 104, 170, 84, 189, 102, 230, 248, 189, 251, 50, 204, 61, 185, 131, 121, 62, 80, 111, 134, 189, 64, 245, 55, 62, 169, 175, 135, 62, 36, 217, 137, 189, 240, 102, 129, 190, 183, 22, 133, 190, 72, 115, 192, 61, 157, 178, 82, 62, 131, 82, 186, 62, 39, 44, 1, 62, 194, 202, 130, 62, 194, 9, 3, 189, 149, 166, 136, 61, 110, 15, 110, 190, 72, 117, 79, 191, 166, 151, 174, 61, 57, 98, 6, 62, 217, 175, 235, 61, 169, 0, 248, 190, 190, 60, 10, 62, 38, 148, 22, 62, 185, 59, 34, 190, 119, 219, 165, 61, 145, 114, 53, 189, 189, 229, 91, 190, 52, 138, 157, 189, 0, 130, 178, 189, 96, 37, 85, 190, 99, 35, 230, 189, 80, 240, 128, 188, 193, 48, 109, 189, 232, 47, 28, 190, 185, 206, 175, 61, 6, 34, 137, 61, 46, 221, 204, 189, 221, 26, 42, 190, 134, 111, 5, 190, 164, 139, 76, 190, 172, 208, 169, 61, 236, 217, 55, 190, 79, 178, 165, 61, 102, 88, 238, 189, 108, 251, 160, 61, 252, 127, 250, 189, 207, 65, 235, 61, 8, 169, 172, 189, 49, 181, 34, 190, 6, 168, 236, 61, 82, 21, 198, 59, 177, 81, 246, 60, 6, 44, 88, 189, 207, 97, 124, 61, 183, 113, 173, 61, 224, 82, 27, 188, 58, 8, 33, 61, 236, 101, 73, 62, 85, 28, 27, 62, 255, 24, 98, 190, 125, 245, 84, 62, 51, 93, 21, 189, 213, 242, 155, 188, 141, 184, 250, 189, 67, 223, 83, 62, 125, 216, 143, 61, 158, 113, 135, 62, 145, 135, 12, 62, 129, 34, 230, 61, 193, 231, 66, 62, 50, 61, 233, 60, 215, 98, 47, 62, 56, 9, 165, 62, 174, 127, 172, 190, 227, 2, 186, 190, 255, 61, 133, 189, 69, 120, 172, 62, 201, 165, 45, 190, 104, 111, 122, 60, 181, 6, 38, 190, 173, 142, 151, 61, 107, 183, 154, 61, 117, 151, 248, 189, 243, 10, 219, 189, 108, 153, 163, 62, 39, 72, 42, 190, 219, 87, 55, 190, 171, 244, 131, 61, 101, 167, 38, 62, 25, 143, 191, 61, 23, 251, 23, 190, 228, 48, 141, 189, 227, 182, 84, 190, 195, 255, 52, 62, 246, 208, 164, 190, 239, 20, 213, 189, 217, 157, 63, 187, 38, 33, 193, 189, 38, 12, 100, 190, 83, 135, 84, 62, 84, 217, 106, 62, 181, 96, 112, 62, 187, 172, 188, 190, 95, 39, 243, 189, 174, 136, 150, 189, 145, 110, 218, 190, 91, 67, 164, 62, 155, 21, 189, 61, 175, 53, 50, 189, 200, 153, 140, 61, 150, 58, 153, 62, 212, 246, 207, 190, 55, 109, 141, 191, 206, 83, 34, 190, 81, 197, 153, 60, 121, 4, 50, 62, 60, 77, 59, 190, 250, 117, 124, 61, 234, 68, 244, 62, 26, 52, 8, 63, 69, 175, 96, 61, 18, 132, 195, 189, 19, 3, 1, 191, 109, 97, 0, 63, 40, 200, 88, 191, 119, 146, 0, 189, 61, 220, 18, 61, 160, 85, 223, 59, 232, 118, 206, 188, 188, 133, 24, 62, 136, 150, 163, 190, 12, 154, 76, 190, 59, 49, 4, 190, 166, 210, 201, 62, 181, 99, 208, 190, 16, 61, 3, 190, 0, 193, 64, 61, 169, 134, 238, 59, 99, 34, 231, 62, 105, 163, 246, 189, 106, 121, 106, 191, 241, 197, 157, 62, 76, 6, 18, 190, 178, 29, 19, 190, 192, 82, 212, 190, 131, 126, 189, 62, 71, 168, 160, 62, 76, 67, 121, 62, 80, 199, 125, 190, 47, 213, 15, 190, 241, 122, 204, 62, 7, 165, 218, 62, 89, 32, 3, 190, 1, 226, 110, 190, 108, 26, 177, 190, 46, 164, 92, 62, 122, 230, 60, 191, 84, 72, 224, 61, 166, 168, 99, 62, 190, 41, 129, 62, 235, 28, 131, 189, 70, 167, 164, 189, 216, 10, 175, 190, 125, 95, 187, 61, 129, 67, 218, 189, 124, 121, 26, 62, 159, 65, 133, 190, 209, 11, 85, 190, 135, 112, 179, 189, 43, 15, 190, 61, 94, 15, 235, 62, 180, 226, 66, 61, 70, 69, 236, 190, 132, 68, 154, 62, 2, 203, 7, 190, 6, 167, 89, 189, 153, 98, 164, 189, 89, 34, 173, 62, 206, 11, 160, 187, 106, 193, 129, 62, 145, 229, 29, 190, 10, 29, 37, 190, 239, 73, 218, 190, 213, 201, 13, 62, 224, 23, 2, 190, 212, 101, 25, 62, 168, 94, 163, 189, 223, 123, 160, 190, 248, 18, 118, 62, 44, 121, 164, 62, 227, 27, 202, 61, 255, 165, 148, 60, 6, 4, 150, 62, 110, 30, 148, 190, 9, 32, 128, 189, 214, 186, 11, 62, 5, 222, 56, 61, 199, 65, 153, 189, 158, 146, 194, 61, 173, 179, 150, 62, 89, 53, 36, 62, 89, 155, 134, 188, 45, 153, 85, 190, 159, 162, 90, 62, 146, 111, 194, 62, 75, 11, 128, 191, 116, 156, 143, 188, 179, 42, 135, 62, 215, 46, 3, 190, 188, 178, 220, 190, 7, 169, 124, 62, 156, 20, 37, 62, 219, 93, 84, 62, 52, 255, 246, 61, 152, 217, 218, 62, 247, 72, 57, 61, 111, 241, 224, 189, 3, 13, 17, 61, 227, 172, 229, 190, 130, 225, 93, 62, 122, 81, 2, 190, 210, 224, 124, 188, 75, 6, 249, 60, 177, 231, 166, 59, 89, 221, 71, 190, 106, 22, 172, 61, 18, 1, 101, 62, 169, 64, 144, 189, 213, 90, 187, 189, 196, 219, 202, 58, 244, 85, 70, 190, 101, 165, 148, 191, 4, 192, 149, 189, 46, 192, 80, 190, 185, 151, 178, 62, 197, 107, 4, 60, 92, 93, 213, 190, 92, 120, 77, 62, 49, 221, 211, 61, 70, 232, 206, 61, 119, 58, 50, 190, 148, 255, 128, 62, 46, 125, 142, 61, 99, 251, 130, 61, 95, 19, 2, 191, 82, 157, 240, 61, 30, 186, 11, 189, 16, 232, 40, 62, 178, 114, 144, 188, 72, 148, 7, 190, 254, 223, 149, 189, 173, 65, 52, 62, 161, 136, 190, 61, 87, 204, 107, 62, 103, 201, 235, 61, 185, 198, 207, 189, 154, 38, 197, 190, 24, 12, 52, 191, 165, 1, 63, 188, 229, 181, 202, 61, 76, 189, 139, 190, 122, 185, 226, 59, 95, 30, 141, 61, 143, 101, 165, 61, 2, 65, 9, 62, 135, 186, 225, 188, 9, 144, 29, 62, 27, 108, 251, 60, 122, 149, 90, 190, 21, 12, 40, 63, 219, 178, 129, 61, 21, 46, 85, 62, 181, 50, 26, 190, 193, 26, 26, 62, 95, 5, 130, 62, 98, 36, 88, 62, 70, 19, 200, 61, 254, 18, 17, 62, 96, 120, 102, 191, 216, 32, 128, 62, 242, 124, 25, 62, 226, 5, 10, 63, 173, 213, 165, 60, 123, 8, 253, 190, 247, 255, 50, 62, 58, 92, 233, 61, 137, 182, 128, 190, 115, 218, 181, 190, 52, 72, 137, 62, 22, 175, 160, 190, 71, 156, 171, 189, 84, 15, 153, 61, 107, 75, 224, 61, 245, 21, 138, 189, 53, 140, 124, 189, 83, 82, 178, 62, 252, 91, 139, 61, 131, 176, 153, 190, 84, 236, 134, 190, 216, 37, 123, 61, 104, 181, 225, 62, 98, 25, 152, 191, 56, 171, 1, 62, 181, 111, 160, 188, 11, 106, 18, 61, 70, 191, 18, 191, 133, 184, 141, 57, 72, 209, 108, 61, 126, 224, 144, 62, 10, 169, 175, 60, 197, 193, 210, 190, 125, 79, 183, 62, 222, 246, 255, 59, 230, 207, 65, 62, 193, 14, 14, 189, 211, 102, 232, 189, 210, 135, 116, 62, 196, 80, 165, 60, 51, 160, 190, 189, 248, 107, 190, 190, 55, 224, 116, 62, 86, 16, 242, 190, 192, 94, 120, 62, 68, 77, 141, 61, 133, 74, 58, 61, 232, 58, 206, 61, 106, 247, 1, 62, 239, 160, 176, 62, 151, 54, 121, 62, 30, 37, 188, 190, 224, 2, 38, 190, 19, 41, 124, 62, 176, 173, 67, 62, 135, 167, 12, 191, 123, 57, 127, 62, 68, 199, 38, 62, 179, 64, 61, 61, 33, 241, 124, 190, 78, 183, 41, 62, 174, 68, 187, 189, 186, 146, 141, 62, 231, 226, 70, 61, 195, 127, 72, 62, 218, 101, 85, 189, 147, 164, 138, 190, 112, 100, 87, 61, 43, 35, 58, 191, 192, 140, 58, 62, 6, 214, 61, 62, 189, 230, 97, 189, 88, 48, 127, 61, 237, 165, 184, 61, 41, 140, 234, 61, 14, 163, 57, 189, 65, 224, 53, 62, 135, 109, 234, 189, 39, 21, 183, 62, 22, 136, 206, 61, 189, 83, 70, 190, 85, 9, 197, 190, 217, 29, 124, 61, 120, 18, 158, 190, 157, 7, 212, 62, 79, 129, 75, 62, 44, 140, 1, 62, 146, 154, 198, 61, 138, 143, 210, 62, 74, 188, 165, 190, 123, 57, 31, 191, 46, 35, 223, 61, 57, 36, 89, 62, 254, 103, 61, 62, 70, 145, 42, 191, 104, 28, 188, 60, 60, 196, 9, 191, 12, 167, 162, 62, 85, 169, 64, 60, 21, 130, 17, 62, 171, 16, 178, 61, 246, 179, 196, 189, 215, 178, 120, 62, 58, 125, 149, 62, 132, 229, 25, 190, 248, 142, 182, 189, 40, 124, 48, 62, 145, 213, 192, 190, 228, 16, 15, 62, 57, 239, 129, 62, 188, 35, 35, 190, 90, 134, 164, 189, 241, 51, 167, 61, 85, 220, 150, 62, 253, 114, 137, 61, 164, 231, 13, 190, 59, 203, 252, 60, 249, 137, 10, 62, 2, 231, 135, 61, 3, 198, 46, 190, 151, 178, 189, 59, 49, 96, 156, 62, 219, 15, 36, 62, 192, 140, 153, 190, 135, 122, 180, 62, 176, 166, 176, 61, 115, 4, 132, 189, 38, 122, 161, 188, 142, 107, 9, 189, 248, 137, 153, 62, 103, 119, 33, 189, 97, 218, 111, 190, 146, 87, 133, 62, 229, 247, 62, 62, 8, 205, 224, 189, 19, 151, 43, 191, 226, 61, 236, 60, 135, 126, 92, 62, 5, 60, 201, 190, 191, 180, 29, 62, 19, 21, 237, 189, 242, 219, 140, 61, 171, 131, 194, 60, 89, 188, 236, 189, 155, 225, 14, 62, 235, 59, 139, 62, 18, 86, 96, 189, 113, 22, 87, 62, 221, 119, 212, 190, 19, 61, 46, 60, 197, 230, 16, 191, 228, 47, 81, 189, 7, 79, 212, 59, 191, 117, 180, 61, 34, 234, 185, 62, 237, 18, 209, 61, 223, 196, 217, 190, 114, 113, 47, 191, 95, 50, 186, 62, 125, 60, 11, 62, 63, 141, 143, 62, 8, 196, 180, 62, 136, 198, 138, 190, 85, 162, 68, 189, 216, 162, 150, 190, 56, 121, 181, 61, 103, 82, 67, 190, 141, 185, 175, 189, 220, 199, 67, 190, 116, 86, 121, 189, 115, 53, 79, 190, 116, 82, 4, 190, 186, 240, 10, 62, 68, 37, 75, 190, 251, 185, 231, 61, 88, 12, 172, 189, 250, 66, 222, 60, 112, 216, 242, 189, 61, 156, 229, 189, 96, 216, 3, 189, 44, 189, 141, 60, 190, 33, 36, 62, 61, 137, 172, 190, 236, 253, 169, 62, 32, 174, 170, 62, 63, 152, 138, 190, 84, 229, 31, 190, 127, 229, 13, 62, 39, 211, 70, 62, 89, 31, 62, 62, 79, 99, 31, 190, 129, 225, 70, 60, 20, 9, 57, 190, 164, 23, 110, 61, 101, 48, 141, 62, 128, 107, 34, 62, 168, 228, 128, 189, 0, 107, 59, 189, 137, 5, 14, 62, 74, 0, 189, 187, 76, 21, 15, 191, 30, 163, 249, 61, 105, 211, 54, 189, 71, 16, 11, 61, 100, 133, 55, 189, 135, 193, 75, 62, 21, 91, 218, 190, 37, 58, 19, 191, 20, 86, 163, 188, 194, 238, 74, 62, 156, 224, 79, 62, 80, 58, 211, 189, 214, 115, 86, 62, 255, 38, 16, 62, 211, 42, 191, 189, 126, 66, 146, 61, 200, 181, 63, 188, 80, 201, 132, 190, 129, 36, 204, 60, 206, 210, 23, 61, 6, 147, 184, 61, 209, 130, 95, 62, 154, 201, 10, 62, 253, 140, 252, 189, 244, 53, 186, 190, 50, 171, 98, 189, 221, 80, 48, 60, 82, 154, 255, 60, 93, 115, 28, 62, 146, 62, 161, 190, 146, 12, 72, 62, 88, 97, 159, 62, 54, 100, 25, 61, 146, 20, 27, 190, 251, 74, 29, 62, 136, 53, 126, 190, 111, 187, 128, 62, 216, 50, 70, 189, 147, 68, 135, 189, 36, 51, 225, 61, 155, 25, 74, 62, 42, 122, 241, 62, 88, 126, 143, 62, 109, 173, 231, 59, 107, 73, 237, 190, 98, 25, 132, 62, 23, 150, 53, 62, 57, 73, 51, 191, 214, 152, 196, 61, 142, 97, 149, 61, 146, 9, 74, 62, 65, 90, 109, 190, 31, 172, 243, 187, 164, 178, 140, 189, 43, 160, 167, 61, 152, 175, 93, 61, 249, 203, 98, 189, 231, 54, 141, 189, 121, 35, 248, 188, 183, 149, 89, 190, 41, 173, 185, 187, 253, 10, 18, 190, 249, 138, 157, 61, 147, 53, 10, 190, 233, 156, 197, 189, 61, 252, 163, 60, 56, 210, 159, 190, 19, 139, 179, 61, 139, 132, 214, 61, 2, 153, 157, 61, 71, 128, 159, 189, 3, 84, 199, 188, 202, 120, 253, 60, 250, 29, 30, 62, 103, 67, 97, 189, 141, 246, 242, 60, 57, 198, 51, 189, 7, 193, 91, 190, 204, 62, 254, 188, 108, 35, 185, 61, 129, 218, 235, 61, 38, 202, 12, 189, 117, 59, 219, 189, 147, 23, 237, 189, 197, 241, 171, 190, 108, 53, 172, 61, 180, 179, 137, 189, 35, 15, 93, 61, 73, 47, 131, 191, 215, 107, 200, 60, 104, 140, 84, 62, 25, 35, 63, 61, 223, 229, 59, 188, 228, 167, 69, 62, 245, 126, 181, 189, 171, 67, 235, 190, 166, 101, 7, 190, 54, 165, 148, 189, 26, 188, 165, 62, 3, 96, 130, 62, 205, 213, 178, 190, 165, 77, 133, 62, 150, 53, 88, 62, 75, 176, 71, 189, 254, 162, 21, 62, 199, 143, 163, 62, 161, 119, 111, 62, 161, 165, 143, 190, 201, 66, 229, 61, 65, 103, 142, 189, 190, 87, 74, 62, 139, 104, 158, 191, 58, 58, 217, 61, 30, 10, 37, 190, 164, 185, 40, 62, 187, 152, 40, 190, 204, 119, 185, 189, 112, 68, 42, 62, 125, 93, 159, 61, 87, 159, 35, 190, 237, 37, 214, 60, 237, 251, 86, 62, 13, 25, 197, 61, 230, 16, 209, 188, 8, 193, 134, 62, 180, 183, 80, 189, 112, 49, 166, 190, 100, 23, 137, 190, 88, 115, 69, 61, 135, 70, 201, 188, 56, 175, 96, 190, 125, 174, 244, 188, 120, 27, 145, 190, 128, 111, 242, 61, 64, 190, 255, 187, 176, 96, 234, 187, 128, 154, 14, 61, 47, 95, 136, 62, 127, 236, 83, 190, 187, 25, 228, 61, 6, 77, 141, 190, 40, 221, 180, 190, 3, 240, 143, 190, 99, 128, 172, 61, 103, 172, 141, 189, 43, 104, 13, 189, 148, 99, 158, 62, 126, 136, 235, 189, 128, 243, 165, 190, 227, 234, 249, 190, 128, 45, 138, 62, 109, 105, 43, 190, 203, 60, 188, 62, 190, 79, 10, 63, 115, 24, 27, 189, 15, 42, 61, 61, 167, 34, 245, 190, 241, 157, 1, 63, 246, 112, 240, 190, 90, 204, 166, 190, 130, 161, 180, 61, 122, 240, 51, 62, 29, 237, 148, 189, 143, 216, 140, 62, 77, 254, 60, 190, 45, 178, 51, 60, 164, 144, 161, 189, 79, 169, 173, 62, 138, 135, 239, 190, 44, 216, 52, 190, 248, 116, 25, 189, 122, 161, 156, 61, 82, 235, 215, 62, 155, 157, 44, 190, 210, 66, 248, 189, 246, 134, 237, 62, 179, 95, 126, 61, 102, 229, 190, 61, 143, 173, 57, 191, 241, 26, 156, 62, 8, 45, 32, 62, 80, 13, 12, 62, 223, 104, 30, 191};
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
                alignas(float) const unsigned char memory[] = {244, 243, 92, 62, 122, 196, 35, 189, 146, 89, 122, 60, 52, 44, 71, 62, 109, 251, 106, 62, 103, 165, 18, 61, 24, 149, 39, 62, 104, 135, 213, 189, 152, 18, 228, 59, 234, 92, 170, 189, 135, 154, 10, 62, 2, 126, 104, 62, 30, 17, 221, 59, 45, 123, 103, 189, 201, 218, 211, 189, 155, 151, 33, 62, 113, 254, 11, 62, 213, 148, 64, 62, 174, 101, 144, 190, 242, 113, 58, 62, 230, 113, 47, 62, 1, 244, 245, 188, 114, 63, 19, 190, 21, 20, 187, 62, 219, 178, 159, 189, 149, 33, 83, 190, 170, 191, 134, 62, 8, 16, 66, 61, 120, 26, 177, 190, 238, 131, 30, 189, 248, 80, 84, 190, 241, 233, 57, 62};
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
                alignas(float) const unsigned char memory[] = {65, 8, 143, 62, 168, 235, 114, 61, 41, 7, 67, 63, 135, 192, 108, 190, 118, 191, 154, 189, 253, 40, 129, 61, 57, 109, 132, 62, 44, 192, 59, 63, 141, 19, 116, 62, 225, 158, 242, 59, 113, 226, 161, 63, 254, 146, 142, 62, 14, 76, 85, 189, 108, 117, 218, 189, 63, 238, 182, 62, 189, 113, 218, 62, 166, 180, 183, 62, 96, 168, 151, 190, 243, 117, 29, 191, 93, 64, 31, 190, 250, 233, 62, 191, 245, 98, 206, 190, 79, 198, 161, 62, 111, 121, 108, 190, 32, 222, 200, 62, 195, 181, 221, 190, 221, 233, 93, 189, 229, 184, 135, 190, 164, 238, 205, 61, 253, 119, 132, 190, 255, 103, 186, 62, 105, 243, 52, 63, 182, 93, 123, 190, 18, 69, 141, 62, 178, 60, 210, 62, 128, 29, 216, 189, 79, 104, 46, 190, 123, 87, 32, 62, 128, 124, 198, 190, 210, 250, 89, 62, 89, 136, 6, 190, 176, 202, 198, 189, 218, 108, 147, 60, 156, 28, 164, 190, 225, 179, 227, 60, 33, 127, 29, 62, 37, 183, 3, 190, 217, 238, 40, 62, 160, 143, 102, 189, 137, 106, 55, 188, 18, 36, 21, 62, 6, 135, 96, 190, 87, 134, 246, 61, 210, 11, 27, 60, 30, 72, 252, 61, 202, 82, 122, 190, 219, 146, 119, 59, 213, 245, 180, 62, 179, 41, 199, 190, 101, 203, 141, 62, 48, 133, 1, 62, 187, 14, 65, 190, 244, 212, 60, 62, 146, 163, 202, 188};
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
                alignas(float) const unsigned char memory[] = {74, 82, 15, 60, 114, 80, 50, 190};
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
    alignas(float) const unsigned char memory[] = {223, 147, 131, 63, 239, 27, 136, 63, 173, 186, 4, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {125, 150, 57, 192, 34, 246, 30, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0048/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}