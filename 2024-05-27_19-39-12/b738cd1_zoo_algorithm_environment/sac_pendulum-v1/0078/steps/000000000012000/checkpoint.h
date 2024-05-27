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
                alignas(float) const unsigned char memory[] = {93, 147, 212, 190, 224, 170, 39, 191, 221, 60, 191, 190, 117, 118, 152, 190, 36, 223, 91, 63, 241, 185, 201, 62, 197, 77, 77, 63, 237, 5, 127, 191, 250, 120, 176, 190, 115, 142, 188, 62, 148, 194, 118, 189, 195, 163, 12, 63, 104, 76, 95, 63, 135, 248, 86, 191, 134, 6, 130, 190, 53, 12, 61, 190, 117, 216, 220, 62, 31, 32, 232, 189, 56, 167, 4, 190, 242, 5, 107, 62, 197, 114, 18, 61, 13, 48, 238, 60, 180, 151, 70, 63, 226, 219, 90, 191, 170, 228, 118, 62, 108, 232, 59, 190, 3, 154, 62, 63, 220, 252, 35, 63, 206, 164, 70, 60, 9, 147, 52, 62, 137, 222, 222, 61, 218, 51, 145, 191, 16, 132, 212, 62, 87, 52, 33, 63, 144, 85, 146, 63, 208, 168, 180, 62, 204, 43, 106, 190, 184, 38, 63, 63, 224, 251, 205, 189, 154, 52, 214, 62, 27, 56, 182, 191, 189, 184, 8, 191, 57, 99, 4, 63, 166, 158, 152, 63, 237, 29, 126, 62, 248, 117, 71, 189, 241, 87, 104, 63, 221, 221, 233, 190, 213, 236, 25, 191, 127, 229, 180, 191, 187, 210, 157, 189, 150, 240, 228, 62, 100, 174, 153, 61, 123, 214, 51, 191, 206, 116, 23, 191, 161, 173, 134, 63, 148, 72, 38, 190, 142, 233, 233, 62, 127, 202, 117, 191, 138, 26, 20, 63, 91, 118, 182, 63, 145, 234, 227, 190, 65, 9, 223, 61, 114, 163, 2, 63, 20, 9, 95, 191, 195, 126, 52, 190, 236, 45, 46, 191, 240, 52, 80, 190, 187, 208, 235, 60, 203, 245, 105, 61, 176, 211, 146, 63, 43, 133, 110, 61, 74, 112, 24, 190, 236, 128, 148, 190, 68, 119, 67, 63, 211, 90, 227, 62, 5, 151, 234, 62, 1, 140, 2, 191, 217, 76, 77, 191, 247, 19, 19, 60, 181, 151, 112, 190, 89, 16, 80, 189, 198, 95, 6, 191, 130, 165, 243, 190, 251, 0, 67, 190, 28, 199, 58, 189, 1, 7, 24, 61, 191, 45, 55, 62, 166, 198, 194, 189, 166, 229, 143, 190, 221, 175, 11, 62, 212, 160, 122, 191, 134, 28, 186, 62, 1, 59, 17, 191, 176, 71, 140, 190, 72, 165, 125, 63};
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
                alignas(float) const unsigned char memory[] = {125, 240, 230, 190, 50, 79, 223, 189, 30, 48, 242, 61, 59, 3, 127, 62, 174, 222, 211, 190, 44, 78, 3, 63, 185, 75, 7, 63, 103, 170, 201, 61, 19, 53, 192, 62, 200, 178, 49, 63, 104, 72, 170, 189, 83, 153, 143, 61, 211, 29, 109, 62, 124, 158, 135, 61, 109, 170, 114, 62, 165, 154, 131, 61, 153, 239, 127, 62, 120, 138, 212, 62, 81, 226, 196, 62, 37, 227, 179, 188, 243, 154, 228, 188, 174, 174, 212, 61, 26, 225, 44, 63, 106, 125, 187, 62, 135, 23, 243, 189, 207, 221, 224, 61, 71, 210, 0, 191, 216, 89, 147, 190, 135, 137, 224, 62, 183, 251, 150, 62, 197, 197, 129, 187, 218, 221, 192, 190};
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
                alignas(float) const unsigned char memory[] = {7, 247, 210, 188, 49, 209, 202, 61, 179, 114, 104, 190, 218, 192, 141, 62, 3, 58, 164, 189, 87, 1, 242, 61, 156, 49, 51, 60, 97, 1, 179, 62, 28, 121, 212, 61, 55, 95, 36, 190, 114, 11, 45, 191, 47, 209, 171, 62, 45, 217, 10, 62, 113, 240, 107, 62, 47, 23, 198, 62, 59, 83, 94, 190, 24, 25, 36, 190, 189, 235, 10, 62, 207, 63, 107, 62, 79, 102, 173, 62, 176, 47, 146, 62, 51, 109, 159, 190, 245, 157, 40, 62, 107, 229, 22, 62, 167, 117, 53, 189, 203, 167, 145, 190, 206, 55, 49, 62, 149, 21, 48, 190, 242, 252, 41, 189, 22, 135, 69, 190, 5, 89, 242, 61, 24, 205, 171, 189, 195, 179, 137, 62, 211, 45, 243, 190, 91, 208, 125, 62, 49, 211, 131, 190, 75, 176, 229, 189, 184, 99, 126, 190, 121, 37, 244, 61, 62, 112, 247, 190, 13, 139, 116, 190, 106, 249, 95, 62, 169, 14, 7, 190, 13, 238, 36, 61, 6, 37, 122, 191, 56, 237, 151, 62, 53, 51, 106, 62, 238, 27, 41, 190, 42, 189, 1, 62, 176, 109, 128, 62, 71, 211, 116, 191, 130, 21, 80, 189, 139, 140, 165, 62, 96, 194, 190, 62, 208, 61, 122, 190, 223, 156, 192, 190, 124, 80, 152, 190, 43, 99, 211, 61, 113, 150, 28, 191, 103, 36, 154, 189, 43, 218, 250, 189, 65, 86, 208, 62, 7, 55, 115, 190, 10, 160, 30, 190, 114, 29, 46, 61, 196, 116, 239, 61, 87, 150, 83, 60, 234, 119, 111, 62, 41, 237, 54, 190, 7, 10, 204, 60, 117, 173, 204, 188, 224, 62, 155, 62, 231, 68, 38, 61, 70, 35, 98, 190, 124, 129, 228, 190, 34, 245, 135, 62, 205, 176, 28, 62, 115, 66, 237, 189, 219, 54, 174, 62, 96, 73, 156, 190, 46, 72, 48, 190, 9, 90, 43, 62, 63, 17, 39, 62, 86, 44, 147, 62, 140, 169, 107, 62, 162, 151, 101, 190, 90, 254, 191, 61, 118, 75, 38, 61, 101, 2, 153, 189, 84, 79, 144, 61, 103, 21, 186, 60, 70, 85, 232, 188, 146, 146, 206, 189, 77, 233, 29, 190, 186, 19, 130, 62, 181, 92, 114, 61, 53, 197, 37, 62, 247, 80, 10, 62, 50, 36, 206, 190, 72, 89, 186, 61, 43, 151, 102, 190, 7, 165, 139, 62, 115, 168, 28, 188, 162, 95, 27, 62, 163, 42, 144, 191, 239, 130, 242, 190, 242, 99, 123, 191, 92, 2, 78, 62, 14, 67, 178, 62, 23, 58, 2, 61, 82, 253, 6, 63, 117, 186, 92, 190, 133, 59, 50, 62, 58, 142, 76, 62, 190, 112, 186, 62, 148, 12, 95, 191, 168, 56, 67, 63, 107, 16, 9, 191, 72, 166, 202, 189, 116, 108, 183, 190, 241, 165, 137, 191, 105, 193, 179, 189, 229, 225, 128, 62, 207, 248, 184, 190, 194, 252, 126, 61, 112, 81, 107, 189, 152, 84, 61, 190, 24, 250, 155, 191, 216, 166, 37, 190, 93, 102, 233, 60, 148, 156, 90, 60, 196, 117, 160, 188, 220, 140, 175, 190, 117, 158, 121, 62, 123, 201, 94, 62, 127, 37, 39, 189, 9, 161, 6, 62, 65, 133, 5, 189, 115, 8, 119, 62, 52, 179, 103, 62, 7, 39, 149, 189, 5, 58, 154, 61, 4, 77, 207, 188, 113, 78, 227, 189, 46, 238, 177, 61, 57, 27, 243, 60, 124, 249, 9, 59, 203, 86, 240, 189, 148, 152, 145, 62, 29, 162, 87, 190, 11, 1, 227, 61, 182, 96, 138, 61, 174, 116, 104, 61, 20, 2, 95, 61, 56, 178, 30, 188, 135, 168, 203, 188, 136, 79, 128, 62, 68, 185, 248, 187, 28, 104, 168, 189, 162, 252, 5, 190, 106, 208, 140, 190, 208, 236, 214, 189, 46, 239, 223, 190, 179, 92, 51, 190, 19, 228, 100, 188, 93, 245, 14, 61, 164, 114, 151, 189, 195, 53, 7, 190, 37, 27, 65, 62, 184, 181, 177, 189, 40, 20, 87, 62, 232, 92, 156, 61, 177, 91, 186, 62, 17, 75, 107, 191, 96, 120, 73, 61, 148, 38, 2, 62, 213, 221, 225, 190, 155, 96, 231, 189, 57, 196, 94, 62, 168, 46, 108, 190, 9, 232, 75, 191, 2, 125, 73, 190, 30, 187, 78, 190, 189, 74, 204, 62, 248, 4, 57, 62, 48, 186, 233, 60, 214, 179, 136, 62, 34, 120, 71, 190, 225, 60, 238, 189, 164, 113, 54, 62, 53, 175, 97, 190, 161, 204, 176, 62, 146, 227, 165, 189, 198, 43, 27, 62, 4, 6, 86, 190, 56, 239, 148, 188, 107, 221, 9, 190, 39, 122, 96, 190, 104, 173, 240, 189, 47, 197, 26, 189, 106, 207, 72, 61, 51, 78, 39, 190, 33, 203, 236, 189, 73, 222, 219, 189, 81, 94, 99, 190, 242, 170, 67, 190, 194, 131, 69, 189, 216, 207, 136, 189, 37, 237, 148, 59, 79, 217, 147, 61, 196, 67, 130, 188, 35, 237, 23, 189, 88, 237, 168, 189, 97, 169, 39, 189, 254, 34, 180, 189, 1, 106, 179, 61, 225, 11, 191, 189, 184, 186, 129, 59, 72, 150, 195, 61, 158, 4, 178, 61, 54, 52, 226, 61, 120, 81, 139, 61, 126, 9, 245, 189, 201, 226, 213, 61, 57, 218, 221, 189, 134, 90, 181, 61, 195, 137, 135, 189, 253, 76, 35, 61, 134, 142, 44, 190, 156, 101, 23, 190, 161, 195, 145, 190, 191, 226, 201, 190, 145, 116, 7, 189, 217, 199, 3, 189, 147, 128, 125, 62, 3, 138, 65, 190, 38, 117, 54, 62, 132, 42, 175, 189, 19, 66, 1, 61, 220, 141, 253, 189, 135, 65, 166, 189, 84, 247, 29, 190, 124, 149, 145, 190, 174, 137, 33, 188, 147, 144, 23, 190, 84, 83, 20, 61, 96, 23, 183, 190, 49, 148, 180, 189, 140, 201, 136, 62, 113, 28, 72, 190, 173, 208, 200, 190, 179, 147, 178, 189, 162, 121, 205, 60, 60, 138, 189, 60, 157, 248, 88, 62, 187, 238, 227, 62, 100, 58, 164, 61, 221, 136, 218, 189, 221, 4, 144, 62, 196, 160, 192, 190, 3, 244, 13, 63, 218, 199, 121, 190, 123, 70, 13, 191, 237, 220, 247, 189, 178, 116, 201, 190, 54, 53, 152, 191, 71, 181, 87, 190, 96, 92, 77, 189, 12, 204, 241, 190, 134, 227, 176, 188, 228, 96, 35, 191, 7, 26, 120, 189, 163, 52, 104, 190, 47, 188, 51, 61, 8, 183, 37, 191, 23, 68, 130, 190, 219, 219, 197, 62, 89, 55, 137, 62, 44, 11, 0, 191, 123, 34, 123, 191, 123, 237, 49, 62, 51, 240, 171, 61, 41, 205, 90, 191, 121, 240, 61, 62, 15, 133, 254, 190, 80, 108, 151, 189, 168, 78, 182, 190, 85, 95, 160, 189, 100, 193, 75, 61, 64, 115, 130, 62, 212, 145, 39, 61, 204, 139, 55, 62, 49, 15, 194, 60, 198, 238, 209, 189, 247, 9, 173, 60, 62, 173, 139, 62, 4, 57, 183, 61, 178, 201, 147, 190, 52, 154, 59, 191, 254, 47, 111, 62, 45, 25, 82, 62, 229, 95, 149, 61, 162, 84, 172, 62, 67, 130, 178, 190, 154, 108, 3, 62, 55, 177, 24, 186, 78, 47, 37, 62, 92, 162, 39, 62, 179, 91, 212, 62, 122, 118, 182, 61, 161, 158, 223, 61, 89, 223, 184, 188, 223, 168, 39, 191, 81, 203, 134, 61, 233, 182, 243, 61, 95, 63, 4, 190, 213, 75, 151, 189, 208, 220, 85, 190, 38, 146, 130, 189, 89, 67, 7, 191, 222, 171, 249, 60, 125, 18, 209, 189, 87, 96, 207, 61, 69, 4, 167, 189, 164, 5, 13, 190, 21, 66, 166, 61, 9, 19, 218, 60, 244, 2, 112, 61, 160, 185, 0, 60, 65, 103, 9, 190, 224, 60, 3, 189, 6, 4, 8, 62, 67, 141, 7, 190, 54, 83, 129, 189, 191, 7, 3, 62, 120, 202, 138, 189, 217, 28, 71, 190, 95, 192, 72, 189, 188, 221, 248, 189, 62, 100, 72, 61, 124, 141, 30, 190, 86, 97, 134, 61, 243, 31, 159, 61, 174, 12, 181, 189, 62, 90, 150, 189, 42, 12, 37, 190, 135, 130, 182, 61, 219, 206, 62, 61, 97, 169, 14, 61, 135, 116, 146, 189, 136, 68, 188, 61, 130, 252, 139, 188, 192, 127, 109, 190, 168, 70, 64, 62, 101, 227, 251, 190, 26, 196, 13, 62, 199, 154, 121, 190, 216, 78, 82, 190, 207, 89, 7, 190, 136, 230, 174, 62, 50, 118, 190, 60, 78, 1, 29, 189, 191, 172, 194, 189, 209, 234, 76, 62, 170, 177, 230, 188, 199, 225, 208, 190, 139, 2, 207, 62, 196, 71, 44, 62, 205, 234, 143, 190, 169, 211, 13, 62, 28, 135, 169, 60, 130, 53, 108, 62, 235, 50, 171, 62, 59, 113, 247, 190, 250, 104, 43, 191, 16, 180, 24, 189, 172, 201, 187, 187, 176, 29, 120, 190, 187, 97, 96, 61, 5, 94, 42, 190, 53, 61, 69, 190, 27, 218, 43, 190, 198, 203, 13, 62, 221, 160, 162, 190, 240, 88, 121, 190, 193, 53, 88, 191, 10, 117, 15, 62, 227, 29, 96, 191, 174, 17, 68, 60, 171, 127, 69, 61, 17, 191, 158, 61, 65, 167, 91, 190, 206, 239, 87, 191, 138, 183, 209, 190, 88, 89, 235, 61, 245, 238, 17, 191, 144, 126, 64, 62, 44, 233, 144, 191, 211, 201, 45, 191, 248, 34, 203, 62, 168, 185, 33, 190, 94, 50, 180, 190, 126, 151, 144, 61, 187, 122, 17, 191, 118, 181, 199, 189, 143, 54, 171, 190, 81, 13, 166, 61, 152, 188, 143, 62, 48, 207, 21, 62, 54, 78, 153, 190, 5, 51, 205, 61, 140, 124, 146, 190, 221, 39, 69, 62, 102, 184, 78, 61, 201, 76, 244, 190, 187, 11, 79, 189, 106, 167, 62, 60, 79, 160, 80, 62, 35, 4, 0, 62, 116, 12, 110, 189, 0, 211, 190, 190, 145, 23, 136, 62, 247, 90, 69, 60, 62, 81, 142, 189, 133, 246, 196, 188, 78, 181, 246, 61, 39, 159, 255, 61, 252, 192, 29, 60, 219, 129, 167, 189, 14, 120, 243, 187, 167, 3, 9, 62, 174, 241, 62, 190, 132, 137, 206, 60, 113, 181, 177, 61, 161, 182, 0, 61, 38, 15, 244, 61, 202, 252, 128, 62, 25, 254, 26, 189, 49, 61, 35, 189, 91, 45, 15, 62, 109, 123, 73, 189, 42, 147, 94, 61, 207, 246, 88, 188, 215, 28, 123, 61, 7, 87, 131, 62, 107, 123, 255, 61, 149, 34, 126, 59, 36, 74, 243, 61, 37, 123, 139, 188, 244, 3, 15, 190, 56, 155, 171, 189, 128, 121, 187, 189, 89, 109, 21, 62, 130, 188, 32, 189, 73, 219, 43, 190, 195, 252, 67, 189, 146, 46, 20, 62, 119, 65, 237, 60, 40, 239, 164, 189, 109, 130, 12, 190, 214, 29, 14, 61, 152, 104, 8, 62, 41, 252, 43, 190, 90, 182, 12, 189, 77, 153, 229, 188, 114, 216, 245, 189, 135, 1, 42, 190, 211, 125, 162, 189, 118, 200, 224, 61, 191, 143, 25, 190, 185, 178, 130, 61, 220, 253, 206, 189, 20, 136, 13, 62, 117, 23, 254, 61, 201, 145, 51, 189, 65, 44, 140, 188, 68, 76, 20, 190, 156, 199, 40, 190, 93, 230, 215, 189, 151, 167, 10, 190, 13, 0, 126, 190, 86, 156, 148, 60, 188, 194, 154, 187, 208, 75, 188, 61, 85, 254, 35, 191, 156, 110, 132, 189, 220, 133, 48, 60, 183, 44, 99, 187, 199, 134, 36, 190, 162, 236, 43, 62, 45, 212, 39, 62, 208, 65, 140, 61, 126, 14, 170, 189, 172, 189, 89, 188, 120, 245, 72, 61, 111, 203, 187, 188, 25, 241, 101, 61, 3, 175, 234, 61, 244, 40, 121, 62, 200, 157, 56, 61, 25, 225, 39, 62, 179, 3, 22, 190, 206, 165, 29, 62, 205, 66, 240, 60, 95, 91, 146, 189, 147, 139, 13, 61, 194, 168, 19, 62, 33, 191, 0, 190, 79, 217, 113, 188, 38, 131, 238, 189, 181, 176, 122, 61, 227, 48, 216, 59, 68, 1, 154, 59, 196, 198, 78, 189, 199, 98, 240, 61, 64, 178, 255, 189, 221, 119, 10, 62, 68, 3, 162, 190, 214, 62, 32, 190, 1, 111, 146, 189, 150, 247, 222, 190, 75, 70, 148, 190, 99, 192, 124, 188, 32, 205, 35, 190, 178, 220, 251, 190, 186, 235, 104, 61, 151, 81, 87, 190, 84, 183, 163, 190, 160, 146, 33, 190, 125, 32, 62, 190, 246, 193, 23, 191, 206, 106, 46, 190, 170, 184, 195, 61, 211, 14, 40, 62, 73, 7, 127, 190, 249, 201, 93, 190, 51, 104, 113, 190, 221, 138, 163, 188, 251, 192, 25, 191, 245, 149, 215, 61, 146, 224, 33, 189, 40, 237, 138, 60, 105, 15, 94, 190, 61, 25, 242, 189, 81, 44, 14, 62, 14, 140, 121, 62, 167, 200, 70, 190, 249, 172, 69, 61, 176, 177, 245, 189, 117, 178, 207, 61, 187, 107, 8, 190, 209, 43, 43, 62, 9, 153, 31, 62, 120, 127, 169, 189, 160, 62, 65, 189, 11, 76, 156, 62, 32, 184, 1, 190, 14, 56, 144, 189, 59, 63, 172, 62, 78, 71, 176, 62, 197, 68, 24, 188, 252, 117, 123, 62, 30, 237, 100, 61, 149, 234, 138, 62, 174, 58, 0, 62, 16, 208, 146, 190, 13, 242, 158, 190, 37, 106, 69, 189, 91, 175, 65, 61, 251, 196, 122, 62, 124, 214, 169, 190, 105, 198, 19, 61, 204, 38, 145, 190, 232, 112, 204, 61, 210, 151, 113, 62, 242, 195, 115, 62, 54, 140, 190, 60, 182, 230, 7, 191, 232, 238, 60, 189, 69, 3, 84, 189, 11, 50, 38, 62, 225, 143, 23, 62, 144, 207, 52, 190, 183, 120, 110, 62, 130, 103, 21, 62, 170, 136, 66, 62, 109, 87, 172, 189, 208, 64, 229, 188, 159, 68, 51, 62, 174, 246, 102, 60, 230, 22, 115, 188, 159, 170, 183, 62, 231, 109, 129, 190, 211, 250, 197, 62, 8, 75, 220, 61, 62, 183, 154, 62, 53, 178, 241, 61, 26, 242, 76, 62, 169, 88, 239, 189, 16, 232, 178, 188, 69, 34, 153, 190, 57, 127, 125, 62, 105, 16, 75, 60, 151, 38, 214, 61, 43, 60, 243, 59, 90, 35, 97, 62, 122, 114, 26, 63, 255, 4, 246, 190, 79, 63, 70, 190, 158, 189, 121, 62, 124, 64, 52, 62, 193, 117, 169, 61, 199, 177, 148, 190, 125, 139, 219, 61, 81, 60, 152, 61, 233, 85, 173, 62, 168, 232, 51, 62, 92, 89, 208, 189, 128, 101, 111, 190, 237, 160, 167, 62, 149, 3, 7, 62, 234, 216, 229, 186, 40, 122, 232, 61, 232, 244, 118, 190, 230, 170, 223, 188, 152, 106, 225, 62, 206, 182, 155, 189, 167, 110, 152, 62, 9, 117, 128, 62, 212, 240, 76, 62, 165, 99, 171, 189, 53, 29, 208, 61, 175, 222, 206, 60, 41, 78, 23, 61, 180, 239, 153, 61, 237, 202, 2, 189, 62, 137, 137, 62, 87, 143, 177, 189, 131, 188, 142, 62, 97, 95, 9, 189, 0, 53, 23, 190, 221, 117, 214, 189, 132, 78, 132, 62, 7, 234, 80, 190, 1, 70, 225, 62, 135, 98, 116, 60, 40, 245, 112, 189, 132, 26, 165, 61, 106, 46, 44, 190, 250, 63, 169, 189, 72, 209, 132, 62, 194, 243, 99, 191, 184, 121, 168, 61, 0, 214, 58, 188, 147, 16, 49, 191, 180, 174, 109, 60, 163, 158, 92, 61, 4, 125, 21, 62, 225, 179, 39, 190, 138, 220, 245, 61, 218, 128, 242, 62, 240, 76, 91, 62, 128, 254, 158, 61, 193, 17, 38, 191, 130, 227, 255, 61, 174, 95, 52, 62, 147, 222, 157, 61, 175, 181, 193, 188, 212, 241, 50, 62, 52, 204, 205, 60, 86, 114, 133, 62, 167, 70, 181, 189, 77, 106, 127, 190, 48, 214, 33, 191, 106, 12, 65, 62, 106, 111, 181, 189, 240, 169, 227, 189, 221, 98, 120, 188, 124, 12, 28, 188, 207, 161, 33, 190, 78, 231, 117, 190, 106, 57, 175, 60, 98, 52, 135, 62, 112, 73, 249, 189, 41, 113, 29, 61, 70, 52, 134, 191, 186, 113, 114, 190, 68, 252, 239, 62, 246, 109, 152, 190, 117, 31, 216, 190, 84, 74, 23, 62, 251, 67, 27, 191, 102, 85, 115, 62, 87, 112, 200, 61, 187, 88, 16, 62, 67, 16, 183, 61, 107, 135, 97, 62, 93, 56, 161, 190, 105, 118, 8, 63, 47, 162, 158, 190, 246, 212, 178, 61, 198, 69, 122, 62, 107, 66, 166, 190, 246, 59, 42, 62, 23, 43, 74, 62, 94, 243, 85, 189, 122, 54, 83, 188, 33, 50, 76, 189, 5, 107, 207, 61, 144, 23, 227, 188, 96, 216, 214, 60, 42, 245, 35, 61, 181, 38, 234, 189, 13, 9, 172, 61, 146, 27, 18, 61, 160, 199, 225, 61, 205, 90, 79, 190, 207, 163, 84, 62, 21, 43, 27, 190, 70, 49, 212, 61, 213, 34, 151, 61, 136, 187, 179, 189, 138, 23, 237, 189, 183, 199, 190, 61, 214, 214, 246, 60, 126, 98, 106, 62, 109, 152, 13, 190, 33, 84, 143, 190, 247, 201, 224, 190, 228, 92, 155, 189, 243, 204, 223, 187, 226, 93, 6, 62, 255, 83, 207, 61, 225, 85, 75, 62, 144, 140, 30, 62, 182, 175, 212, 190, 218, 32, 53, 191, 73, 173, 95, 190, 155, 35, 39, 62, 150, 109, 200, 188, 61, 59, 241, 189, 66, 62, 49, 62, 165, 192, 8, 62, 154, 120, 110, 190, 233, 132, 74, 62, 1, 50, 161, 61, 152, 41, 7, 63, 217, 85, 121, 190, 37, 19, 29, 190, 140, 100, 1, 190, 117, 56, 131, 189, 77, 65, 98, 62, 195, 144, 47, 190, 11, 197, 20, 61, 231, 75, 0, 190, 238, 23, 245, 189, 234, 3, 19, 62, 185, 96, 112, 61, 132, 119, 38, 61, 3, 218, 243, 61, 164, 154, 132, 60, 240, 19, 123, 62, 24, 117, 136, 191, 220, 74, 5, 60, 34, 23, 117, 62, 9, 218, 117, 62, 250, 152, 38, 190, 156, 9, 247, 60, 146, 109, 35, 190, 40, 8, 30, 62, 41, 237, 174, 190, 110, 132, 1, 62, 57, 74, 251, 190, 178, 195, 108, 62, 221, 50, 35, 62, 160, 219, 25, 62, 210, 198, 183, 185, 204, 234, 55, 62, 137, 178, 99, 191, 85, 126, 85, 62, 11, 107, 115, 62, 167, 34, 12, 61, 41, 116, 83, 62, 66, 248, 131, 190, 194, 155, 197, 61, 150, 128, 138, 62, 165, 102, 113, 62, 174, 9, 128, 62, 176, 148, 169, 62, 94, 102, 213, 190, 176, 217, 73, 61, 3, 216, 13, 190, 221, 93, 35, 191, 113, 242, 129, 190, 54, 104, 148, 61, 106, 148, 224, 188, 136, 53, 220, 61, 151, 160, 130, 190, 7, 129, 191, 61, 32, 140, 234, 190, 56, 1, 0, 191, 121, 189, 32, 190, 123, 75, 136, 62, 243, 205, 202, 190, 36, 4, 182, 62, 68, 245, 206, 61, 205, 117, 100, 62, 32, 102, 82, 191, 80, 150, 209, 189, 189, 201, 157, 62, 236, 78, 33, 63, 137, 64, 23, 191, 47, 87, 135, 62, 171, 97, 28, 190, 9, 133, 216, 190, 39, 138, 184, 62, 9, 212, 119, 61, 228, 223, 9, 191, 185, 214, 110, 189, 175, 135, 190, 190, 120, 55, 247, 62, 44, 98, 48, 62, 26, 164, 196, 62, 104, 189, 74, 60, 73, 117, 54, 62, 237, 181, 8, 63, 29, 182, 190, 61, 113, 63, 194, 189, 174, 20, 80, 62, 26, 37, 152, 62, 140, 111, 152, 190, 176, 12, 149, 62, 52, 80, 0, 62, 65, 139, 225, 189, 148, 152, 173, 189, 30, 172, 0, 62, 162, 125, 26, 190, 160, 11, 39, 190, 166, 97, 145, 189, 238, 52, 178, 60, 30, 65, 119, 189, 233, 211, 50, 61, 2, 94, 145, 188, 16, 231, 62, 189, 190, 110, 207, 189, 56, 168, 60, 189, 81, 1, 2, 190, 228, 227, 35, 62, 249, 88, 157, 58, 223, 91, 36, 190, 32, 34, 209, 186, 151, 180, 2, 62, 215, 47, 37, 190, 234, 121, 254, 60, 145, 241, 193, 189, 72, 72, 177, 189, 193, 200, 35, 190, 200, 87, 27, 62, 171, 153, 238, 61, 231, 115, 157, 61, 202, 64, 6, 190, 103, 168, 52, 190, 198, 37, 17, 189, 114, 203, 99, 61, 72, 171, 96, 190, 189, 16, 186, 191, 234, 118, 67, 60, 13, 223, 68, 191, 145, 5, 109, 188, 18, 222, 87, 61, 119, 29, 65, 61, 106, 74, 250, 189, 42, 191, 38, 191, 133, 128, 221, 190, 193, 26, 163, 62, 11, 113, 13, 191, 244, 168, 21, 61, 70, 202, 125, 191, 2, 125, 146, 191, 178, 9, 148, 62, 128, 166, 8, 189, 181, 59, 154, 190, 145, 244, 93, 62, 97, 131, 210, 190, 132, 50, 147, 190, 75, 181, 184, 190, 67, 33, 16, 61, 78, 87, 136, 60, 152, 221, 108, 189, 57, 25, 212, 189, 60, 160, 107, 62, 215, 203, 193, 190, 141, 13, 67, 60, 138, 185, 137, 189, 130, 173, 14, 191, 93, 32, 88, 62, 192, 165, 74, 190, 7, 115, 137, 190, 241, 130, 18, 62, 192, 109, 208, 61, 0, 222, 5, 189, 35, 97, 36, 61, 133, 100, 145, 188, 205, 132, 155, 187, 35, 13, 208, 189, 39, 105, 136, 60, 112, 120, 235, 62, 16, 110, 196, 189, 222, 203, 56, 189, 206, 247, 37, 189, 188, 202, 133, 190, 113, 56, 172, 61, 139, 33, 225, 61, 169, 225, 195, 61, 105, 229, 198, 189, 239, 107, 235, 189, 183, 161, 160, 189, 58, 144, 51, 190, 176, 103, 5, 62, 22, 184, 2, 62, 207, 202, 59, 189, 138, 162, 247, 61, 162, 217, 53, 190, 147, 220, 202, 61, 12, 81, 78, 188, 24, 74, 16, 62, 18, 214, 162, 190, 178, 170, 247, 61, 113, 76, 183, 189, 249, 203, 211, 189, 44, 212, 22, 62, 225, 221, 108, 190, 16, 240, 175, 189, 56, 212, 144, 188, 175, 246, 82, 62, 195, 65, 37, 191, 233, 181, 198, 61, 115, 255, 1, 190, 37, 20, 189, 62, 62, 213, 178, 190, 121, 122, 137, 62, 206, 246, 151, 191, 144, 143, 209, 189, 21, 159, 130, 62, 130, 90, 184, 190, 151, 116, 76, 191, 246, 123, 166, 62, 46, 85, 182, 190, 100, 183, 152, 190, 32, 67, 208, 62, 238, 115, 96, 62, 158, 201, 50, 62, 3, 67, 175, 62, 97, 126, 70, 62, 127, 158, 8, 63, 212, 58, 184, 190, 108, 32, 98, 62, 177, 86, 24, 63, 62, 213, 221, 190, 135, 187, 162, 62, 144, 246, 55, 190, 16, 99, 23, 190, 221, 38, 214, 60, 173, 72, 97, 189, 193, 99, 7, 62, 248, 78, 190, 189, 21, 212, 27, 190, 167, 238, 73, 189, 130, 227, 83, 189, 183, 66, 73, 189, 49, 134, 148, 61, 247, 241, 48, 187, 196, 35, 253, 189, 176, 22, 100, 61, 234, 65, 66, 61, 187, 231, 74, 190, 192, 164, 157, 188, 42, 164, 22, 190, 101, 180, 219, 188, 100, 153, 20, 190, 218, 153, 34, 190, 148, 223, 92, 61, 89, 134, 98, 61, 102, 234, 124, 189, 125, 135, 209, 189, 179, 77, 23, 62, 179, 120, 237, 189, 68, 21, 106, 189, 18, 146, 243, 189, 229, 247, 59, 190, 41, 27, 23, 190, 120, 74, 116, 61, 182, 151, 82, 191, 164, 6, 205, 190, 59, 107, 244, 60, 233, 42, 63, 189, 179, 242, 49, 190, 148, 235, 23, 62, 10, 140, 214, 61, 120, 92, 66, 190, 24, 218, 139, 59, 110, 157, 144, 62, 36, 116, 15, 63, 156, 120, 190, 189, 159, 133, 244, 189, 224, 72, 209, 189, 5, 148, 136, 189, 240, 125, 138, 62, 6, 145, 249, 189, 237, 255, 152, 61, 156, 117, 14, 190, 147, 20, 23, 190, 41, 169, 155, 62, 134, 117, 17, 61, 70, 93, 65, 62, 121, 57, 67, 189, 110, 189, 199, 61, 188, 140, 166, 62, 33, 89, 176, 191, 7, 8, 174, 188, 156, 149, 134, 61, 199, 232, 76, 62, 195, 181, 57, 190, 39, 143, 143, 62};
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
                alignas(float) const unsigned char memory[] = {220, 83, 83, 189, 107, 13, 129, 61, 23, 82, 149, 61, 79, 56, 47, 62, 36, 254, 120, 189, 178, 62, 211, 189, 154, 186, 16, 189, 236, 255, 188, 190, 230, 189, 177, 190, 111, 34, 45, 62, 95, 247, 149, 61, 26, 86, 165, 190, 115, 207, 93, 62, 187, 110, 165, 62, 156, 92, 38, 190, 25, 112, 67, 62, 97, 189, 237, 60, 38, 133, 153, 190, 13, 140, 177, 60, 131, 194, 19, 61, 242, 17, 247, 61, 17, 52, 179, 186, 215, 113, 1, 62, 36, 49, 139, 62, 190, 16, 117, 62, 237, 127, 151, 62, 131, 201, 157, 59, 243, 51, 73, 62, 88, 82, 17, 62, 212, 254, 56, 62, 107, 193, 136, 189, 94, 34, 119, 62};
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
                alignas(float) const unsigned char memory[] = {202, 168, 149, 190, 46, 136, 164, 190, 24, 42, 55, 190, 142, 111, 107, 191, 233, 19, 207, 188, 213, 31, 244, 62, 87, 229, 17, 190, 7, 211, 136, 190, 218, 177, 86, 191, 171, 158, 133, 190, 36, 27, 184, 60, 104, 50, 227, 61, 190, 101, 164, 63, 116, 89, 184, 188, 116, 201, 188, 61, 232, 79, 84, 188, 118, 246, 191, 190, 26, 224, 129, 190, 163, 212, 252, 62, 121, 249, 219, 189, 44, 12, 104, 62, 130, 162, 20, 63, 67, 95, 0, 190, 35, 71, 72, 62, 24, 214, 253, 190, 140, 141, 91, 63, 233, 55, 145, 59, 25, 92, 168, 63, 8, 170, 108, 61, 138, 190, 160, 63, 102, 177, 19, 190, 4, 198, 132, 62, 84, 40, 160, 186, 133, 194, 215, 190, 61, 223, 117, 189, 222, 227, 86, 62, 43, 198, 211, 189, 238, 89, 96, 189, 72, 239, 151, 189, 192, 154, 18, 62, 202, 123, 125, 62, 211, 81, 106, 190, 222, 190, 16, 61, 217, 11, 69, 63, 100, 194, 198, 189, 149, 212, 66, 190, 51, 46, 208, 189, 5, 91, 5, 190, 6, 30, 149, 62, 240, 88, 53, 62, 11, 123, 230, 187, 19, 122, 140, 190, 165, 153, 199, 62, 125, 16, 45, 190, 141, 16, 106, 188, 247, 53, 119, 190, 62, 244, 253, 189, 209, 115, 219, 61, 96, 104, 235, 187, 64, 136, 135, 189, 28, 34, 241, 189, 130, 35, 246, 62, 55, 154, 206, 189, 63, 149, 155, 190};
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
                alignas(float) const unsigned char memory[] = {204, 39, 72, 190, 6, 9, 10, 190};
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
    alignas(float) const unsigned char memory[] = {102, 178, 65, 191, 142, 97, 176, 62, 248, 203, 6, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {200, 245, 243, 63, 42, 29, 161, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0078/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}