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
                alignas(float) const unsigned char memory[] = {111, 46, 89, 63, 240, 242, 42, 63, 58, 141, 1, 63, 133, 115, 196, 61, 96, 248, 191, 190, 192, 23, 17, 190, 222, 202, 146, 191, 159, 68, 248, 188, 108, 140, 6, 188, 67, 193, 90, 191, 122, 88, 200, 62, 56, 197, 10, 62, 34, 90, 228, 62, 103, 150, 25, 191, 248, 189, 40, 191, 43, 71, 40, 63, 238, 254, 67, 63, 105, 250, 196, 62, 134, 251, 76, 63, 49, 75, 147, 61, 104, 102, 73, 189, 227, 65, 207, 190, 45, 175, 248, 187, 156, 219, 20, 63, 196, 144, 51, 189, 176, 76, 34, 62, 195, 226, 214, 62, 148, 67, 199, 62, 71, 207, 165, 63, 162, 90, 160, 62, 22, 147, 150, 62, 117, 128, 129, 62, 50, 99, 128, 62, 247, 204, 13, 191, 18, 42, 121, 63, 197, 53, 122, 189, 230, 47, 140, 190, 5, 128, 178, 62, 68, 73, 20, 191, 212, 235, 192, 190, 102, 233, 220, 63, 241, 152, 237, 62, 165, 1, 233, 62, 67, 3, 176, 190, 32, 222, 186, 62, 69, 244, 17, 191, 225, 111, 49, 63, 149, 224, 114, 62, 112, 126, 166, 62, 223, 228, 168, 63, 253, 57, 72, 189, 28, 175, 29, 62, 176, 70, 128, 191, 225, 177, 204, 62, 255, 88, 30, 63, 60, 36, 134, 63, 177, 245, 194, 62, 209, 30, 227, 190, 106, 26, 3, 192, 107, 188, 43, 191, 33, 63, 29, 63, 157, 184, 160, 62, 122, 187, 3, 61, 45, 146, 161, 61, 11, 57, 16, 191, 100, 109, 243, 62, 235, 97, 207, 62, 62, 72, 122, 63, 153, 75, 227, 190, 250, 28, 165, 190, 164, 37, 75, 191, 17, 88, 45, 191, 89, 241, 236, 190, 99, 143, 22, 191, 116, 233, 222, 61, 47, 146, 99, 191, 47, 129, 147, 188, 109, 243, 42, 190, 39, 5, 216, 190, 241, 89, 140, 62, 101, 70, 16, 63, 52, 99, 100, 63, 172, 42, 101, 191, 210, 92, 160, 190, 85, 50, 169, 62, 58, 161, 6, 63, 101, 141, 185, 190, 132, 120, 173, 189, 183, 214, 224, 63, 223, 153, 217, 62, 130, 115, 172, 62, 211, 58, 103, 191, 67, 193, 33, 61, 93, 85, 113, 62, 140, 129, 169, 191, 173, 42, 196, 190};
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
                alignas(float) const unsigned char memory[] = {119, 18, 234, 190, 149, 238, 237, 62, 11, 121, 242, 187, 251, 196, 116, 63, 176, 216, 203, 190, 230, 220, 162, 189, 246, 227, 144, 188, 24, 146, 210, 190, 112, 169, 7, 62, 136, 190, 23, 63, 177, 124, 28, 190, 91, 9, 144, 62, 110, 1, 218, 190, 94, 41, 176, 190, 181, 75, 211, 61, 233, 250, 22, 191, 17, 73, 20, 61, 38, 225, 34, 190, 161, 104, 53, 191, 44, 212, 129, 61, 51, 0, 153, 62, 177, 245, 206, 189, 153, 6, 3, 62, 141, 179, 6, 189, 229, 63, 208, 60, 210, 233, 218, 190, 203, 38, 79, 189, 143, 151, 6, 191, 185, 169, 50, 189, 139, 18, 156, 60, 87, 29, 20, 62, 12, 10, 229, 62};
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
                alignas(float) const unsigned char memory[] = {246, 15, 48, 191, 63, 89, 163, 62, 132, 225, 180, 62, 197, 252, 54, 62, 16, 108, 203, 61, 71, 67, 185, 190, 114, 246, 199, 190, 1, 120, 125, 62, 5, 91, 199, 61, 36, 60, 23, 190, 153, 163, 166, 190, 181, 136, 31, 190, 172, 176, 49, 189, 246, 88, 50, 190, 134, 206, 178, 190, 101, 126, 108, 62, 112, 0, 73, 191, 80, 103, 120, 189, 121, 223, 221, 190, 155, 6, 86, 62, 49, 38, 15, 191, 17, 232, 193, 189, 107, 249, 80, 188, 204, 206, 9, 62, 46, 157, 23, 63, 109, 171, 68, 62, 47, 166, 137, 62, 214, 38, 102, 62, 56, 240, 112, 189, 182, 207, 235, 189, 223, 254, 228, 61, 109, 233, 194, 62, 146, 136, 68, 61, 232, 0, 20, 190, 219, 158, 238, 61, 92, 240, 60, 190, 240, 139, 213, 61, 239, 69, 214, 189, 1, 236, 228, 188, 130, 109, 219, 189, 194, 1, 245, 61, 210, 172, 84, 187, 129, 26, 172, 61, 133, 217, 7, 62, 144, 67, 5, 190, 213, 106, 6, 62, 1, 126, 194, 59, 55, 165, 46, 190, 219, 250, 159, 187, 25, 252, 9, 61, 186, 255, 172, 188, 43, 220, 199, 60, 235, 9, 174, 189, 255, 55, 7, 62, 76, 6, 143, 60, 148, 119, 118, 188, 54, 103, 73, 189, 16, 60, 168, 189, 35, 244, 34, 189, 156, 230, 235, 61, 233, 26, 3, 190, 2, 46, 22, 190, 234, 164, 63, 190, 253, 127, 27, 60, 35, 188, 208, 61, 204, 230, 148, 59, 100, 31, 25, 62, 25, 36, 253, 189, 72, 74, 176, 61, 46, 136, 76, 61, 40, 98, 28, 190, 171, 79, 192, 60, 92, 232, 2, 61, 115, 104, 235, 58, 130, 13, 17, 61, 170, 199, 36, 190, 31, 28, 17, 189, 250, 120, 29, 190, 170, 129, 224, 188, 230, 145, 189, 189, 145, 194, 150, 189, 159, 222, 226, 189, 109, 252, 11, 62, 232, 207, 24, 190, 193, 154, 190, 187, 109, 183, 68, 190, 92, 57, 240, 189, 238, 141, 184, 189, 62, 28, 83, 61, 53, 89, 93, 61, 172, 96, 158, 61, 180, 216, 0, 62, 109, 58, 36, 62, 187, 36, 43, 189, 192, 158, 52, 61, 96, 218, 62, 190, 167, 119, 11, 63, 122, 55, 44, 191, 45, 44, 49, 190, 29, 15, 93, 189, 188, 79, 219, 189, 135, 151, 159, 61, 170, 160, 210, 62, 180, 201, 134, 60, 154, 33, 4, 189, 76, 51, 0, 61, 149, 29, 90, 62, 118, 152, 29, 190, 45, 55, 37, 189, 251, 32, 179, 186, 148, 34, 83, 189, 121, 116, 170, 190, 37, 220, 138, 62, 150, 211, 130, 190, 12, 177, 227, 62, 103, 152, 28, 61, 237, 68, 130, 62, 42, 30, 192, 61, 111, 65, 180, 60, 20, 77, 165, 190, 217, 171, 210, 190, 17, 16, 166, 61, 253, 172, 237, 60, 111, 160, 214, 190, 191, 32, 41, 191, 69, 154, 88, 61, 234, 31, 21, 191, 221, 4, 49, 191, 98, 242, 141, 62, 204, 146, 231, 61, 177, 164, 9, 190, 245, 164, 167, 61, 161, 104, 205, 189, 155, 89, 23, 62, 201, 255, 8, 189, 98, 52, 250, 60, 211, 237, 10, 62, 99, 240, 17, 62, 44, 185, 242, 61, 160, 251, 84, 61, 214, 254, 142, 191, 69, 160, 21, 62, 146, 34, 16, 62, 2, 193, 56, 190, 169, 102, 44, 62, 10, 222, 230, 60, 7, 168, 0, 62, 9, 1, 204, 190, 33, 135, 103, 62, 11, 164, 35, 62, 106, 174, 103, 189, 224, 180, 209, 190, 78, 218, 94, 190, 16, 55, 135, 190, 126, 248, 97, 62, 99, 68, 71, 189, 240, 121, 76, 190, 153, 238, 4, 62, 15, 88, 115, 188, 231, 163, 139, 190, 67, 103, 2, 191, 126, 131, 69, 61, 136, 115, 87, 190, 21, 209, 82, 190, 95, 84, 102, 62, 89, 172, 152, 190, 80, 38, 93, 62, 126, 207, 233, 61, 44, 172, 141, 190, 68, 131, 166, 190, 91, 71, 43, 189, 58, 149, 114, 61, 197, 254, 31, 62, 239, 71, 7, 190, 136, 252, 210, 62, 243, 184, 166, 190, 183, 112, 35, 62, 206, 134, 238, 62, 159, 138, 206, 191, 173, 99, 38, 62, 32, 169, 195, 62, 81, 61, 209, 61, 101, 64, 38, 61, 80, 141, 55, 62, 19, 98, 185, 62, 72, 117, 230, 61, 20, 192, 5, 190, 186, 121, 176, 62, 11, 43, 193, 60, 222, 2, 198, 190, 245, 142, 63, 62, 102, 160, 162, 62, 246, 164, 90, 62, 216, 198, 52, 62, 140, 134, 195, 62, 35, 58, 250, 61, 246, 154, 53, 190, 151, 70, 13, 63, 213, 9, 124, 61, 115, 61, 89, 188, 44, 174, 57, 62, 42, 135, 157, 187, 82, 57, 75, 62, 210, 10, 120, 189, 169, 169, 252, 61, 131, 7, 142, 191, 203, 168, 139, 189, 78, 138, 230, 191, 6, 75, 181, 62, 44, 40, 109, 191, 126, 32, 2, 63, 235, 61, 87, 62, 66, 8, 168, 189, 80, 207, 195, 57, 168, 156, 126, 62, 88, 179, 237, 61, 90, 176, 192, 62, 181, 162, 9, 190, 116, 103, 189, 189, 1, 51, 44, 190, 168, 93, 230, 61, 110, 187, 92, 191, 202, 30, 27, 190, 40, 5, 58, 60, 228, 53, 159, 61, 169, 83, 135, 189, 237, 49, 210, 189, 180, 134, 252, 189, 249, 122, 141, 189, 156, 224, 239, 188, 76, 143, 12, 62, 13, 25, 67, 190, 75, 225, 175, 189, 176, 188, 8, 190, 59, 232, 128, 61, 87, 43, 55, 61, 70, 234, 119, 188, 186, 90, 140, 60, 55, 226, 246, 60, 50, 14, 225, 189, 244, 198, 21, 190, 97, 98, 57, 190, 251, 235, 66, 189, 217, 212, 165, 188, 72, 116, 25, 188, 115, 255, 173, 61, 97, 4, 147, 189, 238, 7, 134, 184, 220, 17, 243, 189, 107, 89, 12, 190, 49, 74, 156, 61, 192, 251, 131, 189, 31, 105, 197, 61, 247, 221, 67, 190, 239, 239, 41, 189, 18, 218, 148, 189, 48, 235, 33, 190, 2, 30, 132, 188, 68, 197, 214, 187, 98, 106, 69, 190, 46, 215, 129, 189, 0, 252, 97, 61, 244, 46, 249, 188, 68, 193, 213, 59, 115, 224, 188, 61, 245, 189, 162, 61, 88, 203, 215, 189, 208, 197, 23, 190, 86, 183, 11, 189, 219, 124, 248, 188, 113, 72, 11, 190, 80, 183, 26, 60, 63, 188, 165, 189, 16, 51, 188, 189, 108, 1, 27, 190, 122, 134, 58, 61, 116, 16, 187, 189, 157, 139, 170, 60, 187, 42, 18, 61, 17, 228, 14, 190, 11, 45, 207, 61, 193, 227, 153, 61, 122, 166, 4, 62, 170, 111, 209, 59, 196, 52, 112, 189, 161, 211, 113, 61, 111, 254, 163, 60, 132, 56, 145, 189, 37, 25, 131, 61, 183, 23, 56, 60, 13, 213, 182, 190, 174, 229, 64, 191, 254, 107, 44, 61, 107, 233, 100, 62, 149, 149, 119, 62, 226, 222, 4, 62, 95, 116, 154, 189, 77, 206, 88, 190, 238, 233, 189, 61, 242, 23, 93, 190, 41, 71, 35, 189, 229, 57, 102, 60, 169, 201, 101, 62, 170, 184, 238, 190, 32, 138, 101, 189, 142, 183, 243, 189, 110, 104, 212, 191, 144, 69, 210, 61, 94, 59, 244, 61, 188, 87, 102, 62, 4, 136, 238, 61, 55, 236, 248, 188, 31, 62, 141, 62, 33, 202, 82, 188, 190, 217, 208, 61, 0, 253, 83, 62, 202, 74, 46, 62, 70, 133, 112, 191, 95, 142, 11, 62, 69, 14, 139, 62, 41, 231, 12, 191, 42, 103, 174, 188, 186, 240, 8, 191, 91, 235, 113, 191, 217, 64, 165, 62, 247, 82, 48, 190, 78, 27, 241, 62, 172, 151, 171, 61, 120, 109, 45, 61, 167, 194, 23, 191, 131, 25, 8, 191, 65, 164, 206, 190, 197, 230, 178, 189, 92, 235, 28, 190, 56, 140, 234, 189, 191, 193, 195, 61, 44, 95, 186, 61, 35, 50, 49, 191, 251, 128, 33, 189, 199, 21, 157, 189, 190, 207, 80, 62, 201, 104, 216, 190, 159, 165, 151, 60, 78, 196, 159, 61, 168, 5, 22, 191, 241, 79, 60, 189, 175, 215, 76, 190, 215, 253, 26, 62, 6, 28, 235, 61, 120, 84, 122, 190, 142, 96, 137, 190, 121, 86, 96, 62, 50, 225, 149, 190, 116, 246, 121, 189, 148, 71, 20, 189, 229, 219, 182, 190, 55, 223, 150, 62, 168, 239, 98, 190, 227, 106, 200, 62, 190, 209, 43, 187, 240, 146, 13, 61, 255, 184, 212, 190, 103, 190, 192, 188, 12, 53, 201, 190, 65, 215, 43, 61, 43, 171, 107, 62, 167, 214, 87, 61, 188, 212, 165, 62, 101, 188, 142, 190, 93, 251, 109, 62, 36, 236, 132, 61, 97, 97, 164, 189, 248, 251, 11, 62, 72, 113, 53, 62, 219, 235, 188, 61, 140, 200, 242, 188, 51, 4, 76, 190, 123, 176, 232, 189, 123, 29, 3, 62, 60, 117, 128, 63, 247, 230, 249, 60, 140, 176, 94, 61, 194, 43, 83, 190, 58, 163, 128, 62, 235, 21, 138, 189, 65, 187, 42, 190, 71, 123, 1, 62, 3, 69, 133, 189, 247, 26, 146, 189, 44, 9, 6, 190, 146, 213, 1, 190, 35, 212, 8, 190, 145, 236, 4, 190, 236, 130, 13, 62, 174, 129, 80, 61, 181, 221, 13, 190, 21, 3, 156, 61, 54, 95, 180, 61, 247, 34, 194, 61, 229, 82, 32, 60, 118, 105, 249, 189, 140, 178, 196, 189, 62, 101, 42, 190, 251, 234, 156, 61, 70, 115, 217, 61, 135, 134, 33, 189, 138, 113, 142, 189, 123, 179, 248, 189, 37, 214, 174, 61, 37, 144, 17, 190, 172, 107, 27, 62, 135, 205, 120, 61, 23, 75, 32, 190, 7, 111, 12, 190, 20, 212, 248, 61, 134, 33, 228, 189, 174, 96, 15, 191, 149, 245, 165, 61, 242, 19, 99, 62, 4, 157, 90, 61, 198, 69, 120, 190, 96, 25, 129, 61, 246, 157, 2, 190, 251, 130, 174, 61, 101, 179, 41, 190, 147, 185, 96, 60, 76, 162, 8, 190, 72, 82, 117, 62, 152, 223, 105, 61, 111, 202, 184, 191, 25, 113, 231, 189, 134, 76, 234, 191, 228, 68, 21, 62, 247, 29, 157, 190, 47, 240, 137, 62, 152, 135, 32, 62, 92, 134, 78, 189, 205, 153, 218, 62, 176, 74, 159, 62, 234, 65, 152, 62, 248, 14, 173, 62, 63, 56, 2, 62, 153, 13, 213, 61, 134, 53, 177, 190, 16, 179, 103, 62, 52, 90, 166, 191, 19, 254, 28, 190, 195, 31, 11, 61, 8, 230, 166, 189, 154, 178, 249, 189, 241, 206, 1, 61, 79, 129, 72, 62, 67, 29, 129, 189, 135, 240, 118, 60, 213, 131, 139, 62, 116, 156, 2, 190, 165, 113, 24, 62, 133, 33, 37, 189, 120, 66, 34, 190, 91, 241, 63, 62, 165, 208, 143, 61, 121, 117, 41, 62, 44, 42, 175, 189, 12, 206, 163, 62, 80, 220, 198, 61, 221, 236, 181, 189, 186, 201, 43, 188, 153, 134, 146, 191, 114, 207, 128, 190, 149, 192, 213, 60, 76, 107, 255, 62, 229, 26, 22, 191, 69, 125, 38, 61, 155, 146, 206, 62, 45, 164, 72, 62, 224, 54, 157, 190, 67, 16, 184, 189, 107, 28, 45, 62, 231, 174, 49, 190, 241, 211, 209, 191, 48, 182, 183, 190, 253, 96, 119, 62, 233, 3, 128, 61, 92, 94, 14, 189, 94, 191, 195, 62, 236, 186, 71, 189, 24, 99, 136, 62, 73, 212, 22, 60, 11, 176, 99, 62, 248, 202, 132, 190, 167, 134, 61, 190, 101, 241, 235, 190, 9, 180, 139, 189, 72, 235, 39, 190, 121, 121, 139, 189, 162, 105, 129, 62, 175, 128, 126, 189, 226, 12, 142, 62, 36, 182, 46, 191, 215, 229, 86, 62, 57, 188, 116, 62, 181, 152, 186, 189, 83, 172, 201, 188, 142, 85, 23, 190, 176, 227, 130, 62, 9, 195, 46, 190, 66, 96, 220, 61, 10, 163, 52, 63, 222, 63, 63, 189, 206, 83, 196, 189, 16, 66, 71, 62, 252, 149, 146, 62, 210, 30, 12, 63, 169, 229, 20, 61, 26, 59, 38, 188, 92, 107, 68, 190, 234, 220, 226, 190, 237, 254, 251, 61, 81, 23, 202, 62, 189, 147, 146, 189, 164, 158, 195, 59, 103, 131, 162, 189, 227, 14, 149, 62, 136, 131, 103, 62, 178, 218, 241, 60, 113, 108, 135, 190, 94, 99, 119, 62, 11, 110, 11, 191, 12, 52, 140, 62, 124, 227, 156, 190, 143, 16, 136, 62, 56, 80, 232, 189, 22, 59, 138, 62, 250, 120, 53, 62, 234, 52, 198, 60, 14, 193, 4, 62, 66, 33, 97, 190, 53, 1, 165, 61, 79, 30, 123, 189, 115, 170, 79, 191, 47, 37, 37, 62, 69, 238, 146, 190, 44, 255, 103, 190, 16, 240, 34, 190, 209, 30, 198, 62, 134, 138, 120, 62, 179, 69, 157, 62, 158, 233, 69, 188, 229, 149, 103, 190, 104, 51, 23, 63, 30, 71, 58, 62, 121, 237, 139, 190, 9, 73, 94, 62, 183, 223, 132, 60, 145, 17, 167, 62, 48, 195, 76, 189, 112, 136, 129, 62, 201, 226, 151, 191, 2, 229, 90, 61, 49, 8, 174, 191, 7, 237, 83, 62, 129, 157, 70, 191, 170, 22, 140, 62, 89, 72, 47, 62, 253, 212, 110, 60, 84, 92, 23, 62, 69, 43, 14, 62, 235, 0, 200, 188, 3, 21, 237, 61, 76, 196, 78, 60, 183, 145, 208, 189, 185, 102, 164, 190, 1, 165, 81, 62, 71, 233, 80, 191, 45, 207, 148, 190, 58, 43, 138, 189, 98, 246, 203, 190, 9, 224, 220, 61, 171, 91, 33, 62, 189, 91, 6, 189, 29, 118, 44, 62, 0, 179, 186, 190, 150, 211, 118, 189, 127, 50, 189, 61, 168, 33, 119, 61, 166, 232, 186, 189, 226, 104, 138, 190, 92, 162, 127, 190, 102, 0, 5, 187, 136, 246, 8, 61, 220, 2, 62, 190, 132, 9, 175, 62, 218, 80, 154, 189, 174, 82, 182, 62, 224, 157, 140, 190, 20, 145, 26, 190, 197, 136, 130, 62, 175, 54, 107, 189, 189, 193, 220, 61, 68, 104, 135, 190, 19, 198, 128, 62, 12, 64, 123, 189, 46, 6, 22, 62, 94, 102, 214, 62, 88, 88, 85, 190, 231, 252, 16, 62, 249, 86, 139, 62, 0, 208, 91, 61, 129, 28, 211, 190, 121, 73, 149, 61, 216, 76, 162, 62, 151, 135, 15, 61, 74, 84, 124, 190, 142, 225, 103, 190, 172, 222, 220, 61, 29, 27, 145, 62, 63, 107, 218, 59, 51, 105, 188, 60, 104, 247, 168, 60, 150, 73, 157, 62, 106, 97, 146, 190, 210, 65, 91, 62, 237, 11, 4, 190, 164, 9, 141, 62, 213, 49, 197, 189, 253, 12, 207, 60, 170, 155, 98, 190, 148, 86, 1, 192, 191, 72, 37, 62, 151, 91, 36, 190, 220, 169, 2, 190, 83, 55, 141, 191, 214, 157, 98, 62, 107, 228, 13, 63, 236, 196, 55, 62, 252, 51, 39, 62, 148, 198, 97, 191, 56, 11, 177, 61, 3, 141, 35, 61, 97, 13, 172, 191, 97, 157, 115, 62, 42, 225, 23, 190, 24, 250, 6, 189, 66, 151, 30, 62, 219, 140, 26, 62, 109, 164, 32, 62, 116, 170, 180, 190, 56, 236, 17, 191, 6, 84, 154, 190, 37, 197, 29, 190, 106, 111, 153, 62, 116, 15, 51, 61, 237, 163, 93, 62, 219, 42, 61, 62, 130, 151, 20, 189, 119, 80, 31, 191, 155, 53, 85, 62, 193, 208, 88, 190, 34, 8, 36, 62, 79, 8, 74, 62, 151, 74, 211, 189, 173, 153, 97, 189, 216, 230, 213, 60, 251, 164, 251, 61, 29, 218, 30, 190, 151, 240, 106, 61, 192, 42, 254, 189, 168, 12, 10, 61, 167, 189, 219, 61, 246, 95, 80, 62, 245, 246, 251, 190, 5, 227, 207, 189, 28, 204, 103, 190, 137, 130, 71, 62, 53, 66, 159, 62, 13, 211, 174, 61, 244, 133, 9, 63, 53, 147, 116, 190, 96, 72, 251, 62, 197, 154, 240, 60, 86, 225, 86, 61, 86, 61, 48, 190, 230, 13, 178, 190, 10, 116, 78, 62, 146, 229, 107, 190, 180, 101, 39, 58, 165, 130, 224, 189, 95, 126, 154, 61, 152, 189, 192, 190, 203, 61, 164, 62, 198, 47, 156, 190, 176, 61, 214, 191, 172, 112, 245, 60, 187, 32, 119, 190, 38, 29, 147, 190, 146, 44, 155, 191, 193, 174, 109, 62, 171, 162, 17, 61, 140, 44, 70, 62, 68, 0, 20, 63, 151, 109, 18, 191, 5, 191, 233, 61, 171, 184, 163, 62, 148, 154, 42, 190, 252, 214, 52, 190, 170, 5, 181, 62, 133, 162, 71, 191, 111, 54, 94, 191, 27, 93, 178, 62, 132, 137, 244, 189, 17, 130, 255, 62, 34, 248, 199, 189, 131, 214, 251, 59, 120, 194, 155, 190, 22, 116, 42, 61, 86, 233, 74, 191, 145, 104, 255, 189, 228, 87, 132, 190, 153, 218, 236, 62, 112, 60, 249, 190, 213, 75, 193, 189, 0, 150, 234, 62, 203, 248, 216, 191, 228, 3, 137, 188, 111, 249, 150, 62, 68, 66, 194, 61, 13, 88, 214, 61, 156, 196, 20, 62, 192, 139, 20, 62, 222, 92, 179, 189, 34, 95, 0, 190, 118, 125, 240, 62, 192, 212, 204, 61, 235, 176, 66, 191, 69, 121, 226, 62, 51, 111, 204, 62, 99, 210, 246, 189, 90, 227, 59, 61, 65, 72, 139, 61, 77, 228, 59, 62, 113, 198, 49, 188, 239, 186, 228, 189, 87, 213, 30, 191, 0, 37, 199, 190, 44, 154, 204, 190, 227, 34, 149, 60, 31, 78, 94, 190, 184, 152, 181, 62, 244, 34, 133, 62, 62, 101, 53, 60, 92, 95, 34, 190, 219, 149, 10, 61, 147, 187, 40, 62, 200, 80, 139, 190, 110, 249, 197, 61, 73, 89, 252, 61, 252, 77, 88, 190, 42, 180, 220, 190, 135, 60, 75, 59, 61, 249, 87, 62, 173, 188, 156, 190, 70, 52, 34, 62, 19, 144, 124, 190, 244, 40, 115, 62, 139, 14, 88, 62, 152, 197, 22, 62, 108, 228, 103, 190, 168, 245, 69, 190, 151, 6, 117, 190, 107, 6, 78, 189, 218, 236, 73, 62, 157, 36, 18, 62, 118, 209, 233, 62, 23, 173, 65, 190, 123, 163, 146, 62, 200, 52, 58, 62, 254, 57, 246, 61, 148, 188, 175, 188, 17, 5, 24, 190, 190, 27, 62, 189, 111, 134, 151, 190, 144, 32, 153, 189, 59, 173, 81, 61, 214, 248, 76, 62, 9, 208, 19, 190, 39, 32, 6, 62, 178, 20, 194, 190, 242, 62, 213, 191, 26, 20, 151, 62, 19, 5, 170, 189, 117, 24, 186, 189, 116, 180, 133, 191, 54, 253, 42, 62, 239, 247, 46, 62, 49, 124, 38, 62, 21, 25, 199, 62, 47, 210, 144, 189, 145, 254, 102, 190, 15, 165, 251, 61, 75, 27, 219, 189, 89, 188, 206, 190, 70, 32, 190, 189, 233, 0, 5, 62, 123, 139, 115, 62, 251, 38, 147, 59, 62, 25, 11, 61, 189, 106, 173, 61, 234, 182, 45, 60, 199, 255, 135, 62, 115, 90, 166, 189, 18, 106, 14, 190, 91, 227, 190, 61, 115, 107, 221, 189, 18, 53, 22, 62, 209, 10, 140, 189, 133, 137, 156, 62, 216, 251, 143, 190, 178, 69, 234, 189, 83, 32, 215, 190, 193, 190, 138, 61, 89, 170, 202, 189, 245, 169, 95, 190, 29, 230, 239, 190, 150, 197, 91, 61, 213, 248, 67, 62, 49, 220, 93, 190, 101, 4, 38, 62, 230, 174, 147, 190, 194, 118, 227, 60, 122, 141, 23, 62, 45, 18, 12, 191, 105, 37, 76, 61, 150, 142, 128, 190, 38, 6, 223, 61, 107, 47, 28, 191, 137, 165, 51, 191, 78, 79, 172, 186, 218, 171, 137, 190, 26, 213, 154, 62, 249, 102, 62, 189, 121, 87, 192, 190, 141, 224, 209, 190, 171, 36, 75, 190, 96, 25, 71, 190, 16, 233, 166, 189, 199, 124, 63, 190, 219, 21, 95, 62, 227, 98, 166, 189, 28, 167, 104, 189, 151, 90, 252, 62, 120, 30, 34, 61, 137, 133, 40, 62, 182, 238, 133, 61, 134, 222, 18, 61, 234, 108, 46, 62, 82, 182, 19, 190, 255, 240, 243, 188, 246, 17, 139, 188, 54, 80, 51, 190, 92, 133, 150, 61, 22, 127, 220, 61, 255, 215, 115, 190, 161, 64, 55, 61, 21, 71, 133, 62, 128, 101, 80, 60, 194, 46, 248, 61, 60, 131, 169, 61, 93, 29, 7, 188, 210, 105, 192, 190, 49, 138, 157, 62, 184, 210, 167, 189, 3, 159, 232, 61, 20, 188, 201, 58, 74, 126, 64, 61, 32, 166, 142, 61, 19, 66, 38, 61, 47, 177, 78, 62, 72, 189, 189, 61, 76, 147, 92, 62, 159, 246, 210, 189, 43, 118, 228, 62, 152, 90, 29, 190, 249, 252, 51, 61, 136, 253, 128, 190, 81, 147, 177, 62, 240, 36, 33, 189, 73, 116, 58, 62, 96, 235, 8, 190, 231, 3, 148, 190, 184, 191, 51, 190, 77, 134, 121, 58, 138, 117, 32, 191, 125, 128, 59, 62, 106, 192, 144, 190, 51, 66, 80, 190, 236, 246, 75, 190, 164, 142, 13, 62, 158, 217, 216, 189, 68, 64, 254, 190, 193, 185, 193, 190, 143, 30, 172, 62, 236, 52, 66, 191, 54, 18, 56, 190, 128, 86, 106, 61, 16, 76, 139, 61, 83, 7, 163, 191, 193, 123, 157, 61, 45, 174, 187, 190, 101, 115, 59, 190, 149, 96, 148, 61, 76, 1, 142, 61, 36, 239, 33, 190, 110, 38, 6, 191, 54, 26, 136, 62, 105, 172, 131, 188, 188, 184, 82, 62, 206, 94, 110, 61, 107, 192, 125, 61, 85, 157, 163, 61, 241, 29, 78, 62, 237, 19, 252, 185, 215, 44, 183, 190, 116, 132, 217, 61, 155, 202, 29, 63, 71, 150, 190, 189, 251, 203, 178, 189, 143, 217, 35, 62, 33, 53, 208, 61, 56, 4, 21, 62, 232, 24, 170, 189, 131, 65, 92, 189, 129, 13, 90, 61, 179, 116, 42, 61, 198, 176, 39, 190, 212, 200, 138, 61, 182, 45, 24, 190, 207, 124, 17, 190, 150, 130, 35, 61, 54, 7, 93, 189, 59, 28, 196, 189, 78, 115, 31, 190, 212, 8, 23, 62, 3, 81, 72, 190, 34, 93, 136, 61, 230, 111, 209, 186, 89, 54, 233, 189, 28, 13, 18, 62, 4, 218, 53, 190, 82, 250, 27, 190, 69, 71, 7, 190, 60, 123, 6, 62, 134, 136, 25, 189, 92, 93, 27, 189, 98, 235, 184, 61, 26, 150, 158, 61, 249, 16, 220, 189, 43, 70, 113, 189, 164, 68, 58, 190, 228, 201, 182, 61, 245, 17, 129, 61, 118, 156, 214, 62, 182, 80, 229, 187, 134, 146, 73, 62, 36, 98, 36, 62, 29, 152, 213, 190, 162, 167, 34, 62, 155, 195, 234, 60, 145, 235, 19, 190, 243, 220, 14, 62, 213, 164, 160, 62, 194, 223, 60, 62, 20, 231, 84, 62, 161, 21, 60, 62, 114, 112, 27, 190, 109, 153, 107, 62, 52, 216, 91, 190, 115, 83, 206, 62, 47, 249, 197, 189, 121, 80, 79, 62, 77, 57, 118, 190, 123, 9, 110, 61, 115, 230, 97, 62, 45, 183, 25, 62, 123, 151, 132, 188, 190, 102, 54, 190, 19, 182, 252, 189, 222, 25, 229, 61, 211, 208, 48, 191, 164, 160, 65, 60, 136, 67, 180, 187, 54, 125, 84, 189, 13, 5, 218, 189, 66, 169, 163, 190, 218, 188, 244, 61, 12, 153, 42, 191, 42, 121, 248, 190, 110, 119, 165, 62, 58, 127, 253, 190, 63, 185, 64, 190, 179, 153, 242, 61, 68, 247, 218, 188, 66, 12, 195, 191, 21, 196, 157, 62, 56, 21, 168, 190, 135, 248, 23, 190, 139, 227, 165, 190, 151, 126, 59, 61, 239, 115, 88, 188, 19, 103, 156, 190, 240, 9, 162, 62, 57, 199, 142, 188, 174, 111, 40, 61, 119, 143, 92, 187, 61, 85, 21, 62, 169, 185, 169, 60, 228, 183, 4, 61, 122, 208, 48, 189, 199, 68, 207, 190, 198, 147, 214, 61, 0, 74, 47, 63, 32, 43, 162, 189, 203, 244, 191, 188, 192, 84, 55, 62, 69, 190, 56, 62};
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
                alignas(float) const unsigned char memory[] = {146, 27, 58, 62, 192, 128, 168, 189, 61, 25, 87, 61, 238, 184, 145, 190, 70, 238, 187, 189, 107, 198, 84, 62, 227, 202, 24, 62, 66, 128, 40, 60, 86, 210, 39, 190, 128, 179, 4, 62, 113, 3, 179, 189, 60, 206, 33, 190, 141, 108, 176, 189, 151, 130, 124, 62, 123, 248, 217, 61, 224, 91, 37, 190, 177, 215, 143, 188, 109, 131, 87, 62, 93, 249, 230, 60, 137, 183, 30, 62, 103, 6, 233, 189, 125, 108, 250, 61, 177, 147, 62, 62, 104, 144, 11, 190, 139, 90, 172, 61, 201, 104, 169, 189, 233, 33, 172, 187, 109, 163, 166, 61, 149, 148, 155, 189, 38, 132, 0, 189, 155, 77, 35, 188, 245, 43, 86, 60};
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
                alignas(float) const unsigned char memory[] = {91, 72, 227, 190, 246, 132, 4, 190, 129, 28, 175, 61, 9, 196, 81, 63, 92, 141, 114, 190, 122, 112, 177, 62, 41, 46, 203, 190, 36, 228, 200, 189, 243, 121, 146, 61, 68, 31, 71, 62, 123, 152, 230, 62, 84, 151, 136, 62, 71, 16, 128, 189, 254, 156, 216, 190, 34, 116, 3, 63, 167, 137, 221, 62, 143, 124, 29, 191, 166, 33, 22, 191, 3, 214, 132, 62, 199, 38, 146, 63, 62, 179, 145, 62, 250, 33, 51, 63, 203, 28, 255, 62, 237, 234, 144, 62, 60, 3, 119, 62, 215, 175, 221, 190, 79, 234, 194, 62, 160, 233, 148, 190, 92, 73, 78, 191, 147, 1, 194, 189, 24, 35, 178, 190, 90, 221, 100, 191, 211, 189, 86, 189, 97, 65, 140, 61, 37, 140, 103, 61, 209, 27, 130, 62, 189, 163, 105, 190, 92, 141, 12, 190, 108, 53, 132, 190, 123, 218, 238, 61, 110, 204, 203, 60, 76, 49, 140, 190, 116, 52, 2, 189, 43, 136, 215, 62, 118, 133, 226, 61, 143, 168, 201, 188, 82, 40, 222, 61, 203, 210, 91, 62, 102, 122, 232, 61, 42, 193, 253, 189, 68, 97, 136, 62, 91, 142, 79, 189, 253, 78, 45, 62, 108, 67, 141, 189, 152, 120, 169, 190, 139, 253, 44, 62, 240, 70, 165, 190, 119, 156, 82, 61, 75, 197, 174, 188, 7, 54, 132, 190, 95, 169, 229, 61, 209, 173, 79, 189, 184, 64, 137, 184, 229, 152, 161, 189};
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
                alignas(float) const unsigned char memory[] = {49, 122, 43, 190, 152, 221, 87, 190};
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
    alignas(float) const unsigned char memory[] = {8, 157, 241, 62, 205, 196, 118, 191, 1, 241, 77, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {110, 49, 195, 63, 128, 204, 121, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0029/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}