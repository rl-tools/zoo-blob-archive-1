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
                alignas(float) const unsigned char memory[] = {237, 200, 51, 191, 74, 13, 149, 191, 120, 8, 111, 190, 178, 40, 111, 62, 250, 129, 192, 189, 203, 120, 10, 188, 69, 18, 194, 62, 17, 130, 153, 191, 26, 146, 50, 190, 215, 146, 192, 190, 58, 19, 137, 191, 116, 182, 113, 190, 163, 3, 207, 190, 158, 184, 131, 191, 253, 40, 14, 63, 190, 7, 254, 61, 163, 12, 14, 63, 154, 197, 174, 190, 198, 84, 235, 189, 48, 157, 173, 61, 222, 119, 248, 190, 230, 203, 206, 61, 57, 110, 46, 62, 117, 5, 26, 191, 177, 5, 239, 189, 84, 249, 69, 62, 38, 9, 237, 190, 0, 182, 100, 190, 250, 16, 181, 63, 66, 27, 188, 62, 79, 200, 22, 63, 223, 100, 85, 62, 226, 219, 58, 191, 162, 215, 29, 62, 34, 73, 175, 191, 60, 206, 229, 190, 98, 171, 18, 190, 151, 122, 116, 191, 99, 48, 188, 62, 170, 154, 60, 190, 44, 254, 27, 63, 132, 188, 179, 190, 183, 34, 210, 190, 79, 34, 96, 190, 246, 42, 198, 60, 61, 91, 22, 191, 72, 61, 6, 191, 216, 145, 49, 63, 14, 209, 14, 63, 198, 70, 135, 190, 170, 144, 167, 62, 108, 18, 213, 62, 120, 75, 130, 191, 129, 66, 241, 190, 224, 254, 78, 190, 62, 215, 19, 191, 100, 140, 100, 62, 183, 7, 189, 62, 122, 0, 138, 191, 251, 111, 111, 190, 92, 125, 100, 191, 207, 79, 166, 190, 188, 190, 46, 60, 111, 148, 15, 191, 136, 120, 72, 63, 153, 104, 169, 60, 75, 156, 244, 190, 124, 142, 246, 62, 23, 75, 212, 60, 180, 8, 131, 190, 89, 141, 149, 62, 152, 192, 131, 62, 48, 117, 59, 63, 53, 150, 69, 191, 194, 245, 170, 189, 82, 102, 81, 62, 155, 218, 38, 190, 155, 161, 11, 188, 226, 51, 27, 63, 241, 36, 80, 190, 39, 3, 110, 190, 188, 112, 91, 63, 131, 252, 86, 63, 86, 75, 18, 63, 44, 196, 172, 190, 0, 71, 114, 63, 33, 111, 86, 190, 7, 99, 39, 190, 111, 167, 161, 190, 253, 85, 79, 191, 13, 33, 55, 189, 62, 12, 161, 191, 42, 192, 50, 61, 135, 95, 20, 62, 26, 84, 140, 62, 155, 41, 11, 63};
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
                alignas(float) const unsigned char memory[] = {235, 123, 212, 190, 9, 231, 173, 190, 210, 37, 64, 61, 97, 253, 137, 189, 199, 213, 103, 190, 118, 221, 213, 59, 81, 146, 129, 62, 180, 158, 171, 189, 158, 214, 55, 191, 0, 14, 249, 190, 174, 166, 12, 63, 41, 183, 61, 190, 31, 140, 25, 190, 124, 241, 193, 62, 253, 180, 4, 63, 6, 66, 5, 191, 109, 68, 83, 63, 132, 231, 57, 61, 73, 252, 133, 190, 10, 58, 54, 189, 194, 117, 181, 61, 190, 76, 34, 63, 65, 64, 24, 63, 211, 167, 184, 62, 232, 15, 18, 189, 250, 74, 164, 190, 106, 76, 30, 191, 171, 35, 56, 190, 63, 53, 171, 61, 97, 9, 169, 190, 198, 60, 103, 62, 174, 213, 47, 190};
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
                alignas(float) const unsigned char memory[] = {218, 127, 247, 189, 149, 125, 21, 190, 16, 50, 208, 189, 176, 221, 89, 61, 244, 72, 28, 191, 106, 14, 171, 189, 60, 244, 48, 60, 100, 115, 29, 62, 61, 78, 248, 189, 171, 188, 255, 62, 23, 87, 6, 62, 57, 167, 83, 61, 191, 240, 189, 189, 201, 158, 189, 61, 27, 112, 75, 188, 241, 200, 41, 191, 70, 200, 163, 191, 150, 128, 237, 189, 197, 249, 206, 190, 121, 174, 84, 190, 125, 39, 213, 61, 228, 11, 61, 62, 48, 201, 76, 62, 109, 180, 147, 190, 118, 82, 216, 62, 247, 99, 60, 60, 187, 175, 69, 190, 241, 242, 160, 190, 19, 226, 111, 189, 43, 230, 115, 62, 56, 247, 132, 61, 13, 157, 28, 62, 13, 188, 12, 190, 33, 146, 54, 61, 112, 134, 16, 190, 152, 100, 0, 190, 93, 224, 67, 189, 147, 242, 26, 190, 212, 199, 5, 188, 255, 49, 182, 189, 130, 37, 38, 190, 54, 242, 26, 190, 116, 44, 194, 60, 83, 73, 153, 189, 52, 131, 144, 60, 7, 149, 239, 61, 162, 180, 79, 190, 92, 141, 27, 190, 233, 201, 4, 190, 12, 85, 141, 56, 182, 78, 200, 61, 131, 226, 242, 57, 190, 120, 13, 189, 87, 130, 38, 189, 240, 186, 5, 190, 14, 158, 64, 61, 117, 166, 90, 189, 255, 112, 165, 189, 109, 56, 52, 190, 225, 133, 4, 62, 85, 165, 115, 61, 97, 131, 50, 190, 156, 156, 140, 61, 133, 5, 140, 60, 97, 75, 7, 191, 5, 150, 62, 61, 253, 99, 117, 62, 82, 164, 216, 190, 136, 175, 158, 62, 155, 233, 72, 191, 146, 24, 78, 60, 95, 183, 54, 61, 111, 179, 203, 190, 84, 46, 12, 190, 181, 154, 167, 190, 201, 252, 62, 62, 203, 81, 136, 190, 62, 27, 1, 62, 245, 159, 133, 61, 133, 20, 198, 62, 43, 126, 24, 190, 228, 194, 27, 62, 85, 182, 109, 61, 81, 228, 13, 63, 203, 108, 155, 62, 194, 139, 71, 61, 132, 174, 213, 61, 106, 92, 109, 62, 22, 54, 12, 63, 9, 95, 6, 190, 36, 109, 38, 190, 141, 94, 170, 190, 171, 69, 146, 61, 201, 132, 144, 190, 147, 57, 161, 61, 211, 102, 73, 190, 221, 241, 46, 62, 68, 42, 69, 189, 163, 251, 66, 62, 39, 5, 119, 188, 150, 254, 101, 190, 145, 201, 146, 62, 246, 101, 46, 62, 152, 26, 154, 62, 137, 118, 16, 63, 192, 158, 167, 190, 189, 217, 88, 62, 140, 217, 35, 188, 120, 84, 19, 62, 88, 56, 0, 62, 33, 90, 183, 61, 0, 65, 14, 190, 17, 62, 146, 60, 146, 245, 11, 62, 23, 120, 175, 62, 138, 236, 136, 187, 133, 46, 246, 189, 163, 242, 16, 62, 16, 207, 12, 190, 97, 133, 67, 190, 145, 47, 193, 189, 250, 197, 8, 62, 190, 228, 68, 62, 243, 238, 0, 191, 175, 48, 217, 62, 141, 85, 87, 62, 231, 92, 31, 62, 58, 143, 220, 188, 150, 219, 170, 62, 229, 95, 202, 61, 168, 34, 34, 62, 66, 51, 90, 189, 83, 81, 58, 190, 105, 60, 145, 62, 250, 162, 13, 62, 68, 139, 107, 61, 55, 72, 228, 189, 106, 161, 222, 190, 38, 172, 128, 62, 67, 21, 54, 190, 136, 207, 172, 61, 75, 181, 13, 61, 10, 229, 134, 189, 228, 178, 183, 190, 134, 119, 139, 62, 86, 60, 214, 61, 25, 117, 70, 190, 65, 224, 17, 62, 221, 241, 46, 190, 122, 192, 233, 190, 87, 235, 27, 61, 223, 134, 132, 189, 52, 154, 168, 62, 47, 226, 2, 190, 252, 186, 168, 190, 109, 147, 189, 61, 0, 72, 160, 190, 193, 93, 16, 62, 48, 198, 128, 189, 151, 114, 195, 190, 59, 186, 4, 62, 57, 181, 226, 61, 160, 216, 184, 61, 150, 244, 24, 190, 73, 134, 169, 60, 143, 104, 77, 189, 54, 147, 202, 60, 196, 128, 44, 190, 141, 75, 80, 189, 141, 154, 28, 190, 209, 101, 140, 188, 147, 228, 206, 61, 67, 224, 223, 61, 37, 118, 145, 60, 8, 139, 9, 61, 22, 95, 27, 62, 213, 13, 19, 190, 108, 183, 210, 189, 8, 40, 209, 188, 198, 165, 147, 61, 206, 40, 65, 61, 64, 147, 48, 61, 85, 81, 1, 190, 119, 239, 152, 189, 57, 132, 10, 62, 118, 58, 10, 62, 99, 239, 13, 59, 171, 35, 141, 188, 110, 38, 21, 62, 140, 136, 34, 60, 17, 157, 24, 190, 26, 189, 200, 189, 13, 103, 194, 189, 234, 23, 238, 189, 122, 99, 175, 59, 144, 46, 217, 190, 214, 113, 196, 62, 106, 170, 39, 190, 24, 56, 160, 61, 253, 171, 35, 60, 178, 164, 248, 190, 164, 42, 41, 185, 86, 231, 234, 61, 123, 121, 30, 190, 119, 156, 134, 190, 204, 197, 157, 61, 178, 173, 174, 60, 94, 188, 12, 62, 17, 55, 200, 62, 99, 139, 20, 62, 84, 51, 217, 61, 208, 214, 13, 188, 209, 130, 18, 62, 211, 51, 42, 61, 170, 199, 0, 62, 161, 14, 229, 189, 221, 197, 129, 61, 196, 21, 167, 189, 181, 57, 160, 190, 130, 139, 112, 188, 247, 15, 211, 189, 41, 65, 124, 190, 15, 78, 253, 188, 177, 209, 11, 190, 43, 182, 123, 60, 198, 183, 9, 190, 9, 205, 221, 189, 105, 242, 0, 190, 246, 253, 183, 189, 37, 173, 99, 189, 234, 230, 4, 190, 29, 195, 188, 61, 39, 71, 29, 62, 237, 170, 108, 61, 16, 40, 151, 60, 248, 114, 83, 61, 183, 81, 173, 188, 102, 205, 10, 190, 213, 239, 214, 189, 78, 175, 235, 59, 74, 83, 205, 60, 83, 179, 31, 187, 122, 197, 216, 60, 254, 16, 48, 190, 236, 76, 245, 61, 79, 168, 246, 187, 203, 129, 243, 189, 215, 208, 76, 190, 227, 16, 59, 189, 219, 178, 40, 190, 19, 138, 40, 62, 60, 86, 142, 60, 177, 200, 188, 189, 200, 25, 198, 189, 111, 86, 189, 189, 118, 240, 6, 62, 56, 39, 104, 190, 134, 17, 129, 61, 181, 45, 22, 190, 152, 131, 223, 60, 65, 179, 255, 190, 190, 128, 127, 62, 117, 120, 52, 62, 117, 1, 29, 188, 133, 209, 65, 62, 22, 21, 69, 191, 216, 151, 134, 62, 121, 251, 24, 189, 252, 125, 85, 190, 254, 108, 208, 61, 160, 77, 184, 189, 249, 59, 92, 190, 177, 104, 132, 61, 107, 6, 4, 190, 134, 209, 74, 61, 138, 89, 217, 189, 5, 227, 86, 190, 84, 224, 216, 189, 200, 127, 100, 189, 196, 173, 240, 189, 143, 167, 20, 191, 222, 15, 210, 61, 62, 29, 29, 61, 253, 22, 247, 190, 8, 8, 9, 62, 134, 33, 142, 62, 216, 140, 251, 190, 91, 152, 11, 190, 201, 46, 159, 61, 153, 218, 71, 61, 178, 24, 238, 188, 64, 177, 172, 61, 139, 148, 29, 190, 24, 211, 90, 62, 185, 215, 141, 189, 33, 218, 201, 187, 143, 68, 231, 189, 165, 111, 195, 189, 16, 50, 34, 62, 4, 12, 152, 190, 196, 239, 96, 190, 57, 32, 227, 61, 116, 15, 21, 62, 186, 173, 142, 187, 27, 238, 75, 62, 74, 36, 249, 189, 16, 229, 237, 189, 167, 161, 112, 61, 66, 77, 35, 62, 174, 12, 133, 61, 174, 121, 63, 62, 156, 88, 53, 62, 56, 231, 155, 62, 117, 124, 66, 190, 75, 68, 160, 190, 200, 235, 14, 62, 114, 112, 1, 62, 185, 124, 206, 60, 234, 42, 205, 60, 70, 61, 80, 190, 127, 17, 23, 190, 211, 41, 203, 58, 123, 168, 6, 190, 219, 197, 28, 62, 192, 115, 108, 190, 10, 175, 101, 190, 179, 65, 154, 60, 184, 122, 23, 190, 145, 41, 249, 189, 239, 80, 107, 62, 185, 127, 106, 190, 201, 215, 1, 62, 220, 53, 108, 189, 145, 132, 240, 190, 169, 126, 160, 190, 49, 152, 115, 61, 6, 76, 205, 188, 232, 249, 65, 61, 52, 70, 232, 186, 30, 127, 70, 190, 142, 90, 222, 190, 86, 146, 129, 60, 78, 116, 65, 190, 119, 214, 63, 190, 150, 241, 22, 190, 153, 89, 36, 62, 93, 73, 14, 190, 49, 154, 3, 62, 105, 202, 171, 190, 182, 3, 250, 61, 227, 34, 154, 190, 201, 166, 108, 62, 164, 148, 60, 63, 86, 21, 152, 188, 202, 96, 8, 191, 246, 109, 122, 62, 232, 11, 82, 190, 94, 57, 226, 62, 206, 68, 248, 61, 3, 164, 237, 190, 11, 135, 21, 60, 234, 245, 142, 62, 65, 0, 131, 62, 233, 101, 205, 190, 196, 169, 46, 61, 188, 13, 29, 189, 227, 149, 120, 62, 155, 160, 15, 191, 69, 243, 148, 190, 54, 119, 206, 190, 206, 220, 125, 62, 76, 177, 183, 190, 35, 151, 82, 62, 31, 214, 52, 62, 147, 190, 239, 60, 80, 128, 43, 190, 54, 81, 102, 187, 159, 102, 189, 61, 32, 93, 64, 190, 21, 225, 140, 62, 244, 99, 99, 190, 118, 22, 233, 61, 63, 205, 119, 62, 0, 61, 137, 62, 19, 8, 243, 189, 244, 56, 179, 61, 59, 243, 139, 62, 253, 86, 149, 190, 135, 26, 193, 62, 162, 161, 60, 191, 147, 151, 233, 59, 223, 250, 124, 62, 190, 173, 167, 190, 89, 125, 202, 61, 148, 162, 147, 190, 97, 221, 34, 62, 44, 16, 188, 61, 164, 90, 211, 60, 149, 136, 230, 187, 81, 88, 23, 62, 209, 87, 165, 62, 176, 132, 141, 62, 41, 186, 81, 62, 193, 231, 80, 61, 25, 110, 83, 62, 137, 218, 66, 62, 147, 70, 147, 61, 38, 160, 125, 62, 175, 123, 13, 62, 173, 78, 149, 61, 14, 58, 9, 190, 185, 7, 110, 190, 172, 126, 6, 62, 53, 37, 143, 190, 135, 150, 228, 61, 147, 152, 214, 189, 231, 31, 109, 190, 7, 54, 14, 62, 46, 1, 147, 62, 157, 1, 101, 189, 253, 115, 184, 61, 13, 117, 232, 190, 109, 51, 133, 61, 54, 207, 38, 62, 40, 86, 91, 190, 249, 214, 214, 189, 74, 134, 104, 189, 60, 71, 201, 62, 244, 162, 82, 62, 161, 51, 220, 189, 200, 98, 89, 190, 3, 105, 139, 189, 229, 37, 166, 59, 255, 48, 134, 62, 243, 171, 120, 61, 143, 40, 86, 62, 40, 140, 234, 187, 168, 105, 32, 191, 231, 252, 231, 190, 108, 88, 66, 190, 250, 4, 228, 62, 77, 237, 180, 188, 124, 82, 210, 62, 60, 163, 210, 190, 126, 240, 5, 191, 236, 234, 31, 60, 35, 29, 226, 188, 62, 227, 252, 189, 235, 246, 86, 63, 82, 19, 104, 189, 191, 41, 246, 190, 197, 72, 144, 62, 93, 106, 79, 190, 140, 159, 241, 62, 189, 208, 41, 62, 182, 128, 164, 190, 139, 96, 143, 190, 137, 111, 117, 189, 170, 56, 23, 62, 22, 51, 252, 190, 237, 32, 10, 61, 243, 147, 62, 61, 215, 16, 110, 189, 135, 238, 227, 190, 91, 197, 200, 61, 145, 142, 49, 190, 3, 107, 245, 61, 32, 231, 163, 190, 239, 205, 30, 58, 234, 239, 14, 62, 10, 216, 176, 189, 222, 229, 31, 61, 57, 255, 207, 188, 82, 72, 24, 61, 186, 105, 130, 190, 250, 172, 220, 62, 114, 240, 155, 189, 134, 162, 142, 62, 98, 51, 170, 62, 214, 152, 141, 62, 176, 3, 64, 190, 104, 214, 175, 189, 233, 117, 22, 190, 168, 86, 231, 187, 114, 181, 0, 62, 26, 12, 205, 189, 7, 3, 235, 60, 67, 195, 241, 189, 203, 32, 99, 190, 200, 8, 104, 189, 186, 105, 231, 61, 147, 57, 223, 60, 203, 46, 198, 61, 219, 25, 197, 61, 177, 78, 13, 62, 121, 19, 183, 188, 227, 194, 247, 188, 170, 115, 33, 190, 96, 229, 60, 189, 156, 99, 121, 61, 37, 77, 56, 61, 69, 198, 124, 62, 232, 85, 181, 61, 223, 21, 222, 61, 104, 201, 217, 62, 227, 74, 174, 60, 217, 85, 212, 60, 48, 73, 71, 191, 148, 60, 133, 61, 123, 28, 45, 189, 72, 109, 119, 62, 25, 245, 47, 190, 119, 210, 33, 63, 41, 114, 115, 187, 228, 99, 202, 189, 32, 150, 161, 61, 159, 67, 25, 189, 6, 193, 216, 62, 71, 179, 210, 61, 168, 57, 181, 190, 237, 203, 135, 60, 143, 198, 35, 190, 220, 207, 100, 62, 191, 67, 169, 190, 26, 57, 223, 61, 56, 105, 157, 60, 95, 9, 106, 62, 57, 127, 244, 190, 119, 126, 77, 62, 29, 205, 78, 190, 132, 188, 8, 188, 242, 206, 198, 190, 177, 232, 19, 190, 59, 202, 69, 61, 89, 86, 214, 61, 211, 204, 120, 61, 34, 223, 215, 61, 200, 241, 174, 188, 150, 97, 0, 191, 63, 157, 48, 62, 52, 130, 63, 189, 240, 33, 248, 60, 106, 203, 210, 62, 15, 153, 101, 62, 30, 232, 232, 187, 251, 183, 179, 189, 187, 39, 147, 61, 193, 215, 3, 62, 212, 206, 138, 191, 54, 35, 25, 62, 27, 29, 228, 61, 240, 151, 25, 190, 2, 74, 205, 60, 112, 193, 46, 190, 215, 17, 138, 62, 135, 33, 66, 190, 116, 215, 33, 191, 241, 222, 243, 61, 70, 150, 3, 62, 31, 203, 149, 191, 104, 1, 89, 58, 126, 122, 76, 190, 52, 86, 133, 190, 247, 121, 53, 190, 1, 177, 57, 190, 65, 166, 12, 190, 18, 90, 209, 61, 30, 187, 45, 190, 232, 146, 188, 62, 96, 170, 226, 61, 57, 79, 187, 190, 29, 111, 56, 62, 135, 127, 50, 61, 249, 59, 64, 62, 138, 81, 26, 189, 242, 116, 190, 190, 73, 109, 213, 189, 211, 249, 159, 189, 103, 184, 128, 62, 39, 167, 135, 190, 215, 112, 174, 62, 157, 195, 157, 189, 46, 17, 77, 62, 1, 15, 194, 61, 54, 22, 92, 191, 95, 235, 141, 189, 69, 13, 86, 60, 119, 230, 46, 62, 215, 24, 172, 190, 155, 125, 93, 62, 246, 17, 99, 62, 112, 172, 60, 62, 234, 198, 173, 62, 74, 210, 14, 62, 34, 123, 13, 190, 214, 34, 5, 62, 78, 152, 60, 62, 109, 193, 5, 60, 34, 76, 99, 62, 163, 116, 233, 189, 130, 129, 243, 61, 126, 35, 235, 189, 42, 233, 188, 189, 229, 24, 1, 191, 194, 176, 213, 61, 169, 35, 116, 190, 249, 181, 248, 61, 172, 133, 167, 190, 162, 103, 172, 62, 206, 112, 47, 62, 26, 227, 42, 190, 34, 146, 158, 62, 184, 107, 129, 190, 142, 152, 212, 62, 171, 172, 224, 189, 95, 35, 128, 189, 71, 174, 61, 61, 159, 155, 230, 61, 19, 3, 167, 61, 202, 55, 200, 190, 184, 13, 40, 189, 178, 153, 158, 61, 60, 98, 22, 62, 200, 107, 135, 190, 210, 227, 163, 62, 17, 44, 206, 188, 194, 96, 104, 187, 103, 142, 11, 190, 192, 76, 84, 62, 61, 55, 126, 62, 79, 202, 152, 62, 15, 209, 133, 188, 86, 84, 43, 62, 37, 13, 157, 189, 3, 17, 197, 190, 245, 167, 116, 59, 43, 91, 35, 62, 206, 227, 86, 189, 74, 142, 138, 189, 229, 199, 234, 189, 60, 131, 47, 191, 164, 91, 65, 188, 67, 114, 217, 61, 115, 174, 164, 190, 131, 108, 56, 189, 166, 213, 180, 190, 198, 157, 123, 62, 188, 76, 217, 189, 114, 222, 243, 189, 92, 152, 18, 189, 164, 194, 25, 190, 189, 87, 1, 190, 7, 98, 92, 190, 85, 187, 253, 62, 167, 201, 149, 189, 97, 226, 157, 62, 32, 41, 28, 190, 180, 220, 93, 188, 195, 176, 133, 60, 147, 193, 80, 190, 222, 117, 46, 62, 31, 102, 127, 61, 33, 39, 40, 62, 227, 188, 67, 62, 155, 214, 72, 191, 208, 51, 148, 61, 62, 166, 154, 59, 100, 87, 84, 61, 120, 146, 101, 62, 248, 10, 42, 191, 212, 137, 22, 190, 137, 24, 38, 60, 1, 125, 115, 63, 50, 114, 158, 61, 111, 74, 238, 190, 247, 98, 71, 62, 114, 201, 186, 61, 242, 214, 234, 62, 188, 156, 28, 62, 82, 250, 87, 190, 194, 94, 245, 189, 103, 99, 57, 190, 123, 70, 111, 61, 150, 236, 228, 190, 14, 130, 244, 62, 145, 222, 101, 62, 136, 248, 255, 61, 208, 144, 34, 191, 238, 222, 169, 190, 87, 139, 104, 190, 155, 16, 214, 62, 196, 172, 232, 190, 51, 171, 83, 190, 30, 25, 83, 189, 29, 251, 21, 187, 30, 134, 25, 189, 67, 44, 147, 62, 77, 83, 222, 61, 140, 61, 12, 191, 85, 225, 208, 62, 225, 160, 151, 190, 50, 183, 175, 62, 47, 229, 204, 62, 37, 50, 126, 62, 102, 181, 9, 61, 118, 65, 52, 62, 233, 254, 50, 62, 63, 72, 215, 60, 49, 23, 77, 62, 60, 113, 85, 62, 103, 209, 31, 189, 180, 146, 250, 189, 89, 86, 7, 190, 255, 34, 68, 62, 140, 130, 246, 61, 52, 240, 135, 189, 102, 12, 18, 190, 28, 139, 29, 62, 149, 23, 29, 62, 79, 199, 216, 61, 11, 236, 132, 62, 214, 205, 1, 190, 210, 41, 27, 61, 164, 134, 103, 61, 135, 191, 3, 62, 141, 115, 107, 59, 56, 184, 236, 61, 107, 234, 91, 187, 204, 234, 207, 62, 28, 165, 22, 190, 48, 133, 96, 190, 125, 138, 65, 189, 84, 75, 3, 190, 45, 59, 219, 189, 217, 11, 187, 61, 3, 131, 97, 189, 239, 79, 91, 62, 192, 210, 162, 60, 176, 24, 59, 62, 15, 242, 98, 62, 148, 145, 173, 60, 125, 28, 68, 188, 111, 60, 45, 190, 118, 116, 128, 190, 93, 102, 162, 190, 66, 109, 193, 190, 190, 10, 255, 189, 177, 160, 79, 62, 27, 205, 227, 61, 153, 152, 6, 190, 202, 255, 185, 61, 57, 160, 69, 189, 43, 61, 51, 62, 234, 142, 5, 61, 120, 152, 137, 62, 166, 54, 133, 62, 84, 239, 154, 189, 251, 131, 128, 190, 130, 170, 203, 190, 39, 217, 229, 189, 109, 122, 166, 61, 154, 35, 5, 190, 245, 39, 141, 62, 2, 115, 185, 190, 75, 150, 11, 191, 119, 137, 131, 60, 72, 66, 208, 62, 50, 91, 147, 188, 44, 77, 136, 62, 3, 145, 44, 190, 44, 60, 167, 189, 175, 182, 169, 189, 9, 192, 131, 189, 227, 220, 110, 189, 182, 141, 96, 189, 20, 43, 162, 189, 66, 105, 173, 189, 185, 69, 73, 188, 171, 110, 214, 61, 212, 151, 188, 190, 195, 163, 39, 61, 20, 13, 236, 61, 252, 191, 135, 62, 31, 168, 173, 61, 244, 236, 222, 62, 183, 226, 210, 187, 238, 12, 29, 61, 120, 73, 30, 189, 112, 131, 10, 62, 98, 144, 156, 61, 159, 156, 130, 61, 144, 149, 191, 61, 23, 132, 46, 62, 13, 150, 44, 188, 115, 188, 215, 190, 3, 209, 233, 59, 44, 26, 240, 61, 161, 126, 24, 62, 175, 176, 36, 61, 21, 183, 124, 190, 69, 50, 14, 62, 226, 12, 26, 189, 29, 21, 202, 190, 146, 216, 182, 62, 87, 8, 109, 62, 81, 24, 177, 62, 168, 153, 60, 191, 232, 111, 41, 190, 49, 162, 64, 190, 82, 131, 107, 189, 222, 190, 134, 189, 41, 3, 192, 190, 5, 24, 20, 62, 151, 4, 244, 190, 215, 221, 46, 189, 87, 65, 46, 61, 97, 112, 138, 62, 220, 89, 221, 190, 135, 154, 68, 190, 151, 233, 29, 190, 228, 249, 216, 60, 140, 73, 81, 61, 88, 109, 96, 61, 29, 207, 169, 189, 20, 88, 219, 189, 228, 236, 7, 190, 227, 224, 142, 189, 108, 47, 3, 62, 84, 78, 27, 190, 186, 231, 15, 190, 58, 139, 165, 62, 179, 71, 165, 60, 80, 68, 79, 62, 255, 17, 37, 61, 19, 214, 12, 190, 17, 124, 163, 61, 223, 56, 125, 190, 21, 54, 242, 62, 78, 170, 201, 61, 237, 60, 154, 190, 199, 32, 123, 189, 203, 1, 209, 61, 66, 66, 14, 62, 235, 240, 3, 191, 123, 238, 36, 62, 34, 225, 39, 61, 251, 113, 34, 62, 10, 216, 9, 191, 135, 37, 130, 62, 213, 2, 178, 190, 218, 163, 64, 188, 216, 2, 5, 191, 110, 199, 150, 59, 151, 137, 87, 62, 52, 143, 153, 62, 87, 64, 207, 61, 59, 152, 133, 61, 155, 144, 5, 190, 33, 132, 99, 190, 36, 65, 107, 62, 26, 140, 86, 62, 235, 237, 16, 187, 191, 64, 147, 189, 30, 200, 126, 189, 174, 244, 26, 190, 108, 54, 99, 189, 98, 236, 125, 62, 14, 123, 167, 61, 249, 115, 212, 62, 47, 43, 98, 190, 19, 194, 234, 61, 87, 179, 53, 61, 22, 140, 141, 62, 225, 235, 109, 189, 35, 184, 173, 61, 94, 38, 223, 59, 147, 202, 29, 188, 145, 117, 104, 188, 247, 52, 81, 62, 33, 54, 200, 62, 121, 244, 241, 187, 242, 134, 15, 62, 85, 241, 61, 62, 99, 79, 28, 62, 197, 244, 25, 61, 173, 220, 230, 188, 202, 221, 245, 60, 76, 172, 124, 61, 153, 205, 54, 62, 173, 97, 106, 189, 149, 194, 65, 189, 62, 236, 95, 189, 71, 129, 100, 61, 79, 126, 192, 61, 237, 236, 83, 190, 106, 166, 98, 188, 22, 56, 21, 191, 224, 184, 32, 190, 139, 69, 199, 62, 154, 72, 30, 191, 177, 233, 209, 62, 200, 127, 158, 191, 0, 199, 5, 62, 194, 18, 164, 62, 94, 12, 20, 191, 59, 59, 218, 190, 33, 242, 82, 191, 41, 200, 45, 62, 0, 84, 172, 190, 167, 196, 54, 189, 19, 27, 127, 62, 134, 148, 174, 62, 50, 196, 253, 189, 159, 185, 136, 189, 149, 206, 67, 190, 68, 111, 163, 60, 169, 84, 113, 62, 54, 215, 57, 62, 37, 25, 50, 62, 194, 108, 40, 62, 186, 209, 140, 189, 51, 233, 30, 61, 76, 124, 177, 61, 30, 59, 4, 191, 76, 252, 160, 61, 22, 50, 99, 191, 202, 103, 21, 62, 158, 13, 130, 190, 251, 88, 248, 190, 95, 198, 136, 61, 44, 148, 130, 62, 194, 55, 21, 191, 133, 225, 147, 62, 17, 176, 2, 191, 233, 95, 87, 62, 208, 65, 87, 62, 0, 124, 121, 191, 219, 214, 197, 190, 123, 247, 110, 188, 14, 15, 254, 61, 24, 20, 125, 190, 76, 133, 68, 62, 70, 24, 251, 61, 156, 129, 186, 62, 63, 19, 173, 62, 88, 173, 139, 61, 162, 40, 228, 189, 134, 175, 222, 188, 247, 9, 162, 61, 207, 197, 44, 62, 37, 212, 108, 62, 33, 187, 241, 189, 108, 165, 223, 62, 59, 89, 37, 189, 2, 1, 170, 188, 29, 72, 36, 191, 170, 241, 145, 62, 34, 114, 130, 190, 89, 109, 28, 190, 69, 223, 149, 190, 41, 76, 215, 61, 96, 38, 249, 61, 10, 178, 4, 191, 146, 125, 21, 62, 14, 117, 77, 62, 56, 241, 130, 62, 223, 110, 34, 191, 129, 217, 156, 190, 11, 8, 120, 190, 175, 241, 105, 190, 107, 33, 227, 60, 133, 182, 65, 190, 105, 218, 79, 62, 181, 247, 176, 190, 194, 94, 199, 61, 23, 30, 118, 62, 164, 213, 185, 61, 116, 3, 163, 190, 217, 151, 54, 190, 143, 201, 67, 189, 171, 227, 37, 62, 100, 214, 219, 189, 186, 89, 92, 189, 42, 96, 241, 61, 123, 167, 205, 190, 152, 61, 145, 61, 65, 193, 59, 190, 208, 187, 20, 61, 170, 150, 1, 190, 12, 191, 176, 190, 97, 188, 164, 61, 81, 85, 22, 62, 186, 148, 35, 191, 233, 161, 7, 190, 197, 118, 226, 61, 120, 38, 198, 190, 198, 11, 214, 62, 31, 245, 248, 188, 28, 200, 167, 61, 109, 147, 250, 58, 199, 78, 43, 191, 225, 219, 229, 189, 110, 233, 37, 62, 226, 211, 205, 189, 157, 125, 191, 190, 211, 235, 215, 61, 48, 105, 22, 62, 87, 72, 222, 62, 49, 84, 11, 62, 221, 207, 185, 188, 75, 79, 117, 190, 235, 224, 31, 62, 195, 9, 234, 59, 26, 183, 161, 189, 210, 183, 240, 189, 75, 118, 31, 62, 32, 148, 34, 62, 13, 233, 132, 61, 228, 108, 225, 189, 247, 111, 20, 191, 62, 130, 105, 62, 120, 164, 192, 190, 235, 167, 63, 190, 135, 96, 188, 190};
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
                alignas(float) const unsigned char memory[] = {145, 172, 251, 60, 191, 205, 109, 61, 38, 68, 21, 190, 229, 239, 72, 61, 114, 97, 106, 62, 92, 84, 33, 190, 230, 73, 217, 61, 110, 240, 12, 190, 123, 199, 196, 189, 184, 46, 132, 61, 82, 209, 247, 190, 156, 51, 84, 62, 215, 182, 154, 61, 195, 41, 198, 189, 204, 152, 4, 62, 200, 27, 57, 60, 38, 161, 253, 60, 191, 113, 37, 61, 109, 212, 57, 60, 66, 146, 131, 62, 167, 249, 36, 190, 120, 114, 6, 190, 9, 55, 13, 62, 98, 79, 19, 60, 228, 73, 32, 62, 126, 40, 191, 61, 248, 202, 145, 61, 78, 55, 202, 61, 48, 150, 134, 61, 53, 116, 29, 62, 64, 255, 110, 62, 208, 223, 42, 62};
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
                alignas(float) const unsigned char memory[] = {196, 60, 253, 190, 57, 129, 12, 60, 131, 164, 17, 63, 93, 213, 169, 62, 49, 216, 21, 62, 43, 197, 230, 60, 30, 23, 201, 61, 24, 87, 56, 61, 162, 123, 212, 62, 216, 88, 170, 189, 203, 99, 58, 63, 142, 203, 149, 190, 30, 5, 63, 62, 179, 159, 204, 190, 241, 54, 215, 190, 95, 192, 62, 190, 178, 235, 230, 190, 251, 110, 237, 190, 61, 61, 208, 62, 199, 43, 95, 190, 194, 0, 223, 62, 247, 116, 68, 191, 102, 223, 218, 187, 210, 108, 244, 62, 210, 60, 86, 189, 153, 73, 173, 190, 29, 168, 162, 190, 168, 105, 18, 62, 47, 204, 82, 63, 28, 93, 37, 63, 12, 71, 128, 190, 177, 141, 194, 62, 247, 177, 183, 188, 67, 66, 124, 61, 196, 202, 248, 62, 218, 34, 66, 62, 115, 130, 247, 190, 56, 6, 240, 60, 38, 218, 117, 190, 227, 25, 95, 60, 20, 185, 190, 60, 47, 19, 81, 190, 225, 46, 153, 62, 73, 120, 195, 62, 161, 196, 201, 189, 255, 190, 231, 62, 174, 193, 134, 62, 194, 96, 141, 62, 211, 33, 63, 190, 160, 239, 158, 190, 217, 107, 167, 189, 230, 116, 137, 190, 184, 58, 70, 62, 201, 57, 144, 62, 36, 19, 107, 190, 206, 165, 148, 189, 220, 100, 173, 190, 162, 65, 68, 62, 201, 208, 204, 58, 133, 77, 118, 190, 183, 237, 176, 62, 182, 82, 3, 188, 120, 156, 55, 62, 19, 239, 220, 189};
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
                alignas(float) const unsigned char memory[] = {184, 62, 5, 189, 11, 39, 211, 189};
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
    alignas(float) const unsigned char memory[] = {16, 1, 199, 191, 103, 92, 24, 62, 98, 56, 145, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {228, 157, 73, 64, 11, 15, 141, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0007/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}