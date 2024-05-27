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
                alignas(float) const unsigned char memory[] = {97, 233, 12, 191, 230, 91, 60, 191, 110, 249, 222, 190, 70, 203, 180, 190, 6, 216, 77, 62, 105, 90, 219, 62, 4, 97, 25, 62, 250, 131, 116, 63, 80, 41, 106, 190, 100, 147, 5, 191, 201, 108, 140, 62, 58, 135, 2, 191, 177, 164, 80, 190, 179, 200, 124, 62, 128, 247, 59, 58, 98, 26, 44, 191, 205, 129, 138, 191, 224, 126, 84, 189, 23, 95, 235, 62, 230, 127, 81, 63, 236, 100, 172, 62, 224, 128, 182, 190, 94, 21, 103, 62, 178, 24, 11, 191, 72, 75, 25, 189, 68, 228, 13, 62, 90, 23, 62, 63, 195, 206, 49, 63, 97, 11, 185, 60, 91, 243, 120, 189, 75, 52, 71, 63, 173, 193, 19, 63, 235, 54, 123, 62, 230, 206, 166, 190, 207, 70, 203, 63, 100, 103, 148, 62, 223, 91, 149, 61, 92, 22, 36, 62, 253, 142, 50, 189, 89, 227, 210, 190, 157, 253, 50, 191, 128, 109, 166, 62, 106, 242, 24, 63, 0, 168, 132, 190, 206, 20, 163, 190, 118, 58, 182, 190, 46, 167, 181, 191, 242, 101, 139, 190, 54, 241, 54, 63, 148, 39, 234, 190, 218, 173, 114, 190, 228, 97, 3, 191, 79, 136, 58, 191, 78, 143, 53, 63, 249, 9, 41, 62, 54, 189, 78, 191, 40, 240, 170, 62, 75, 77, 195, 188, 144, 111, 237, 62, 224, 253, 197, 62, 4, 193, 237, 62, 157, 141, 160, 191, 16, 99, 107, 190, 193, 17, 47, 190, 196, 5, 167, 63, 80, 186, 5, 63, 206, 173, 7, 191, 109, 5, 200, 190, 194, 106, 140, 189, 38, 249, 46, 62, 0, 58, 143, 191, 144, 243, 118, 190, 216, 199, 57, 63, 27, 40, 155, 61, 239, 147, 17, 191, 93, 81, 96, 62, 86, 185, 133, 191, 58, 115, 133, 62, 40, 5, 219, 190, 237, 183, 144, 191, 143, 232, 66, 190, 92, 214, 63, 62, 26, 141, 20, 63, 78, 129, 123, 190, 216, 198, 154, 190, 82, 29, 220, 61, 86, 235, 129, 62, 212, 221, 37, 63, 246, 165, 142, 191, 66, 198, 206, 190, 79, 105, 177, 190, 173, 20, 179, 191, 9, 247, 253, 190, 216, 35, 25, 63, 115, 103, 131, 63, 1, 86, 148, 62};
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
                alignas(float) const unsigned char memory[] = {58, 73, 102, 191, 245, 36, 158, 190, 193, 57, 28, 61, 170, 68, 249, 190, 66, 244, 249, 62, 62, 187, 52, 190, 72, 152, 210, 190, 107, 237, 210, 190, 34, 63, 226, 189, 104, 160, 14, 190, 47, 210, 8, 191, 92, 89, 140, 190, 178, 53, 252, 190, 72, 228, 100, 61, 43, 208, 115, 191, 177, 164, 53, 190, 174, 187, 22, 191, 189, 8, 164, 190, 216, 197, 34, 62, 133, 46, 7, 63, 178, 164, 212, 62, 81, 13, 145, 190, 147, 3, 89, 63, 92, 184, 22, 62, 157, 1, 188, 62, 90, 55, 117, 62, 21, 80, 62, 190, 168, 175, 177, 60, 222, 182, 245, 62, 5, 220, 223, 190, 62, 80, 186, 189, 225, 8, 207, 62};
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
                alignas(float) const unsigned char memory[] = {60, 46, 62, 189, 233, 47, 18, 190, 81, 51, 246, 61, 183, 246, 9, 62, 92, 223, 176, 62, 30, 214, 131, 190, 8, 86, 16, 190, 79, 20, 39, 62, 236, 252, 211, 189, 185, 134, 113, 62, 123, 188, 13, 191, 196, 144, 234, 61, 29, 182, 225, 61, 210, 116, 50, 62, 166, 129, 184, 188, 36, 32, 218, 190, 107, 97, 41, 190, 83, 22, 45, 62, 215, 131, 46, 188, 211, 196, 40, 62, 226, 202, 28, 61, 144, 16, 64, 61, 125, 6, 35, 62, 135, 82, 227, 61, 74, 239, 211, 62, 147, 37, 150, 186, 19, 101, 197, 190, 80, 13, 136, 62, 34, 209, 61, 62, 147, 177, 149, 190, 61, 181, 46, 190, 99, 163, 146, 61, 118, 78, 14, 191, 24, 79, 132, 61, 22, 244, 156, 190, 74, 17, 250, 62, 169, 61, 152, 60, 203, 116, 51, 61, 132, 76, 241, 190, 176, 89, 250, 190, 2, 194, 153, 190, 99, 67, 188, 62, 205, 196, 84, 191, 150, 97, 253, 189, 242, 196, 31, 62, 5, 48, 226, 61, 94, 213, 71, 190, 25, 34, 255, 190, 82, 208, 164, 190, 41, 222, 81, 62, 165, 53, 62, 189, 97, 193, 213, 61, 106, 113, 117, 62, 19, 64, 116, 190, 253, 43, 227, 61, 67, 248, 148, 189, 11, 151, 210, 61, 248, 176, 188, 62, 28, 1, 157, 190, 78, 91, 32, 60, 131, 188, 232, 61, 222, 180, 199, 189, 194, 231, 130, 191, 37, 170, 74, 190, 241, 23, 4, 61, 128, 61, 185, 190, 81, 119, 18, 62, 221, 99, 251, 188, 181, 197, 186, 189, 35, 4, 196, 190, 247, 38, 67, 62, 241, 135, 166, 62, 203, 132, 137, 62, 2, 243, 170, 62, 159, 145, 241, 62, 91, 117, 237, 190, 148, 58, 49, 190, 95, 244, 216, 189, 4, 63, 129, 62, 59, 97, 144, 190, 120, 124, 168, 61, 98, 247, 4, 61, 86, 254, 147, 62, 165, 106, 30, 62, 45, 112, 75, 190, 2, 79, 122, 190, 238, 49, 181, 190, 138, 181, 162, 62, 211, 131, 49, 189, 127, 242, 180, 60, 196, 180, 46, 62, 218, 251, 58, 189, 221, 219, 177, 189, 120, 6, 172, 62, 187, 5, 13, 62, 139, 73, 171, 62, 69, 130, 224, 189, 47, 161, 242, 189, 79, 75, 240, 190, 82, 249, 224, 62, 242, 126, 79, 189, 168, 5, 237, 60, 140, 76, 80, 62, 97, 82, 152, 62, 87, 107, 24, 190, 119, 41, 19, 62, 208, 148, 33, 63, 68, 148, 234, 190, 4, 165, 148, 61, 166, 216, 33, 62, 209, 160, 11, 61, 221, 165, 37, 190, 80, 143, 164, 188, 254, 85, 3, 62, 154, 102, 111, 62, 66, 223, 1, 62, 60, 111, 115, 190, 100, 86, 50, 190, 191, 14, 59, 188, 122, 92, 21, 191, 196, 187, 170, 190, 205, 35, 124, 62, 180, 165, 158, 189, 3, 229, 229, 190, 95, 249, 26, 62, 8, 70, 184, 62, 34, 144, 180, 189, 234, 70, 168, 60, 201, 243, 208, 190, 14, 5, 227, 61, 94, 172, 48, 189, 122, 220, 188, 62, 171, 142, 146, 189, 191, 234, 22, 190, 168, 154, 152, 190, 131, 85, 9, 61, 57, 123, 153, 190, 57, 41, 138, 62, 161, 218, 142, 191, 148, 64, 57, 61, 54, 218, 245, 61, 172, 89, 169, 61, 147, 155, 54, 62, 19, 157, 161, 191, 120, 3, 80, 62, 10, 111, 41, 62, 171, 110, 116, 187, 99, 223, 194, 61, 207, 177, 131, 62, 140, 152, 1, 189, 20, 161, 90, 62, 114, 200, 169, 189, 201, 3, 93, 61, 115, 60, 91, 62, 204, 225, 72, 191, 166, 205, 215, 187, 251, 160, 44, 61, 190, 96, 139, 62, 88, 221, 12, 191, 132, 81, 146, 190, 18, 138, 29, 189, 21, 94, 245, 189, 199, 76, 144, 61, 121, 251, 3, 61, 51, 181, 58, 188, 44, 77, 48, 190, 23, 249, 77, 61, 75, 107, 175, 61, 210, 119, 192, 61, 128, 19, 215, 190, 42, 99, 200, 61, 118, 138, 254, 190, 34, 41, 4, 62, 31, 240, 207, 189, 59, 217, 1, 62, 251, 184, 238, 190, 141, 108, 207, 190, 23, 245, 203, 61, 123, 252, 6, 189, 166, 20, 182, 190, 231, 168, 200, 190, 159, 27, 24, 190, 142, 237, 82, 190, 178, 233, 5, 190, 213, 171, 73, 62, 93, 125, 75, 190, 23, 246, 5, 190, 106, 23, 98, 62, 2, 158, 5, 190, 218, 226, 170, 190, 81, 105, 108, 187, 56, 138, 125, 190, 7, 38, 240, 189, 137, 77, 171, 189, 196, 196, 111, 190, 115, 240, 9, 190, 39, 138, 230, 61, 171, 2, 116, 59, 173, 138, 191, 189, 173, 2, 138, 189, 240, 37, 13, 190, 229, 244, 236, 59, 53, 137, 197, 188, 83, 76, 250, 61, 109, 205, 198, 61, 182, 96, 47, 190, 165, 166, 108, 189, 131, 42, 44, 62, 83, 21, 52, 190, 192, 78, 160, 188, 63, 197, 14, 190, 176, 85, 227, 189, 94, 208, 200, 61, 144, 160, 137, 188, 59, 57, 32, 190, 173, 221, 235, 189, 44, 75, 230, 189, 74, 116, 18, 190, 187, 199, 171, 189, 179, 187, 85, 190, 16, 188, 114, 188, 14, 190, 11, 62, 7, 174, 28, 190, 172, 207, 243, 61, 205, 161, 156, 190, 98, 86, 8, 61, 94, 109, 199, 190, 159, 72, 171, 190, 233, 2, 68, 189, 12, 62, 89, 188, 85, 221, 213, 189, 165, 200, 81, 190, 218, 48, 100, 190, 11, 130, 22, 190, 39, 73, 36, 191, 43, 180, 192, 62, 134, 195, 202, 189, 57, 191, 139, 61, 117, 88, 91, 189, 95, 90, 175, 189, 224, 92, 155, 60, 99, 9, 144, 61, 78, 90, 8, 189, 79, 90, 166, 61, 118, 114, 129, 62, 121, 244, 4, 62, 152, 97, 102, 62, 111, 107, 102, 62, 210, 180, 138, 62, 89, 106, 104, 61, 153, 181, 11, 61, 98, 26, 28, 189, 152, 48, 132, 61, 61, 102, 111, 189, 10, 203, 170, 61, 159, 13, 6, 190, 14, 110, 162, 188, 249, 255, 10, 62, 230, 85, 148, 189, 132, 153, 127, 61, 131, 72, 36, 190, 66, 212, 161, 189, 211, 245, 32, 190, 134, 165, 51, 190, 187, 173, 239, 61, 151, 1, 11, 190, 128, 232, 26, 61, 44, 83, 100, 61, 147, 26, 46, 61, 106, 103, 33, 190, 154, 211, 40, 190, 192, 194, 40, 190, 207, 96, 153, 61, 188, 185, 16, 61, 31, 154, 253, 189, 195, 206, 235, 188, 228, 50, 171, 189, 76, 104, 16, 189, 216, 152, 229, 61, 162, 231, 32, 62, 54, 169, 203, 189, 24, 59, 212, 60, 51, 57, 91, 61, 185, 92, 100, 60, 191, 55, 11, 189, 110, 137, 52, 190, 98, 91, 22, 189, 246, 40, 209, 189, 36, 44, 163, 61, 20, 135, 49, 62, 210, 8, 231, 62, 28, 72, 12, 62, 184, 225, 116, 62, 104, 141, 147, 190, 54, 173, 237, 190, 202, 119, 136, 62, 253, 177, 225, 60, 217, 92, 161, 190, 175, 246, 245, 189, 59, 235, 73, 190, 9, 1, 207, 188, 208, 97, 113, 190, 241, 158, 174, 185, 78, 131, 220, 190, 252, 208, 116, 61, 75, 172, 166, 190, 151, 151, 142, 189, 216, 146, 154, 190, 224, 191, 40, 190, 7, 137, 36, 60, 184, 64, 161, 62, 205, 165, 251, 61, 238, 168, 131, 61, 212, 242, 25, 61, 153, 74, 210, 189, 211, 186, 149, 62, 233, 50, 129, 62, 95, 41, 201, 189, 121, 140, 43, 61, 129, 164, 28, 191, 122, 253, 112, 62, 253, 12, 233, 189, 189, 113, 239, 61, 186, 235, 18, 190, 70, 169, 78, 188, 18, 6, 50, 62, 29, 123, 68, 61, 21, 136, 233, 61, 150, 131, 31, 61, 111, 218, 134, 62, 198, 179, 126, 62, 153, 250, 160, 189, 11, 41, 167, 189, 14, 131, 173, 189, 68, 30, 91, 190, 95, 179, 103, 62, 237, 45, 134, 190, 167, 1, 157, 60, 25, 174, 161, 61, 174, 195, 207, 188, 145, 65, 228, 60, 0, 99, 82, 189, 172, 139, 20, 190, 171, 87, 67, 190, 17, 10, 91, 61, 152, 124, 8, 62, 134, 190, 131, 62, 106, 0, 169, 189, 234, 236, 47, 188, 52, 94, 66, 190, 53, 109, 85, 62, 43, 196, 165, 62, 93, 81, 139, 190, 158, 63, 244, 187, 135, 122, 36, 190, 210, 178, 50, 190, 109, 14, 22, 60, 69, 21, 154, 61, 64, 206, 188, 190, 39, 67, 106, 190, 219, 154, 19, 191, 134, 81, 208, 61, 140, 22, 191, 188, 30, 108, 40, 190, 200, 200, 138, 61, 134, 153, 67, 61, 141, 78, 84, 190, 15, 250, 231, 190, 178, 148, 119, 190, 218, 166, 81, 190, 73, 127, 38, 190, 25, 254, 131, 61, 87, 80, 138, 62, 156, 248, 91, 189, 191, 139, 187, 62, 105, 185, 158, 189, 229, 103, 145, 61, 168, 125, 38, 189, 178, 185, 143, 188, 26, 211, 128, 189, 153, 81, 194, 62, 86, 206, 130, 190, 187, 130, 92, 190, 8, 110, 20, 62, 51, 145, 32, 191, 217, 246, 78, 188, 152, 60, 164, 62, 211, 37, 138, 62, 160, 157, 249, 60, 26, 88, 41, 190, 171, 27, 120, 62, 90, 74, 103, 62, 227, 132, 62, 62, 168, 198, 12, 62, 69, 232, 253, 62, 250, 86, 152, 188, 129, 86, 117, 61, 183, 7, 16, 62, 158, 107, 200, 190, 167, 125, 136, 190, 43, 158, 44, 190, 161, 181, 58, 62, 31, 18, 203, 62, 181, 166, 50, 62, 49, 232, 202, 186, 71, 10, 52, 62, 217, 193, 111, 189, 17, 137, 193, 190, 4, 155, 163, 189, 140, 223, 59, 62, 109, 134, 186, 61, 194, 31, 169, 62, 134, 94, 8, 62, 48, 56, 64, 190, 202, 170, 133, 190, 206, 46, 110, 62, 9, 117, 65, 188, 211, 192, 50, 191, 246, 202, 122, 62, 203, 189, 92, 190, 11, 27, 148, 61, 60, 11, 70, 62, 98, 76, 57, 62, 150, 7, 58, 62, 29, 2, 203, 62, 52, 155, 150, 62, 61, 189, 203, 62, 8, 224, 109, 190, 29, 65, 32, 190, 170, 91, 91, 189, 148, 88, 1, 191, 115, 236, 188, 62, 135, 199, 240, 190, 170, 155, 185, 190, 48, 128, 13, 62, 201, 65, 15, 62, 93, 156, 9, 190, 191, 244, 100, 190, 246, 120, 71, 62, 235, 191, 46, 190, 245, 79, 18, 189, 227, 102, 219, 190, 233, 201, 160, 62, 155, 167, 78, 190, 221, 145, 14, 62, 165, 169, 168, 190, 28, 12, 198, 62, 112, 139, 151, 62, 91, 198, 193, 189, 182, 62, 98, 191, 85, 103, 183, 62, 164, 65, 8, 190, 5, 214, 90, 62, 50, 178, 216, 62, 93, 226, 8, 61, 240, 144, 93, 62, 241, 166, 0, 63, 188, 178, 21, 62, 73, 38, 188, 62, 196, 54, 249, 190, 110, 198, 106, 61, 37, 55, 90, 189, 24, 121, 1, 191, 47, 229, 208, 189, 3, 180, 50, 191, 224, 85, 108, 190, 127, 52, 41, 190, 149, 126, 12, 62, 233, 35, 75, 190, 163, 164, 108, 191, 196, 88, 115, 62, 214, 78, 145, 190, 60, 65, 188, 188, 245, 166, 120, 191, 149, 31, 70, 62, 157, 239, 104, 189, 237, 59, 93, 188, 188, 97, 7, 191, 109, 216, 155, 61, 21, 208, 133, 61, 26, 1, 233, 61, 213, 193, 106, 191, 35, 136, 140, 62, 50, 22, 189, 190, 207, 107, 207, 61, 103, 185, 137, 61, 22, 135, 104, 62, 172, 77, 192, 62, 107, 16, 48, 190, 204, 36, 19, 62, 127, 69, 132, 61, 63, 38, 81, 191, 140, 36, 87, 60, 92, 1, 84, 62, 21, 4, 225, 190, 29, 52, 170, 59, 218, 55, 240, 190, 137, 187, 39, 61, 175, 30, 143, 62, 114, 28, 98, 190, 19, 90, 78, 190, 58, 41, 103, 191, 78, 74, 148, 62, 66, 73, 236, 190, 112, 217, 2, 190, 48, 144, 188, 190, 75, 7, 135, 62, 60, 255, 0, 189, 169, 37, 242, 189, 53, 219, 229, 190, 158, 155, 125, 62, 81, 228, 122, 62, 56, 126, 230, 189, 198, 11, 160, 188, 204, 244, 119, 190, 200, 161, 247, 60, 213, 58, 165, 189, 127, 213, 61, 190, 100, 172, 108, 61, 187, 183, 127, 190, 240, 62, 151, 188, 193, 196, 46, 191, 207, 39, 224, 190, 58, 37, 85, 62, 3, 60, 253, 61, 188, 144, 78, 187, 117, 31, 114, 189, 5, 125, 110, 62, 48, 201, 221, 62, 113, 110, 179, 61, 104, 45, 215, 61, 186, 175, 166, 189, 26, 27, 154, 62, 225, 26, 38, 62, 234, 98, 228, 62, 208, 93, 190, 62, 198, 148, 62, 61, 230, 162, 54, 190, 116, 207, 9, 190, 70, 166, 173, 190, 100, 189, 230, 189, 40, 49, 47, 62, 107, 172, 71, 191, 70, 196, 105, 189, 162, 48, 157, 189, 31, 150, 168, 189, 160, 95, 125, 189, 144, 62, 7, 190, 32, 75, 24, 190, 44, 194, 7, 190, 59, 8, 9, 62, 6, 18, 39, 61, 102, 190, 206, 61, 42, 163, 50, 189, 244, 181, 178, 61, 167, 247, 147, 61, 210, 237, 101, 61, 64, 132, 107, 190, 218, 79, 0, 190, 164, 67, 234, 61, 97, 59, 125, 59, 25, 115, 32, 190, 42, 7, 7, 190, 43, 113, 221, 189, 112, 120, 140, 60, 183, 6, 104, 59, 199, 128, 126, 189, 216, 42, 34, 189, 97, 211, 17, 190, 98, 212, 21, 189, 105, 56, 171, 61, 61, 228, 33, 61, 125, 69, 215, 61, 22, 83, 155, 61, 175, 192, 6, 189, 87, 182, 32, 190, 129, 88, 176, 190, 131, 218, 38, 62, 70, 85, 88, 190, 163, 247, 75, 190, 222, 248, 20, 190, 178, 47, 90, 62, 157, 90, 104, 189, 104, 250, 241, 190, 124, 108, 36, 190, 142, 218, 241, 189, 154, 56, 5, 191, 99, 169, 44, 62, 233, 62, 249, 189, 196, 28, 180, 61, 152, 81, 16, 61, 66, 148, 85, 62, 18, 198, 65, 62, 239, 129, 17, 62, 160, 71, 130, 190, 44, 171, 184, 61, 31, 149, 111, 62, 134, 65, 76, 62, 77, 243, 129, 61, 209, 144, 84, 61, 186, 148, 169, 62, 123, 63, 144, 61, 87, 200, 16, 62, 23, 70, 0, 190, 98, 66, 141, 61, 240, 54, 162, 59, 92, 240, 249, 189, 107, 57, 107, 188, 233, 47, 102, 61, 72, 152, 91, 190, 250, 184, 87, 189, 222, 219, 97, 190, 18, 93, 122, 61, 103, 10, 26, 190, 169, 18, 154, 62, 87, 128, 49, 62, 244, 101, 137, 61, 21, 202, 1, 191, 106, 232, 212, 62, 245, 99, 89, 190, 119, 100, 129, 61, 54, 143, 114, 191, 143, 173, 10, 189, 156, 188, 133, 190, 15, 123, 165, 61, 139, 58, 169, 190, 133, 209, 88, 190, 47, 116, 164, 189, 99, 180, 169, 190, 17, 33, 152, 189, 131, 93, 241, 61, 62, 195, 92, 190, 77, 115, 72, 190, 141, 168, 117, 190, 16, 128, 138, 190, 224, 231, 147, 189, 249, 64, 127, 62, 249, 84, 157, 187, 172, 35, 199, 61, 195, 84, 223, 61, 138, 193, 103, 60, 65, 232, 34, 61, 187, 86, 35, 190, 199, 146, 71, 190, 204, 125, 95, 62, 122, 70, 139, 61, 198, 227, 117, 190, 109, 155, 132, 61, 102, 240, 162, 61, 75, 111, 36, 61, 102, 29, 249, 190, 2, 12, 219, 189, 93, 190, 149, 60, 2, 211, 188, 189, 198, 173, 65, 190, 12, 24, 44, 189, 103, 252, 208, 190, 116, 168, 223, 189, 173, 57, 46, 59, 246, 250, 34, 62, 96, 53, 169, 62, 111, 87, 137, 189, 17, 114, 77, 62, 29, 73, 1, 60, 48, 41, 88, 62, 36, 40, 24, 62, 224, 160, 220, 189, 2, 193, 23, 190, 221, 224, 3, 60, 219, 163, 177, 189, 146, 110, 251, 189, 12, 125, 28, 62, 128, 173, 248, 189, 56, 140, 155, 189, 163, 130, 50, 190, 25, 201, 234, 189, 36, 71, 126, 61, 116, 150, 196, 189, 35, 29, 85, 189, 18, 57, 17, 62, 134, 200, 181, 188, 38, 32, 245, 61, 109, 115, 201, 188, 226, 83, 156, 61, 15, 133, 128, 187, 209, 234, 39, 190, 147, 57, 22, 62, 173, 91, 220, 188, 224, 46, 205, 61, 67, 135, 11, 190, 139, 78, 32, 59, 191, 152, 120, 189, 222, 203, 40, 190, 157, 85, 42, 189, 53, 232, 180, 188, 90, 53, 114, 61, 132, 142, 136, 189, 57, 170, 143, 189, 183, 120, 49, 190, 172, 118, 5, 61, 153, 49, 146, 60, 145, 186, 94, 189, 225, 141, 0, 190, 247, 55, 89, 60, 37, 81, 1, 191, 75, 198, 179, 62, 153, 55, 69, 190, 177, 24, 148, 189, 221, 76, 208, 61, 144, 49, 250, 61, 125, 18, 1, 191, 73, 112, 22, 191, 72, 96, 189, 190, 105, 217, 184, 60, 95, 22, 50, 191, 149, 182, 196, 61, 43, 152, 45, 61, 198, 220, 150, 62, 138, 30, 120, 62, 223, 2, 148, 189, 171, 90, 210, 62, 193, 75, 42, 188, 58, 215, 142, 189, 247, 241, 168, 61, 234, 189, 88, 62, 167, 104, 224, 61, 97, 35, 180, 62, 126, 202, 50, 62, 64, 189, 45, 62, 67, 80, 4, 62, 50, 255, 114, 190, 165, 45, 155, 190, 57, 255, 119, 188, 104, 128, 181, 62, 193, 49, 151, 189, 7, 29, 243, 189, 62, 84, 146, 188, 198, 190, 64, 189, 65, 79, 37, 187, 219, 206, 233, 189, 1, 147, 79, 61, 213, 190, 244, 60, 62, 121, 169, 61, 218, 38, 182, 189, 13, 77, 1, 190, 216, 102, 15, 62, 243, 200, 244, 188, 123, 157, 39, 190, 120, 34, 170, 189, 206, 174, 14, 189, 108, 229, 90, 60, 243, 79, 1, 190, 206, 0, 7, 189, 245, 74, 130, 61, 144, 63, 221, 61, 106, 140, 42, 190, 248, 224, 36, 190, 242, 6, 248, 189, 59, 62, 72, 189, 43, 24, 240, 188, 192, 199, 90, 61, 36, 54, 248, 189, 6, 131, 12, 190, 61, 143, 142, 188, 196, 71, 60, 189, 37, 202, 132, 189, 157, 84, 128, 61, 29, 145, 4, 189, 174, 165, 176, 190, 162, 25, 7, 62, 117, 62, 195, 188, 4, 3, 35, 60, 111, 34, 47, 61, 77, 196, 71, 62, 58, 237, 252, 190, 210, 91, 218, 190, 246, 90, 211, 190, 61, 141, 56, 190, 142, 243, 125, 191, 176, 107, 117, 190, 76, 131, 57, 189, 21, 206, 8, 63, 24, 66, 200, 187, 68, 107, 181, 189, 210, 228, 101, 189, 255, 83, 130, 62, 131, 196, 63, 190, 16, 96, 30, 190, 220, 132, 190, 62, 45, 213, 67, 190, 20, 133, 123, 62, 167, 69, 90, 62, 131, 136, 180, 61, 66, 184, 151, 62, 167, 187, 111, 190, 65, 112, 199, 188, 150, 202, 195, 189, 50, 89, 42, 62, 247, 101, 178, 189, 151, 126, 46, 189, 181, 131, 9, 189, 139, 75, 67, 60, 16, 131, 2, 190, 80, 155, 155, 61, 73, 53, 43, 189, 38, 48, 57, 187, 213, 198, 237, 189, 145, 238, 129, 189, 42, 72, 207, 60, 15, 217, 108, 189, 23, 139, 137, 61, 38, 65, 16, 190, 255, 107, 175, 61, 42, 179, 126, 189, 77, 186, 143, 58, 117, 171, 56, 61, 101, 58, 174, 61, 95, 164, 38, 61, 42, 230, 181, 59, 10, 159, 37, 189, 92, 37, 115, 189, 159, 161, 10, 61, 245, 92, 207, 188, 237, 235, 222, 189, 232, 116, 5, 190, 254, 184, 48, 190, 144, 245, 62, 188, 171, 234, 169, 188, 180, 133, 96, 187, 225, 197, 74, 61, 44, 121, 248, 61, 147, 174, 40, 62, 13, 255, 64, 189, 136, 75, 42, 61, 73, 14, 214, 189, 28, 99, 9, 190, 160, 213, 65, 60, 49, 78, 135, 189, 71, 53, 141, 189, 45, 77, 240, 61, 19, 75, 196, 59, 169, 86, 168, 189, 197, 153, 19, 190, 97, 169, 40, 189, 172, 155, 43, 190, 177, 215, 245, 61, 72, 243, 195, 61, 210, 216, 199, 61, 216, 99, 153, 189, 127, 219, 31, 190, 155, 122, 158, 61, 128, 15, 42, 189, 26, 25, 236, 188, 140, 124, 0, 190, 16, 146, 70, 60, 238, 150, 136, 61, 147, 198, 54, 190, 8, 168, 65, 189, 48, 39, 13, 62, 220, 52, 155, 61, 22, 139, 19, 190, 194, 36, 59, 190, 127, 78, 174, 189, 216, 24, 49, 190, 85, 172, 142, 190, 1, 10, 86, 62, 83, 120, 239, 190, 43, 120, 208, 62, 53, 112, 249, 61, 201, 23, 207, 190, 255, 221, 237, 190, 127, 86, 207, 190, 102, 182, 165, 190, 13, 60, 4, 60, 4, 68, 130, 191, 78, 238, 106, 62, 90, 251, 27, 189, 139, 51, 151, 62, 115, 68, 27, 191, 232, 72, 73, 191, 253, 116, 201, 190, 114, 71, 34, 62, 184, 124, 141, 190, 31, 79, 65, 62, 131, 19, 146, 62, 32, 158, 7, 61, 200, 136, 239, 60, 79, 101, 90, 189, 42, 89, 216, 188, 33, 48, 16, 62, 210, 119, 31, 191, 184, 237, 131, 190, 35, 179, 243, 61, 7, 49, 130, 189, 230, 138, 10, 191, 250, 33, 168, 190, 16, 217, 125, 190, 214, 54, 21, 62, 94, 172, 153, 62, 227, 161, 18, 62, 255, 25, 86, 61, 205, 253, 173, 190, 141, 72, 23, 191, 15, 176, 34, 62, 112, 46, 81, 189, 165, 19, 253, 189, 88, 40, 130, 191, 80, 141, 157, 62, 71, 62, 83, 189, 212, 246, 46, 62, 132, 153, 159, 190, 17, 136, 105, 190, 219, 249, 208, 190, 191, 245, 217, 61, 247, 214, 22, 190, 186, 25, 31, 61, 219, 226, 4, 191, 177, 212, 102, 189, 170, 5, 24, 62, 130, 107, 169, 60, 49, 248, 246, 60, 179, 193, 139, 190, 87, 129, 188, 190, 124, 202, 71, 62, 235, 177, 61, 61, 192, 251, 19, 191, 235, 67, 168, 190, 31, 14, 236, 61, 79, 244, 37, 191, 209, 104, 109, 62, 125, 204, 251, 190, 110, 221, 187, 189, 30, 119, 225, 61, 23, 119, 88, 189, 140, 85, 192, 188, 161, 220, 203, 190, 30, 211, 191, 189, 249, 145, 144, 190, 204, 234, 238, 190, 214, 2, 170, 62, 209, 71, 34, 61, 45, 12, 37, 62, 171, 42, 194, 189, 65, 166, 147, 191, 197, 23, 151, 189, 174, 118, 248, 61, 46, 171, 219, 190, 26, 178, 54, 62, 70, 133, 110, 190, 152, 217, 37, 189, 93, 49, 144, 62, 99, 224, 55, 190, 45, 226, 44, 190, 254, 119, 70, 190, 10, 213, 229, 190, 206, 232, 232, 189, 160, 233, 145, 62, 227, 217, 192, 189, 86, 92, 134, 191, 43, 51, 165, 190, 164, 9, 206, 189, 114, 83, 185, 62, 222, 81, 60, 190, 187, 197, 75, 190, 34, 208, 2, 62, 138, 104, 92, 189, 45, 177, 151, 189, 34, 90, 136, 190, 31, 164, 3, 62, 246, 108, 194, 61, 213, 171, 67, 191, 171, 136, 60, 62, 149, 152, 48, 62, 129, 95, 135, 60, 124, 196, 138, 62, 212, 133, 1, 190, 179, 82, 249, 60, 34, 10, 52, 62, 20, 80, 225, 190, 160, 157, 227, 188, 67, 165, 71, 189, 132, 5, 64, 62, 90, 136, 18, 62, 59, 162, 161, 61, 50, 115, 132, 62, 253, 159, 9, 190, 128, 177, 212, 190, 193, 45, 214, 60, 76, 8, 22, 190, 26, 51, 207, 62, 246, 116, 171, 189, 69, 80, 141, 190, 203, 186, 56, 59, 192, 118, 109, 191, 17, 13, 34, 190, 192, 20, 189, 61, 52, 175, 128, 62, 38, 173, 189, 62, 232, 219, 212, 61, 48, 162, 32, 190, 200, 64, 144, 190, 82, 109, 86, 191, 171, 110, 4, 190, 29, 41, 202, 189, 244, 149, 44, 62, 236, 125, 199, 188, 229, 142, 200, 189, 140, 61, 206, 61, 16, 30, 194, 189, 188, 67, 173, 190, 172, 13, 159, 61, 240, 221, 80, 61, 107, 51, 1, 190, 249, 185, 146, 190, 49, 240, 180, 62, 36, 183, 6, 62, 240, 157, 192, 60, 46, 96, 157, 189, 113, 15, 83, 62, 219, 68, 149, 61, 229, 170, 36, 62, 185, 78, 11, 189, 237, 12, 76, 61, 204, 112, 7, 190};
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
                alignas(float) const unsigned char memory[] = {168, 164, 193, 62, 212, 13, 68, 58, 43, 95, 43, 61, 61, 194, 41, 62, 209, 129, 42, 62, 96, 10, 147, 190, 170, 229, 45, 61, 211, 115, 114, 62, 124, 64, 142, 187, 131, 9, 20, 62, 137, 141, 34, 62, 138, 33, 78, 62, 254, 200, 157, 62, 197, 167, 155, 62, 208, 8, 152, 62, 17, 231, 239, 61, 202, 242, 180, 189, 64, 89, 132, 189, 181, 80, 145, 62, 162, 123, 163, 60, 51, 219, 184, 62, 166, 18, 149, 188, 237, 170, 200, 189, 92, 4, 253, 189, 54, 121, 57, 62, 140, 153, 12, 190, 145, 24, 247, 189, 53, 188, 87, 62, 241, 218, 144, 189, 226, 40, 239, 188, 162, 19, 131, 58, 104, 93, 48, 62};
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
                alignas(float) const unsigned char memory[] = {164, 246, 63, 62, 15, 32, 97, 63, 234, 173, 207, 190, 215, 147, 137, 190, 75, 108, 90, 63, 104, 86, 144, 188, 229, 66, 174, 61, 126, 2, 165, 62, 100, 235, 158, 61, 125, 56, 65, 63, 87, 227, 142, 189, 171, 160, 40, 62, 51, 142, 133, 190, 99, 92, 56, 191, 177, 153, 147, 191, 167, 185, 86, 191, 124, 154, 87, 62, 65, 146, 243, 189, 33, 63, 147, 62, 223, 37, 138, 62, 14, 251, 83, 59, 137, 219, 214, 61, 64, 190, 191, 62, 178, 202, 35, 190, 151, 230, 17, 63, 173, 31, 35, 62, 57, 39, 181, 189, 40, 102, 104, 63, 127, 74, 67, 191, 238, 154, 95, 63, 70, 2, 244, 62, 89, 28, 30, 190, 28, 170, 227, 190, 124, 104, 111, 61, 88, 184, 34, 60, 226, 101, 55, 62, 40, 59, 159, 61, 137, 93, 175, 190, 164, 44, 143, 61, 54, 7, 12, 190, 134, 177, 94, 60, 223, 134, 97, 62, 30, 76, 218, 189, 110, 255, 14, 191, 165, 151, 41, 189, 40, 145, 76, 61, 199, 156, 184, 62, 153, 122, 189, 60, 96, 32, 78, 62, 21, 212, 11, 190, 231, 255, 175, 190, 60, 198, 158, 61, 53, 212, 209, 190, 214, 30, 247, 187, 172, 112, 190, 62, 60, 228, 200, 189, 198, 192, 23, 61, 80, 151, 149, 188, 7, 47, 165, 188, 157, 161, 149, 62, 206, 72, 17, 62, 76, 31, 230, 62, 59, 151, 128, 62, 79, 121, 156, 190};
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
                alignas(float) const unsigned char memory[] = {219, 40, 117, 189, 104, 86, 129, 190};
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
    alignas(float) const unsigned char memory[] = {72, 45, 233, 62, 175, 45, 143, 62, 16, 33, 96, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {86, 240, 192, 191, 12, 148, 151, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0069/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}