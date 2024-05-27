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
                alignas(float) const unsigned char memory[] = {184, 107, 28, 191, 172, 100, 33, 190, 54, 219, 55, 191, 171, 134, 24, 191, 63, 227, 196, 191, 100, 7, 138, 190, 150, 137, 55, 63, 147, 225, 246, 62, 198, 98, 238, 62, 228, 117, 7, 63, 255, 252, 90, 190, 214, 0, 102, 190, 106, 37, 164, 190, 67, 253, 44, 191, 154, 131, 0, 191, 90, 238, 127, 187, 138, 164, 163, 191, 240, 43, 158, 62, 191, 229, 171, 189, 100, 77, 194, 191, 73, 39, 233, 190, 25, 71, 56, 190, 84, 91, 128, 62, 221, 148, 23, 191, 231, 153, 242, 190, 33, 241, 150, 60, 235, 168, 4, 191, 15, 241, 51, 63, 135, 93, 124, 63, 63, 106, 80, 61, 74, 73, 129, 190, 224, 44, 157, 63, 181, 0, 166, 62, 228, 243, 155, 189, 64, 49, 175, 190, 139, 216, 200, 62, 222, 61, 179, 190, 27, 182, 94, 63, 187, 126, 82, 63, 93, 150, 249, 60, 18, 133, 6, 61, 171, 51, 179, 59, 86, 151, 54, 62, 136, 245, 112, 63, 180, 255, 155, 62, 77, 63, 45, 191, 133, 0, 118, 63, 216, 215, 78, 188, 98, 21, 235, 62, 61, 197, 149, 191, 155, 222, 147, 190, 102, 74, 166, 62, 218, 216, 158, 191, 30, 94, 227, 62, 46, 149, 182, 191, 200, 90, 229, 190, 67, 225, 116, 186, 80, 0, 223, 188, 96, 147, 158, 62, 248, 114, 1, 63, 237, 86, 49, 63, 252, 135, 54, 63, 217, 250, 153, 62, 100, 81, 20, 63, 89, 188, 223, 62, 174, 208, 54, 190, 170, 249, 56, 63, 155, 85, 86, 191, 145, 70, 48, 190, 30, 115, 24, 191, 134, 158, 109, 189, 197, 10, 7, 63, 198, 109, 98, 62, 128, 133, 88, 190, 132, 223, 15, 190, 58, 222, 201, 189, 0, 185, 128, 191, 77, 108, 74, 190, 204, 216, 89, 190, 61, 149, 227, 62, 31, 14, 126, 58, 93, 169, 253, 62, 28, 19, 72, 63, 185, 10, 66, 189, 171, 138, 77, 63, 144, 16, 69, 63, 65, 144, 97, 62, 245, 46, 9, 63, 95, 79, 47, 63, 174, 2, 6, 63, 200, 48, 17, 63, 222, 59, 169, 191, 199, 217, 193, 190, 239, 129, 54, 61, 148, 180, 180, 191, 155, 27, 244, 190};
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
                alignas(float) const unsigned char memory[] = {201, 116, 30, 191, 240, 87, 59, 190, 42, 120, 200, 190, 116, 141, 65, 191, 202, 128, 98, 62, 127, 173, 53, 62, 15, 15, 230, 61, 188, 93, 248, 190, 34, 179, 242, 190, 20, 13, 10, 191, 198, 48, 99, 190, 146, 143, 219, 62, 188, 251, 196, 59, 71, 212, 249, 62, 49, 154, 171, 189, 160, 176, 198, 62, 214, 199, 217, 189, 254, 187, 214, 189, 186, 151, 189, 60, 216, 90, 169, 190, 49, 162, 2, 191, 38, 163, 55, 63, 115, 196, 38, 63, 159, 158, 212, 190, 194, 85, 36, 63, 11, 234, 112, 62, 223, 133, 6, 191, 63, 196, 166, 61, 220, 109, 73, 190, 97, 37, 174, 189, 243, 191, 217, 190, 197, 135, 245, 189};
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
                alignas(float) const unsigned char memory[] = {45, 213, 31, 189, 118, 185, 120, 190, 118, 94, 25, 62, 44, 25, 52, 62, 223, 240, 8, 190, 16, 208, 224, 61, 49, 170, 230, 60, 1, 4, 212, 61, 168, 74, 17, 61, 221, 102, 20, 191, 85, 216, 50, 61, 253, 15, 42, 190, 198, 148, 43, 61, 92, 119, 49, 190, 208, 121, 80, 189, 87, 195, 14, 191, 9, 132, 19, 190, 228, 213, 195, 61, 3, 92, 186, 190, 130, 12, 51, 188, 214, 243, 228, 187, 102, 39, 214, 190, 134, 55, 244, 189, 60, 35, 112, 61, 121, 182, 158, 190, 67, 154, 201, 190, 86, 20, 16, 62, 157, 109, 205, 190, 247, 115, 68, 62, 129, 242, 116, 189, 81, 97, 255, 61, 16, 59, 138, 189, 85, 117, 133, 62, 84, 150, 150, 189, 1, 36, 199, 59, 242, 252, 157, 189, 46, 218, 137, 60, 106, 143, 95, 61, 222, 24, 47, 190, 3, 181, 94, 62, 94, 152, 158, 189, 129, 164, 110, 190, 213, 90, 249, 190, 108, 148, 21, 62, 203, 242, 80, 190, 61, 242, 36, 62, 17, 218, 46, 191, 181, 182, 188, 190, 190, 36, 131, 190, 125, 92, 26, 62, 85, 213, 41, 190, 42, 145, 64, 189, 58, 85, 73, 191, 101, 255, 44, 62, 84, 149, 136, 62, 236, 23, 147, 62, 173, 88, 83, 188, 32, 148, 84, 62, 57, 48, 176, 60, 178, 85, 100, 61, 202, 130, 249, 59, 249, 43, 115, 189, 194, 254, 129, 190, 149, 249, 34, 190, 65, 26, 224, 188, 234, 16, 215, 60, 221, 216, 128, 189, 142, 15, 174, 190, 206, 87, 240, 61, 153, 223, 50, 189, 140, 57, 132, 190, 221, 180, 127, 60, 72, 216, 46, 62, 221, 38, 73, 189, 196, 155, 137, 189, 124, 76, 184, 61, 85, 77, 143, 61, 137, 28, 47, 62, 177, 229, 9, 190, 115, 28, 63, 61, 85, 106, 48, 190, 131, 17, 215, 190, 185, 5, 212, 189, 108, 210, 148, 61, 128, 253, 55, 62, 90, 11, 1, 62, 239, 189, 135, 187, 95, 111, 147, 189, 65, 152, 3, 62, 32, 185, 106, 61, 151, 210, 214, 189, 139, 180, 27, 61, 13, 68, 189, 62, 87, 242, 85, 62, 42, 103, 136, 190, 107, 90, 59, 190, 98, 236, 135, 190, 175, 26, 196, 190, 114, 184, 131, 61, 140, 2, 22, 62, 83, 121, 3, 191, 8, 153, 147, 62, 190, 1, 18, 191, 160, 15, 134, 190, 74, 1, 234, 61, 60, 76, 245, 190, 148, 243, 247, 189, 66, 54, 142, 62, 71, 170, 114, 61, 56, 47, 225, 61, 95, 143, 145, 190, 218, 205, 243, 190, 89, 201, 131, 191, 85, 26, 245, 62, 207, 147, 144, 62, 180, 61, 151, 190, 185, 63, 247, 190, 242, 225, 226, 61, 45, 5, 246, 188, 140, 10, 243, 189, 123, 143, 224, 57, 55, 118, 180, 191, 90, 236, 131, 61, 45, 98, 13, 62, 149, 149, 239, 189, 254, 199, 4, 190, 176, 158, 111, 191, 181, 246, 157, 190, 112, 146, 177, 189, 145, 80, 206, 190, 35, 246, 87, 61, 170, 222, 63, 62, 203, 244, 21, 62, 75, 76, 57, 189, 190, 232, 68, 189, 4, 210, 1, 62, 154, 86, 52, 62, 46, 47, 130, 190, 189, 254, 240, 61, 68, 50, 83, 62, 134, 53, 156, 60, 157, 119, 78, 62, 159, 134, 122, 190, 179, 30, 80, 62, 93, 158, 51, 190, 228, 25, 108, 61, 234, 231, 151, 62, 70, 183, 95, 62, 42, 127, 250, 190, 233, 70, 148, 62, 138, 31, 111, 60, 115, 133, 7, 190, 138, 166, 26, 62, 195, 60, 181, 188, 86, 88, 117, 189, 115, 56, 24, 62, 42, 254, 225, 190, 203, 105, 50, 190, 74, 73, 142, 190, 125, 141, 243, 189, 123, 120, 176, 61, 187, 227, 125, 61, 219, 209, 41, 190, 210, 100, 219, 189, 139, 41, 63, 190, 38, 53, 49, 60, 1, 239, 48, 190, 210, 194, 63, 61, 183, 105, 214, 61, 149, 35, 15, 190, 132, 245, 3, 61, 21, 171, 49, 188, 83, 214, 216, 188, 114, 20, 0, 61, 101, 86, 238, 189, 50, 29, 70, 189, 58, 98, 27, 190, 162, 0, 240, 189, 123, 145, 245, 187, 124, 211, 35, 190, 131, 132, 255, 189, 62, 52, 172, 189, 111, 113, 128, 59, 184, 196, 246, 188, 69, 210, 178, 189, 54, 41, 32, 60, 227, 2, 2, 189, 129, 210, 132, 60, 45, 236, 24, 62, 12, 221, 28, 188, 201, 234, 198, 189, 49, 62, 135, 189, 4, 66, 26, 191, 158, 135, 159, 61, 167, 49, 67, 62, 115, 208, 187, 61, 155, 165, 201, 190, 96, 180, 239, 61, 190, 228, 170, 59, 211, 194, 87, 190, 189, 198, 151, 190, 30, 17, 164, 190, 186, 43, 214, 187, 220, 200, 171, 189, 202, 82, 128, 61, 236, 160, 234, 61, 50, 78, 112, 190, 119, 248, 235, 189, 52, 200, 6, 62, 5, 110, 61, 62, 76, 231, 60, 191, 221, 179, 6, 190, 209, 122, 218, 188, 176, 31, 239, 61, 169, 11, 176, 60, 166, 189, 12, 62, 146, 22, 92, 189, 166, 160, 37, 190, 109, 138, 230, 61, 196, 249, 86, 190, 225, 164, 122, 62, 166, 59, 253, 61, 248, 173, 145, 62, 59, 8, 69, 62, 225, 135, 0, 190, 161, 237, 135, 61, 240, 10, 230, 187, 94, 25, 223, 60, 120, 191, 8, 190, 129, 241, 32, 190, 107, 186, 170, 189, 105, 141, 51, 61, 53, 159, 89, 189, 210, 207, 206, 61, 217, 28, 190, 61, 179, 141, 221, 61, 113, 7, 165, 188, 50, 84, 80, 190, 223, 176, 164, 189, 203, 244, 39, 189, 155, 206, 173, 60, 5, 237, 87, 190, 225, 60, 118, 61, 22, 228, 71, 189, 186, 85, 0, 188, 234, 76, 49, 190, 129, 113, 1, 62, 11, 34, 16, 60, 106, 124, 7, 62, 210, 89, 220, 189, 103, 37, 207, 61, 250, 25, 154, 61, 246, 2, 150, 188, 242, 155, 224, 188, 191, 162, 46, 190, 15, 56, 93, 189, 175, 198, 217, 190, 109, 238, 192, 189, 128, 99, 221, 61, 26, 227, 19, 190, 223, 246, 202, 190, 56, 225, 142, 62, 199, 168, 106, 188, 80, 196, 147, 190, 246, 238, 178, 189, 130, 175, 30, 190, 134, 106, 128, 61, 36, 3, 110, 62, 58, 22, 59, 62, 239, 120, 40, 62, 26, 73, 76, 190, 220, 132, 37, 190, 6, 78, 154, 62, 67, 145, 129, 62, 134, 144, 2, 191, 250, 198, 150, 62, 162, 193, 31, 187, 92, 48, 243, 188, 29, 16, 163, 62, 68, 51, 175, 189, 155, 231, 142, 189, 119, 137, 140, 190, 97, 138, 157, 61, 190, 230, 111, 190, 88, 143, 176, 62, 157, 27, 9, 190, 191, 198, 21, 63, 105, 75, 132, 62, 173, 213, 26, 190, 104, 174, 250, 61, 14, 109, 225, 62, 62, 43, 240, 190, 208, 181, 149, 187, 61, 202, 206, 62, 175, 107, 88, 188, 131, 104, 19, 61, 11, 64, 220, 61, 133, 163, 14, 62, 142, 248, 127, 191, 156, 85, 69, 189, 151, 29, 67, 190, 183, 180, 176, 189, 7, 88, 70, 61, 168, 120, 124, 61, 254, 133, 93, 191, 11, 186, 0, 190, 253, 82, 60, 188, 36, 19, 12, 191, 211, 49, 154, 62, 116, 168, 187, 188, 240, 70, 74, 190, 157, 236, 22, 61, 231, 200, 184, 61, 177, 24, 139, 190, 118, 43, 178, 188, 239, 245, 76, 62, 53, 206, 106, 62, 195, 150, 254, 61, 223, 140, 45, 191, 172, 36, 4, 190, 225, 177, 5, 189, 28, 246, 170, 190, 245, 64, 149, 189, 0, 245, 118, 61, 65, 90, 42, 189, 154, 123, 252, 60, 135, 184, 70, 190, 146, 250, 92, 190, 198, 108, 90, 188, 100, 198, 237, 190, 202, 1, 248, 189, 192, 223, 25, 61, 194, 186, 66, 189, 161, 186, 21, 189, 192, 150, 248, 190, 138, 71, 33, 190, 126, 200, 195, 60, 192, 112, 166, 62, 46, 158, 90, 62, 154, 215, 90, 189, 40, 189, 29, 191, 98, 75, 4, 62, 40, 103, 255, 61, 152, 75, 238, 189, 203, 145, 77, 61, 226, 174, 128, 61, 92, 63, 25, 189, 98, 245, 197, 61, 66, 184, 138, 190, 33, 64, 217, 59, 143, 204, 180, 190, 233, 8, 79, 189, 46, 64, 72, 62, 97, 83, 103, 62, 4, 188, 168, 62, 82, 109, 70, 191, 15, 155, 213, 61, 184, 158, 17, 62, 176, 253, 210, 61, 180, 88, 198, 189, 205, 23, 246, 187, 182, 147, 98, 62, 4, 126, 111, 191, 101, 154, 1, 62, 45, 41, 174, 190, 173, 36, 5, 62, 20, 212, 134, 189, 176, 82, 146, 190, 226, 131, 222, 190, 229, 41, 158, 190, 158, 154, 139, 62, 154, 5, 59, 191, 116, 239, 85, 61, 81, 249, 102, 62, 173, 147, 183, 189, 103, 88, 63, 62, 77, 211, 137, 188, 27, 188, 31, 190, 239, 130, 2, 62, 70, 9, 29, 62, 17, 219, 176, 62, 105, 212, 133, 62, 40, 2, 188, 190, 174, 107, 61, 191, 55, 180, 42, 191, 110, 198, 7, 191, 207, 107, 165, 190, 138, 62, 87, 62, 134, 58, 191, 190, 239, 65, 16, 191, 69, 236, 119, 190, 28, 88, 19, 191, 39, 255, 114, 191, 210, 204, 206, 190, 62, 214, 200, 62, 213, 133, 155, 61, 242, 192, 94, 62, 35, 68, 47, 61, 254, 222, 35, 190, 172, 11, 42, 63, 68, 48, 115, 62, 149, 250, 104, 62, 238, 212, 174, 62, 180, 150, 93, 61, 28, 27, 165, 190, 208, 73, 136, 62, 169, 147, 148, 62, 25, 177, 228, 190, 55, 189, 140, 62, 240, 166, 32, 189, 90, 46, 224, 189, 95, 163, 1, 191, 115, 21, 247, 190, 60, 77, 250, 189, 113, 210, 225, 189, 252, 91, 91, 62, 82, 16, 184, 189, 228, 237, 57, 62, 43, 182, 129, 62, 167, 89, 75, 190, 35, 228, 112, 60, 145, 132, 20, 60, 243, 243, 77, 62, 209, 8, 38, 61, 19, 75, 29, 61, 55, 209, 152, 61, 169, 104, 161, 190, 180, 196, 18, 62, 24, 211, 9, 191, 96, 186, 188, 61, 187, 222, 30, 189, 72, 156, 39, 190, 230, 248, 106, 62, 181, 246, 183, 190, 2, 8, 116, 60, 247, 37, 71, 191, 185, 46, 114, 61, 69, 107, 239, 189, 134, 14, 215, 188, 24, 46, 131, 188, 115, 48, 155, 61, 87, 200, 95, 62, 1, 122, 65, 189, 84, 41, 153, 190, 11, 41, 102, 62, 213, 47, 226, 61, 227, 48, 169, 62, 56, 170, 133, 61, 60, 124, 133, 190, 31, 233, 128, 191, 180, 255, 97, 188, 107, 217, 208, 62, 142, 71, 76, 190, 182, 228, 140, 190, 220, 128, 229, 190, 178, 80, 55, 190, 84, 27, 16, 191, 126, 130, 111, 61, 111, 221, 99, 62, 196, 228, 244, 189, 2, 149, 119, 189, 192, 113, 187, 62, 184, 89, 82, 62, 237, 188, 152, 62, 252, 109, 115, 189, 147, 180, 165, 189, 68, 89, 91, 189, 15, 174, 136, 190, 225, 126, 176, 61, 97, 28, 228, 62, 138, 46, 3, 61, 130, 179, 131, 190, 157, 50, 45, 62, 69, 66, 224, 60, 85, 100, 160, 61, 114, 26, 20, 62, 62, 1, 224, 61, 56, 23, 191, 59, 169, 106, 173, 62, 195, 175, 247, 62, 212, 45, 1, 190, 86, 240, 200, 62, 137, 247, 198, 62, 137, 145, 126, 191, 251, 28, 35, 62, 54, 180, 232, 61, 117, 10, 11, 61, 130, 40, 131, 61, 54, 247, 236, 61, 233, 81, 119, 60, 39, 34, 66, 191, 95, 220, 12, 62, 29, 156, 165, 190, 44, 26, 135, 62, 81, 40, 186, 61, 207, 209, 175, 62, 6, 49, 111, 190, 62, 124, 57, 191, 243, 117, 174, 62, 149, 250, 223, 190, 72, 228, 134, 62, 71, 246, 188, 60, 213, 175, 190, 61, 163, 247, 185, 62, 117, 164, 84, 189, 189, 178, 70, 189, 234, 89, 193, 61, 65, 70, 13, 190, 35, 185, 242, 62, 79, 158, 222, 62, 28, 169, 8, 191, 167, 160, 1, 191, 231, 240, 63, 191, 29, 146, 243, 190, 79, 151, 8, 190, 179, 52, 184, 188, 105, 42, 5, 191, 104, 48, 234, 189, 134, 55, 80, 191, 108, 196, 8, 191, 108, 2, 227, 190, 34, 156, 127, 190, 57, 85, 168, 62, 14, 80, 131, 60, 178, 50, 249, 61, 237, 52, 61, 62, 117, 46, 52, 190, 137, 193, 1, 63, 166, 90, 76, 62, 175, 180, 124, 62, 177, 25, 143, 61, 158, 174, 50, 62, 207, 82, 77, 191, 5, 3, 183, 62, 148, 116, 49, 62, 21, 125, 146, 190, 40, 34, 192, 61, 232, 157, 183, 61, 208, 152, 217, 61, 154, 63, 205, 190, 230, 157, 198, 190, 250, 160, 22, 190, 58, 173, 18, 189, 98, 103, 7, 62, 209, 88, 77, 190, 119, 86, 130, 190, 184, 74, 168, 61, 153, 189, 126, 61, 132, 113, 128, 190, 111, 253, 163, 190, 118, 130, 1, 191, 95, 12, 5, 190, 176, 28, 104, 190, 116, 59, 107, 191, 15, 29, 7, 62, 92, 35, 90, 62, 22, 37, 140, 62, 172, 18, 137, 189, 233, 20, 102, 190, 33, 144, 12, 62, 117, 53, 11, 63, 73, 194, 61, 59, 12, 54, 245, 61, 157, 97, 27, 62, 98, 79, 146, 190, 150, 45, 166, 189, 141, 71, 161, 62, 137, 11, 156, 189, 230, 89, 48, 189, 166, 43, 171, 62, 252, 162, 40, 61, 174, 219, 52, 191, 131, 140, 206, 190, 207, 137, 84, 190, 12, 28, 39, 190, 120, 130, 194, 189, 151, 52, 197, 189, 195, 62, 216, 61, 205, 164, 30, 190, 186, 20, 170, 61, 43, 220, 175, 189, 96, 148, 20, 190, 254, 212, 179, 60, 49, 84, 177, 188, 204, 187, 211, 60, 119, 111, 0, 62, 210, 174, 6, 62, 182, 225, 250, 189, 219, 115, 12, 189, 68, 5, 84, 190, 167, 224, 237, 61, 194, 120, 212, 190, 169, 252, 236, 187, 223, 40, 74, 190, 46, 178, 252, 189, 245, 151, 154, 189, 211, 130, 198, 61, 238, 24, 219, 189, 114, 216, 96, 60, 227, 135, 30, 61, 250, 8, 139, 189, 14, 52, 236, 59, 201, 9, 42, 62, 193, 71, 24, 190, 184, 48, 31, 190, 236, 189, 112, 61, 179, 20, 134, 187, 238, 236, 221, 61, 57, 134, 113, 190, 51, 150, 5, 191, 93, 186, 176, 189, 160, 192, 239, 190, 82, 246, 172, 190, 162, 54, 191, 61, 117, 135, 198, 191, 252, 247, 40, 190, 31, 24, 104, 190, 77, 214, 2, 190, 105, 27, 183, 188, 85, 164, 118, 62, 191, 245, 154, 61, 31, 85, 143, 60, 103, 228, 28, 190, 0, 65, 156, 190, 161, 36, 173, 189, 0, 79, 202, 189, 31, 27, 13, 191, 54, 111, 229, 189, 180, 152, 152, 189, 229, 219, 36, 62, 222, 208, 205, 62, 79, 127, 144, 189, 101, 24, 24, 189, 185, 101, 237, 190, 105, 5, 150, 61, 107, 200, 90, 62, 130, 225, 183, 61, 126, 27, 7, 61, 152, 166, 252, 190, 233, 247, 169, 191, 102, 167, 70, 62, 86, 22, 17, 191, 112, 150, 106, 61, 254, 170, 181, 62, 53, 236, 206, 189, 84, 31, 129, 190, 145, 30, 90, 190, 214, 38, 251, 59, 118, 191, 28, 62, 246, 188, 226, 190, 185, 176, 20, 188, 70, 108, 125, 62, 181, 84, 14, 190, 178, 144, 130, 62, 214, 180, 128, 190, 10, 136, 173, 62, 140, 50, 228, 61, 183, 65, 177, 62, 112, 176, 116, 189, 222, 96, 65, 190, 15, 79, 45, 191, 234, 180, 240, 61, 174, 54, 208, 61, 132, 22, 123, 189, 183, 154, 38, 61, 235, 75, 39, 59, 191, 160, 168, 61, 48, 49, 234, 59, 103, 145, 113, 190, 172, 58, 11, 189, 107, 40, 137, 190, 247, 92, 113, 189, 240, 185, 226, 190, 0, 173, 89, 62, 227, 143, 254, 61, 24, 90, 32, 191, 107, 34, 48, 190, 23, 143, 96, 62, 252, 146, 226, 60, 140, 89, 136, 190, 104, 161, 240, 190, 248, 191, 24, 61, 160, 145, 23, 191, 156, 153, 65, 190, 0, 250, 100, 191, 218, 138, 247, 61, 231, 116, 82, 191, 86, 65, 132, 190, 41, 51, 32, 62, 112, 44, 154, 61, 145, 138, 4, 191, 73, 13, 87, 191, 94, 117, 153, 190, 231, 71, 175, 62, 237, 47, 81, 62, 183, 33, 131, 191, 68, 112, 106, 62, 245, 74, 247, 61, 108, 31, 25, 62, 132, 64, 40, 61, 163, 13, 217, 62, 248, 165, 18, 62, 79, 188, 71, 61, 152, 216, 149, 189, 36, 22, 154, 190, 79, 84, 152, 190, 11, 136, 164, 190, 139, 154, 8, 63, 6, 107, 16, 61, 141, 136, 235, 190, 200, 212, 80, 189, 4, 227, 46, 189, 230, 29, 110, 190, 183, 63, 79, 191, 139, 147, 128, 61, 56, 230, 255, 61, 237, 105, 46, 62, 186, 8, 18, 62, 86, 91, 40, 191, 100, 104, 101, 187, 250, 190, 13, 61, 4, 53, 137, 62, 26, 253, 226, 188, 36, 205, 119, 61, 115, 152, 92, 191, 20, 89, 66, 189, 191, 219, 155, 62, 136, 50, 159, 189, 184, 231, 61, 62, 208, 63, 231, 60, 10, 16, 17, 61, 48, 122, 27, 190, 197, 23, 239, 190, 14, 26, 14, 190, 197, 171, 14, 62, 159, 67, 54, 189, 62, 204, 6, 190, 27, 126, 15, 191, 241, 201, 141, 190, 197, 144, 233, 189, 154, 54, 83, 190, 52, 11, 19, 191, 53, 61, 8, 191, 47, 97, 118, 62, 157, 141, 92, 61, 195, 166, 215, 190, 130, 46, 63, 59, 195, 185, 41, 190, 98, 53, 74, 62, 253, 113, 246, 61, 117, 50, 18, 62, 145, 134, 154, 62, 26, 18, 30, 190, 32, 45, 10, 191, 241, 160, 12, 191, 55, 88, 28, 61, 199, 97, 141, 190, 240, 118, 158, 62, 31, 54, 35, 61, 223, 240, 121, 60, 75, 45, 148, 61, 123, 63, 160, 190, 239, 223, 230, 61, 78, 238, 56, 62, 43, 248, 176, 189, 129, 65, 53, 190, 21, 72, 23, 190, 195, 253, 152, 190, 215, 137, 204, 190, 182, 84, 220, 62, 142, 178, 38, 190, 76, 187, 142, 61, 120, 154, 37, 189, 84, 195, 126, 62, 212, 176, 105, 62, 51, 191, 98, 190, 16, 121, 112, 190, 179, 105, 174, 190, 101, 188, 85, 191, 139, 135, 167, 62, 26, 44, 126, 191, 163, 132, 3, 62, 231, 148, 53, 190, 128, 55, 156, 189, 150, 55, 53, 61, 248, 163, 10, 190, 64, 76, 35, 61, 83, 59, 152, 191, 207, 28, 23, 191, 72, 131, 152, 189, 9, 105, 180, 60, 30, 31, 131, 190, 77, 142, 15, 62, 13, 61, 146, 62, 40, 224, 155, 188, 213, 130, 190, 189, 104, 55, 75, 190, 62, 98, 221, 61, 66, 71, 67, 62, 27, 103, 99, 61, 240, 91, 129, 59, 53, 89, 252, 62, 209, 118, 7, 191, 40, 180, 125, 191, 40, 38, 154, 61, 55, 186, 233, 62, 222, 54, 36, 188, 38, 255, 95, 61, 43, 157, 174, 188, 88, 205, 42, 62, 240, 98, 185, 191, 92, 47, 224, 190, 95, 81, 118, 191, 62, 232, 84, 61, 42, 199, 203, 190, 220, 14, 14, 62, 190, 158, 130, 190, 109, 85, 165, 191, 99, 254, 15, 63, 230, 15, 102, 191, 22, 9, 12, 191, 55, 44, 50, 61, 19, 229, 137, 189, 99, 138, 5, 63, 124, 233, 250, 61, 119, 156, 190, 61, 249, 155, 27, 190, 212, 42, 12, 62, 32, 188, 155, 62, 185, 122, 128, 190, 50, 155, 199, 189, 47, 184, 174, 190, 62, 126, 5, 189, 55, 159, 154, 190, 58, 240, 147, 190, 161, 111, 132, 190, 0, 37, 227, 58, 233, 138, 41, 191, 176, 197, 240, 190, 66, 48, 214, 189, 40, 20, 101, 189, 253, 122, 63, 62, 106, 122, 109, 62, 51, 231, 203, 190, 46, 238, 210, 60, 125, 171, 3, 62, 82, 112, 57, 62, 199, 128, 197, 62, 104, 57, 163, 190, 7, 186, 61, 191, 78, 64, 205, 190, 128, 118, 198, 61, 88, 95, 221, 186, 194, 94, 135, 62, 57, 148, 203, 61, 119, 50, 90, 62, 246, 16, 80, 62, 4, 28, 42, 191, 222, 101, 24, 190, 8, 33, 158, 62, 14, 67, 210, 61, 166, 157, 144, 190, 136, 215, 237, 190, 143, 28, 104, 189, 229, 174, 149, 189, 111, 226, 142, 190, 173, 4, 115, 190, 24, 27, 125, 62, 67, 156, 147, 190, 116, 159, 95, 190, 36, 151, 135, 190, 35, 49, 138, 61, 115, 148, 38, 190, 122, 162, 136, 190, 129, 245, 203, 61, 162, 51, 125, 61, 72, 51, 114, 61, 54, 102, 166, 189, 168, 14, 214, 189, 241, 97, 104, 189, 103, 24, 59, 62, 21, 200, 202, 62, 19, 48, 233, 61, 89, 33, 254, 187, 203, 62, 75, 191, 34, 153, 97, 62, 211, 99, 125, 62, 204, 16, 45, 190, 37, 53, 94, 189, 203, 235, 140, 61, 85, 178, 200, 60, 6, 255, 31, 190, 99, 131, 205, 190, 169, 108, 54, 60, 65, 119, 241, 61, 84, 128, 107, 58, 180, 5, 2, 191, 78, 126, 162, 190, 65, 240, 33, 61, 12, 31, 59, 61, 177, 94, 216, 190, 212, 171, 36, 190, 134, 183, 0, 191, 148, 41, 157, 190, 148, 54, 251, 189, 248, 128, 152, 190, 99, 179, 73, 61, 180, 185, 15, 62, 21, 94, 65, 61, 24, 148, 0, 190, 156, 156, 162, 190, 208, 128, 89, 61, 190, 21, 146, 62, 164, 202, 250, 62, 190, 82, 174, 62, 116, 77, 167, 188, 108, 94, 73, 191, 236, 32, 136, 189, 30, 119, 168, 62, 93, 112, 1, 190, 204, 57, 20, 62, 201, 96, 197, 188, 72, 175, 47, 190, 242, 92, 104, 191, 112, 1, 71, 191, 72, 75, 5, 190, 110, 74, 218, 190, 67, 138, 66, 190, 187, 77, 226, 60, 87, 132, 230, 190, 209, 190, 195, 190, 94, 68, 8, 63, 107, 207, 95, 189, 103, 69, 140, 61, 104, 196, 86, 190, 164, 80, 26, 62, 117, 116, 30, 61, 2, 74, 75, 191, 25, 223, 26, 190, 93, 181, 104, 62, 93, 4, 195, 189, 173, 101, 47, 189, 89, 16, 92, 191, 226, 120, 158, 61, 204, 212, 221, 60, 224, 220, 253, 62, 20, 153, 19, 189, 218, 92, 49, 62, 70, 129, 141, 191, 135, 8, 141, 60, 218, 93, 147, 62, 201, 172, 245, 189, 30, 117, 9, 61, 27, 213, 153, 188, 60, 250, 88, 60, 240, 193, 174, 61, 222, 222, 68, 191, 70, 87, 244, 189, 205, 30, 141, 59, 38, 110, 146, 61, 20, 45, 71, 189, 60, 102, 6, 191, 173, 131, 158, 187, 29, 145, 1, 63, 96, 11, 228, 61, 180, 254, 0, 189, 30, 41, 32, 190, 172, 171, 155, 61, 97, 147, 232, 61, 71, 28, 250, 190, 46, 28, 132, 61, 105, 112, 12, 62, 160, 13, 128, 61, 55, 136, 112, 62, 206, 185, 110, 190, 197, 35, 135, 61, 63, 145, 112, 188, 114, 130, 201, 60, 103, 83, 127, 62, 35, 25, 44, 61, 103, 123, 1, 191, 26, 209, 189, 61, 86, 188, 120, 60, 47, 220, 33, 61, 7, 167, 18, 62, 65, 18, 65, 62, 162, 132, 188, 189, 33, 61, 88, 62, 36, 202, 234, 190, 202, 74, 9, 190, 238, 249, 148, 190, 91, 102, 233, 188, 17, 121, 149, 189, 212, 241, 235, 61, 207, 28, 214, 61, 180, 241, 131, 189, 71, 222, 31, 60, 214, 126, 220, 189, 41, 201, 204, 60, 137, 120, 195, 189, 201, 73, 76, 61, 88, 79, 241, 61, 215, 36, 122, 61, 123, 13, 131, 189, 74, 148, 115, 60, 239, 138, 77, 190, 184, 138, 212, 189, 40, 8, 104, 190, 195, 96, 2, 62, 25, 192, 40, 190, 227, 193, 83, 61, 141, 66, 227, 189, 222, 77, 183, 189, 59, 0, 32, 61, 114, 41, 198, 187, 47, 14, 250, 189, 246, 169, 218, 189, 242, 42, 84, 189, 255, 213, 48, 62, 101, 179, 174, 61, 79, 139, 224, 189, 149, 142, 5, 190, 210, 239, 65, 190, 252, 84, 149, 61};
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
                alignas(float) const unsigned char memory[] = {15, 191, 196, 190, 149, 126, 140, 62, 225, 94, 70, 62, 254, 191, 113, 62, 148, 229, 53, 62, 147, 192, 182, 61, 254, 122, 86, 190, 112, 57, 82, 190, 3, 133, 217, 188, 174, 214, 65, 61, 253, 82, 165, 61, 178, 175, 253, 61, 125, 144, 42, 62, 187, 109, 42, 62, 49, 56, 201, 62, 60, 125, 92, 62, 14, 153, 189, 62, 0, 206, 42, 62, 16, 233, 21, 189, 7, 87, 130, 62, 46, 182, 182, 62, 71, 166, 77, 189, 45, 223, 194, 61, 155, 242, 55, 62, 24, 80, 71, 61, 209, 87, 240, 61, 1, 22, 140, 61, 17, 148, 116, 62, 86, 225, 19, 61, 123, 183, 202, 189, 84, 187, 153, 62, 144, 123, 43, 190};
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
                alignas(float) const unsigned char memory[] = {43, 164, 7, 62, 136, 57, 192, 61, 157, 68, 192, 60, 209, 44, 16, 191, 217, 171, 63, 62, 178, 59, 3, 190, 53, 228, 77, 190, 55, 230, 186, 61, 186, 192, 155, 190, 62, 133, 14, 191, 250, 151, 137, 61, 189, 128, 9, 191, 121, 204, 5, 63, 189, 141, 57, 190, 117, 8, 14, 63, 34, 43, 65, 191, 175, 174, 91, 63, 150, 189, 205, 62, 97, 193, 254, 188, 160, 147, 93, 190, 236, 20, 90, 62, 211, 76, 187, 190, 103, 199, 134, 62, 222, 220, 54, 191, 206, 34, 4, 191, 156, 182, 175, 191, 106, 66, 189, 190, 0, 9, 200, 62, 65, 122, 122, 63, 64, 199, 65, 63, 241, 188, 88, 62, 29, 142, 43, 60, 121, 30, 171, 62, 184, 89, 14, 191, 107, 188, 139, 190, 62, 9, 30, 190, 16, 142, 47, 190, 187, 14, 216, 60, 39, 217, 139, 62, 28, 239, 4, 62, 123, 25, 6, 190, 139, 136, 6, 63, 191, 228, 47, 62, 13, 45, 161, 59, 18, 154, 8, 62, 67, 171, 46, 190, 32, 134, 56, 190, 114, 56, 123, 188, 197, 46, 3, 190, 211, 133, 102, 189, 230, 41, 40, 62, 155, 141, 213, 190, 134, 59, 32, 190, 51, 109, 172, 190, 243, 179, 47, 62, 158, 237, 242, 189, 193, 227, 238, 187, 215, 17, 5, 62, 27, 248, 193, 62, 144, 151, 95, 189, 120, 71, 91, 62, 188, 194, 93, 62, 200, 189, 51, 190, 44, 122, 168, 61};
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
                alignas(float) const unsigned char memory[] = {73, 127, 204, 188, 100, 215, 236, 189};
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
    alignas(float) const unsigned char memory[] = {224, 123, 144, 62, 67, 201, 219, 62, 200, 55, 101, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {251, 177, 191, 62, 26, 59, 98, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0045/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}