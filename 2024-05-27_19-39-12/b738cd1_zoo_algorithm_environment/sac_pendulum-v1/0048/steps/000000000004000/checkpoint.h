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
                alignas(float) const unsigned char memory[] = {202, 226, 62, 187, 149, 192, 9, 191, 24, 203, 250, 59, 245, 86, 206, 62, 221, 241, 64, 191, 9, 120, 175, 190, 5, 179, 82, 63, 21, 171, 9, 62, 17, 86, 30, 190, 238, 45, 3, 63, 40, 64, 169, 62, 120, 234, 194, 62, 112, 77, 23, 190, 141, 177, 233, 62, 128, 205, 204, 190, 137, 4, 183, 62, 141, 244, 14, 63, 129, 57, 57, 62, 26, 119, 15, 63, 240, 36, 146, 189, 189, 137, 54, 191, 145, 148, 161, 190, 252, 208, 72, 62, 113, 67, 43, 191, 31, 134, 205, 190, 182, 154, 144, 191, 53, 85, 197, 189, 68, 7, 83, 191, 191, 216, 114, 62, 207, 112, 188, 62, 191, 113, 39, 191, 124, 152, 68, 62, 126, 70, 8, 63, 8, 46, 156, 61, 69, 198, 108, 63, 206, 6, 149, 190, 97, 210, 96, 190, 185, 216, 15, 63, 4, 150, 102, 190, 223, 105, 52, 190, 129, 245, 190, 189, 155, 214, 60, 191, 211, 17, 65, 63, 237, 153, 225, 62, 57, 158, 0, 63, 112, 20, 145, 189, 133, 78, 236, 190, 225, 159, 103, 62, 112, 67, 178, 190, 67, 53, 38, 191, 24, 82, 113, 62, 80, 41, 20, 62, 248, 1, 205, 62, 147, 49, 190, 62, 154, 31, 26, 63, 39, 40, 89, 63, 145, 74, 117, 62, 181, 133, 185, 190, 124, 11, 15, 190, 246, 51, 136, 62, 185, 207, 53, 191, 32, 197, 252, 62, 151, 152, 32, 62, 79, 116, 21, 63, 56, 201, 71, 191, 49, 117, 233, 189, 70, 47, 128, 61, 149, 30, 92, 191, 80, 155, 49, 191, 255, 71, 2, 191, 236, 45, 239, 62, 79, 147, 244, 190, 206, 36, 149, 61, 169, 177, 75, 191, 215, 129, 95, 190, 7, 168, 1, 62, 87, 60, 49, 191, 104, 205, 149, 62, 227, 68, 65, 191, 182, 57, 85, 190, 111, 63, 35, 62, 53, 71, 65, 62, 59, 24, 13, 63, 86, 52, 138, 62, 199, 133, 94, 61, 220, 190, 235, 60, 161, 103, 221, 190, 236, 251, 44, 61, 5, 109, 52, 191, 4, 102, 138, 61, 206, 178, 59, 62, 31, 225, 42, 191, 59, 125, 157, 189, 199, 25, 237, 62, 200, 72, 78, 63, 45, 110, 138, 62};
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
                alignas(float) const unsigned char memory[] = {53, 210, 28, 191, 45, 196, 246, 190, 22, 204, 21, 190, 74, 117, 145, 59, 82, 33, 255, 62, 176, 210, 28, 190, 115, 231, 53, 189, 101, 130, 159, 189, 39, 219, 186, 62, 230, 5, 85, 63, 217, 32, 201, 190, 166, 133, 236, 62, 101, 225, 251, 189, 69, 246, 166, 61, 116, 141, 207, 62, 186, 212, 18, 190, 163, 212, 227, 188, 44, 3, 201, 189, 9, 105, 182, 61, 237, 234, 241, 190, 130, 96, 229, 61, 79, 227, 108, 62, 145, 45, 229, 62, 144, 59, 150, 190, 53, 238, 22, 191, 188, 82, 5, 62, 166, 120, 54, 62, 84, 241, 201, 190, 182, 235, 163, 190, 51, 255, 8, 63, 54, 177, 2, 189, 12, 145, 61, 190};
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
                alignas(float) const unsigned char memory[] = {130, 179, 162, 60, 28, 153, 241, 185, 217, 115, 155, 62, 64, 172, 186, 188, 244, 147, 226, 188, 5, 41, 144, 61, 160, 121, 155, 62, 239, 173, 50, 190, 251, 39, 64, 190, 216, 51, 5, 62, 232, 85, 183, 61, 26, 133, 107, 62, 139, 165, 43, 62, 144, 50, 51, 190, 4, 55, 174, 188, 174, 235, 35, 190, 51, 161, 96, 190, 207, 143, 32, 62, 126, 211, 168, 61, 235, 177, 178, 189, 138, 144, 86, 62, 71, 229, 176, 62, 109, 19, 94, 190, 58, 161, 97, 190, 60, 74, 238, 61, 224, 57, 6, 61, 23, 125, 150, 61, 62, 11, 18, 190, 197, 197, 63, 62, 132, 175, 164, 60, 226, 175, 158, 189, 150, 252, 42, 190, 115, 35, 19, 190, 81, 190, 185, 62, 160, 131, 61, 190, 9, 96, 91, 190, 64, 185, 217, 61, 85, 102, 203, 188, 71, 47, 5, 189, 181, 245, 19, 190, 86, 202, 219, 188, 101, 18, 4, 62, 210, 183, 59, 189, 160, 94, 15, 62, 15, 188, 69, 61, 231, 171, 200, 61, 87, 67, 130, 190, 70, 241, 70, 62, 69, 123, 94, 61, 71, 127, 28, 190, 213, 199, 214, 190, 30, 108, 198, 189, 242, 117, 132, 62, 48, 119, 46, 62, 38, 236, 15, 62, 42, 240, 144, 61, 170, 223, 28, 190, 180, 66, 30, 62, 69, 194, 155, 189, 201, 105, 135, 190, 150, 64, 153, 189, 152, 70, 34, 62, 73, 73, 33, 60, 250, 66, 163, 190, 250, 167, 100, 61, 191, 230, 145, 62, 192, 165, 129, 62, 198, 119, 218, 189, 126, 131, 226, 189, 227, 73, 135, 190, 123, 77, 197, 61, 199, 92, 111, 191, 226, 106, 5, 189, 55, 134, 150, 62, 47, 83, 27, 188, 104, 126, 164, 189, 43, 5, 229, 61, 175, 182, 97, 191, 219, 228, 22, 190, 53, 219, 116, 190, 177, 164, 174, 62, 217, 216, 22, 190, 17, 39, 34, 190, 8, 114, 4, 190, 222, 17, 99, 61, 207, 107, 143, 62, 143, 226, 193, 190, 158, 205, 1, 191, 224, 100, 163, 61, 175, 188, 188, 189, 249, 156, 139, 62, 21, 252, 8, 190, 168, 13, 224, 61, 238, 55, 172, 62, 42, 163, 39, 62, 167, 181, 88, 190, 107, 254, 175, 61, 151, 66, 90, 190, 70, 48, 71, 62, 146, 170, 154, 61, 39, 184, 125, 62, 187, 76, 23, 62, 237, 238, 141, 190, 113, 187, 107, 62, 24, 65, 52, 62, 24, 2, 67, 62, 163, 14, 129, 189, 180, 154, 22, 62, 153, 251, 179, 190, 21, 197, 90, 62, 81, 24, 61, 62, 215, 250, 194, 188, 36, 96, 128, 61, 18, 63, 178, 187, 28, 230, 118, 62, 38, 243, 20, 189, 90, 149, 52, 62, 242, 171, 45, 190, 65, 102, 55, 61, 174, 188, 116, 62, 224, 220, 75, 190, 35, 69, 232, 60, 239, 106, 75, 62, 94, 18, 164, 60, 198, 225, 154, 190, 113, 156, 141, 188, 76, 15, 98, 190, 48, 17, 85, 62, 225, 60, 192, 60, 187, 3, 119, 190, 100, 71, 134, 187, 144, 232, 156, 188, 57, 8, 5, 62, 24, 2, 56, 188, 232, 233, 205, 189, 210, 248, 78, 62, 10, 177, 37, 189, 59, 139, 118, 61, 145, 95, 174, 189, 142, 247, 243, 189, 169, 87, 215, 190, 226, 51, 119, 62, 230, 46, 52, 62, 168, 187, 74, 190, 246, 106, 209, 189, 233, 75, 149, 61, 45, 140, 33, 62, 245, 142, 134, 189, 109, 125, 248, 187, 126, 123, 70, 61, 56, 5, 170, 60, 119, 62, 125, 62, 232, 22, 33, 190, 20, 35, 50, 61, 184, 200, 159, 61, 189, 92, 45, 189, 166, 146, 8, 190, 219, 88, 223, 61, 220, 220, 128, 61, 232, 93, 4, 189, 79, 91, 155, 188, 197, 220, 45, 62, 220, 212, 181, 61, 193, 101, 16, 190, 220, 60, 15, 190, 227, 164, 32, 62, 83, 15, 11, 190, 26, 172, 14, 62, 33, 240, 221, 61, 249, 60, 39, 190, 58, 79, 192, 61, 92, 174, 135, 189, 2, 90, 8, 190, 92, 242, 45, 61, 130, 176, 150, 189, 96, 54, 184, 61, 86, 26, 66, 189, 98, 197, 202, 61, 2, 188, 1, 190, 206, 132, 225, 61, 49, 200, 250, 189, 209, 1, 155, 188, 161, 174, 49, 190, 109, 8, 25, 62, 236, 106, 203, 61, 4, 169, 252, 189, 6, 113, 253, 61, 221, 181, 155, 189, 240, 96, 209, 189, 188, 50, 181, 187, 151, 28, 62, 61, 147, 103, 16, 62, 67, 125, 221, 61, 95, 143, 6, 189, 255, 167, 94, 62, 252, 98, 1, 61, 4, 182, 29, 190, 199, 26, 162, 190, 250, 150, 186, 62, 97, 70, 40, 191, 115, 201, 135, 190, 171, 243, 76, 62, 149, 216, 81, 62, 6, 32, 214, 189, 125, 59, 130, 61, 128, 10, 245, 189, 227, 235, 221, 189, 21, 27, 101, 190, 19, 48, 33, 62, 205, 53, 17, 190, 241, 132, 46, 190, 74, 197, 178, 189, 68, 22, 209, 188, 170, 203, 183, 62, 196, 145, 4, 190, 151, 46, 94, 191, 168, 46, 12, 61, 235, 219, 139, 188, 199, 43, 97, 62, 85, 3, 70, 190, 5, 207, 177, 61, 104, 248, 105, 62, 204, 126, 252, 61, 68, 161, 44, 190, 77, 42, 64, 61, 132, 103, 168, 61, 101, 75, 213, 61, 239, 7, 25, 61, 199, 201, 164, 61, 11, 229, 128, 62, 65, 21, 36, 190, 156, 202, 48, 59, 106, 126, 58, 190, 108, 179, 208, 189, 209, 231, 53, 190, 198, 5, 254, 189, 140, 155, 65, 190, 184, 113, 68, 190, 149, 100, 47, 62, 126, 153, 184, 61, 139, 139, 160, 188, 230, 255, 228, 59, 50, 34, 157, 61, 232, 116, 20, 62, 161, 162, 172, 188, 253, 110, 114, 190, 17, 254, 6, 61, 208, 21, 246, 60, 176, 135, 34, 189, 226, 93, 172, 189, 12, 54, 66, 190, 37, 126, 99, 62, 13, 92, 47, 62, 133, 66, 154, 190, 55, 121, 52, 189, 113, 120, 4, 62, 128, 40, 139, 189, 59, 141, 252, 60, 35, 111, 233, 189, 83, 33, 198, 60, 197, 26, 176, 188, 243, 67, 72, 190, 18, 162, 202, 61, 53, 175, 36, 189, 179, 55, 154, 61, 57, 39, 17, 190, 51, 250, 33, 62, 8, 171, 54, 190, 133, 137, 54, 61, 93, 18, 255, 61, 55, 10, 103, 61, 83, 133, 212, 189, 30, 73, 169, 189, 91, 254, 63, 189, 198, 75, 243, 189, 117, 226, 172, 190, 215, 132, 220, 190, 50, 51, 212, 62, 40, 88, 106, 61, 196, 148, 125, 190, 79, 96, 121, 62, 100, 183, 214, 188, 88, 130, 132, 189, 38, 199, 158, 190, 22, 5, 42, 188, 23, 198, 145, 61, 46, 120, 0, 61, 150, 100, 154, 189, 242, 84, 50, 190, 5, 236, 0, 62, 99, 185, 22, 190, 88, 213, 136, 189, 75, 29, 147, 189, 35, 66, 197, 189, 189, 106, 192, 61, 211, 194, 149, 189, 209, 89, 9, 60, 124, 120, 23, 190, 135, 41, 36, 62, 185, 117, 97, 189, 167, 12, 160, 188, 252, 62, 29, 62, 110, 181, 193, 189, 2, 185, 210, 189, 217, 118, 156, 189, 215, 106, 161, 189, 227, 24, 174, 61, 240, 253, 51, 190, 161, 199, 140, 61, 237, 168, 198, 189, 170, 141, 247, 189, 111, 98, 75, 190, 39, 72, 191, 61, 207, 110, 238, 189, 89, 182, 39, 190, 81, 34, 179, 61, 254, 166, 60, 188, 118, 161, 49, 190, 67, 210, 140, 61, 99, 205, 138, 61, 42, 163, 211, 61, 231, 75, 246, 189, 186, 147, 56, 62, 145, 5, 28, 61, 79, 178, 144, 189, 98, 24, 235, 190, 161, 249, 153, 190, 134, 42, 95, 191, 113, 247, 155, 189, 130, 58, 125, 62, 130, 244, 157, 59, 244, 203, 90, 189, 212, 176, 9, 62, 54, 242, 127, 191, 124, 44, 196, 189, 114, 5, 92, 190, 169, 76, 28, 62, 110, 67, 166, 190, 52, 148, 72, 190, 161, 147, 33, 190, 43, 164, 171, 62, 60, 166, 135, 190, 18, 246, 19, 191, 25, 219, 23, 191, 103, 188, 162, 60, 20, 102, 133, 190, 222, 53, 150, 62, 181, 145, 15, 190, 31, 21, 48, 190, 150, 202, 55, 62, 51, 237, 197, 188, 22, 224, 138, 190, 158, 189, 31, 62, 140, 255, 219, 189, 12, 60, 159, 190, 156, 222, 71, 62, 202, 197, 102, 187, 26, 163, 216, 189, 110, 155, 184, 61, 62, 59, 118, 62, 121, 128, 205, 188, 228, 151, 60, 190, 141, 207, 60, 190, 132, 29, 40, 61, 72, 161, 101, 62, 83, 122, 49, 189, 0, 129, 8, 62, 189, 187, 135, 62, 173, 158, 29, 189, 129, 99, 188, 188, 78, 83, 74, 190, 200, 100, 160, 60, 239, 181, 186, 189, 132, 45, 152, 62, 121, 47, 41, 62, 185, 177, 92, 62, 180, 45, 212, 189, 35, 144, 37, 62, 33, 208, 100, 190, 138, 95, 104, 190, 196, 228, 137, 61, 147, 55, 29, 62, 215, 69, 70, 62, 235, 77, 173, 190, 190, 60, 10, 62, 38, 148, 22, 62, 185, 59, 34, 190, 119, 219, 165, 61, 145, 114, 53, 189, 189, 229, 91, 190, 52, 138, 157, 189, 0, 130, 178, 189, 96, 37, 85, 190, 99, 35, 230, 189, 80, 240, 128, 188, 193, 48, 109, 189, 232, 47, 28, 190, 185, 206, 175, 61, 6, 34, 137, 61, 46, 221, 204, 189, 221, 26, 42, 190, 134, 111, 5, 190, 164, 139, 76, 190, 172, 208, 169, 61, 236, 217, 55, 190, 79, 178, 165, 61, 102, 88, 238, 189, 108, 251, 160, 61, 252, 127, 250, 189, 207, 65, 235, 61, 8, 169, 172, 189, 49, 181, 34, 190, 6, 168, 236, 61, 82, 21, 198, 59, 177, 81, 246, 60, 6, 44, 88, 189, 207, 97, 124, 61, 220, 86, 6, 62, 129, 159, 19, 62, 86, 3, 172, 61, 54, 217, 80, 62, 90, 57, 116, 188, 3, 12, 64, 190, 113, 26, 128, 62, 36, 69, 71, 189, 1, 211, 26, 62, 58, 8, 230, 188, 41, 144, 125, 62, 239, 255, 223, 61, 199, 184, 142, 62, 155, 230, 26, 62, 8, 172, 9, 62, 91, 42, 11, 62, 84, 189, 52, 61, 142, 149, 15, 60, 255, 145, 61, 62, 253, 0, 18, 190, 147, 87, 141, 190, 31, 60, 125, 189, 60, 96, 216, 62, 202, 37, 200, 189, 36, 73, 170, 189, 32, 43, 135, 188, 153, 243, 149, 61, 201, 232, 5, 62, 106, 67, 195, 189, 113, 215, 73, 190, 150, 118, 243, 61, 39, 72, 42, 190, 134, 176, 114, 189, 242, 58, 149, 60, 195, 237, 230, 61, 144, 2, 231, 61, 54, 127, 25, 190, 218, 221, 223, 188, 66, 145, 172, 189, 170, 179, 91, 62, 255, 218, 118, 190, 145, 39, 33, 190, 225, 130, 211, 189, 93, 83, 83, 61, 235, 121, 227, 189, 43, 209, 14, 62, 218, 163, 8, 62, 16, 141, 54, 62, 212, 169, 21, 190, 210, 41, 13, 190, 224, 162, 249, 189, 172, 147, 209, 190, 20, 249, 149, 62, 181, 119, 46, 62, 198, 23, 166, 61, 17, 250, 4, 62, 15, 158, 158, 62, 209, 172, 21, 190, 212, 130, 214, 190, 153, 149, 204, 189, 37, 253, 72, 61, 109, 115, 101, 62, 44, 11, 63, 190, 250, 117, 124, 61, 139, 241, 245, 62, 109, 64, 6, 63, 75, 172, 133, 61, 141, 8, 59, 189, 212, 98, 195, 190, 68, 8, 254, 62, 148, 194, 84, 191, 173, 140, 213, 189, 251, 194, 45, 62, 145, 141, 141, 60, 243, 40, 238, 189, 40, 106, 34, 62, 57, 24, 166, 190, 102, 8, 52, 190, 213, 252, 72, 190, 7, 190, 177, 62, 181, 125, 68, 190, 206, 174, 66, 189, 230, 143, 218, 188, 124, 227, 76, 62, 176, 139, 191, 62, 187, 227, 170, 189, 62, 241, 105, 191, 93, 102, 162, 62, 158, 62, 62, 190, 15, 155, 220, 60, 241, 91, 232, 189, 182, 255, 171, 62, 146, 72, 161, 62, 170, 174, 68, 62, 223, 241, 247, 189, 47, 213, 15, 190, 247, 85, 120, 62, 210, 5, 244, 62, 162, 54, 254, 189, 64, 173, 45, 190, 68, 242, 159, 190, 182, 229, 118, 62, 69, 95, 85, 191, 31, 19, 198, 187, 127, 43, 121, 62, 21, 113, 122, 62, 163, 7, 28, 190, 176, 245, 244, 61, 40, 222, 186, 190, 226, 255, 172, 61, 159, 102, 129, 189, 125, 255, 91, 62, 64, 85, 67, 190, 32, 255, 67, 190, 57, 204, 135, 61, 127, 50, 140, 61, 39, 212, 182, 62, 84, 207, 75, 61, 241, 164, 36, 191, 124, 105, 49, 60, 254, 187, 196, 189, 70, 139, 114, 59, 73, 214, 154, 60, 80, 12, 172, 62, 185, 95, 58, 188, 92, 94, 51, 62, 225, 26, 13, 190, 10, 29, 37, 190, 237, 49, 140, 190, 72, 166, 63, 62, 156, 4, 182, 189, 49, 3, 168, 61, 181, 204, 246, 189, 25, 186, 178, 190, 143, 8, 124, 62, 146, 164, 111, 62, 250, 6, 80, 62, 95, 80, 171, 61, 15, 34, 128, 62, 59, 176, 175, 190, 111, 38, 143, 189, 134, 252, 29, 62, 190, 90, 6, 61, 184, 141, 186, 189, 235, 152, 185, 61, 130, 93, 69, 62, 117, 19, 91, 188, 183, 229, 87, 61, 87, 115, 6, 190, 246, 190, 77, 62, 202, 13, 216, 62, 234, 3, 11, 191, 122, 171, 171, 189, 41, 106, 127, 62, 62, 21, 229, 189, 224, 66, 206, 190, 164, 141, 49, 62, 244, 105, 105, 61, 126, 230, 35, 62, 52, 255, 246, 61, 187, 117, 143, 62, 177, 117, 44, 188, 112, 140, 249, 61, 163, 77, 96, 61, 146, 200, 96, 188, 136, 136, 35, 62, 200, 73, 17, 190, 14, 84, 224, 188, 18, 226, 139, 189, 149, 105, 83, 61, 149, 245, 206, 189, 47, 1, 45, 62, 12, 238, 28, 62, 6, 123, 221, 189, 28, 212, 6, 190, 212, 136, 150, 189, 65, 106, 150, 189, 16, 246, 40, 190, 145, 15, 143, 189, 51, 152, 13, 190, 146, 119, 30, 62, 251, 143, 189, 189, 223, 74, 201, 190, 67, 7, 63, 61, 153, 164, 56, 190, 12, 193, 45, 189, 224, 131, 227, 189, 127, 192, 76, 62, 87, 164, 131, 189, 198, 12, 219, 189, 6, 18, 50, 61, 82, 157, 240, 61, 58, 191, 220, 190, 134, 169, 169, 61, 64, 113, 87, 189, 196, 114, 201, 188, 229, 254, 10, 190, 171, 206, 109, 61, 226, 231, 245, 61, 149, 90, 40, 62, 41, 190, 11, 62, 113, 38, 18, 189, 167, 209, 249, 189, 123, 44, 47, 190, 161, 43, 132, 188, 76, 175, 175, 61, 18, 19, 134, 190, 24, 220, 48, 61, 231, 90, 240, 61, 215, 175, 106, 61, 155, 81, 0, 189, 219, 26, 172, 189, 129, 112, 48, 188, 152, 45, 67, 189, 218, 224, 6, 186, 180, 0, 148, 62, 80, 93, 186, 60, 117, 253, 44, 62, 125, 6, 10, 190, 195, 218, 12, 61, 223, 159, 24, 62, 240, 67, 11, 188, 248, 215, 138, 61, 254, 18, 17, 62, 71, 127, 29, 191, 72, 216, 224, 62, 54, 211, 76, 62, 244, 51, 10, 63, 152, 27, 199, 187, 18, 199, 236, 190, 154, 63, 105, 62, 82, 249, 29, 61, 114, 155, 133, 189, 107, 125, 74, 190, 26, 44, 145, 62, 252, 28, 181, 190, 141, 27, 50, 188, 147, 222, 189, 61, 158, 141, 131, 188, 218, 153, 62, 190, 139, 132, 215, 189, 20, 182, 123, 62, 38, 96, 193, 188, 168, 90, 196, 189, 8, 124, 205, 189, 150, 236, 13, 62, 19, 171, 247, 62, 12, 120, 32, 191, 87, 5, 99, 187, 90, 16, 2, 61, 72, 82, 157, 60, 75, 60, 253, 190, 249, 67, 151, 189, 13, 193, 5, 188, 48, 83, 102, 62, 10, 169, 175, 60, 5, 157, 194, 190, 67, 246, 229, 62, 36, 35, 11, 60, 8, 133, 57, 62, 100, 212, 197, 189, 238, 198, 12, 190, 40, 156, 126, 62, 234, 143, 190, 189, 78, 81, 121, 61, 110, 255, 147, 190, 192, 21, 138, 62, 205, 190, 235, 190, 160, 1, 114, 62, 84, 27, 124, 61, 83, 159, 177, 189, 37, 217, 18, 189, 3, 177, 208, 61, 165, 179, 129, 62, 197, 167, 6, 188, 91, 7, 80, 190, 250, 210, 253, 189, 234, 53, 95, 62, 87, 67, 115, 62, 226, 98, 203, 190, 56, 66, 93, 61, 202, 52, 58, 62, 219, 44, 236, 188, 11, 133, 113, 190, 173, 69, 56, 61, 102, 131, 133, 190, 34, 61, 71, 62, 231, 226, 70, 61, 197, 32, 59, 62, 13, 90, 217, 189, 122, 4, 236, 189, 17, 88, 219, 61, 200, 94, 51, 190, 19, 237, 100, 62, 186, 202, 70, 62, 45, 254, 79, 189, 122, 158, 16, 190, 34, 25, 18, 62, 49, 243, 36, 62, 183, 190, 44, 188, 132, 20, 64, 62, 172, 101, 250, 188, 180, 39, 127, 62, 2, 74, 138, 189, 91, 237, 188, 189, 231, 57, 109, 60, 140, 164, 145, 61, 197, 226, 142, 190, 212, 245, 145, 62, 45, 116, 59, 62, 68, 125, 247, 61, 90, 223, 103, 189, 102, 34, 106, 62, 232, 214, 176, 190, 4, 145, 120, 190, 188, 65, 232, 61, 176, 131, 42, 62, 149, 153, 79, 62, 81, 255, 131, 189, 104, 28, 188, 60, 36, 170, 4, 191, 200, 104, 206, 62, 114, 209, 103, 188, 183, 92, 249, 61, 73, 96, 216, 60, 65, 249, 0, 190, 141, 247, 115, 62, 168, 10, 118, 62, 180, 16, 61, 189, 155, 230, 36, 189, 210, 111, 64, 62, 207, 222, 199, 190, 21, 215, 14, 62, 101, 53, 114, 62, 210, 70, 36, 190, 184, 24, 137, 189, 175, 251, 214, 61, 74, 16, 93, 62, 114, 167, 163, 189, 179, 251, 248, 189, 177, 207, 86, 61, 47, 175, 7, 62, 92, 3, 178, 61, 185, 221, 242, 59, 15, 118, 85, 189, 249, 174, 167, 62, 209, 148, 55, 62, 165, 72, 163, 190, 66, 24, 132, 62, 171, 180, 197, 189, 56, 125, 217, 189, 38, 122, 161, 188, 142, 107, 9, 189, 233, 49, 252, 60, 137, 70, 18, 190, 190, 114, 157, 190, 24, 111, 142, 61, 245, 189, 14, 62, 178, 189, 215, 188, 98, 21, 228, 190, 173, 141, 107, 188, 63, 193, 48, 62, 206, 39, 229, 190, 251, 229, 233, 189, 56, 241, 213, 189, 85, 206, 73, 189, 247, 192, 15, 62, 236, 8, 38, 189, 205, 114, 13, 61, 163, 98, 137, 61, 240, 6, 137, 62, 123, 176, 41, 62, 197, 51, 148, 190, 150, 196, 90, 61, 35, 194, 187, 190, 228, 47, 81, 189, 197, 237, 207, 61, 177, 90, 195, 61, 5, 66, 103, 62, 40, 61, 233, 61, 141, 162, 188, 190, 161, 171, 176, 190, 19, 18, 52, 62, 125, 60, 11, 62, 163, 138, 91, 62, 23, 42, 228, 61, 60, 216, 25, 190, 206, 13, 35, 189, 85, 107, 187, 189, 95, 249, 71, 61, 30, 148, 42, 190, 200, 230, 253, 58, 128, 234, 56, 190, 115, 65, 199, 187, 113, 175, 66, 190, 120, 229, 193, 189, 5, 84, 251, 61, 63, 209, 10, 190, 217, 185, 128, 62, 153, 133, 22, 60, 239, 84, 24, 61, 49, 212, 206, 187, 212, 214, 163, 189, 134, 133, 58, 189, 205, 203, 154, 189, 252, 32, 9, 62, 173, 103, 143, 190, 8, 202, 148, 62, 181, 123, 117, 62, 5, 7, 215, 190, 60, 31, 225, 189, 74, 231, 251, 61, 128, 35, 251, 61, 66, 173, 229, 61, 138, 53, 83, 61, 129, 225, 70, 60, 80, 37, 37, 190, 19, 173, 193, 61, 104, 136, 22, 189, 228, 6, 105, 62, 114, 88, 19, 190, 199, 59, 112, 189, 243, 57, 18, 62, 35, 179, 152, 60, 232, 139, 119, 190, 244, 196, 208, 188, 109, 243, 242, 60, 212, 221, 149, 61, 47, 24, 71, 189, 132, 162, 112, 189, 222, 231, 68, 190, 99, 76, 180, 190, 149, 248, 140, 60, 34, 4, 143, 61, 248, 209, 30, 62, 87, 223, 102, 61, 143, 228, 46, 61, 130, 249, 239, 61, 154, 254, 181, 189, 184, 189, 24, 62, 85, 28, 83, 190, 173, 18, 230, 61, 37, 163, 12, 62, 224, 148, 249, 187, 217, 237, 34, 190, 204, 147, 203, 189, 70, 247, 241, 61, 253, 140, 252, 189, 210, 14, 114, 190, 129, 0, 8, 62, 87, 196, 55, 62, 226, 16, 128, 189, 203, 176, 16, 61, 163, 67, 166, 190, 212, 204, 88, 62, 213, 187, 134, 61, 168, 57, 182, 61, 245, 216, 153, 189, 82, 104, 204, 61, 53, 47, 112, 190, 21, 44, 63, 62, 135, 110, 127, 61, 47, 255, 244, 189, 176, 100, 64, 188, 156, 116, 41, 62, 45, 99, 50, 62, 207, 23, 13, 62, 61, 81, 248, 61, 14, 230, 132, 190, 27, 41, 36, 62, 198, 135, 146, 62, 140, 123, 207, 190, 170, 198, 190, 188, 153, 1, 98, 61, 30, 253, 89, 62, 23, 163, 23, 190, 113, 182, 75, 189, 117, 165, 42, 190, 80, 229, 189, 189, 152, 175, 93, 61, 249, 203, 98, 189, 97, 53, 142, 189, 36, 211, 71, 187, 111, 88, 91, 190, 192, 64, 220, 60, 253, 10, 18, 190, 249, 138, 157, 61, 149, 75, 234, 188, 84, 179, 83, 189, 13, 0, 89, 61, 196, 171, 110, 190, 19, 139, 179, 61, 139, 132, 214, 61, 95, 243, 228, 61, 206, 163, 110, 189, 9, 116, 142, 59, 118, 115, 132, 61, 86, 216, 67, 62, 208, 168, 77, 189, 121, 82, 168, 61, 97, 123, 80, 187, 7, 193, 91, 190, 204, 62, 254, 188, 108, 35, 185, 61, 196, 32, 9, 62, 35, 85, 2, 186, 58, 170, 150, 189, 147, 23, 237, 189, 210, 73, 153, 190, 8, 122, 243, 61, 50, 214, 7, 189, 35, 15, 93, 61, 205, 199, 212, 189, 108, 88, 178, 189, 245, 228, 18, 62, 144, 130, 7, 190, 113, 129, 19, 189, 234, 74, 212, 61, 251, 220, 126, 189, 214, 172, 148, 189, 41, 123, 8, 60, 209, 97, 74, 188, 183, 249, 31, 62, 116, 140, 199, 189, 203, 38, 67, 190, 174, 13, 79, 62, 208, 220, 220, 61, 155, 125, 11, 190, 82, 184, 51, 62, 228, 93, 131, 62, 15, 96, 216, 189, 232, 96, 189, 189, 63, 245, 192, 61, 176, 192, 2, 61, 186, 44, 208, 61, 46, 113, 2, 62, 20, 127, 252, 189, 205, 143, 169, 61, 135, 165, 51, 62, 206, 87, 144, 189, 201, 79, 88, 190, 35, 158, 229, 189, 101, 181, 115, 61, 87, 159, 35, 190, 213, 86, 46, 61, 114, 21, 165, 61, 58, 10, 73, 61, 195, 167, 35, 60, 150, 248, 38, 62, 11, 251, 52, 61, 252, 73, 216, 189, 149, 136, 252, 188, 14, 141, 17, 189, 43, 32, 145, 189, 165, 255, 87, 190, 160, 50, 8, 61, 122, 16, 123, 188, 100, 192, 145, 61, 31, 159, 133, 61, 173, 1, 7, 61, 139, 44, 138, 189, 247, 153, 44, 62, 135, 109, 11, 62, 166, 70, 76, 61, 79, 182, 133, 189, 31, 132, 106, 190, 65, 66, 108, 60, 99, 128, 172, 61, 95, 184, 74, 60, 0, 192, 225, 189, 228, 143, 79, 62, 225, 37, 220, 61, 114, 161, 88, 190, 57, 30, 219, 189, 141, 30, 40, 62, 109, 105, 43, 190, 116, 140, 23, 62, 248, 34, 234, 62, 82, 77, 28, 189, 149, 82, 42, 60, 40, 83, 161, 190, 52, 197, 230, 62, 47, 101, 6, 191, 68, 74, 144, 190, 52, 15, 158, 61, 59, 212, 87, 62, 192, 68, 86, 190, 173, 113, 168, 61, 197, 242, 84, 190, 101, 89, 32, 61, 96, 149, 55, 190, 179, 127, 136, 62, 38, 113, 49, 190, 196, 144, 32, 189, 34, 228, 5, 190, 6, 49, 193, 61, 105, 89, 148, 62, 80, 57, 17, 190, 59, 46, 119, 190, 189, 37, 131, 62, 206, 0, 136, 60, 106, 124, 83, 62, 194, 13, 203, 190, 101, 52, 21, 62, 63, 224, 20, 62, 30, 243, 8, 62, 60, 244, 220, 190};
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
                alignas(float) const unsigned char memory[] = {207, 107, 104, 62, 219, 144, 177, 189, 45, 145, 179, 60, 7, 100, 21, 62, 179, 75, 85, 62, 103, 165, 18, 61, 107, 32, 1, 62, 32, 89, 92, 189, 209, 57, 161, 60, 234, 92, 170, 189, 161, 116, 190, 61, 112, 191, 88, 62, 30, 17, 221, 59, 74, 103, 193, 187, 63, 44, 192, 189, 36, 93, 70, 62, 131, 117, 254, 61, 0, 176, 245, 61, 203, 155, 161, 190, 144, 76, 70, 62, 118, 19, 33, 62, 54, 98, 118, 189, 73, 150, 185, 189, 20, 164, 162, 62, 75, 82, 55, 190, 229, 66, 106, 190, 205, 87, 117, 62, 74, 201, 21, 189, 246, 137, 144, 190, 11, 228, 229, 189, 239, 40, 97, 190, 127, 187, 85, 62};
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
                alignas(float) const unsigned char memory[] = {232, 154, 137, 62, 83, 60, 38, 189, 86, 56, 15, 63, 125, 227, 100, 190, 162, 159, 217, 189, 253, 40, 129, 61, 71, 99, 174, 62, 39, 55, 174, 62, 3, 118, 104, 62, 225, 158, 242, 59, 225, 134, 85, 63, 179, 75, 155, 62, 14, 76, 85, 189, 109, 64, 18, 190, 227, 231, 153, 62, 229, 115, 207, 62, 245, 145, 195, 62, 219, 118, 121, 190, 53, 35, 25, 190, 216, 217, 134, 189, 178, 2, 18, 191, 95, 93, 208, 190, 135, 182, 133, 62, 234, 138, 121, 190, 137, 99, 138, 62, 194, 15, 35, 190, 32, 170, 119, 60, 40, 175, 40, 190, 63, 197, 122, 61, 245, 127, 178, 189, 188, 235, 246, 61, 144, 134, 12, 63, 225, 77, 123, 190, 60, 76, 89, 62, 179, 40, 194, 62, 36, 75, 248, 189, 151, 207, 41, 190, 123, 87, 32, 62, 46, 235, 127, 190, 90, 122, 195, 61, 184, 11, 177, 189, 176, 202, 198, 189, 194, 238, 193, 188, 195, 38, 131, 190, 225, 179, 227, 60, 179, 179, 26, 62, 39, 107, 166, 189, 165, 65, 144, 188, 58, 54, 43, 190, 48, 154, 32, 189, 205, 182, 114, 62, 42, 58, 216, 189, 159, 117, 224, 61, 43, 151, 136, 189, 129, 37, 185, 61, 109, 158, 112, 190, 2, 226, 89, 61, 0, 71, 203, 62, 148, 23, 155, 190, 159, 97, 228, 61, 170, 108, 10, 62, 189, 14, 26, 60, 93, 88, 53, 62, 251, 208, 152, 188};
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
                alignas(float) const unsigned char memory[] = {14, 7, 55, 61, 83, 166, 225, 189};
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
    alignas(float) const unsigned char memory[] = {145, 141, 31, 63, 251, 51, 128, 63, 90, 227, 67, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {127, 186, 18, 192, 236, 136, 63, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0048/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}