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
                alignas(float) const unsigned char memory[] = {10, 252, 182, 190, 148, 160, 36, 63, 123, 164, 197, 190, 237, 180, 48, 63, 131, 126, 111, 191, 8, 158, 139, 190, 86, 146, 91, 62, 125, 174, 120, 63, 219, 244, 92, 62, 67, 27, 94, 63, 113, 91, 236, 62, 62, 46, 61, 62, 80, 209, 32, 63, 181, 166, 108, 63, 68, 59, 110, 62, 8, 224, 251, 190, 105, 206, 54, 191, 28, 134, 44, 191, 135, 144, 239, 190, 78, 249, 42, 63, 129, 36, 217, 190, 130, 174, 35, 190, 29, 181, 135, 190, 46, 151, 5, 62, 170, 166, 10, 191, 211, 28, 123, 191, 96, 10, 113, 190, 113, 95, 205, 190, 209, 112, 232, 59, 134, 133, 136, 62, 32, 40, 62, 190, 87, 55, 223, 190, 96, 59, 177, 62, 32, 49, 104, 63, 220, 253, 63, 191, 149, 207, 211, 190, 235, 156, 197, 190, 18, 74, 204, 190, 36, 45, 47, 191, 255, 200, 148, 190, 142, 134, 120, 62, 31, 54, 33, 191, 56, 18, 209, 190, 117, 7, 36, 191, 52, 42, 67, 189, 216, 245, 252, 189, 19, 115, 61, 60, 142, 215, 59, 189, 95, 157, 41, 61, 1, 204, 133, 63, 201, 200, 77, 62, 145, 37, 40, 190, 99, 189, 163, 191, 160, 149, 211, 190, 196, 161, 137, 189, 193, 178, 2, 63, 65, 5, 213, 62, 220, 236, 119, 61, 254, 219, 224, 187, 72, 141, 226, 190, 209, 37, 21, 63, 22, 221, 78, 191, 183, 87, 251, 190, 200, 165, 168, 190, 239, 254, 194, 190, 234, 203, 56, 189, 229, 116, 52, 190, 79, 172, 96, 191, 157, 198, 62, 190, 88, 106, 23, 62, 246, 79, 48, 63, 224, 46, 58, 62, 174, 235, 224, 189, 139, 17, 191, 190, 244, 192, 103, 62, 175, 253, 33, 191, 231, 58, 91, 191, 18, 104, 10, 191, 232, 82, 48, 191, 156, 199, 113, 61, 168, 41, 242, 62, 217, 214, 51, 63, 9, 156, 68, 191, 92, 77, 248, 189, 120, 253, 11, 62, 14, 140, 182, 62, 100, 131, 226, 190, 203, 0, 150, 190, 183, 228, 72, 191, 252, 118, 158, 190, 129, 210, 52, 187, 104, 233, 44, 61, 228, 101, 92, 62, 79, 144, 112, 191, 6, 64, 50, 63, 56, 199, 216, 61};
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
                alignas(float) const unsigned char memory[] = {10, 82, 169, 190, 1, 241, 74, 62, 242, 153, 8, 61, 39, 169, 246, 189, 81, 4, 161, 189, 237, 14, 173, 62, 96, 109, 1, 62, 140, 248, 152, 62, 147, 129, 114, 61, 228, 136, 10, 190, 213, 205, 45, 190, 216, 159, 128, 191, 164, 20, 0, 62, 175, 129, 186, 60, 39, 237, 209, 62, 224, 76, 241, 62, 195, 164, 132, 62, 150, 186, 154, 62, 232, 244, 20, 61, 6, 64, 194, 62, 200, 196, 148, 190, 104, 162, 162, 62, 175, 136, 237, 62, 199, 182, 255, 190, 87, 210, 141, 189, 144, 234, 29, 190, 246, 193, 4, 191, 8, 103, 239, 62, 134, 142, 33, 62, 85, 7, 180, 187, 6, 68, 143, 62, 65, 50, 152, 61};
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
                alignas(float) const unsigned char memory[] = {48, 241, 47, 62, 134, 71, 213, 61, 5, 122, 159, 190, 167, 88, 253, 189, 95, 56, 165, 190, 164, 53, 253, 190, 43, 248, 152, 190, 178, 100, 146, 62, 117, 227, 49, 189, 247, 184, 205, 61, 118, 45, 213, 189, 143, 100, 193, 61, 151, 33, 86, 191, 69, 124, 156, 191, 57, 59, 89, 62, 133, 102, 215, 61, 253, 57, 138, 189, 154, 150, 232, 190, 200, 251, 91, 61, 191, 33, 77, 190, 10, 43, 194, 190, 6, 113, 146, 62, 15, 210, 107, 62, 174, 122, 173, 61, 7, 243, 115, 190, 171, 116, 166, 191, 112, 31, 11, 61, 238, 151, 46, 62, 102, 213, 158, 191, 137, 160, 170, 190, 47, 122, 151, 189, 202, 2, 86, 61, 238, 0, 178, 190, 214, 32, 76, 190, 88, 150, 18, 61, 9, 183, 230, 62, 15, 39, 187, 62, 197, 148, 243, 61, 188, 25, 106, 62, 198, 46, 161, 189, 201, 121, 99, 62, 102, 170, 71, 189, 60, 16, 111, 62, 210, 253, 44, 189, 61, 69, 143, 61, 42, 21, 62, 62, 74, 165, 160, 61, 100, 180, 217, 61, 42, 113, 232, 58, 156, 168, 67, 190, 119, 110, 20, 190, 242, 215, 138, 62, 67, 221, 155, 190, 157, 229, 142, 189, 11, 165, 137, 190, 66, 182, 29, 190, 85, 22, 186, 60, 88, 94, 136, 61, 206, 131, 84, 190, 230, 156, 96, 190, 177, 186, 120, 62, 83, 124, 62, 62, 0, 195, 152, 185, 142, 232, 147, 189, 65, 145, 191, 61, 153, 102, 26, 62, 154, 174, 181, 190, 29, 42, 133, 62, 37, 59, 180, 61, 0, 131, 212, 189, 165, 65, 14, 62, 6, 218, 251, 61, 241, 110, 180, 190, 33, 1, 172, 189, 82, 25, 198, 188, 230, 228, 230, 190, 64, 31, 234, 188, 52, 215, 143, 62, 179, 57, 83, 190, 97, 197, 60, 62, 18, 117, 154, 190, 54, 82, 147, 189, 122, 228, 169, 190, 231, 195, 42, 62, 85, 251, 120, 190, 161, 234, 148, 189, 217, 9, 137, 60, 226, 72, 221, 188, 215, 27, 220, 189, 168, 209, 95, 189, 200, 153, 225, 190, 32, 100, 89, 62, 165, 172, 119, 62, 231, 234, 79, 190, 30, 15, 57, 190, 176, 132, 80, 60, 227, 62, 16, 61, 113, 231, 48, 188, 7, 162, 149, 62, 209, 52, 163, 190, 54, 13, 70, 62, 5, 218, 87, 62, 246, 137, 111, 62, 133, 56, 42, 190, 143, 107, 81, 190, 87, 215, 221, 189, 80, 22, 10, 190, 2, 0, 119, 189, 208, 10, 61, 62, 32, 41, 139, 62, 76, 170, 134, 190, 216, 241, 114, 187, 70, 143, 177, 61, 97, 174, 26, 190, 220, 249, 72, 62, 220, 159, 186, 187, 57, 141, 12, 189, 193, 211, 200, 190, 198, 127, 163, 190, 176, 107, 115, 61, 39, 142, 186, 60, 169, 78, 171, 61, 251, 228, 172, 187, 47, 221, 217, 60, 211, 197, 110, 62, 89, 152, 198, 189, 78, 226, 167, 189, 245, 235, 110, 62, 108, 238, 176, 190, 128, 205, 50, 190, 171, 174, 16, 190, 105, 44, 66, 62, 252, 19, 57, 61, 46, 186, 176, 187, 240, 253, 83, 60, 149, 104, 247, 61, 240, 254, 6, 62, 188, 84, 108, 62, 29, 149, 89, 190, 227, 205, 2, 190, 113, 46, 36, 189, 92, 68, 249, 61, 124, 84, 108, 187, 21, 187, 107, 62, 139, 102, 14, 61, 218, 197, 192, 189, 169, 1, 1, 190, 124, 228, 179, 61, 28, 242, 137, 189, 123, 21, 37, 61, 80, 34, 223, 60, 136, 142, 67, 61, 92, 32, 104, 190, 195, 105, 71, 62, 71, 180, 63, 190, 89, 86, 151, 61, 198, 85, 63, 188, 224, 225, 49, 189, 214, 56, 1, 60, 184, 88, 186, 62, 145, 48, 227, 60, 43, 228, 48, 191, 116, 214, 156, 62, 31, 176, 193, 62, 222, 132, 172, 62, 238, 47, 49, 189, 246, 42, 84, 62, 248, 11, 217, 188, 233, 126, 207, 188, 50, 253, 3, 191, 106, 129, 51, 62, 198, 71, 59, 189, 177, 56, 226, 60, 189, 152, 151, 59, 103, 171, 87, 191, 193, 22, 192, 190, 54, 85, 244, 61, 132, 215, 124, 190, 235, 44, 172, 61, 181, 42, 0, 58, 88, 81, 239, 190, 75, 96, 52, 191, 25, 243, 222, 190, 245, 167, 149, 62, 223, 5, 1, 62, 120, 176, 108, 62, 220, 238, 7, 62, 4, 192, 110, 60, 175, 22, 209, 61, 212, 168, 83, 190, 232, 132, 163, 61, 67, 153, 67, 190, 41, 7, 76, 61, 117, 136, 94, 62, 242, 152, 251, 190, 143, 120, 223, 189, 5, 98, 99, 190, 226, 243, 189, 61, 194, 7, 171, 188, 206, 216, 179, 62, 203, 53, 69, 190, 102, 82, 68, 189, 83, 25, 134, 62, 209, 58, 54, 189, 231, 29, 233, 61, 10, 185, 222, 61, 87, 192, 99, 188, 231, 52, 228, 60, 1, 84, 196, 190, 190, 211, 52, 62, 76, 196, 182, 190, 136, 54, 198, 61, 146, 130, 79, 61, 162, 153, 39, 62, 237, 207, 80, 62, 223, 222, 118, 59, 63, 39, 172, 62, 75, 225, 142, 59, 70, 139, 218, 190, 227, 205, 165, 62, 231, 27, 95, 62, 60, 103, 247, 185, 8, 67, 168, 186, 151, 149, 154, 190, 157, 3, 230, 189, 0, 32, 49, 62, 143, 71, 44, 191, 123, 183, 209, 61, 106, 89, 13, 190, 46, 45, 8, 61, 43, 79, 200, 61, 91, 131, 228, 189, 96, 115, 40, 191, 135, 187, 153, 190, 97, 74, 182, 61, 146, 21, 153, 190, 34, 157, 36, 190, 191, 22, 94, 61, 118, 102, 93, 190, 79, 25, 227, 61, 60, 47, 175, 190, 106, 55, 168, 189, 105, 192, 185, 190, 139, 226, 216, 61, 41, 94, 58, 188, 47, 106, 47, 190, 9, 237, 82, 190, 19, 134, 12, 61, 162, 234, 219, 61, 252, 181, 91, 190, 228, 145, 169, 190, 155, 227, 192, 62, 229, 255, 0, 190, 219, 188, 49, 190, 161, 183, 144, 188, 250, 88, 98, 191, 44, 245, 53, 190, 113, 246, 175, 190, 15, 206, 67, 62, 191, 181, 182, 62, 46, 214, 122, 62, 68, 115, 66, 59, 99, 113, 14, 189, 122, 166, 138, 190, 81, 87, 253, 61, 209, 45, 145, 189, 46, 216, 51, 190, 101, 127, 149, 60, 154, 233, 33, 190, 53, 24, 18, 190, 219, 152, 0, 190, 74, 110, 120, 190, 158, 249, 66, 62, 38, 44, 137, 61, 113, 232, 52, 62, 11, 234, 211, 61, 11, 118, 232, 61, 148, 78, 207, 189, 115, 69, 38, 190, 23, 91, 95, 189, 35, 95, 176, 61, 83, 23, 10, 190, 244, 133, 10, 187, 21, 8, 190, 189, 138, 71, 13, 190, 192, 162, 173, 189, 127, 132, 174, 61, 184, 192, 26, 189, 229, 95, 148, 190, 61, 67, 48, 189, 213, 92, 35, 62, 180, 172, 194, 62, 120, 125, 122, 62, 112, 208, 228, 61, 166, 164, 143, 62, 16, 62, 220, 60, 16, 142, 151, 62, 159, 97, 30, 190, 79, 66, 234, 189, 132, 11, 55, 190, 130, 83, 230, 61, 38, 143, 112, 188, 176, 206, 170, 188, 25, 28, 226, 61, 62, 126, 129, 61, 158, 178, 23, 190, 210, 15, 78, 190, 30, 6, 187, 61, 241, 229, 55, 190, 160, 87, 10, 190, 159, 79, 38, 190, 37, 88, 129, 61, 182, 220, 153, 190, 49, 174, 101, 62, 192, 234, 246, 189, 109, 171, 52, 190, 107, 33, 62, 62, 103, 99, 49, 189, 57, 47, 129, 61, 13, 144, 161, 61, 174, 18, 166, 190, 83, 89, 215, 189, 147, 202, 217, 189, 252, 50, 15, 62, 90, 233, 6, 62, 153, 227, 34, 62, 248, 140, 249, 61, 135, 212, 253, 189, 49, 234, 58, 62, 73, 139, 44, 189, 199, 248, 118, 190, 222, 23, 137, 59, 109, 170, 231, 189, 151, 124, 151, 61, 209, 14, 86, 187, 27, 201, 47, 189, 11, 248, 57, 190, 225, 152, 245, 189, 199, 222, 148, 190, 231, 9, 212, 189, 237, 181, 53, 189, 184, 144, 57, 62, 72, 185, 10, 62, 1, 168, 203, 61, 82, 25, 177, 188, 249, 152, 10, 62, 176, 129, 32, 191, 155, 218, 181, 190, 123, 184, 45, 59, 122, 13, 128, 62, 253, 41, 3, 191, 93, 85, 250, 62, 170, 157, 71, 63, 99, 41, 157, 62, 172, 20, 139, 190, 120, 71, 203, 190, 214, 50, 219, 190, 102, 33, 235, 190, 216, 58, 161, 61, 94, 94, 126, 60, 113, 64, 236, 190, 9, 163, 72, 62, 140, 195, 117, 190, 10, 151, 219, 58, 73, 47, 62, 191, 69, 143, 77, 191, 176, 34, 123, 62, 13, 26, 98, 62, 17, 146, 204, 58, 147, 4, 243, 189, 80, 137, 172, 61, 170, 155, 195, 189, 243, 11, 176, 62, 0, 50, 139, 61, 154, 179, 44, 62, 196, 134, 176, 189, 152, 77, 148, 190, 47, 196, 214, 191, 255, 4, 9, 62, 87, 77, 107, 62, 80, 83, 144, 190, 98, 69, 188, 190, 130, 139, 64, 61, 168, 115, 191, 62, 237, 53, 39, 190, 40, 130, 207, 189, 40, 63, 146, 189, 204, 68, 89, 189, 252, 158, 24, 62, 205, 137, 24, 61, 248, 191, 144, 61, 153, 99, 43, 190, 196, 228, 201, 61, 57, 254, 36, 62, 75, 90, 26, 62, 108, 217, 45, 190, 72, 101, 38, 61, 122, 216, 179, 189, 217, 187, 161, 61, 127, 248, 220, 58, 54, 103, 36, 190, 196, 6, 115, 189, 21, 43, 142, 61, 67, 25, 0, 189, 239, 128, 5, 190, 155, 222, 103, 189, 196, 66, 202, 60, 187, 132, 46, 62, 172, 155, 210, 189, 231, 84, 27, 62, 60, 59, 230, 189, 56, 146, 158, 188, 85, 83, 232, 188, 25, 112, 35, 190, 98, 160, 2, 190, 62, 158, 29, 189, 64, 228, 109, 62, 31, 41, 187, 62, 7, 53, 40, 191, 58, 88, 38, 190, 86, 197, 231, 190, 161, 176, 146, 61, 13, 178, 230, 189, 7, 106, 92, 62, 21, 197, 238, 189, 50, 91, 1, 190, 216, 96, 150, 187, 202, 223, 2, 189, 152, 55, 198, 61, 221, 216, 59, 190, 149, 251, 209, 61, 175, 65, 88, 62, 143, 230, 156, 188, 151, 147, 7, 61, 221, 75, 23, 190, 202, 187, 30, 61, 178, 219, 150, 62, 106, 130, 234, 188, 141, 107, 122, 62, 83, 187, 62, 190, 174, 246, 155, 61, 25, 89, 226, 190, 226, 69, 148, 62, 190, 207, 106, 62, 3, 115, 153, 61, 158, 253, 70, 190, 150, 104, 119, 62, 172, 95, 133, 190, 163, 81, 64, 190, 153, 227, 207, 190, 46, 238, 5, 62, 74, 80, 250, 61, 109, 34, 147, 62, 160, 28, 191, 61, 27, 57, 35, 62, 117, 129, 115, 62, 54, 226, 128, 188, 217, 57, 171, 62, 4, 152, 7, 61, 51, 180, 52, 191, 69, 32, 140, 62, 142, 89, 214, 61, 37, 232, 28, 61, 241, 220, 176, 62, 57, 134, 85, 62, 213, 83, 76, 190, 15, 215, 116, 61, 135, 191, 128, 188, 155, 112, 10, 191, 113, 190, 148, 61, 31, 104, 245, 189, 110, 37, 118, 190, 91, 162, 208, 187, 248, 191, 184, 188, 194, 27, 104, 190, 41, 147, 245, 189, 87, 125, 50, 62, 39, 191, 60, 190, 55, 109, 8, 190, 162, 76, 186, 61, 178, 152, 204, 190, 196, 187, 184, 190, 150, 2, 150, 61, 173, 24, 198, 62, 63, 32, 138, 62, 134, 182, 119, 61, 31, 143, 204, 62, 72, 139, 96, 189, 82, 138, 249, 189, 114, 137, 136, 62, 42, 226, 72, 62, 35, 62, 18, 191, 153, 59, 10, 189, 30, 139, 103, 62, 27, 158, 121, 61, 65, 138, 85, 62, 6, 59, 253, 61, 25, 86, 2, 189, 179, 42, 177, 189, 133, 248, 68, 189, 91, 72, 11, 191, 129, 212, 203, 189, 253, 110, 130, 190, 88, 19, 109, 190, 223, 70, 192, 61, 246, 160, 244, 60, 233, 100, 158, 188, 165, 204, 152, 190, 95, 112, 132, 62, 59, 14, 55, 189, 135, 26, 90, 188, 194, 191, 230, 61, 71, 29, 168, 62, 42, 24, 240, 61, 228, 158, 8, 62, 129, 83, 134, 62, 169, 111, 187, 61, 99, 137, 26, 191, 84, 90, 96, 60, 139, 113, 163, 62, 65, 79, 165, 190, 85, 159, 83, 62, 209, 219, 217, 61, 140, 37, 209, 190, 51, 177, 208, 190, 211, 204, 27, 190, 120, 30, 213, 190, 77, 165, 186, 62, 75, 178, 20, 62, 105, 140, 124, 191, 220, 36, 54, 61, 145, 145, 222, 61, 168, 119, 117, 189, 193, 138, 131, 189, 167, 195, 240, 189, 189, 164, 243, 188, 209, 33, 40, 61, 198, 85, 96, 190, 219, 126, 147, 189, 249, 197, 130, 62, 224, 51, 143, 62, 193, 141, 75, 191, 97, 86, 136, 62, 135, 171, 212, 188, 187, 167, 61, 62, 180, 242, 212, 62, 177, 98, 148, 190, 217, 137, 217, 189, 109, 151, 199, 190, 109, 214, 89, 61, 238, 222, 111, 189, 187, 70, 86, 189, 3, 252, 154, 190, 215, 85, 143, 190, 139, 134, 113, 189, 65, 225, 185, 60, 233, 225, 136, 60, 10, 185, 51, 190, 187, 148, 199, 188, 117, 135, 72, 62, 169, 200, 200, 190, 209, 192, 81, 189, 246, 158, 3, 62, 22, 62, 69, 62, 64, 34, 163, 62, 204, 58, 142, 61, 98, 150, 150, 61, 17, 172, 65, 190, 62, 133, 42, 190, 23, 137, 156, 190, 63, 253, 114, 62, 223, 132, 71, 62, 184, 71, 227, 60, 77, 99, 208, 189, 231, 117, 23, 61, 163, 41, 159, 190, 35, 48, 226, 61, 157, 254, 1, 62, 30, 242, 12, 62, 78, 42, 46, 190, 44, 252, 234, 61, 217, 250, 249, 189, 48, 253, 60, 190, 93, 163, 9, 62, 48, 217, 181, 61, 35, 50, 29, 190, 130, 82, 21, 190, 10, 199, 146, 188, 29, 110, 28, 59, 161, 57, 232, 60, 72, 194, 238, 189, 82, 199, 69, 188, 75, 146, 130, 189, 177, 173, 152, 189, 234, 23, 17, 190, 76, 90, 95, 58, 213, 150, 208, 60, 166, 109, 142, 189, 148, 214, 179, 61, 194, 236, 110, 189, 129, 53, 89, 189, 217, 181, 236, 60, 88, 47, 37, 190, 46, 1, 74, 189, 249, 163, 55, 189, 60, 207, 65, 61, 141, 190, 212, 61, 23, 50, 31, 62, 63, 157, 66, 190, 160, 129, 96, 189, 121, 120, 11, 62, 156, 182, 233, 61, 88, 171, 53, 62, 53, 197, 103, 189, 175, 229, 57, 62, 22, 226, 9, 61, 59, 53, 161, 62, 29, 175, 70, 62, 68, 115, 223, 189, 151, 60, 130, 190, 75, 232, 166, 189, 147, 193, 77, 61, 223, 36, 26, 62, 64, 110, 2, 61, 242, 179, 8, 62, 224, 243, 142, 189, 250, 139, 194, 61, 154, 52, 238, 61, 240, 73, 132, 190, 40, 221, 17, 60, 112, 136, 2, 61, 10, 114, 61, 190, 234, 0, 151, 60, 56, 231, 53, 62, 57, 238, 211, 61, 71, 222, 171, 61, 58, 85, 175, 188, 163, 170, 247, 61, 194, 172, 68, 62, 141, 108, 25, 62, 69, 201, 34, 189, 117, 169, 153, 61, 69, 127, 27, 190, 134, 75, 88, 190, 26, 14, 253, 190, 109, 113, 12, 190, 184, 252, 41, 190, 26, 47, 147, 188, 157, 134, 9, 62, 49, 190, 23, 188, 220, 85, 2, 62, 84, 65, 83, 62, 138, 95, 17, 62, 185, 101, 153, 189, 62, 17, 23, 62, 171, 230, 46, 187, 33, 157, 156, 59, 237, 94, 236, 61, 4, 59, 104, 62, 253, 11, 27, 190, 204, 89, 211, 62, 226, 250, 65, 189, 97, 126, 39, 62, 31, 153, 154, 61, 79, 120, 5, 62, 218, 116, 180, 189, 196, 221, 243, 61, 145, 217, 48, 62, 245, 92, 158, 60, 76, 213, 21, 62, 132, 196, 144, 60, 47, 107, 86, 189, 101, 30, 80, 190, 109, 41, 60, 190, 180, 150, 15, 62, 40, 107, 4, 63, 135, 94, 93, 62, 48, 20, 244, 60, 147, 27, 148, 61, 62, 56, 152, 189, 116, 178, 199, 62, 68, 207, 118, 189, 43, 199, 159, 190, 133, 74, 205, 190, 188, 4, 11, 62, 167, 206, 55, 62, 139, 100, 5, 62, 20, 202, 56, 189, 129, 70, 78, 62, 65, 178, 70, 190, 34, 30, 81, 190, 236, 182, 143, 61, 250, 223, 194, 190, 14, 70, 194, 189, 147, 222, 25, 61, 57, 104, 176, 190, 13, 97, 193, 190, 124, 193, 169, 62, 142, 113, 233, 190, 253, 169, 248, 189, 207, 178, 220, 189, 101, 225, 255, 60, 184, 25, 128, 60, 52, 172, 15, 59, 244, 129, 186, 61, 153, 77, 189, 62, 155, 79, 135, 61, 104, 188, 49, 62, 118, 96, 138, 62, 71, 160, 190, 189, 109, 188, 203, 60, 92, 41, 5, 62, 153, 202, 7, 190, 107, 201, 108, 58, 56, 30, 183, 185, 149, 215, 204, 61, 117, 205, 99, 190, 94, 153, 21, 188, 77, 113, 246, 188, 191, 9, 52, 62, 30, 227, 1, 190, 16, 248, 191, 190, 55, 194, 203, 61, 200, 226, 184, 60, 106, 173, 37, 189, 253, 82, 189, 59, 113, 136, 4, 190, 255, 108, 77, 190, 186, 36, 180, 189, 193, 125, 172, 189, 223, 165, 7, 61, 74, 247, 194, 62, 169, 32, 137, 62, 117, 18, 5, 190, 158, 178, 154, 61, 93, 170, 118, 190, 155, 247, 181, 62, 172, 116, 103, 62, 68, 68, 61, 190, 93, 94, 222, 190, 106, 85, 133, 190, 77, 178, 2, 191, 76, 40, 145, 62, 174, 29, 30, 62, 137, 214, 96, 190, 33, 66, 6, 62, 104, 254, 123, 190, 169, 213, 37, 60, 47, 248, 46, 191, 165, 83, 111, 191, 79, 182, 201, 61, 211, 170, 53, 62, 140, 184, 108, 189, 95, 242, 15, 191, 100, 29, 22, 189, 60, 188, 203, 190, 100, 178, 162, 190, 150, 243, 58, 62, 113, 14, 236, 61, 59, 158, 130, 190, 81, 53, 129, 189, 196, 60, 178, 191, 21, 75, 120, 61, 47, 102, 54, 62, 186, 211, 59, 191, 192, 68, 200, 190, 121, 208, 236, 61, 39, 37, 130, 62, 180, 49, 88, 63, 178, 143, 219, 190, 43, 53, 180, 189, 95, 163, 98, 191, 49, 72, 171, 190, 98, 128, 132, 189, 185, 84, 70, 62, 63, 202, 158, 61, 167, 31, 107, 190, 189, 68, 45, 62, 68, 93, 46, 190, 114, 119, 2, 190, 139, 89, 142, 190, 142, 114, 66, 190, 107, 154, 36, 61, 114, 81, 242, 61, 35, 204, 235, 61, 12, 82, 121, 191, 65, 227, 253, 61, 187, 242, 230, 189, 40, 252, 147, 189, 203, 168, 188, 189, 249, 234, 119, 190, 186, 150, 245, 188, 196, 9, 122, 190, 165, 40, 134, 191, 108, 148, 149, 62, 152, 117, 106, 190, 55, 103, 41, 62, 31, 76, 55, 191, 243, 214, 132, 62, 26, 84, 241, 62, 251, 188, 207, 62, 68, 34, 74, 189, 252, 146, 49, 60, 92, 69, 113, 190, 187, 69, 53, 190, 74, 83, 188, 190, 11, 34, 99, 61, 14, 206, 140, 62, 56, 92, 84, 190, 28, 189, 205, 61, 126, 190, 188, 57, 151, 108, 152, 59, 235, 255, 5, 191, 139, 0, 101, 191, 116, 223, 120, 189, 221, 179, 53, 62, 39, 107, 139, 61, 106, 156, 46, 190, 77, 161, 105, 62, 87, 78, 157, 189, 194, 66, 114, 189, 145, 222, 85, 62, 51, 95, 56, 62, 47, 48, 32, 62, 242, 29, 11, 189, 224, 97, 159, 191, 160, 109, 194, 189, 145, 114, 163, 61, 38, 90, 70, 191, 201, 238, 79, 190, 57, 214, 33, 62, 219, 161, 133, 61, 157, 93, 18, 61, 217, 156, 171, 61, 89, 2, 50, 190, 13, 144, 170, 61, 79, 211, 240, 61, 186, 78, 238, 60, 169, 78, 47, 189, 103, 49, 65, 190, 73, 232, 69, 190, 182, 36, 79, 190, 24, 185, 186, 61, 164, 52, 99, 190, 67, 92, 145, 61, 166, 89, 124, 61, 87, 168, 35, 190, 167, 69, 179, 59, 200, 14, 15, 190, 214, 53, 8, 190, 74, 171, 140, 61, 250, 235, 115, 190, 11, 74, 203, 61, 170, 211, 254, 58, 34, 34, 86, 189, 161, 75, 22, 190, 15, 151, 182, 60, 197, 83, 225, 188, 35, 171, 144, 61, 190, 224, 195, 189, 125, 101, 139, 61, 16, 23, 111, 190, 170, 15, 83, 190, 12, 104, 101, 190, 250, 211, 189, 190, 231, 219, 76, 190, 47, 199, 135, 189, 141, 106, 30, 63, 109, 109, 190, 62, 178, 86, 165, 62, 111, 181, 64, 62, 17, 68, 29, 189, 52, 23, 27, 62, 144, 75, 211, 61, 168, 197, 127, 189, 112, 59, 17, 191, 155, 136, 47, 62, 233, 231, 240, 189, 91, 97, 14, 62, 121, 198, 28, 189, 57, 201, 9, 62, 143, 19, 174, 189, 89, 125, 242, 61, 50, 245, 118, 62, 67, 239, 51, 191, 239, 75, 141, 61, 128, 122, 21, 190, 18, 235, 63, 190, 108, 60, 174, 186, 124, 103, 198, 61, 28, 152, 107, 190, 111, 81, 106, 190, 106, 74, 130, 62, 38, 84, 170, 189, 150, 177, 22, 62, 142, 157, 43, 62, 93, 247, 144, 62, 66, 239, 139, 62, 28, 164, 244, 190, 255, 102, 26, 190, 43, 150, 197, 190, 94, 160, 103, 190, 134, 198, 22, 189, 3, 4, 162, 61, 221, 73, 240, 190, 38, 243, 46, 61, 35, 111, 66, 190, 74, 101, 67, 190, 204, 54, 233, 189, 26, 198, 57, 190, 225, 4, 238, 189, 7, 67, 226, 61, 55, 9, 11, 190, 235, 101, 181, 61, 249, 33, 87, 189, 254, 150, 18, 62, 223, 115, 163, 62, 131, 152, 253, 61, 208, 204, 206, 61, 44, 155, 99, 59, 27, 45, 82, 61, 39, 173, 215, 190, 163, 232, 179, 62, 187, 27, 167, 62, 242, 158, 133, 189, 26, 114, 189, 190, 237, 134, 148, 189, 203, 22, 117, 190, 45, 167, 166, 62, 178, 201, 192, 62, 47, 39, 129, 190, 163, 164, 69, 190, 214, 242, 223, 190, 254, 30, 65, 189, 179, 19, 83, 188, 12, 4, 63, 189, 129, 100, 64, 190, 132, 157, 72, 190, 45, 66, 20, 60, 222, 40, 127, 61, 102, 166, 186, 189, 226, 169, 131, 190, 170, 119, 192, 60, 10, 253, 11, 190, 94, 240, 247, 189, 43, 206, 52, 190, 220, 85, 0, 62, 18, 39, 99, 61, 145, 109, 13, 63, 146, 117, 4, 190, 173, 49, 254, 61, 41, 1, 2, 62, 215, 164, 143, 189, 116, 215, 254, 190, 245, 154, 249, 61, 145, 134, 241, 61, 32, 108, 230, 189, 34, 204, 220, 190, 203, 78, 7, 62, 16, 195, 113, 62, 129, 246, 125, 63, 115, 146, 209, 190, 236, 60, 242, 60, 31, 220, 78, 191, 16, 129, 158, 189, 136, 194, 144, 190, 196, 201, 0, 63, 236, 7, 135, 62, 48, 120, 10, 189, 89, 106, 144, 62, 171, 131, 189, 190, 125, 30, 8, 189, 225, 102, 12, 191, 163, 6, 1, 191, 97, 45, 185, 189, 165, 53, 93, 62, 8, 176, 115, 59, 32, 143, 146, 191, 152, 120, 159, 61, 47, 247, 122, 189, 212, 249, 95, 190, 201, 110, 138, 62, 49, 114, 86, 189, 212, 199, 166, 61, 205, 36, 41, 189, 183, 96, 185, 191, 224, 62, 140, 61, 136, 191, 55, 59, 246, 193, 121, 62, 184, 132, 47, 191, 199, 160, 17, 62, 54, 16, 165, 62, 182, 192, 189, 187, 96, 4, 0, 190, 246, 44, 241, 59, 194, 130, 46, 190, 154, 89, 255, 189, 152, 174, 162, 189, 177, 210, 24, 62, 95, 205, 0, 190, 33, 35, 190, 61, 204, 161, 166, 60, 96, 61, 237, 188, 18, 155, 152, 189, 24, 207, 162, 189, 61, 49, 167, 188, 138, 232, 175, 189, 154, 104, 55, 190, 234, 39, 236, 189, 133, 4, 37, 190, 50, 184, 219, 61, 165, 244, 40, 190, 78, 82, 140, 60, 117, 153, 174, 61, 5, 153, 76, 61, 14, 231, 68, 61, 219, 129, 53, 187, 247, 167, 32, 190, 215, 124, 153, 189, 246, 40, 237, 61, 109, 176, 4, 190, 58, 77, 94, 188, 119, 162, 71, 187, 59, 198, 197, 61};
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
                alignas(float) const unsigned char memory[] = {100, 172, 237, 61, 16, 109, 110, 62, 55, 10, 153, 59, 230, 154, 191, 61, 199, 143, 157, 62, 118, 222, 133, 190, 225, 176, 121, 62, 102, 232, 84, 62, 230, 181, 239, 189, 122, 135, 118, 62, 117, 191, 138, 189, 44, 1, 255, 61, 242, 159, 33, 190, 61, 8, 13, 189, 58, 109, 48, 62, 202, 70, 132, 62, 205, 14, 165, 62, 31, 5, 173, 61, 143, 215, 52, 190, 204, 90, 145, 62, 253, 113, 22, 190, 255, 173, 76, 187, 111, 176, 164, 62, 177, 151, 116, 62, 2, 41, 207, 189, 8, 114, 192, 60, 150, 115, 117, 61, 19, 24, 15, 189, 45, 137, 4, 62, 252, 101, 173, 61, 6, 84, 161, 186, 212, 57, 145, 188};
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
                alignas(float) const unsigned char memory[] = {122, 40, 57, 63, 62, 87, 195, 190, 100, 170, 55, 62, 231, 148, 145, 62, 79, 245, 172, 189, 88, 100, 29, 63, 169, 0, 130, 62, 67, 22, 2, 63, 168, 67, 101, 62, 233, 235, 125, 190, 156, 214, 125, 190, 175, 160, 63, 63, 90, 98, 217, 189, 93, 230, 242, 62, 2, 167, 223, 190, 169, 205, 209, 190, 234, 165, 198, 190, 161, 80, 237, 62, 219, 55, 89, 59, 23, 164, 107, 189, 154, 17, 35, 190, 142, 110, 174, 190, 136, 30, 21, 190, 250, 223, 104, 63, 32, 119, 86, 63, 183, 135, 117, 62, 123, 8, 5, 61, 31, 37, 10, 191, 229, 64, 232, 62, 34, 195, 116, 62, 52, 158, 96, 63, 49, 194, 184, 61, 252, 123, 164, 189, 58, 132, 212, 60, 29, 248, 176, 190, 141, 87, 140, 61, 244, 159, 126, 190, 220, 11, 41, 62, 233, 224, 141, 189, 222, 228, 196, 190, 161, 49, 110, 62, 154, 173, 111, 190, 11, 78, 49, 188, 105, 134, 91, 62, 123, 197, 162, 189, 247, 88, 110, 61, 238, 166, 31, 60, 73, 64, 163, 61, 46, 126, 163, 190, 170, 152, 142, 60, 227, 145, 159, 189, 155, 19, 56, 190, 155, 224, 20, 62, 50, 129, 50, 62, 21, 94, 131, 190, 62, 16, 85, 189, 118, 23, 4, 62, 117, 155, 157, 189, 53, 217, 156, 188, 141, 219, 131, 62, 37, 139, 229, 189, 1, 91, 101, 62, 41, 212, 22, 61, 0, 91, 182, 189};
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
                alignas(float) const unsigned char memory[] = {97, 156, 219, 188, 169, 109, 134, 190};
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
    alignas(float) const unsigned char memory[] = {178, 204, 26, 192, 49, 153, 22, 191, 7, 143, 17, 64};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {218, 75, 151, 191, 139, 52, 9, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0085/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}