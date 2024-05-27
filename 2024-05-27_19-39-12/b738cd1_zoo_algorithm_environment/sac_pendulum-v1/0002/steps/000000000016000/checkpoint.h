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
                alignas(float) const unsigned char memory[] = {202, 186, 45, 63, 208, 115, 11, 190, 79, 14, 161, 190, 235, 146, 127, 62, 221, 18, 181, 191, 219, 51, 212, 190, 31, 231, 7, 188, 22, 251, 38, 191, 255, 254, 247, 62, 176, 226, 123, 190, 33, 161, 6, 191, 116, 142, 13, 63, 33, 197, 29, 191, 132, 84, 246, 191, 155, 237, 223, 190, 125, 191, 5, 63, 139, 171, 23, 63, 25, 218, 37, 62, 182, 235, 56, 63, 254, 240, 6, 190, 24, 92, 30, 63, 237, 205, 77, 191, 0, 232, 141, 190, 155, 124, 6, 190, 227, 147, 114, 188, 123, 223, 215, 63, 233, 98, 86, 63, 240, 167, 31, 191, 213, 104, 63, 62, 191, 127, 13, 191, 0, 191, 29, 63, 36, 84, 69, 191, 192, 67, 184, 187, 4, 44, 188, 190, 120, 137, 111, 63, 21, 125, 234, 188, 208, 129, 228, 190, 3, 247, 65, 191, 124, 55, 220, 189, 45, 34, 209, 62, 81, 38, 238, 190, 87, 52, 28, 63, 109, 189, 138, 190, 240, 55, 110, 59, 48, 186, 0, 191, 240, 56, 114, 63, 30, 209, 3, 63, 46, 222, 10, 63, 55, 77, 171, 61, 186, 119, 192, 62, 32, 30, 197, 190, 77, 2, 64, 191, 119, 129, 19, 191, 105, 34, 137, 189, 71, 74, 8, 62, 181, 30, 64, 191, 192, 201, 28, 190, 108, 149, 73, 191, 139, 88, 205, 190, 55, 102, 251, 189, 56, 155, 19, 191, 246, 152, 209, 191, 17, 146, 158, 190, 218, 136, 249, 62, 133, 152, 65, 191, 75, 88, 218, 190, 250, 154, 209, 62, 182, 186, 138, 63, 84, 167, 2, 63, 33, 158, 175, 62, 64, 123, 144, 62, 53, 48, 40, 61, 52, 228, 209, 190, 17, 134, 194, 62, 151, 45, 233, 190, 204, 110, 218, 61, 30, 42, 152, 62, 164, 86, 26, 190, 211, 18, 80, 63, 51, 98, 144, 190, 43, 240, 188, 190, 131, 137, 74, 190, 7, 39, 7, 63, 76, 215, 168, 190, 164, 218, 236, 62, 75, 52, 237, 62, 214, 178, 184, 188, 66, 214, 226, 60, 144, 177, 163, 190, 229, 69, 195, 62, 119, 196, 53, 63, 248, 147, 173, 191, 8, 52, 116, 190, 50, 202, 51, 63, 236, 97, 76, 63, 192, 155, 164, 62};
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
                alignas(float) const unsigned char memory[] = {88, 150, 109, 191, 30, 225, 233, 61, 162, 215, 128, 190, 97, 100, 52, 60, 209, 172, 147, 190, 180, 19, 113, 191, 184, 178, 147, 190, 75, 145, 7, 191, 29, 81, 168, 61, 105, 162, 211, 62, 184, 37, 57, 63, 234, 142, 72, 63, 75, 113, 25, 63, 64, 72, 94, 62, 97, 226, 95, 189, 240, 220, 90, 190, 121, 70, 33, 63, 105, 125, 66, 63, 198, 22, 213, 62, 22, 177, 66, 63, 91, 171, 199, 61, 147, 30, 35, 62, 77, 152, 250, 62, 133, 82, 65, 191, 131, 194, 41, 190, 68, 81, 136, 62, 161, 199, 144, 190, 79, 162, 16, 62, 44, 103, 226, 62, 128, 129, 207, 60, 197, 108, 245, 186, 85, 79, 45, 191};
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
                alignas(float) const unsigned char memory[] = {15, 197, 209, 190, 221, 247, 120, 188, 134, 43, 34, 62, 188, 3, 56, 190, 135, 241, 134, 190, 45, 157, 191, 62, 153, 11, 138, 59, 114, 64, 192, 61, 159, 83, 46, 190, 130, 119, 69, 62, 135, 225, 128, 61, 230, 66, 1, 62, 41, 236, 94, 62, 167, 70, 65, 61, 236, 174, 177, 188, 250, 255, 171, 62, 38, 86, 211, 188, 85, 233, 10, 190, 187, 112, 254, 61, 154, 112, 135, 188, 91, 168, 214, 190, 40, 24, 216, 189, 188, 219, 8, 62, 56, 138, 122, 190, 180, 191, 11, 61, 9, 133, 68, 62, 29, 216, 125, 60, 46, 173, 138, 189, 207, 241, 72, 62, 59, 212, 134, 60, 130, 33, 32, 190, 78, 101, 173, 61, 150, 74, 100, 191, 91, 103, 141, 190, 43, 195, 3, 62, 198, 83, 214, 61, 63, 16, 1, 191, 37, 183, 247, 62, 234, 122, 57, 62, 169, 112, 227, 190, 239, 162, 207, 61, 5, 185, 45, 56, 61, 117, 229, 189, 231, 167, 129, 62, 129, 179, 126, 190, 148, 14, 106, 189, 162, 168, 227, 60, 78, 225, 88, 61, 82, 98, 58, 62, 203, 240, 131, 189, 212, 183, 116, 190, 46, 148, 19, 190, 176, 246, 3, 191, 155, 174, 41, 61, 246, 179, 151, 62, 219, 143, 202, 190, 197, 200, 249, 189, 173, 216, 176, 62, 7, 197, 25, 62, 70, 9, 7, 62, 77, 79, 242, 62, 106, 47, 21, 61, 123, 212, 26, 191, 254, 247, 134, 61, 101, 142, 20, 189, 10, 176, 249, 61, 142, 112, 16, 62, 227, 209, 140, 189, 238, 22, 72, 60, 146, 200, 28, 190, 144, 82, 45, 190, 33, 50, 36, 62, 197, 172, 255, 61, 219, 106, 197, 60, 1, 208, 4, 62, 96, 165, 215, 59, 233, 87, 13, 187, 78, 11, 190, 189, 46, 252, 163, 189, 7, 216, 87, 61, 114, 141, 231, 60, 108, 120, 139, 189, 98, 168, 249, 189, 145, 157, 32, 61, 105, 180, 213, 189, 199, 52, 26, 189, 90, 53, 38, 190, 171, 3, 199, 189, 70, 63, 28, 190, 40, 142, 3, 61, 82, 180, 76, 60, 244, 8, 21, 189, 190, 225, 0, 190, 228, 225, 5, 190, 52, 222, 70, 188, 89, 236, 51, 190, 36, 56, 17, 61, 150, 66, 21, 62, 9, 40, 5, 191, 72, 98, 160, 62, 161, 65, 172, 191, 36, 163, 15, 191, 5, 131, 42, 190, 213, 252, 214, 190, 199, 98, 57, 62, 63, 89, 185, 189, 206, 207, 194, 62, 31, 140, 107, 62, 198, 249, 145, 62, 227, 123, 243, 61, 226, 7, 158, 190, 226, 125, 212, 189, 104, 203, 104, 190, 40, 31, 2, 62, 17, 65, 137, 62, 99, 24, 210, 61, 137, 63, 83, 191, 170, 159, 96, 62, 122, 58, 185, 189, 102, 80, 188, 62, 13, 116, 92, 61, 213, 214, 10, 190, 83, 164, 87, 62, 61, 179, 238, 61, 108, 32, 159, 190, 165, 54, 137, 189, 55, 196, 161, 62, 208, 51, 129, 190, 0, 113, 116, 190, 155, 47, 38, 189, 188, 224, 40, 62, 217, 25, 68, 189, 66, 251, 184, 61, 108, 207, 237, 189, 11, 253, 224, 61, 62, 239, 168, 59, 126, 87, 232, 190, 185, 49, 251, 61, 68, 173, 237, 62, 196, 180, 9, 191, 89, 151, 174, 62, 226, 34, 116, 62, 130, 122, 37, 62, 246, 125, 27, 190, 218, 162, 24, 187, 227, 134, 137, 60, 54, 136, 229, 62, 115, 37, 254, 61, 241, 26, 192, 190, 90, 99, 190, 61, 36, 105, 80, 61, 237, 132, 162, 57, 182, 120, 209, 60, 144, 236, 130, 189, 231, 152, 176, 189, 33, 136, 8, 62, 85, 189, 120, 189, 181, 145, 111, 62, 95, 39, 7, 62, 150, 108, 162, 191, 238, 3, 6, 62, 174, 36, 49, 61, 230, 242, 2, 191, 100, 72, 209, 62, 167, 26, 187, 190, 196, 116, 27, 191, 73, 243, 148, 190, 75, 157, 164, 189, 72, 91, 102, 189, 50, 86, 91, 62, 123, 254, 254, 61, 136, 197, 149, 62, 61, 168, 167, 62, 85, 55, 3, 63, 37, 24, 33, 190, 144, 42, 15, 190, 252, 194, 74, 189, 208, 164, 185, 61, 43, 191, 159, 62, 209, 5, 130, 62, 72, 38, 209, 187, 91, 158, 216, 188, 179, 58, 95, 61, 70, 79, 247, 62, 191, 245, 229, 61, 107, 77, 14, 61, 68, 72, 144, 60, 123, 36, 42, 62, 242, 64, 80, 190, 78, 156, 158, 62, 252, 117, 53, 62, 102, 80, 2, 191, 177, 116, 3, 63, 13, 42, 68, 62, 125, 86, 113, 62, 241, 17, 181, 62, 182, 157, 77, 189, 87, 72, 231, 189, 11, 30, 39, 190, 78, 44, 30, 190, 129, 161, 41, 60, 21, 148, 169, 58, 121, 195, 33, 62, 194, 51, 166, 191, 175, 180, 26, 62, 239, 121, 166, 189, 124, 149, 127, 190, 248, 53, 80, 191, 118, 121, 85, 190, 172, 66, 12, 190, 6, 17, 72, 62, 200, 215, 122, 189, 1, 100, 143, 62, 221, 90, 161, 62, 129, 186, 3, 191, 115, 249, 148, 60, 106, 205, 56, 61, 131, 21, 181, 190, 203, 163, 137, 62, 158, 129, 155, 60, 148, 104, 156, 190, 106, 148, 198, 61, 33, 86, 148, 62, 95, 22, 237, 190, 114, 44, 51, 191, 7, 189, 5, 191, 225, 215, 136, 63, 70, 144, 14, 62, 184, 201, 253, 61, 162, 90, 168, 61, 155, 17, 167, 62, 223, 82, 28, 62, 2, 1, 148, 191, 222, 143, 145, 62, 254, 210, 156, 61, 69, 11, 189, 61, 5, 254, 178, 189, 35, 41, 141, 190, 61, 150, 78, 187, 42, 204, 88, 62, 26, 240, 139, 62, 36, 177, 62, 189, 47, 70, 164, 62, 251, 128, 212, 188, 124, 222, 22, 62, 52, 130, 213, 190, 24, 13, 18, 191, 242, 141, 163, 189, 111, 87, 153, 190, 82, 225, 23, 62, 12, 84, 29, 190, 208, 197, 9, 190, 138, 4, 247, 62, 196, 86, 100, 189, 100, 39, 61, 191, 30, 223, 111, 62, 141, 50, 33, 190, 1, 175, 24, 62, 61, 145, 0, 191, 214, 168, 39, 188, 116, 28, 29, 190, 122, 54, 250, 190, 193, 117, 135, 189, 111, 35, 180, 189, 32, 243, 83, 62, 10, 145, 101, 62, 169, 75, 102, 61, 159, 113, 90, 62, 197, 169, 144, 62, 54, 58, 72, 62, 236, 230, 48, 190, 125, 156, 49, 190, 61, 218, 28, 62, 38, 173, 28, 190, 77, 205, 12, 62, 14, 181, 218, 61, 230, 60, 138, 190, 204, 220, 213, 61, 88, 239, 147, 60, 96, 80, 134, 62, 123, 26, 154, 61, 70, 228, 211, 189, 166, 44, 239, 61, 197, 68, 147, 189, 51, 69, 229, 189, 236, 89, 247, 60, 164, 242, 52, 62, 140, 93, 153, 190, 198, 148, 240, 61, 86, 213, 105, 58, 195, 141, 21, 190, 64, 213, 169, 61, 110, 46, 44, 190, 210, 172, 50, 62, 204, 104, 237, 189, 54, 138, 18, 62, 21, 7, 59, 61, 190, 29, 52, 190, 89, 228, 73, 60, 30, 75, 24, 190, 153, 64, 19, 190, 250, 118, 177, 188, 181, 67, 124, 61, 17, 12, 205, 189, 59, 191, 57, 190, 197, 73, 21, 61, 232, 34, 30, 190, 197, 51, 97, 189, 21, 218, 25, 62, 10, 48, 93, 60, 179, 65, 33, 190, 55, 232, 247, 61, 245, 70, 204, 61, 99, 146, 91, 189, 200, 22, 78, 61, 246, 239, 228, 61, 78, 82, 32, 190, 116, 90, 126, 187, 201, 185, 15, 62, 170, 153, 200, 61, 152, 180, 179, 191, 110, 231, 72, 190, 115, 248, 37, 62, 154, 113, 234, 188, 138, 255, 228, 190, 172, 202, 12, 63, 233, 18, 193, 61, 198, 212, 148, 189, 184, 118, 226, 61, 113, 65, 176, 61, 126, 171, 151, 62, 241, 254, 45, 187, 58, 110, 233, 188, 59, 113, 21, 190, 174, 185, 200, 61, 206, 144, 141, 62, 243, 109, 139, 62, 63, 140, 177, 190, 110, 34, 192, 61, 202, 123, 190, 190, 210, 85, 204, 191, 245, 153, 12, 61, 83, 131, 64, 62, 176, 189, 237, 190, 32, 77, 0, 190, 107, 124, 118, 62, 36, 51, 9, 61, 56, 158, 44, 62, 226, 31, 232, 62, 231, 64, 98, 190, 118, 14, 231, 189, 160, 192, 158, 61, 17, 40, 131, 190, 191, 218, 130, 191, 62, 36, 43, 63, 113, 134, 0, 190, 9, 162, 32, 62, 62, 39, 220, 61, 71, 208, 234, 60, 94, 47, 97, 62, 144, 74, 214, 190, 130, 251, 11, 189, 237, 41, 58, 191, 110, 198, 148, 61, 40, 236, 82, 62, 229, 234, 74, 191, 117, 198, 195, 190, 15, 223, 149, 59, 25, 115, 54, 190, 202, 149, 155, 62, 101, 114, 228, 189, 89, 69, 87, 62, 64, 65, 254, 60, 92, 85, 6, 191, 125, 189, 113, 191, 157, 21, 33, 190, 21, 87, 31, 191, 154, 236, 39, 190, 128, 232, 161, 190, 209, 187, 80, 191, 132, 73, 239, 189, 55, 144, 162, 190, 245, 23, 191, 190, 191, 132, 117, 61, 1, 60, 28, 62, 46, 140, 112, 189, 165, 22, 22, 62, 81, 92, 55, 190, 63, 161, 195, 189, 163, 175, 163, 61, 27, 37, 208, 60, 85, 117, 10, 190, 30, 140, 52, 61, 164, 4, 22, 62, 4, 123, 25, 190, 217, 31, 115, 190, 143, 153, 31, 191, 201, 66, 193, 189, 18, 60, 233, 59, 72, 74, 24, 61, 102, 201, 119, 190, 173, 21, 254, 190, 238, 168, 60, 190, 107, 27, 88, 191, 84, 225, 7, 62, 126, 188, 27, 190, 7, 177, 72, 61, 39, 178, 14, 63, 47, 142, 163, 189, 227, 79, 153, 189, 77, 229, 21, 190, 185, 100, 248, 189, 184, 52, 157, 189, 14, 11, 3, 190, 14, 226, 40, 190, 124, 176, 209, 61, 162, 63, 29, 191, 123, 144, 6, 190, 177, 179, 12, 62, 179, 227, 27, 61, 24, 223, 172, 61, 15, 42, 171, 189, 71, 204, 153, 189, 51, 248, 95, 62, 163, 143, 162, 191, 126, 140, 78, 62, 251, 16, 4, 191, 138, 35, 113, 60, 3, 104, 98, 62, 77, 199, 108, 191, 109, 56, 75, 62, 142, 214, 194, 190, 36, 180, 77, 61, 85, 229, 16, 62, 64, 54, 247, 60, 201, 93, 25, 62, 18, 242, 135, 61, 178, 112, 192, 190, 92, 46, 186, 191, 8, 140, 50, 62, 47, 133, 134, 190, 92, 250, 26, 62, 196, 221, 73, 189, 127, 149, 13, 190, 103, 204, 30, 189, 133, 38, 55, 61, 105, 238, 162, 190, 28, 25, 117, 62, 203, 10, 31, 191, 242, 14, 144, 61, 235, 31, 48, 63, 185, 239, 253, 61, 2, 207, 137, 62, 148, 191, 32, 190, 147, 246, 59, 62, 65, 250, 24, 62, 76, 56, 202, 190, 98, 151, 8, 62, 31, 150, 218, 188, 243, 175, 10, 190, 244, 89, 213, 61, 137, 166, 171, 190, 69, 251, 22, 61, 142, 188, 135, 190, 187, 32, 162, 62, 249, 191, 197, 62, 60, 105, 9, 62, 177, 37, 3, 62, 138, 76, 31, 62, 153, 234, 28, 190, 132, 165, 28, 191, 99, 121, 242, 189, 216, 65, 199, 190, 21, 127, 47, 62, 248, 245, 36, 189, 35, 206, 85, 190, 19, 19, 122, 61, 147, 95, 250, 189, 135, 255, 213, 61, 203, 81, 192, 60, 1, 81, 250, 60, 29, 144, 35, 190, 51, 170, 101, 189, 1, 73, 95, 61, 239, 103, 126, 188, 208, 208, 37, 62, 85, 216, 136, 61, 135, 230, 227, 57, 80, 159, 190, 189, 116, 150, 32, 190, 51, 151, 18, 62, 16, 48, 217, 61, 221, 22, 182, 189, 166, 40, 201, 60, 162, 209, 247, 61, 208, 153, 231, 188, 241, 160, 196, 61, 212, 255, 204, 61, 83, 187, 174, 189, 207, 53, 180, 60, 12, 197, 36, 190, 51, 212, 14, 189, 78, 3, 239, 60, 241, 243, 153, 61, 49, 12, 19, 189, 174, 152, 172, 61, 20, 101, 7, 189, 96, 192, 88, 189, 51, 57, 25, 190, 184, 26, 51, 190, 106, 167, 143, 189, 223, 62, 139, 189, 83, 175, 28, 190, 145, 142, 133, 61, 193, 143, 204, 60, 209, 233, 146, 60, 12, 124, 44, 190, 225, 224, 208, 189, 220, 124, 18, 190, 162, 65, 28, 190, 120, 250, 219, 60, 150, 82, 48, 190, 179, 102, 39, 190, 114, 10, 218, 189, 11, 136, 225, 188, 3, 176, 190, 61, 180, 230, 110, 61, 159, 53, 2, 190, 163, 216, 186, 61, 163, 167, 51, 58, 80, 105, 24, 190, 3, 116, 26, 190, 159, 52, 154, 189, 213, 240, 1, 190, 131, 18, 194, 189, 51, 22, 195, 61, 202, 54, 200, 61, 111, 83, 209, 61, 98, 22, 151, 189, 83, 122, 207, 59, 78, 102, 16, 187, 205, 153, 186, 61, 209, 199, 220, 61, 69, 218, 237, 189, 223, 112, 95, 188, 15, 46, 229, 188, 106, 61, 238, 61, 4, 193, 99, 61, 178, 122, 221, 61, 168, 157, 8, 61, 209, 148, 64, 190, 74, 216, 62, 190, 55, 77, 1, 190, 94, 128, 142, 60, 233, 125, 157, 61, 3, 61, 86, 190, 176, 129, 62, 189, 105, 223, 241, 60, 127, 76, 122, 61, 153, 182, 221, 189, 75, 81, 93, 189, 234, 23, 136, 188, 121, 170, 29, 190, 158, 105, 49, 190, 51, 89, 11, 190, 163, 159, 0, 188, 222, 57, 222, 61, 206, 240, 14, 190, 124, 55, 103, 61, 20, 162, 182, 189, 249, 82, 22, 190, 95, 69, 203, 60, 197, 145, 127, 61, 129, 135, 152, 61, 70, 21, 173, 61, 24, 42, 133, 189, 236, 153, 55, 62, 204, 243, 78, 62, 166, 149, 86, 62, 154, 230, 176, 189, 32, 187, 180, 189, 38, 120, 11, 191, 0, 171, 28, 189, 38, 113, 126, 61, 245, 9, 228, 188, 202, 34, 49, 62, 34, 221, 100, 62, 149, 142, 45, 190, 0, 17, 147, 61, 20, 112, 151, 62, 164, 9, 38, 62, 58, 107, 22, 190, 146, 203, 9, 62, 136, 73, 149, 189, 203, 101, 15, 62, 74, 179, 14, 190, 251, 62, 198, 189, 252, 103, 55, 61, 123, 177, 9, 188, 20, 101, 232, 61, 108, 242, 0, 62, 254, 125, 223, 61, 128, 62, 17, 62, 54, 22, 4, 190, 242, 162, 25, 62, 47, 53, 107, 62, 16, 82, 65, 62, 168, 225, 162, 61, 52, 10, 68, 191, 210, 209, 54, 190, 0, 86, 95, 61, 199, 110, 51, 191, 60, 229, 36, 62, 8, 229, 123, 61, 136, 99, 112, 62, 187, 56, 206, 60, 120, 225, 176, 190, 94, 174, 133, 189, 195, 248, 94, 62, 125, 126, 49, 61, 29, 216, 77, 190, 26, 106, 115, 61, 153, 97, 18, 188, 127, 68, 241, 62, 53, 156, 6, 62, 182, 65, 201, 61, 94, 36, 54, 62, 206, 77, 23, 62, 87, 64, 30, 62, 105, 8, 102, 189, 44, 135, 168, 187, 214, 15, 229, 61, 89, 166, 83, 189, 11, 17, 0, 62, 233, 211, 242, 189, 209, 2, 192, 188, 224, 176, 107, 62, 121, 164, 218, 190, 4, 116, 113, 190, 253, 242, 187, 190, 222, 191, 254, 62, 163, 17, 20, 62, 45, 36, 35, 63, 74, 39, 40, 190, 154, 186, 112, 61, 160, 121, 235, 61, 237, 216, 38, 190, 225, 181, 131, 189, 202, 144, 152, 190, 64, 79, 35, 62, 96, 253, 71, 190, 142, 91, 20, 188, 232, 196, 163, 189, 190, 187, 91, 190, 79, 175, 91, 62, 134, 199, 120, 189, 255, 22, 65, 62, 74, 176, 9, 190, 189, 191, 8, 61, 97, 195, 242, 59, 185, 113, 6, 62, 141, 11, 16, 190, 125, 43, 29, 62, 18, 85, 203, 189, 72, 152, 161, 61, 171, 230, 170, 60, 184, 206, 145, 59, 239, 194, 111, 189, 194, 68, 63, 62, 84, 74, 26, 190, 27, 25, 19, 190, 142, 72, 49, 190, 179, 219, 24, 190, 160, 65, 220, 189, 165, 100, 197, 187, 212, 188, 180, 189, 207, 146, 152, 189, 78, 77, 44, 190, 108, 47, 80, 61, 152, 68, 176, 188, 205, 226, 66, 61, 227, 81, 153, 189, 87, 158, 191, 61, 184, 224, 88, 61, 1, 89, 36, 61, 209, 18, 36, 189, 79, 48, 119, 189, 77, 67, 29, 190, 149, 222, 26, 190, 0, 61, 32, 190, 213, 206, 162, 189, 101, 188, 208, 189, 45, 146, 232, 188, 121, 54, 100, 189, 195, 49, 39, 190, 154, 254, 154, 61, 135, 216, 236, 189, 13, 73, 17, 62, 71, 90, 227, 61, 200, 90, 39, 190, 162, 66, 77, 61, 99, 162, 22, 190, 101, 90, 244, 187, 195, 172, 41, 189, 225, 152, 222, 190, 132, 92, 82, 190, 88, 20, 212, 62, 155, 27, 65, 190, 220, 46, 180, 62, 70, 80, 192, 62, 82, 212, 161, 62, 24, 137, 184, 62, 238, 162, 124, 190, 109, 216, 117, 62, 169, 189, 207, 189, 96, 220, 151, 189, 229, 44, 222, 188, 222, 138, 215, 189, 223, 95, 124, 62, 41, 106, 14, 62, 9, 169, 168, 62, 181, 133, 155, 61, 90, 77, 115, 62, 137, 33, 8, 190, 85, 224, 241, 62, 27, 177, 147, 190, 34, 27, 123, 189, 254, 179, 31, 191, 224, 98, 212, 190, 158, 126, 171, 60, 143, 207, 186, 188, 38, 69, 54, 190, 58, 212, 29, 62, 180, 39, 158, 190, 22, 124, 61, 190, 44, 31, 45, 61, 145, 192, 7, 191, 88, 88, 102, 191, 89, 68, 64, 60, 213, 187, 86, 190, 132, 149, 42, 190, 187, 173, 15, 191, 22, 147, 161, 62, 53, 6, 15, 62, 47, 90, 169, 62, 10, 61, 151, 62, 151, 118, 31, 191, 167, 206, 120, 62, 116, 169, 186, 191, 176, 245, 17, 190, 188, 84, 116, 59, 173, 140, 101, 62, 137, 121, 99, 62, 186, 173, 107, 191, 1, 155, 116, 191, 112, 224, 62, 191, 234, 33, 203, 188, 13, 248, 149, 191, 217, 151, 227, 61, 134, 220, 43, 63, 198, 111, 244, 61, 79, 134, 124, 62, 64, 151, 148, 191, 202, 156, 2, 63, 124, 10, 252, 62, 228, 167, 0, 190, 224, 16, 233, 191, 195, 123, 3, 63, 181, 110, 61, 189, 111, 103, 14, 190, 147, 128, 75, 188, 84, 24, 186, 189, 132, 78, 41, 62, 2, 203, 40, 190, 49, 143, 136, 189, 66, 234, 100, 61, 63, 179, 190, 61, 7, 99, 220, 189, 75, 87, 18, 62, 13, 34, 30, 188, 238, 214, 252, 189, 84, 132, 153, 188, 81, 164, 101, 61, 108, 91, 145, 189, 98, 162, 28, 190, 247, 246, 3, 190, 219, 182, 209, 189, 95, 185, 2, 61, 6, 38, 129, 61, 192, 110, 38, 188, 15, 22, 240, 189, 254, 3, 216, 59, 163, 206, 250, 61, 71, 76, 104, 59, 184, 135, 35, 190, 46, 160, 201, 61, 184, 59, 143, 61, 188, 195, 24, 190, 251, 200, 45, 189, 112, 197, 240, 61, 155, 183, 32, 191, 150, 77, 156, 190, 48, 173, 208, 62, 149, 204, 157, 189, 167, 142, 82, 62, 186, 105, 228, 62, 19, 228, 84, 62, 182, 145, 128, 61, 253, 189, 22, 189, 156, 64, 224, 61, 29, 34, 73, 61, 227, 132, 231, 189, 114, 69, 215, 60, 169, 198, 132, 190, 167, 119, 47, 62, 184, 118, 101, 62, 249, 148, 145, 62, 95, 53, 35, 189, 200, 125, 0, 62, 126, 166, 144, 190, 218, 107, 124, 62, 134, 223, 29, 190, 95, 152, 186, 189, 152, 24, 5, 62, 138, 192, 136, 190, 57, 187, 86, 62, 11, 49, 147, 190, 50, 84, 165, 60, 193, 54, 142, 62, 186, 84, 34, 188, 175, 41, 164, 190, 64, 189, 8, 187, 190, 26, 6, 62, 30, 241, 76, 189, 65, 159, 235, 62, 26, 126, 100, 190, 19, 21, 24, 62, 221, 138, 70, 63, 204, 184, 240, 62, 1, 73, 170, 61, 97, 170, 191, 189, 43, 36, 7, 187, 67, 63, 32, 62, 1, 51, 194, 190, 26, 111, 196, 190, 117, 225, 134, 187, 147, 186, 33, 62, 26, 166, 75, 62, 112, 221, 61, 62, 126, 131, 235, 190, 82, 9, 105, 61, 49, 127, 43, 191, 184, 174, 25, 191, 94, 228, 199, 61, 153, 190, 96, 61, 18, 144, 2, 191, 252, 78, 180, 190, 125, 120, 194, 189, 184, 11, 34, 62, 55, 239, 178, 190, 248, 34, 12, 61, 222, 54, 177, 190, 216, 220, 173, 190, 23, 79, 145, 62, 68, 234, 231, 190, 241, 104, 171, 190, 225, 101, 174, 62, 254, 158, 180, 60, 243, 102, 192, 61, 167, 142, 93, 62, 86, 138, 153, 61, 160, 112, 210, 61, 198, 18, 150, 191, 218, 134, 143, 62, 203, 52, 83, 190, 189, 238, 199, 188, 214, 45, 16, 62, 226, 105, 50, 191, 193, 122, 141, 62, 186, 251, 2, 62, 115, 208, 123, 60, 113, 208, 133, 61, 14, 89, 33, 61, 218, 95, 148, 62, 153, 27, 108, 62, 19, 103, 110, 190, 133, 4, 179, 191, 201, 89, 41, 61, 64, 22, 116, 190, 245, 231, 59, 62, 40, 87, 95, 189, 100, 242, 57, 189, 119, 90, 222, 61, 158, 220, 129, 190, 104, 248, 189, 190, 28, 159, 69, 62, 172, 115, 92, 61, 175, 137, 41, 190, 171, 79, 133, 61, 196, 68, 67, 190, 93, 162, 9, 62, 5, 55, 37, 62, 247, 191, 193, 61, 245, 63, 255, 188, 244, 150, 120, 189, 210, 200, 52, 189, 110, 237, 232, 188, 204, 20, 245, 61, 150, 53, 85, 190, 155, 87, 171, 187, 21, 242, 70, 189, 195, 179, 164, 61, 37, 27, 151, 190, 181, 148, 6, 60, 175, 184, 79, 190, 86, 88, 199, 190, 80, 61, 189, 187, 48, 127, 154, 61, 140, 29, 93, 189, 129, 49, 249, 189, 178, 211, 32, 62, 71, 157, 215, 58, 183, 122, 133, 60, 3, 127, 35, 190, 99, 24, 110, 189, 23, 165, 195, 189, 177, 193, 21, 190, 140, 246, 164, 188, 242, 151, 142, 62, 79, 45, 182, 61, 246, 255, 34, 190, 94, 201, 133, 190, 128, 223, 138, 62, 25, 57, 129, 190, 129, 82, 24, 62, 113, 201, 240, 188, 174, 225, 83, 189, 133, 185, 155, 62, 186, 165, 158, 190, 83, 231, 72, 61, 168, 203, 242, 189, 5, 158, 140, 190, 39, 245, 112, 62, 79, 210, 129, 61, 230, 13, 187, 61, 109, 149, 76, 62, 228, 167, 251, 60, 40, 37, 72, 61, 216, 211, 69, 62, 65, 81, 114, 190, 90, 91, 125, 62, 125, 251, 202, 62, 106, 25, 235, 57, 29, 198, 215, 61, 143, 249, 134, 190, 106, 252, 119, 188, 252, 23, 240, 61, 92, 0, 125, 190, 27, 149, 89, 190, 11, 47, 255, 62, 76, 205, 145, 191, 154, 201, 243, 190, 137, 5, 167, 62, 172, 224, 108, 187, 17, 174, 202, 190, 78, 32, 65, 63, 3, 77, 245, 61, 54, 5, 9, 190, 144, 146, 232, 61, 188, 7, 168, 61, 103, 32, 191, 62, 84, 38, 67, 189, 92, 105, 68, 191, 94, 180, 214, 61, 89, 216, 165, 61, 159, 203, 81, 62, 40, 179, 167, 62, 241, 3, 111, 191, 112, 90, 140, 61, 198, 85, 106, 191, 224, 228, 199, 191, 192, 59, 65, 189, 37, 219, 146, 62, 220, 133, 56, 191, 240, 73, 204, 60, 248, 140, 221, 62, 208, 73, 47, 62, 63, 116, 94, 61, 17, 101, 4, 63, 189, 154, 64, 190, 77, 95, 87, 191, 225, 105, 114, 61, 91, 53, 159, 60, 66, 144, 237, 61, 67, 211, 60, 191, 173, 74, 15, 63, 152, 67, 233, 191, 73, 173, 13, 191, 4, 116, 141, 190, 19, 73, 193, 190, 163, 78, 152, 61, 142, 151, 130, 189, 163, 18, 162, 62, 74, 53, 85, 190, 246, 141, 13, 63, 106, 122, 137, 62, 106, 185, 255, 190, 197, 157, 219, 190, 215, 249, 67, 61, 217, 215, 58, 62, 253, 171, 113, 62, 13, 213, 191, 61, 103, 148, 161, 191, 23, 121, 76, 62, 82, 84, 60, 189, 252, 158, 220, 189, 238, 70, 37, 62, 11, 91, 157, 61, 72, 202, 148, 62, 34, 149, 97, 62, 104, 83, 0, 191, 207, 245, 29, 62, 121, 83, 3, 63, 228, 15, 136, 191};
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
                alignas(float) const unsigned char memory[] = {43, 54, 255, 61, 141, 77, 237, 61, 21, 88, 208, 189, 62, 173, 242, 188, 72, 87, 39, 61, 0, 119, 199, 62, 215, 17, 168, 61, 134, 19, 57, 62, 151, 42, 30, 62, 196, 103, 21, 189, 231, 61, 113, 62, 230, 255, 180, 189, 155, 170, 134, 190, 160, 180, 65, 61, 140, 234, 20, 61, 120, 144, 78, 190, 162, 30, 163, 60, 36, 2, 226, 188, 118, 41, 46, 61, 192, 4, 143, 62, 247, 86, 193, 189, 79, 42, 250, 59, 100, 164, 66, 189, 72, 11, 137, 189, 186, 25, 26, 190, 242, 253, 82, 61, 238, 233, 10, 190, 47, 224, 151, 61, 197, 13, 157, 189, 16, 79, 6, 190, 239, 108, 162, 189, 235, 52, 215, 61};
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
                alignas(float) const unsigned char memory[] = {157, 196, 56, 61, 8, 17, 129, 190, 224, 133, 7, 189, 170, 232, 201, 62, 160, 189, 155, 62, 93, 137, 116, 62, 236, 122, 35, 191, 21, 64, 132, 191, 52, 249, 188, 61, 40, 217, 83, 188, 239, 55, 252, 189, 82, 129, 125, 191, 239, 197, 164, 62, 221, 51, 121, 191, 238, 181, 23, 191, 245, 203, 211, 186, 32, 117, 221, 188, 50, 145, 237, 188, 89, 127, 251, 61, 239, 99, 5, 191, 176, 48, 84, 62, 134, 51, 40, 62, 115, 97, 10, 191, 18, 138, 175, 63, 243, 113, 125, 188, 196, 40, 14, 189, 59, 46, 254, 190, 217, 26, 30, 191, 114, 74, 61, 62, 216, 185, 174, 62, 127, 96, 125, 191, 96, 112, 113, 63, 208, 77, 113, 190, 207, 242, 210, 60, 178, 227, 83, 61, 19, 151, 2, 190, 109, 28, 6, 191, 67, 249, 130, 189, 177, 145, 254, 61, 65, 94, 129, 61, 64, 11, 169, 189, 218, 176, 128, 60, 56, 179, 190, 190, 175, 154, 194, 61, 185, 125, 8, 188, 212, 50, 144, 189, 44, 241, 49, 62, 61, 246, 214, 61, 189, 31, 39, 62, 42, 21, 0, 62, 40, 224, 223, 188, 8, 39, 21, 190, 3, 219, 197, 61, 76, 247, 50, 61, 15, 177, 170, 62, 21, 193, 3, 62, 117, 145, 4, 190, 31, 54, 39, 62, 29, 66, 195, 189, 15, 236, 56, 190, 25, 40, 255, 61, 133, 119, 224, 189, 220, 13, 245, 60, 67, 79, 155, 190};
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
                alignas(float) const unsigned char memory[] = {1, 235, 82, 62, 133, 13, 0, 190};
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
    alignas(float) const unsigned char memory[] = {149, 157, 13, 191, 204, 72, 217, 62, 161, 75, 75, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {94, 143, 118, 63, 56, 226, 70, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0002/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}