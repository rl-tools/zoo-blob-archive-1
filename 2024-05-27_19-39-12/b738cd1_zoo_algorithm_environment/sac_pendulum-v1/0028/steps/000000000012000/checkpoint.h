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
                alignas(float) const unsigned char memory[] = {113, 196, 198, 190, 192, 181, 74, 63, 134, 55, 234, 190, 35, 92, 135, 189, 147, 109, 173, 63, 235, 246, 173, 62, 104, 78, 1, 191, 251, 131, 156, 191, 144, 167, 170, 190, 174, 249, 150, 191, 48, 95, 37, 190, 200, 143, 62, 60, 193, 32, 103, 62, 72, 194, 229, 190, 101, 176, 72, 63, 71, 98, 7, 63, 121, 38, 24, 191, 144, 29, 43, 63, 155, 130, 176, 190, 66, 89, 180, 63, 142, 120, 138, 62, 188, 105, 16, 63, 211, 84, 236, 190, 134, 99, 199, 190, 205, 82, 136, 59, 222, 173, 157, 190, 196, 112, 86, 62, 7, 72, 0, 190, 116, 65, 79, 191, 0, 24, 98, 190, 170, 178, 165, 62, 179, 230, 146, 63, 70, 189, 206, 62, 200, 240, 4, 191, 199, 145, 5, 191, 116, 128, 129, 62, 115, 81, 170, 62, 163, 184, 106, 191, 3, 129, 235, 62, 222, 165, 37, 63, 93, 123, 196, 189, 254, 31, 245, 62, 246, 27, 247, 190, 105, 84, 141, 62, 26, 181, 180, 62, 245, 38, 240, 189, 224, 126, 97, 63, 31, 113, 251, 190, 131, 138, 137, 190, 209, 183, 73, 63, 4, 210, 228, 188, 100, 170, 63, 191, 44, 51, 47, 191, 76, 179, 129, 190, 219, 167, 85, 58, 39, 96, 34, 190, 147, 244, 18, 189, 167, 24, 4, 190, 44, 204, 128, 191, 18, 48, 185, 60, 21, 73, 225, 62, 215, 245, 140, 62, 80, 93, 49, 63, 100, 62, 227, 190, 176, 244, 182, 191, 142, 59, 194, 190, 116, 208, 36, 63, 237, 85, 137, 63, 228, 105, 100, 62, 222, 249, 75, 63, 78, 16, 22, 191, 18, 185, 14, 62, 188, 197, 80, 190, 216, 41, 17, 63, 85, 180, 21, 191, 205, 241, 70, 61, 47, 170, 191, 191, 122, 16, 172, 190, 95, 88, 158, 60, 186, 138, 80, 63, 22, 202, 21, 63, 33, 97, 242, 62, 78, 206, 86, 63, 149, 249, 78, 62, 230, 114, 88, 63, 93, 95, 29, 191, 189, 205, 138, 190, 53, 108, 37, 191, 196, 26, 59, 63, 122, 65, 44, 62, 130, 140, 133, 63, 27, 53, 130, 191, 241, 91, 211, 190, 240, 95, 219, 62, 119, 3, 233, 61, 39, 190, 254, 62};
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
                alignas(float) const unsigned char memory[] = {95, 233, 113, 188, 173, 211, 86, 190, 252, 31, 181, 62, 234, 175, 15, 60, 129, 185, 2, 191, 201, 136, 236, 190, 167, 170, 8, 190, 40, 163, 47, 191, 29, 196, 95, 58, 207, 198, 90, 61, 130, 95, 4, 191, 4, 214, 12, 63, 38, 163, 228, 62, 254, 43, 157, 62, 217, 102, 67, 191, 230, 247, 152, 190, 116, 15, 14, 62, 8, 134, 243, 62, 116, 88, 9, 191, 77, 116, 153, 190, 98, 99, 82, 191, 204, 193, 185, 189, 161, 37, 229, 62, 84, 171, 123, 189, 120, 34, 48, 63, 3, 162, 203, 62, 242, 0, 101, 190, 228, 18, 255, 189, 114, 135, 26, 191, 36, 232, 253, 62, 178, 138, 69, 62, 240, 50, 152, 189};
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
                alignas(float) const unsigned char memory[] = {208, 164, 230, 189, 238, 69, 161, 61, 192, 28, 230, 61, 169, 80, 87, 189, 172, 144, 187, 61, 100, 117, 225, 189, 55, 252, 194, 189, 42, 119, 42, 188, 8, 106, 160, 189, 19, 70, 71, 190, 218, 5, 155, 186, 83, 163, 25, 190, 155, 199, 149, 61, 53, 111, 9, 190, 241, 108, 147, 189, 100, 110, 225, 188, 175, 120, 170, 61, 174, 242, 48, 190, 247, 202, 42, 189, 88, 94, 136, 189, 158, 44, 241, 189, 39, 214, 29, 189, 193, 14, 190, 61, 66, 79, 96, 61, 179, 131, 164, 61, 250, 210, 235, 189, 92, 226, 181, 189, 107, 237, 2, 61, 112, 224, 11, 62, 138, 196, 89, 190, 77, 50, 200, 189, 175, 86, 226, 189, 223, 50, 187, 190, 196, 131, 28, 59, 119, 96, 139, 61, 117, 232, 7, 190, 95, 221, 196, 190, 159, 28, 86, 190, 155, 7, 92, 190, 130, 149, 33, 189, 150, 100, 111, 190, 109, 151, 111, 60, 88, 247, 19, 59, 171, 250, 19, 61, 139, 203, 17, 190, 203, 55, 136, 62, 51, 204, 39, 191, 65, 209, 56, 62, 227, 183, 24, 62, 135, 173, 41, 189, 168, 181, 3, 190, 29, 66, 27, 190, 202, 121, 102, 190, 99, 2, 130, 190, 101, 218, 173, 62, 24, 26, 67, 61, 155, 245, 8, 62, 181, 140, 245, 189, 8, 133, 60, 190, 86, 208, 155, 62, 13, 183, 172, 190, 175, 14, 67, 62, 134, 121, 8, 189, 217, 230, 25, 62, 157, 176, 108, 190, 32, 9, 51, 190, 131, 154, 69, 190, 6, 154, 230, 189, 14, 249, 122, 61, 136, 21, 63, 62, 131, 186, 155, 190, 3, 21, 204, 189, 214, 44, 187, 189, 75, 144, 215, 60, 199, 128, 185, 189, 72, 203, 151, 189, 238, 86, 188, 60, 221, 53, 43, 62, 69, 204, 246, 189, 43, 133, 147, 62, 193, 145, 206, 187, 155, 83, 106, 61, 105, 62, 244, 189, 25, 152, 218, 190, 242, 148, 202, 61, 134, 170, 142, 190, 83, 60, 2, 189, 203, 164, 70, 190, 69, 235, 50, 62, 51, 98, 71, 190, 35, 143, 37, 190, 177, 233, 72, 189, 173, 25, 44, 191, 38, 193, 4, 189, 111, 239, 4, 190, 233, 228, 212, 189, 119, 116, 188, 61, 174, 13, 211, 191, 84, 5, 42, 191, 192, 14, 70, 62, 35, 59, 182, 190, 238, 14, 34, 191, 239, 104, 55, 60, 128, 211, 141, 188, 102, 182, 43, 191, 36, 23, 96, 190, 102, 251, 163, 191, 71, 59, 183, 189, 227, 249, 56, 189, 119, 8, 143, 62, 121, 24, 139, 190, 164, 217, 57, 189, 97, 202, 83, 189, 108, 27, 232, 190, 182, 190, 43, 62, 251, 17, 84, 191, 67, 6, 38, 190, 184, 175, 143, 190, 194, 132, 3, 61, 53, 207, 56, 61, 119, 85, 200, 187, 55, 154, 216, 190, 124, 110, 125, 191, 30, 183, 16, 190, 72, 38, 9, 62, 97, 69, 152, 190, 31, 167, 117, 62, 161, 15, 175, 190, 165, 83, 237, 187, 25, 161, 151, 190, 28, 59, 70, 190, 163, 206, 41, 189, 165, 92, 100, 61, 19, 22, 88, 190, 93, 89, 131, 190, 186, 119, 13, 190, 2, 180, 92, 62, 251, 131, 116, 190, 5, 203, 129, 191, 86, 121, 126, 62, 77, 189, 191, 62, 117, 45, 1, 190, 142, 74, 107, 190, 69, 140, 29, 190, 1, 158, 10, 190, 245, 249, 154, 190, 44, 225, 229, 189, 1, 92, 98, 62, 251, 252, 185, 190, 91, 2, 61, 190, 73, 107, 76, 189, 45, 110, 89, 62, 95, 150, 220, 61, 143, 168, 95, 62, 99, 50, 17, 60, 135, 18, 48, 191, 190, 43, 202, 190, 248, 141, 16, 191, 69, 44, 104, 62, 41, 186, 217, 61, 132, 190, 162, 62, 44, 49, 195, 191, 197, 237, 202, 189, 87, 237, 57, 191, 154, 102, 19, 191, 114, 148, 3, 191, 98, 192, 116, 190, 149, 157, 154, 62, 91, 222, 156, 190, 22, 90, 29, 61, 14, 217, 144, 190, 184, 172, 223, 190, 168, 230, 104, 59, 87, 141, 76, 62, 222, 0, 133, 190, 46, 151, 102, 61, 161, 62, 131, 190, 154, 31, 130, 190, 58, 14, 30, 190, 149, 102, 188, 190, 52, 49, 109, 61, 177, 4, 39, 189, 255, 206, 58, 189, 168, 248, 13, 63, 177, 250, 225, 188, 110, 237, 84, 62, 182, 168, 17, 191, 15, 171, 162, 190, 60, 114, 155, 62, 120, 35, 176, 191, 43, 166, 211, 62, 141, 132, 97, 190, 197, 140, 11, 62, 53, 239, 20, 191, 151, 250, 209, 189, 89, 168, 99, 62, 155, 197, 211, 61, 29, 107, 31, 190, 172, 137, 165, 61, 59, 110, 161, 62, 213, 83, 213, 61, 67, 43, 36, 190, 50, 44, 76, 191, 95, 34, 134, 62, 67, 118, 205, 61, 196, 138, 111, 189, 149, 182, 240, 189, 107, 6, 29, 61, 133, 90, 69, 190, 108, 234, 152, 189, 141, 244, 19, 189, 160, 100, 8, 62, 168, 163, 164, 190, 203, 141, 115, 190, 68, 69, 2, 190, 198, 246, 48, 63, 211, 194, 151, 189, 178, 31, 148, 61, 68, 65, 133, 189, 187, 97, 236, 190, 29, 253, 96, 62, 24, 11, 179, 190, 140, 250, 213, 62, 254, 56, 97, 60, 8, 20, 72, 190, 41, 205, 203, 190, 104, 54, 139, 61, 216, 152, 197, 189, 235, 130, 220, 61, 85, 183, 245, 61, 231, 136, 205, 189, 19, 192, 35, 190, 181, 221, 194, 189, 197, 6, 11, 61, 95, 84, 53, 191, 86, 50, 253, 189, 100, 15, 198, 60, 19, 216, 68, 62, 33, 99, 208, 61, 144, 240, 159, 61, 222, 60, 55, 61, 45, 68, 44, 189, 159, 69, 13, 62, 131, 107, 232, 61, 135, 245, 98, 62, 195, 147, 63, 190, 178, 182, 219, 61, 121, 185, 227, 62, 228, 112, 160, 62, 44, 60, 85, 190, 72, 24, 201, 189, 229, 239, 60, 190, 31, 228, 128, 190, 72, 61, 121, 190, 18, 230, 93, 62, 167, 191, 197, 61, 158, 22, 2, 190, 71, 243, 217, 61, 10, 130, 42, 190, 139, 43, 36, 62, 73, 198, 33, 61, 62, 38, 237, 189, 241, 75, 6, 190, 9, 231, 239, 189, 112, 70, 100, 190, 152, 74, 53, 190, 210, 223, 95, 60, 100, 106, 17, 189, 154, 1, 79, 190, 158, 206, 253, 187, 180, 252, 133, 61, 16, 244, 152, 61, 167, 252, 16, 62, 92, 20, 238, 189, 229, 90, 49, 190, 104, 30, 27, 190, 16, 107, 182, 188, 50, 254, 80, 189, 27, 216, 213, 188, 193, 73, 111, 190, 101, 90, 1, 189, 124, 242, 17, 62, 247, 63, 48, 188, 182, 92, 48, 189, 53, 99, 1, 62, 176, 44, 9, 190, 231, 178, 64, 190, 121, 223, 197, 61, 183, 184, 210, 190, 127, 166, 6, 192, 109, 92, 213, 61, 140, 246, 159, 62, 97, 18, 229, 190, 29, 80, 163, 190, 236, 153, 226, 190, 205, 116, 216, 189, 85, 185, 139, 190, 211, 27, 27, 190, 16, 53, 207, 189, 38, 73, 200, 61, 88, 168, 84, 61, 129, 251, 38, 191, 225, 123, 178, 190, 93, 195, 216, 61, 179, 51, 185, 61, 86, 164, 81, 62, 28, 107, 41, 190, 80, 146, 88, 189, 254, 163, 21, 190, 219, 23, 18, 61, 73, 9, 210, 60, 11, 164, 63, 191, 246, 226, 131, 62, 216, 199, 40, 62, 163, 225, 1, 191, 26, 95, 12, 63, 128, 67, 32, 191, 9, 40, 153, 189, 178, 223, 48, 190, 60, 140, 21, 191, 181, 168, 140, 189, 102, 12, 227, 60, 210, 182, 38, 190, 127, 89, 19, 190, 135, 14, 32, 190, 85, 210, 252, 189, 42, 123, 15, 190, 190, 246, 81, 61, 222, 26, 145, 189, 151, 247, 44, 189, 0, 8, 25, 190, 8, 72, 147, 189, 229, 39, 3, 62, 241, 97, 234, 189, 56, 163, 15, 190, 229, 184, 43, 189, 63, 201, 18, 60, 233, 102, 27, 189, 126, 126, 29, 62, 22, 5, 11, 62, 196, 6, 181, 189, 113, 150, 247, 60, 236, 164, 197, 189, 12, 32, 2, 62, 245, 214, 117, 189, 152, 180, 113, 189, 62, 232, 134, 189, 103, 144, 21, 190, 71, 194, 177, 189, 194, 132, 202, 188, 71, 178, 141, 189, 53, 30, 240, 185, 213, 66, 194, 59, 214, 29, 84, 62, 15, 127, 174, 62, 1, 17, 7, 191, 103, 0, 41, 62, 137, 46, 113, 189, 173, 101, 51, 189, 48, 93, 214, 62, 27, 17, 117, 62, 242, 239, 96, 62, 201, 159, 183, 61, 240, 2, 74, 61, 246, 108, 29, 62, 171, 199, 17, 61, 167, 70, 168, 62, 47, 203, 97, 58, 177, 19, 61, 191, 152, 79, 43, 62, 180, 180, 50, 61, 54, 29, 177, 61, 139, 98, 240, 189, 224, 149, 78, 188, 228, 232, 53, 190, 66, 146, 32, 190, 30, 25, 159, 190, 92, 65, 214, 62, 244, 231, 83, 61, 227, 117, 140, 60, 82, 104, 18, 63, 237, 151, 162, 190, 130, 36, 149, 62, 88, 101, 14, 62, 177, 183, 83, 190, 118, 2, 165, 60, 111, 93, 133, 61, 126, 217, 84, 62, 25, 58, 56, 61, 69, 131, 14, 62, 53, 155, 121, 62, 30, 141, 193, 61, 213, 19, 193, 189, 11, 245, 106, 62, 108, 208, 16, 190, 43, 174, 112, 61, 77, 30, 56, 186, 139, 20, 207, 189, 141, 197, 7, 62, 126, 42, 6, 190, 37, 106, 233, 187, 65, 87, 238, 188, 98, 88, 136, 61, 9, 216, 106, 61, 126, 41, 129, 188, 199, 26, 129, 61, 99, 113, 133, 61, 56, 245, 88, 190, 78, 198, 149, 62, 144, 11, 185, 188, 226, 144, 147, 188, 140, 151, 143, 190, 144, 73, 183, 190, 208, 242, 26, 62, 39, 97, 14, 62, 11, 105, 125, 61, 164, 228, 192, 62, 172, 180, 240, 61, 14, 245, 128, 190, 78, 110, 127, 191, 109, 137, 2, 62, 127, 61, 138, 61, 54, 72, 141, 190, 169, 126, 232, 189, 124, 8, 162, 188, 26, 92, 219, 189, 39, 143, 45, 62, 6, 249, 142, 190, 186, 168, 211, 189, 34, 132, 47, 62, 233, 208, 120, 62, 4, 147, 7, 61, 77, 141, 80, 190, 48, 38, 244, 189, 115, 75, 183, 61, 233, 54, 171, 190, 77, 167, 144, 61, 88, 55, 80, 190, 236, 197, 183, 62, 119, 152, 101, 188, 18, 155, 119, 61, 137, 113, 15, 191, 40, 22, 72, 62, 6, 125, 240, 62, 48, 78, 17, 191, 115, 190, 106, 190, 246, 6, 13, 62, 53, 200, 192, 61, 97, 215, 175, 61, 37, 225, 19, 61, 25, 198, 66, 62, 100, 175, 192, 62, 169, 168, 128, 188, 209, 27, 125, 190, 194, 16, 188, 61, 154, 2, 81, 57, 97, 221, 7, 62, 193, 89, 255, 189, 114, 163, 231, 190, 117, 249, 87, 62, 9, 4, 168, 60, 75, 57, 158, 60, 119, 141, 196, 189, 93, 254, 208, 61, 70, 116, 19, 188, 30, 100, 179, 61, 31, 252, 233, 60, 12, 255, 217, 61, 62, 136, 255, 189, 12, 21, 43, 188, 240, 115, 4, 190, 1, 147, 4, 62, 42, 158, 59, 62, 219, 3, 113, 62, 114, 169, 245, 61, 245, 90, 5, 191, 9, 18, 113, 187, 221, 34, 59, 62, 82, 130, 137, 61, 207, 49, 4, 62, 44, 160, 139, 190, 244, 140, 188, 61, 195, 155, 178, 61, 151, 103, 48, 190, 134, 17, 237, 61, 197, 191, 79, 61, 183, 106, 146, 61, 80, 110, 9, 189, 52, 228, 169, 189, 7, 40, 198, 61, 169, 223, 68, 188, 80, 246, 83, 189, 123, 104, 164, 60, 31, 201, 174, 189, 162, 47, 76, 189, 240, 130, 174, 61, 111, 119, 163, 62, 42, 49, 24, 61, 144, 207, 214, 60, 182, 9, 113, 190, 130, 203, 23, 190, 229, 219, 70, 188, 149, 219, 226, 61, 178, 243, 130, 190, 40, 193, 72, 62, 106, 244, 125, 189, 204, 89, 9, 62, 44, 121, 27, 189, 201, 225, 16, 191, 43, 244, 122, 62, 187, 80, 14, 187, 208, 150, 227, 61, 242, 72, 9, 190, 157, 9, 7, 192, 133, 107, 158, 60, 30, 116, 98, 62, 148, 19, 204, 190, 19, 138, 68, 62, 73, 17, 199, 189, 160, 149, 189, 59, 201, 176, 69, 62, 238, 18, 52, 191, 154, 145, 171, 190, 234, 155, 254, 61, 45, 210, 133, 61, 92, 242, 69, 62, 129, 249, 24, 191, 191, 250, 75, 62, 82, 19, 147, 62, 134, 37, 134, 61, 105, 12, 191, 61, 101, 192, 186, 190, 171, 168, 41, 190, 163, 41, 148, 190, 63, 19, 154, 191, 254, 242, 122, 62, 92, 63, 40, 60, 17, 162, 230, 189, 17, 140, 22, 191, 193, 249, 98, 190, 109, 255, 153, 189, 163, 5, 155, 62, 76, 151, 37, 190, 83, 164, 54, 191, 165, 211, 192, 189, 19, 45, 131, 61, 15, 126, 139, 189, 169, 143, 98, 61, 73, 155, 25, 62, 150, 81, 0, 189, 109, 23, 175, 189, 77, 74, 97, 189, 4, 184, 235, 61, 69, 166, 21, 62, 125, 16, 153, 61, 180, 208, 58, 189, 245, 183, 76, 189, 49, 209, 219, 60, 163, 222, 24, 190, 216, 213, 215, 61, 59, 30, 38, 189, 174, 15, 191, 60, 203, 78, 210, 189, 188, 88, 23, 62, 180, 94, 144, 186, 69, 100, 2, 190, 88, 207, 145, 189, 199, 246, 46, 190, 203, 130, 13, 190, 134, 213, 13, 190, 156, 156, 14, 190, 245, 233, 51, 190, 53, 221, 131, 189, 3, 229, 160, 61, 139, 190, 8, 190, 204, 235, 32, 189, 97, 144, 53, 63, 205, 205, 249, 190, 133, 77, 247, 189, 192, 202, 216, 62, 188, 115, 131, 190, 237, 102, 8, 190, 104, 202, 44, 190, 115, 144, 224, 188, 201, 212, 117, 190, 226, 166, 149, 191, 206, 201, 181, 190, 141, 27, 68, 190, 149, 182, 118, 190, 165, 200, 10, 191, 160, 176, 160, 61, 155, 142, 43, 191, 170, 239, 31, 61, 251, 111, 54, 61, 21, 162, 135, 61, 238, 225, 237, 187, 201, 1, 29, 189, 223, 65, 2, 192, 138, 101, 59, 191, 66, 94, 202, 190, 59, 153, 62, 190, 252, 99, 208, 191, 104, 128, 139, 190, 21, 244, 243, 190, 85, 44, 3, 190, 173, 163, 95, 62, 162, 118, 190, 190, 35, 53, 239, 190, 247, 113, 141, 62, 199, 215, 63, 189, 9, 26, 154, 190, 51, 40, 203, 61, 139, 234, 74, 62, 21, 183, 192, 190, 233, 127, 128, 189, 52, 17, 174, 61, 159, 148, 223, 62, 80, 184, 58, 190, 133, 166, 51, 191, 47, 135, 252, 62, 250, 196, 188, 62, 165, 182, 135, 189, 177, 36, 90, 62, 16, 194, 154, 190, 221, 131, 203, 190, 58, 92, 109, 190, 107, 129, 130, 189, 211, 175, 133, 62, 108, 27, 16, 191, 1, 126, 170, 190, 97, 60, 228, 189, 209, 65, 134, 62, 33, 24, 41, 188, 180, 78, 137, 61, 4, 254, 170, 60, 120, 68, 94, 191, 90, 53, 198, 189, 225, 32, 151, 190, 241, 239, 158, 62, 55, 16, 139, 189, 81, 179, 81, 190, 79, 215, 134, 191, 177, 102, 152, 61, 173, 30, 238, 61, 120, 173, 222, 190, 159, 170, 71, 62, 103, 161, 128, 191, 80, 91, 142, 190, 107, 17, 253, 189, 19, 192, 161, 188, 174, 32, 150, 62, 56, 185, 138, 189, 197, 57, 75, 190, 2, 148, 188, 62, 245, 209, 8, 191, 253, 71, 23, 62, 38, 250, 221, 60, 62, 35, 179, 60, 78, 60, 130, 60, 138, 243, 159, 60, 199, 44, 156, 61, 151, 65, 50, 190, 149, 81, 174, 62, 152, 37, 24, 190, 229, 49, 62, 62, 135, 243, 149, 60, 38, 71, 6, 190, 31, 57, 180, 62, 209, 140, 76, 191, 39, 64, 203, 61, 45, 176, 139, 190, 106, 93, 201, 61, 167, 30, 137, 190, 175, 162, 101, 61, 14, 99, 98, 61, 71, 93, 77, 190, 36, 50, 33, 62, 241, 186, 112, 61, 201, 152, 11, 187, 176, 119, 42, 59, 64, 50, 133, 189, 100, 47, 3, 188, 213, 13, 175, 189, 103, 135, 189, 62, 29, 163, 180, 188, 20, 2, 211, 189, 66, 114, 135, 61, 238, 103, 63, 62, 214, 43, 180, 186, 162, 84, 25, 62, 160, 94, 48, 60, 242, 182, 55, 189, 142, 100, 203, 189, 244, 96, 208, 61, 151, 96, 150, 61, 119, 176, 87, 190, 116, 90, 211, 187, 245, 61, 100, 189, 245, 218, 139, 188, 192, 11, 48, 61, 42, 29, 82, 190, 200, 146, 8, 62, 26, 73, 94, 62, 1, 162, 236, 189, 37, 163, 17, 62, 90, 44, 47, 190, 14, 102, 250, 190, 76, 156, 131, 191, 19, 138, 134, 189, 152, 234, 0, 188, 1, 205, 241, 190, 147, 16, 46, 190, 217, 135, 26, 189, 110, 57, 45, 190, 83, 112, 170, 190, 65, 40, 85, 190, 236, 11, 109, 62, 254, 193, 176, 62, 43, 111, 5, 190, 77, 217, 143, 61, 195, 212, 237, 62, 169, 30, 0, 190, 152, 175, 139, 61, 118, 203, 102, 190, 198, 115, 85, 190, 138, 112, 14, 190, 178, 2, 17, 63, 103, 247, 192, 61, 227, 189, 74, 62, 130, 117, 45, 191, 229, 191, 39, 190, 232, 103, 163, 62, 251, 235, 194, 191, 33, 168, 195, 61, 14, 183, 7, 61, 211, 130, 112, 61, 8, 118, 25, 63, 249, 205, 37, 62, 245, 167, 247, 190, 39, 100, 65, 62, 250, 122, 135, 188, 89, 191, 96, 189, 217, 16, 69, 62, 217, 134, 88, 62, 49, 233, 148, 62, 92, 126, 5, 191, 112, 238, 205, 189, 92, 184, 240, 61, 112, 171, 230, 59, 221, 44, 175, 188, 194, 2, 15, 190, 127, 207, 13, 191, 33, 94, 212, 61, 54, 227, 85, 191, 135, 69, 200, 61, 103, 6, 82, 60, 36, 174, 160, 190, 215, 91, 31, 191, 90, 188, 210, 189, 236, 255, 174, 62, 128, 153, 218, 189, 61, 187, 178, 61, 64, 39, 61, 62, 11, 165, 160, 190, 72, 0, 76, 62, 214, 244, 249, 188, 57, 169, 182, 62, 206, 45, 110, 189, 245, 94, 68, 63, 29, 193, 139, 62, 131, 119, 210, 190, 181, 3, 172, 62, 107, 33, 226, 61, 190, 76, 214, 190, 195, 13, 144, 61, 151, 46, 151, 62, 90, 206, 221, 61, 117, 38, 203, 191, 63, 104, 171, 190, 42, 89, 162, 62, 102, 51, 142, 62, 24, 45, 83, 190, 13, 224, 178, 62, 5, 143, 48, 191, 233, 19, 2, 63, 226, 65, 46, 191, 174, 187, 1, 190, 16, 244, 12, 63, 187, 207, 155, 190, 133, 37, 200, 191, 93, 34, 129, 189, 219, 151, 249, 189, 179, 255, 161, 190, 1, 124, 130, 191, 216, 165, 153, 61, 126, 76, 27, 191, 225, 73, 14, 189, 30, 223, 164, 62, 62, 6, 106, 62, 103, 159, 0, 190, 249, 232, 193, 61, 14, 185, 80, 188, 82, 13, 17, 62, 248, 237, 157, 189, 8, 142, 145, 61, 182, 241, 30, 190, 188, 251, 216, 61, 217, 36, 41, 190, 247, 52, 149, 189, 181, 108, 240, 189, 65, 88, 1, 62, 171, 25, 17, 190, 115, 251, 243, 187, 90, 168, 140, 60, 4, 67, 161, 61, 64, 250, 82, 61, 243, 219, 29, 190, 165, 152, 239, 189, 239, 55, 22, 190, 121, 107, 7, 62, 109, 97, 8, 190, 148, 165, 162, 189, 22, 215, 212, 189, 169, 131, 3, 190, 177, 136, 229, 189, 223, 255, 85, 61, 116, 168, 3, 190, 152, 46, 132, 59, 7, 149, 173, 189, 213, 151, 46, 189, 72, 141, 212, 189, 93, 8, 238, 61, 97, 249, 51, 190, 249, 9, 18, 61, 48, 63, 29, 189, 116, 45, 41, 190, 197, 122, 177, 189, 128, 182, 21, 62, 136, 89, 96, 61, 237, 92, 182, 189, 76, 47, 129, 60, 198, 120, 162, 61, 26, 1, 41, 62, 122, 228, 199, 189, 92, 234, 33, 190, 231, 33, 140, 189, 61, 55, 141, 189, 71, 6, 45, 61, 232, 132, 6, 190, 87, 248, 144, 61, 146, 247, 136, 61, 12, 200, 162, 61, 255, 108, 185, 189, 228, 199, 111, 188, 113, 126, 32, 190, 43, 108, 123, 189, 24, 10, 92, 188, 44, 196, 93, 189, 237, 138, 168, 189, 72, 192, 84, 189, 152, 229, 76, 189, 79, 222, 54, 190, 136, 219, 17, 61, 17, 184, 192, 189, 74, 139, 117, 190, 10, 155, 253, 61, 89, 91, 43, 61, 110, 174, 171, 62, 57, 80, 226, 190, 130, 133, 29, 191, 103, 220, 194, 61, 245, 90, 220, 61, 203, 243, 239, 190, 135, 28, 121, 190, 217, 13, 105, 62, 176, 175, 246, 189, 84, 14, 2, 61, 122, 83, 130, 190, 21, 66, 205, 190, 114, 80, 33, 190, 114, 35, 65, 62, 107, 226, 111, 61, 181, 67, 6, 190, 8, 57, 25, 62, 152, 47, 89, 190, 11, 110, 10, 62, 246, 133, 168, 61, 12, 1, 6, 60, 168, 144, 39, 62, 249, 54, 88, 62, 164, 100, 59, 190, 243, 218, 15, 190, 189, 225, 61, 62, 188, 177, 130, 62, 113, 97, 88, 189, 5, 22, 112, 189, 143, 10, 209, 190, 171, 175, 22, 192, 165, 145, 27, 62, 214, 161, 71, 62, 147, 226, 166, 190, 219, 242, 93, 190, 204, 74, 4, 191, 113, 65, 167, 189, 97, 228, 231, 189, 84, 210, 58, 61, 78, 214, 41, 190, 81, 40, 86, 189, 129, 76, 145, 61, 188, 47, 227, 190, 34, 34, 209, 190, 179, 249, 131, 61, 157, 182, 56, 62, 145, 135, 13, 189, 150, 182, 206, 189, 178, 60, 9, 190, 9, 206, 157, 190, 153, 207, 114, 190, 210, 93, 119, 60, 77, 103, 22, 191, 70, 202, 161, 62, 197, 189, 29, 62, 60, 98, 133, 190, 207, 230, 97, 62, 254, 106, 176, 191, 249, 205, 253, 61, 132, 161, 213, 189, 54, 245, 178, 190, 122, 107, 182, 190, 144, 249, 92, 61, 204, 177, 166, 190, 235, 235, 0, 191, 190, 29, 94, 189, 95, 248, 119, 62, 228, 241, 224, 189, 156, 131, 24, 190, 10, 102, 19, 189, 181, 36, 137, 188, 35, 184, 85, 62, 240, 204, 241, 60, 58, 180, 1, 188, 71, 213, 117, 189, 141, 253, 236, 58, 192, 139, 81, 62, 252, 87, 84, 190, 28, 19, 123, 190, 0, 180, 125, 61, 110, 53, 158, 189, 209, 185, 162, 61, 71, 231, 34, 190, 65, 217, 45, 62, 78, 139, 48, 190, 69, 243, 104, 188, 250, 213, 13, 190, 88, 15, 191, 189, 98, 136, 11, 62, 75, 133, 170, 190, 17, 36, 73, 190, 80, 18, 167, 61, 28, 203, 8, 62, 24, 110, 31, 191, 224, 141, 195, 191, 223, 187, 27, 62, 236, 209, 180, 61, 108, 84, 10, 191, 144, 69, 179, 190, 179, 44, 126, 190, 25, 26, 253, 61, 128, 158, 85, 62, 150, 121, 228, 190, 26, 251, 77, 190, 178, 153, 86, 62, 223, 29, 58, 62, 157, 130, 19, 189, 62, 104, 18, 191, 90, 19, 245, 189, 111, 60, 79, 188, 180, 70, 246, 189, 224, 162, 41, 60, 146, 120, 181, 61, 154, 192, 55, 190, 177, 196, 52, 190, 220, 248, 40, 61, 39, 40, 209, 62, 6, 29, 122, 190, 114, 46, 2, 190, 86, 200, 214, 190, 112, 50, 87, 190, 38, 97, 211, 62, 152, 0, 158, 61, 232, 155, 46, 187, 143, 169, 181, 190, 208, 23, 11, 189, 154, 163, 147, 61, 91, 192, 186, 61, 191, 103, 46, 190, 57, 212, 144, 188, 172, 209, 234, 189, 235, 57, 139, 189, 182, 180, 130, 60, 61, 172, 174, 189, 22, 45, 235, 187, 152, 194, 156, 189, 222, 170, 124, 189, 72, 30, 108, 188, 177, 173, 188, 60, 205, 150, 225, 189, 232, 138, 48, 190, 92, 231, 73, 190, 209, 7, 154, 188, 66, 84, 247, 189, 220, 238, 154, 188, 15, 138, 120, 60, 251, 34, 22, 189, 218, 111, 142, 189, 35, 196, 22, 62, 100, 121, 19, 61, 120, 60, 52, 190, 101, 46, 32, 61, 111, 173, 21, 61, 149, 200, 169, 62, 242, 190, 229, 61, 245, 73, 61, 60, 189, 61, 10, 61};
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
                alignas(float) const unsigned char memory[] = {254, 112, 0, 190, 164, 69, 159, 62, 136, 27, 28, 62, 18, 171, 81, 62, 73, 171, 175, 62, 57, 199, 52, 187, 28, 45, 31, 188, 40, 2, 166, 61, 141, 132, 137, 189, 58, 119, 145, 61, 69, 241, 148, 189, 204, 162, 30, 190, 144, 28, 211, 62, 13, 102, 112, 190, 239, 118, 148, 62, 105, 79, 187, 62, 196, 223, 120, 190, 96, 5, 31, 190, 238, 67, 143, 60, 205, 134, 159, 62, 184, 189, 160, 62, 254, 193, 40, 62, 162, 148, 31, 62, 10, 162, 150, 62, 200, 113, 95, 62, 18, 150, 32, 189, 12, 110, 32, 61, 101, 239, 72, 190, 61, 155, 163, 62, 159, 41, 205, 189, 131, 209, 132, 188, 152, 83, 127, 190};
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
                alignas(float) const unsigned char memory[] = {152, 235, 112, 61, 145, 48, 170, 190, 15, 77, 147, 189, 246, 78, 186, 62, 153, 134, 23, 63, 132, 32, 38, 63, 241, 16, 6, 63, 144, 53, 34, 189, 226, 228, 81, 61, 164, 112, 86, 191, 35, 90, 172, 187, 36, 162, 167, 190, 7, 25, 117, 60, 65, 178, 253, 190, 188, 47, 30, 62, 5, 65, 170, 188, 162, 252, 108, 191, 124, 179, 192, 189, 118, 132, 170, 63, 108, 86, 55, 63, 15, 118, 43, 191, 90, 112, 22, 186, 110, 249, 73, 191, 195, 87, 155, 62, 140, 69, 148, 63, 6, 199, 50, 62, 91, 176, 9, 62, 55, 3, 97, 190, 49, 212, 180, 191, 185, 14, 177, 189, 196, 32, 82, 191, 54, 190, 6, 190, 212, 197, 200, 61, 103, 128, 39, 189, 169, 243, 102, 189, 149, 245, 73, 191, 221, 63, 106, 190, 148, 111, 227, 189, 6, 57, 42, 62, 5, 208, 226, 190, 135, 239, 244, 60, 215, 56, 91, 62, 55, 135, 23, 62, 116, 202, 0, 62, 247, 246, 130, 190, 132, 218, 65, 62, 231, 98, 173, 189, 82, 121, 74, 190, 180, 126, 22, 62, 87, 159, 135, 61, 240, 81, 78, 62, 204, 25, 23, 62, 43, 125, 200, 189, 224, 155, 66, 190, 178, 252, 245, 189, 122, 195, 102, 190, 169, 141, 185, 62, 142, 232, 56, 55, 68, 0, 52, 190, 247, 209, 179, 61, 228, 41, 249, 60, 191, 212, 165, 188, 61, 30, 103, 61, 181, 210, 147, 61};
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
                alignas(float) const unsigned char memory[] = {50, 19, 139, 62, 168, 42, 87, 190};
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
    alignas(float) const unsigned char memory[] = {1, 98, 194, 63, 105, 68, 252, 62, 201, 81, 61, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {112, 241, 141, 191, 53, 155, 162, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0028/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}