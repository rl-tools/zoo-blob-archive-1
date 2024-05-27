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
                alignas(float) const unsigned char memory[] = {131, 218, 218, 62, 18, 131, 12, 191, 184, 74, 185, 62, 75, 10, 250, 62, 245, 28, 113, 191, 215, 109, 60, 62, 169, 245, 42, 191, 156, 204, 139, 191, 45, 139, 174, 189, 212, 127, 187, 189, 27, 154, 228, 189, 118, 20, 46, 63, 78, 81, 240, 62, 164, 145, 127, 191, 35, 58, 30, 191, 8, 178, 31, 63, 51, 3, 254, 62, 57, 245, 242, 62, 11, 121, 100, 62, 152, 245, 183, 190, 235, 1, 157, 188, 10, 171, 141, 62, 36, 163, 210, 62, 81, 115, 203, 190, 122, 86, 220, 190, 128, 238, 253, 190, 210, 137, 244, 62, 6, 108, 118, 191, 144, 12, 162, 61, 83, 153, 19, 189, 82, 68, 234, 190, 74, 0, 101, 63, 45, 44, 22, 63, 169, 134, 127, 190, 224, 107, 57, 61, 84, 214, 166, 62, 170, 199, 35, 62, 206, 85, 18, 188, 144, 176, 28, 187, 126, 207, 130, 61, 209, 194, 60, 191, 125, 124, 0, 62, 108, 77, 121, 190, 37, 34, 70, 63, 223, 36, 18, 62, 188, 140, 232, 62, 111, 130, 164, 191, 123, 206, 136, 190, 242, 156, 175, 189, 221, 130, 39, 63, 182, 39, 0, 191, 168, 25, 2, 191, 83, 5, 171, 61, 109, 158, 217, 189, 144, 134, 97, 191, 47, 112, 105, 63, 245, 46, 226, 61, 124, 243, 80, 190, 227, 1, 144, 190, 48, 93, 7, 63, 170, 106, 55, 63, 15, 218, 108, 63, 27, 90, 182, 62, 65, 48, 47, 191, 150, 79, 136, 191, 226, 29, 230, 189, 226, 75, 97, 63, 159, 149, 56, 63, 153, 240, 96, 62, 126, 108, 40, 191, 53, 98, 135, 191, 5, 138, 137, 190, 31, 160, 250, 61, 90, 53, 51, 191, 137, 24, 141, 62, 233, 124, 179, 190, 37, 57, 185, 62, 23, 47, 54, 191, 145, 191, 201, 62, 79, 48, 145, 191, 219, 163, 133, 190, 208, 172, 170, 62, 183, 62, 178, 63, 66, 148, 213, 62, 64, 80, 18, 191, 205, 59, 29, 190, 198, 124, 4, 63, 149, 106, 43, 190, 90, 218, 220, 190, 200, 51, 244, 62, 52, 31, 22, 191, 112, 133, 30, 191, 213, 251, 148, 62, 171, 98, 89, 62, 200, 180, 190, 190, 150, 244, 240, 62};
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
                alignas(float) const unsigned char memory[] = {194, 96, 10, 191, 7, 110, 175, 62, 234, 135, 149, 62, 7, 217, 88, 190, 239, 95, 31, 191, 102, 197, 124, 62, 212, 134, 15, 191, 111, 1, 214, 61, 12, 36, 90, 61, 126, 133, 92, 62, 161, 247, 200, 190, 112, 119, 15, 191, 88, 211, 134, 190, 38, 82, 139, 61, 83, 61, 37, 63, 68, 110, 94, 61, 69, 155, 157, 189, 173, 166, 66, 62, 2, 144, 142, 62, 93, 94, 39, 190, 137, 153, 95, 191, 239, 79, 3, 190, 236, 55, 243, 62, 22, 111, 170, 62, 214, 168, 66, 62, 144, 74, 5, 191, 33, 27, 109, 62, 15, 133, 182, 190, 63, 29, 16, 63, 203, 148, 158, 190, 192, 40, 131, 190, 248, 146, 63, 190};
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
                alignas(float) const unsigned char memory[] = {35, 224, 198, 189, 153, 22, 242, 61, 122, 103, 130, 189, 66, 133, 136, 61, 76, 139, 104, 61, 169, 120, 139, 189, 118, 166, 151, 188, 81, 2, 135, 187, 168, 36, 130, 60, 137, 17, 11, 189, 75, 51, 65, 190, 254, 162, 41, 188, 253, 160, 50, 62, 84, 7, 76, 190, 59, 12, 100, 61, 113, 59, 182, 189, 80, 199, 24, 189, 191, 10, 43, 189, 116, 22, 253, 188, 53, 219, 179, 189, 158, 85, 34, 62, 63, 247, 226, 61, 54, 105, 208, 189, 156, 49, 120, 61, 125, 205, 13, 62, 66, 182, 65, 189, 62, 236, 150, 189, 232, 252, 138, 61, 240, 168, 198, 189, 6, 237, 9, 62, 111, 37, 40, 190, 21, 140, 26, 190, 193, 182, 221, 59, 94, 110, 1, 190, 114, 72, 224, 189, 21, 29, 218, 60, 185, 109, 235, 189, 166, 96, 46, 189, 125, 66, 70, 61, 198, 90, 51, 189, 248, 148, 252, 61, 239, 110, 159, 61, 168, 2, 255, 189, 51, 150, 145, 189, 189, 197, 218, 189, 58, 214, 3, 189, 133, 208, 173, 189, 16, 227, 28, 190, 253, 164, 231, 189, 152, 149, 11, 189, 13, 150, 1, 61, 94, 214, 86, 189, 144, 47, 13, 189, 15, 254, 25, 62, 71, 220, 143, 189, 231, 18, 21, 61, 166, 128, 236, 60, 229, 25, 232, 61, 134, 70, 184, 189, 234, 182, 169, 61, 125, 108, 6, 190, 41, 16, 194, 61, 202, 154, 46, 190, 243, 44, 210, 61, 187, 226, 73, 61, 14, 68, 55, 62, 157, 84, 52, 191, 158, 231, 116, 190, 80, 141, 55, 190, 230, 237, 138, 190, 251, 62, 167, 59, 48, 8, 26, 62, 113, 106, 125, 189, 179, 172, 111, 190, 173, 10, 244, 189, 71, 87, 184, 190, 229, 190, 253, 189, 24, 98, 131, 190, 248, 38, 70, 62, 144, 57, 191, 62, 78, 147, 194, 61, 42, 76, 41, 62, 92, 42, 80, 190, 109, 80, 230, 190, 176, 196, 195, 191, 43, 239, 87, 191, 251, 209, 116, 62, 196, 251, 173, 190, 202, 6, 167, 60, 188, 37, 33, 62, 218, 89, 237, 61, 130, 61, 46, 191, 221, 11, 211, 61, 165, 108, 11, 191, 64, 247, 53, 191, 103, 120, 131, 190, 200, 108, 32, 62, 207, 212, 103, 188, 99, 19, 30, 191, 87, 34, 53, 190, 210, 108, 61, 191, 234, 190, 34, 61, 47, 108, 151, 189, 55, 146, 124, 62, 227, 51, 173, 187, 50, 111, 46, 191, 51, 128, 37, 190, 16, 231, 35, 190, 148, 213, 114, 61, 148, 11, 132, 189, 110, 13, 122, 188, 192, 199, 187, 190, 98, 71, 69, 62, 149, 147, 37, 62, 17, 128, 9, 62, 173, 219, 129, 61, 57, 175, 22, 189, 138, 97, 59, 62, 103, 230, 28, 61, 204, 91, 223, 190, 120, 201, 16, 62, 170, 212, 73, 62, 126, 84, 192, 60, 196, 95, 22, 190, 47, 5, 252, 59, 118, 39, 150, 59, 253, 163, 234, 189, 196, 129, 48, 185, 114, 68, 133, 190, 52, 171, 130, 189, 81, 201, 135, 61, 249, 210, 25, 190, 75, 173, 155, 189, 121, 229, 92, 61, 79, 113, 29, 59, 141, 141, 141, 61, 202, 85, 154, 189, 130, 102, 210, 60, 27, 171, 150, 60, 221, 187, 33, 189, 186, 129, 11, 190, 211, 9, 142, 190, 204, 116, 26, 62, 125, 38, 202, 62, 23, 146, 85, 190, 3, 21, 99, 190, 96, 25, 68, 61, 119, 218, 154, 189, 193, 212, 184, 190, 46, 180, 184, 60, 74, 34, 193, 187, 71, 199, 115, 62, 211, 204, 136, 60, 156, 71, 99, 190, 102, 66, 214, 62, 90, 125, 43, 191, 40, 76, 201, 61, 249, 166, 66, 190, 5, 220, 149, 190, 39, 242, 110, 190, 75, 168, 77, 62, 145, 217, 212, 61, 137, 141, 228, 60, 16, 22, 65, 61, 66, 171, 122, 189, 230, 71, 133, 61, 208, 99, 150, 189, 1, 248, 146, 62, 13, 63, 104, 190, 144, 119, 69, 62, 10, 126, 55, 190, 181, 89, 32, 61, 70, 28, 206, 189, 211, 97, 192, 189, 242, 122, 163, 60, 117, 60, 208, 61, 0, 77, 20, 187, 183, 224, 108, 62, 70, 10, 72, 62, 28, 86, 189, 189, 179, 74, 104, 191, 48, 22, 170, 62, 18, 25, 92, 61, 72, 141, 3, 190, 107, 76, 133, 62, 57, 178, 107, 62, 229, 79, 29, 62, 106, 64, 122, 191, 74, 222, 225, 189, 72, 17, 19, 189, 242, 5, 2, 62, 89, 61, 171, 61, 176, 8, 72, 189, 232, 160, 244, 61, 173, 198, 221, 190, 73, 33, 252, 61, 121, 84, 137, 62, 160, 186, 160, 188, 27, 17, 2, 190, 57, 119, 207, 60, 156, 79, 179, 61, 7, 117, 34, 190, 213, 167, 2, 189, 235, 10, 109, 189, 249, 222, 212, 188, 170, 10, 9, 189, 233, 62, 233, 189, 252, 221, 162, 62, 253, 240, 201, 62, 243, 40, 250, 188, 60, 9, 191, 190, 88, 229, 166, 62, 102, 108, 70, 191, 188, 91, 189, 190, 122, 227, 134, 61, 53, 38, 227, 190, 9, 43, 131, 58, 163, 91, 18, 190, 171, 94, 237, 61, 64, 199, 130, 191, 27, 15, 50, 62, 23, 208, 84, 190, 71, 98, 52, 190, 32, 2, 239, 189, 186, 171, 21, 190, 73, 110, 125, 62, 210, 198, 69, 191, 227, 71, 9, 62, 18, 23, 35, 62, 26, 42, 133, 190, 15, 238, 107, 62, 14, 214, 130, 187, 95, 192, 69, 189, 73, 109, 57, 62, 37, 173, 150, 61, 188, 16, 240, 189, 166, 46, 195, 61, 136, 160, 98, 62, 70, 73, 237, 189, 152, 25, 238, 62, 38, 178, 147, 62, 203, 12, 78, 61, 207, 37, 118, 189, 142, 175, 190, 62, 144, 55, 103, 190, 214, 150, 91, 191, 227, 96, 21, 189, 191, 49, 139, 190, 190, 64, 194, 189, 70, 143, 80, 190, 87, 40, 242, 59, 248, 184, 171, 190, 98, 89, 3, 62, 35, 13, 40, 190, 200, 204, 219, 190, 237, 209, 218, 189, 122, 147, 159, 190, 70, 123, 30, 190, 195, 68, 2, 189, 111, 111, 172, 190, 179, 242, 165, 190, 119, 190, 61, 62, 207, 165, 183, 60, 50, 41, 23, 61, 15, 251, 173, 61, 193, 224, 128, 62, 55, 72, 7, 62, 132, 97, 196, 59, 201, 164, 35, 61, 37, 109, 222, 60, 189, 94, 138, 62, 118, 15, 150, 190, 236, 244, 246, 61, 108, 251, 214, 61, 210, 79, 111, 62, 40, 250, 12, 190, 194, 4, 157, 190, 167, 2, 216, 62, 236, 74, 240, 61, 187, 176, 48, 190, 204, 234, 39, 61, 228, 207, 141, 60, 124, 62, 131, 190, 149, 167, 86, 191, 170, 34, 59, 61, 232, 37, 101, 62, 160, 238, 99, 62, 58, 188, 119, 190, 196, 79, 93, 62, 221, 55, 76, 61, 48, 170, 129, 190, 144, 225, 11, 62, 55, 247, 195, 60, 69, 200, 129, 61, 54, 89, 28, 60, 78, 255, 206, 61, 221, 229, 120, 188, 68, 19, 214, 189, 238, 222, 148, 190, 220, 194, 80, 190, 166, 80, 49, 62, 35, 147, 16, 190, 250, 43, 1, 58, 198, 19, 164, 61, 85, 138, 254, 187, 105, 202, 160, 189, 91, 39, 231, 190, 52, 24, 168, 58, 131, 67, 101, 191, 243, 227, 129, 62, 94, 9, 23, 62, 37, 198, 160, 189, 120, 78, 154, 59, 188, 107, 17, 62, 212, 179, 150, 62, 122, 111, 211, 191, 116, 241, 60, 190, 254, 188, 239, 61, 223, 71, 176, 62, 20, 220, 130, 61, 136, 18, 118, 190, 79, 57, 171, 190, 128, 1, 185, 62, 160, 202, 127, 191, 81, 99, 230, 190, 243, 33, 74, 62, 225, 41, 119, 189, 137, 166, 112, 62, 148, 21, 186, 61, 103, 15, 143, 62, 132, 246, 25, 191, 159, 253, 154, 190, 224, 229, 36, 61, 129, 127, 140, 190, 81, 241, 146, 62, 49, 186, 149, 190, 65, 118, 235, 189, 200, 226, 153, 62, 3, 212, 44, 62, 224, 103, 238, 190, 74, 79, 228, 62, 140, 163, 45, 63, 182, 230, 112, 62, 219, 98, 90, 62, 197, 86, 160, 60, 87, 86, 115, 60, 28, 202, 150, 190, 11, 213, 83, 190, 5, 126, 141, 190, 76, 98, 135, 190, 13, 25, 151, 62, 168, 148, 142, 190, 163, 210, 24, 62, 17, 196, 170, 189, 174, 214, 217, 190, 87, 72, 51, 189, 226, 119, 210, 190, 117, 74, 76, 62, 192, 183, 134, 189, 232, 234, 174, 62, 12, 153, 170, 60, 149, 246, 102, 190, 117, 144, 218, 190, 104, 218, 163, 188, 47, 200, 37, 189, 223, 122, 194, 188, 110, 49, 249, 61, 145, 214, 171, 191, 117, 240, 78, 61, 37, 60, 106, 61, 162, 203, 189, 190, 2, 140, 180, 189, 134, 111, 178, 60, 115, 101, 110, 62, 197, 51, 247, 61, 192, 201, 249, 189, 11, 222, 8, 62, 109, 2, 21, 62, 133, 158, 16, 191, 47, 242, 137, 190, 103, 37, 20, 188, 77, 161, 213, 59, 103, 223, 142, 62, 61, 93, 84, 62, 244, 184, 30, 63, 98, 123, 40, 61, 116, 161, 222, 190, 97, 36, 189, 189, 229, 240, 56, 61, 51, 214, 153, 190, 86, 68, 214, 61, 98, 252, 46, 190, 127, 0, 1, 62, 241, 90, 158, 61, 34, 126, 76, 62, 239, 215, 140, 190, 170, 254, 211, 60, 183, 1, 51, 62, 146, 228, 241, 189, 38, 235, 191, 62, 147, 221, 133, 62, 147, 117, 212, 61, 15, 40, 133, 62, 242, 13, 4, 62, 167, 86, 33, 60, 58, 6, 87, 191, 125, 52, 50, 188, 129, 85, 119, 191, 27, 252, 178, 190, 222, 21, 181, 190, 103, 18, 111, 62, 183, 12, 192, 190, 116, 255, 92, 62, 233, 18, 153, 190, 53, 64, 36, 191, 230, 62, 47, 189, 49, 32, 18, 189, 233, 32, 11, 62, 166, 115, 167, 190, 235, 125, 31, 62, 236, 60, 220, 190, 236, 213, 22, 187, 25, 34, 199, 61, 55, 112, 91, 62, 78, 228, 239, 189, 252, 250, 79, 60, 111, 163, 41, 190, 224, 247, 80, 62, 246, 181, 41, 62, 199, 155, 118, 190, 172, 78, 147, 62, 149, 16, 54, 191, 111, 167, 157, 61, 130, 98, 21, 62, 115, 97, 70, 61, 199, 240, 186, 60, 95, 193, 96, 189, 83, 157, 52, 189, 0, 186, 171, 62, 80, 189, 58, 188, 4, 239, 11, 188, 139, 44, 16, 61, 10, 249, 136, 190, 150, 101, 192, 190, 133, 113, 242, 61, 146, 149, 203, 61, 230, 246, 58, 62, 44, 107, 175, 188, 202, 189, 58, 190, 60, 25, 175, 190, 9, 11, 49, 190, 196, 198, 38, 190, 25, 196, 202, 190, 160, 176, 10, 62, 132, 200, 234, 61, 55, 145, 176, 190, 13, 32, 39, 190, 82, 102, 191, 190, 199, 137, 4, 62, 54, 186, 146, 189, 136, 172, 207, 59, 85, 121, 53, 190, 20, 60, 35, 62, 20, 238, 144, 191, 85, 50, 139, 62, 164, 174, 19, 190, 164, 40, 238, 61, 252, 44, 32, 190, 155, 119, 102, 62, 152, 35, 5, 190, 133, 87, 63, 62, 51, 50, 203, 190, 2, 9, 169, 190, 238, 151, 254, 60, 151, 153, 160, 191, 14, 239, 161, 62, 60, 28, 224, 189, 164, 62, 115, 189, 187, 199, 57, 190, 27, 30, 98, 190, 209, 9, 220, 61, 55, 221, 194, 61, 194, 34, 160, 61, 232, 139, 110, 61, 178, 93, 37, 190, 56, 246, 133, 62, 129, 124, 89, 189, 115, 215, 153, 189, 186, 250, 61, 189, 40, 248, 150, 190, 218, 76, 228, 188, 189, 97, 8, 59, 40, 187, 163, 189, 83, 24, 78, 190, 101, 28, 104, 189, 115, 113, 98, 62, 83, 93, 244, 61, 24, 202, 240, 61, 228, 211, 24, 190, 140, 24, 26, 62, 101, 161, 136, 190, 73, 27, 8, 61, 127, 30, 76, 62, 88, 87, 246, 61, 159, 182, 26, 190, 104, 7, 212, 188, 94, 19, 204, 62, 13, 14, 170, 189, 217, 204, 244, 61, 245, 57, 51, 189, 6, 38, 253, 188, 130, 3, 160, 189, 123, 10, 50, 190, 226, 224, 168, 189, 49, 29, 172, 60, 5, 39, 173, 189, 183, 253, 83, 189, 137, 239, 236, 189, 197, 171, 200, 188, 120, 218, 46, 190, 226, 174, 73, 61, 15, 57, 223, 189, 81, 6, 186, 60, 38, 227, 46, 62, 174, 84, 115, 189, 238, 251, 143, 188, 143, 44, 40, 62, 209, 242, 14, 190, 79, 148, 66, 189, 16, 52, 20, 60, 59, 169, 232, 189, 195, 144, 16, 190, 234, 217, 140, 189, 2, 235, 10, 190, 130, 139, 5, 188, 27, 1, 84, 60, 35, 205, 85, 61, 208, 165, 236, 61, 151, 40, 60, 189, 233, 100, 192, 61, 247, 95, 7, 189, 52, 152, 66, 189, 221, 86, 26, 190, 192, 99, 210, 60, 207, 53, 86, 62, 65, 33, 67, 190, 155, 164, 91, 190, 22, 142, 102, 189, 233, 172, 190, 190, 28, 190, 193, 62, 219, 83, 134, 61, 122, 18, 223, 186, 94, 173, 174, 188, 125, 144, 9, 62, 43, 69, 139, 190, 113, 131, 225, 189, 90, 213, 158, 189, 192, 74, 119, 61, 157, 95, 27, 62, 121, 163, 1, 191, 118, 18, 25, 62, 133, 226, 106, 61, 240, 181, 201, 61, 84, 47, 129, 190, 175, 233, 90, 62, 123, 67, 161, 61, 219, 247, 130, 62, 134, 166, 22, 190, 86, 61, 220, 189, 200, 170, 15, 62, 142, 193, 215, 190, 86, 43, 175, 189, 1, 123, 179, 61, 109, 19, 245, 61, 221, 177, 184, 189, 122, 4, 133, 62, 45, 13, 17, 62, 153, 202, 179, 189, 160, 33, 117, 189, 147, 221, 104, 189, 133, 65, 22, 62, 50, 170, 2, 61, 184, 232, 42, 62, 137, 173, 53, 190, 186, 169, 148, 188, 62, 2, 221, 189, 60, 147, 23, 61, 206, 147, 91, 61, 133, 176, 6, 62, 217, 46, 224, 189, 86, 128, 225, 60, 202, 153, 219, 60, 64, 226, 6, 62, 30, 147, 222, 189, 162, 94, 0, 189, 167, 252, 113, 61, 10, 255, 35, 62, 49, 34, 169, 61, 248, 164, 71, 189, 72, 160, 87, 188, 141, 168, 249, 187, 183, 47, 145, 189, 166, 13, 151, 189, 31, 33, 205, 189, 75, 158, 10, 190, 12, 3, 30, 189, 203, 53, 81, 61, 166, 252, 149, 60, 49, 170, 185, 189, 103, 127, 229, 61, 220, 7, 19, 62, 123, 215, 221, 61, 42, 255, 122, 61, 165, 238, 236, 188, 52, 74, 91, 188, 226, 129, 178, 189, 130, 203, 136, 62, 189, 31, 238, 61, 92, 88, 157, 61, 158, 157, 10, 190, 200, 96, 193, 189, 172, 219, 93, 62, 174, 255, 186, 59, 105, 190, 207, 62, 248, 176, 105, 62, 36, 181, 117, 190, 163, 9, 150, 60, 114, 149, 184, 62, 46, 188, 248, 190, 70, 19, 58, 190, 4, 13, 157, 189, 122, 145, 188, 190, 239, 135, 68, 190, 245, 165, 85, 190, 43, 185, 83, 62, 250, 63, 2, 191, 78, 16, 55, 189, 251, 229, 71, 190, 30, 72, 194, 187, 179, 252, 146, 190, 240, 138, 145, 190, 33, 235, 147, 62, 118, 106, 84, 62, 100, 246, 12, 61, 37, 243, 136, 190, 191, 56, 7, 190, 242, 244, 243, 60, 56, 99, 17, 189, 94, 137, 59, 62, 46, 105, 0, 63, 170, 231, 195, 60, 250, 180, 63, 190, 120, 168, 252, 184, 91, 146, 61, 62, 240, 51, 116, 62, 0, 206, 238, 61, 89, 99, 146, 189, 57, 101, 250, 61, 165, 43, 233, 62, 75, 183, 128, 62, 134, 72, 73, 191, 188, 125, 214, 61, 242, 242, 7, 190, 162, 197, 134, 189, 242, 149, 142, 189, 44, 21, 95, 190, 249, 96, 116, 62, 194, 24, 70, 191, 249, 99, 153, 61, 173, 2, 10, 190, 143, 5, 60, 190, 17, 157, 231, 188, 167, 175, 206, 189, 240, 61, 35, 190, 114, 166, 91, 190, 50, 122, 40, 61, 110, 216, 11, 190, 158, 69, 46, 62, 159, 124, 157, 189, 67, 239, 255, 60, 221, 98, 228, 189, 50, 31, 124, 190, 85, 25, 120, 60, 1, 160, 254, 189, 191, 145, 37, 60, 18, 181, 127, 190, 65, 179, 41, 60, 15, 102, 120, 62, 137, 21, 92, 190, 223, 63, 181, 61, 205, 198, 205, 188, 204, 93, 38, 190, 188, 27, 111, 60, 82, 165, 55, 190, 180, 177, 188, 62, 178, 188, 214, 60, 168, 215, 6, 190, 84, 107, 131, 61, 63, 126, 29, 61, 255, 55, 171, 61, 201, 83, 184, 61, 104, 138, 7, 190, 0, 214, 21, 191, 132, 87, 137, 61, 112, 31, 107, 189, 241, 0, 143, 190, 54, 219, 152, 62, 169, 122, 179, 190, 46, 33, 5, 191, 59, 227, 203, 189, 50, 99, 47, 62, 243, 38, 196, 190, 5, 103, 62, 62, 197, 142, 156, 62, 167, 165, 65, 191, 222, 233, 212, 59, 128, 45, 63, 189, 87, 228, 214, 62, 60, 9, 148, 190, 183, 178, 15, 191, 238, 51, 240, 190, 24, 234, 4, 186, 195, 103, 223, 188, 162, 228, 178, 190, 220, 212, 66, 190, 231, 154, 203, 62, 247, 228, 155, 190, 14, 250, 29, 190, 180, 109, 59, 62, 73, 234, 8, 191, 56, 16, 161, 190, 18, 146, 25, 191, 223, 108, 185, 61, 41, 1, 26, 62, 81, 225, 230, 62, 215, 27, 123, 62, 88, 137, 204, 189, 203, 28, 9, 62, 47, 104, 146, 61, 92, 18, 247, 61, 191, 235, 195, 188, 84, 99, 2, 61, 236, 134, 186, 61, 224, 155, 19, 190, 185, 161, 45, 190, 70, 75, 37, 62, 113, 71, 46, 62, 222, 138, 18, 190, 5, 107, 31, 60, 32, 41, 37, 190, 57, 231, 208, 189, 147, 43, 236, 59, 6, 17, 10, 190, 235, 237, 49, 190, 52, 39, 155, 188, 245, 34, 245, 189, 6, 112, 157, 187, 110, 95, 16, 190, 173, 244, 179, 189, 196, 131, 181, 188, 182, 238, 225, 189, 168, 108, 185, 189, 135, 249, 56, 57, 185, 191, 11, 62, 0, 161, 18, 190, 148, 31, 164, 59, 68, 80, 13, 61, 33, 159, 167, 60, 32, 154, 171, 61, 123, 220, 227, 62, 166, 150, 166, 190, 2, 28, 107, 190, 231, 113, 158, 62, 50, 66, 59, 190, 47, 247, 0, 62, 209, 134, 214, 188, 212, 62, 154, 188, 20, 255, 144, 189, 120, 83, 160, 189, 10, 71, 154, 190, 192, 221, 71, 189, 231, 32, 199, 62, 131, 38, 15, 191, 247, 219, 17, 63, 75, 50, 231, 61, 183, 201, 43, 190, 173, 93, 233, 190, 49, 133, 129, 190, 182, 172, 214, 190, 6, 58, 153, 190, 166, 248, 160, 189, 11, 19, 224, 61, 16, 9, 93, 62, 33, 233, 50, 190, 216, 109, 56, 62, 171, 239, 1, 191, 54, 57, 129, 189, 2, 159, 226, 189, 72, 232, 105, 189, 25, 107, 54, 190, 229, 62, 238, 189, 143, 113, 191, 188, 172, 11, 148, 190, 158, 34, 169, 61, 77, 163, 177, 59, 208, 219, 76, 62, 237, 79, 15, 62, 198, 142, 152, 186, 155, 23, 171, 61, 183, 134, 23, 190, 175, 255, 17, 190, 54, 88, 253, 188, 86, 104, 223, 189, 26, 27, 147, 189, 66, 70, 212, 61, 154, 20, 89, 62, 92, 121, 75, 189, 102, 32, 56, 61, 78, 119, 150, 61, 64, 211, 157, 189, 158, 164, 78, 189, 182, 201, 178, 190, 27, 104, 7, 62, 107, 134, 246, 60, 169, 17, 228, 189, 1, 5, 106, 61, 232, 6, 40, 62, 169, 196, 251, 188, 98, 224, 194, 61, 170, 215, 198, 189, 211, 254, 50, 191, 166, 247, 5, 61, 229, 252, 250, 62, 74, 79, 206, 61, 10, 21, 4, 61, 131, 186, 209, 189, 67, 41, 40, 190, 100, 148, 130, 62, 138, 212, 255, 61, 107, 76, 28, 62, 115, 240, 154, 189, 65, 211, 133, 61, 81, 141, 147, 190, 182, 210, 137, 62, 162, 53, 33, 62, 59, 42, 184, 61, 230, 126, 37, 62, 177, 21, 90, 190, 79, 48, 104, 190, 130, 30, 109, 62, 50, 239, 185, 189, 0, 151, 34, 191, 138, 209, 211, 62, 194, 153, 79, 61, 191, 68, 9, 62, 53, 176, 115, 62, 238, 6, 80, 62, 102, 52, 9, 61, 132, 176, 152, 189, 140, 56, 3, 191, 0, 84, 0, 190, 220, 31, 247, 61, 59, 39, 15, 62, 2, 183, 138, 62, 88, 7, 177, 61, 64, 138, 20, 61, 70, 43, 111, 62, 15, 162, 163, 188, 79, 63, 222, 60, 133, 65, 247, 61, 136, 109, 15, 62, 52, 164, 18, 59, 87, 20, 66, 189, 88, 173, 6, 189, 163, 61, 239, 61, 3, 205, 164, 61, 252, 147, 5, 190, 158, 145, 178, 189, 14, 173, 212, 61, 38, 140, 169, 62, 149, 196, 18, 190, 245, 8, 153, 189, 23, 218, 0, 62, 157, 134, 226, 60, 226, 252, 98, 190, 172, 46, 133, 189, 217, 218, 149, 62, 234, 201, 171, 189, 242, 159, 175, 189, 18, 106, 51, 190, 48, 106, 85, 62, 11, 105, 24, 61, 28, 163, 229, 61, 142, 139, 216, 189, 115, 41, 71, 190, 167, 247, 38, 190, 150, 221, 4, 190, 250, 71, 44, 62, 14, 189, 28, 62, 24, 201, 143, 189, 188, 133, 28, 191, 53, 241, 67, 61, 1, 148, 33, 62, 189, 230, 160, 190, 180, 193, 143, 62, 160, 20, 155, 62, 158, 233, 219, 61, 156, 14, 135, 189, 235, 214, 164, 61, 164, 53, 89, 62, 84, 129, 238, 61, 188, 121, 216, 62, 48, 79, 107, 62, 176, 9, 131, 62, 85, 2, 185, 62, 151, 50, 153, 62, 75, 213, 68, 191, 237, 82, 190, 60, 0, 249, 180, 188, 199, 17, 136, 61, 96, 23, 126, 190, 216, 227, 244, 189, 128, 35, 13, 62, 232, 81, 132, 191, 210, 81, 137, 62, 134, 87, 59, 190, 162, 197, 99, 190, 146, 233, 175, 190, 96, 127, 38, 63, 253, 139, 155, 190, 167, 248, 196, 62, 188, 195, 210, 190, 67, 144, 191, 190, 70, 36, 179, 62, 80, 126, 23, 190, 217, 72, 188, 61, 136, 123, 86, 190, 66, 184, 179, 62, 184, 254, 123, 191, 214, 255, 214, 188, 209, 156, 126, 61, 186, 177, 27, 190, 146, 231, 58, 62, 73, 167, 171, 190, 130, 210, 246, 189, 221, 208, 118, 62, 243, 140, 67, 60, 207, 1, 250, 190, 4, 111, 38, 60, 223, 52, 226, 62, 10, 206, 207, 62, 86, 166, 158, 62, 78, 109, 131, 61, 174, 249, 187, 61, 255, 60, 190, 190, 145, 71, 180, 190, 147, 58, 13, 190, 10, 139, 25, 62, 189, 79, 176, 61, 171, 6, 143, 62, 199, 20, 191, 62, 53, 156, 55, 189, 15, 247, 65, 191, 149, 234, 44, 188, 82, 94, 3, 191, 87, 130, 40, 62, 11, 160, 255, 189, 170, 240, 71, 62, 128, 229, 31, 61, 88, 180, 126, 190, 250, 72, 227, 188, 252, 159, 103, 62, 187, 85, 40, 190, 196, 4, 253, 59, 199, 222, 83, 62, 218, 189, 94, 191, 106, 68, 28, 62, 12, 148, 1, 189, 251, 137, 32, 61, 42, 81, 97, 189, 60, 94, 177, 61, 230, 73, 147, 190, 34, 181, 39, 62, 137, 59, 128, 190, 150, 212, 139, 189, 150, 91, 21, 62, 34, 55, 28, 190, 1, 17, 20, 189, 34, 182, 130, 190, 85, 47, 184, 60, 196, 229, 78, 62, 32, 27, 69, 62, 201, 198, 143, 190, 26, 154, 89, 190, 117, 242, 192, 62, 39, 5, 178, 190, 138, 69, 203, 190, 22, 238, 209, 189, 50, 248, 54, 61, 119, 0, 87, 62, 81, 49, 105, 62, 73, 168, 170, 62, 239, 194, 57, 191, 69, 111, 145, 189, 121, 40, 25, 62, 233, 130, 83, 62, 230, 66, 73, 62, 198, 2, 215, 190, 168, 11, 217, 60, 131, 71, 3, 60, 103, 209, 82, 190, 192, 33, 153, 190, 238, 152, 60, 191, 21, 60, 61, 63, 164, 225, 2, 62, 58, 6, 58, 62, 225, 222, 219, 61, 172, 205, 179, 187, 155, 54, 143, 190, 93, 246, 85, 190, 238, 94, 152, 189, 75, 187, 115, 62, 144, 165, 234, 62, 218, 102, 198, 61};
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
                alignas(float) const unsigned char memory[] = {184, 11, 19, 190, 37, 102, 104, 189, 63, 253, 133, 189, 209, 154, 33, 62, 86, 158, 175, 62, 254, 4, 240, 61, 5, 244, 102, 62, 200, 88, 15, 189, 7, 196, 137, 62, 250, 89, 60, 62, 184, 82, 158, 61, 185, 18, 15, 62, 116, 79, 73, 62, 123, 105, 188, 61, 64, 151, 44, 62, 81, 65, 105, 62, 242, 15, 107, 189, 240, 30, 239, 188, 253, 171, 37, 190, 224, 234, 114, 62, 92, 223, 152, 62, 239, 154, 66, 62, 187, 254, 248, 189, 190, 97, 8, 190, 168, 89, 213, 189, 247, 95, 14, 62, 179, 32, 240, 61, 1, 87, 12, 62, 137, 27, 140, 62, 111, 165, 26, 62, 169, 44, 19, 61, 37, 81, 249, 61};
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
                alignas(float) const unsigned char memory[] = {183, 186, 173, 61, 173, 157, 192, 189, 185, 67, 20, 63, 236, 52, 205, 189, 148, 109, 98, 189, 118, 185, 134, 62, 61, 185, 38, 63, 221, 197, 158, 61, 167, 131, 228, 190, 183, 40, 148, 62, 96, 150, 72, 191, 38, 8, 99, 191, 106, 77, 98, 63, 142, 167, 114, 190, 175, 230, 71, 63, 169, 129, 11, 60, 249, 191, 84, 189, 234, 57, 151, 190, 134, 30, 134, 189, 127, 83, 167, 62, 170, 175, 14, 63, 40, 120, 104, 61, 31, 92, 142, 191, 116, 145, 36, 189, 10, 27, 199, 190, 84, 124, 202, 60, 32, 130, 130, 190, 141, 104, 113, 61, 91, 192, 65, 63, 40, 113, 93, 191, 150, 93, 6, 191, 109, 196, 46, 191, 85, 100, 161, 189, 30, 163, 23, 187, 77, 95, 225, 190, 149, 79, 74, 190, 178, 77, 225, 190, 5, 153, 110, 190, 124, 115, 213, 186, 222, 237, 7, 63, 107, 228, 220, 190, 244, 6, 135, 190, 241, 90, 69, 62, 42, 90, 182, 62, 119, 15, 6, 63, 146, 81, 141, 190, 22, 144, 135, 62, 103, 135, 124, 190, 161, 54, 219, 188, 0, 111, 83, 62, 180, 238, 239, 60, 253, 3, 154, 187, 39, 251, 12, 61, 175, 138, 123, 190, 149, 84, 47, 62, 216, 164, 206, 189, 147, 36, 69, 63, 103, 70, 71, 190, 147, 71, 140, 190, 15, 39, 102, 190, 26, 86, 25, 62, 118, 166, 158, 59, 40, 130, 44, 62, 209, 117, 155, 62};
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
                alignas(float) const unsigned char memory[] = {123, 128, 215, 189, 190, 180, 145, 190};
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
    alignas(float) const unsigned char memory[] = {110, 84, 134, 189, 200, 113, 210, 190, 146, 81, 52, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {254, 132, 141, 63, 23, 0, 65, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0044/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}