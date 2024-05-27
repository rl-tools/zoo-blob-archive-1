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
                alignas(float) const unsigned char memory[] = {81, 135, 44, 191, 51, 86, 129, 191, 223, 14, 16, 191, 9, 205, 51, 62, 26, 142, 31, 62, 132, 199, 7, 191, 192, 97, 143, 62, 93, 22, 105, 63, 129, 190, 219, 190, 124, 165, 184, 190, 47, 93, 57, 63, 219, 190, 242, 188, 45, 23, 109, 190, 96, 28, 9, 63, 19, 188, 7, 191, 71, 65, 100, 62, 216, 129, 162, 63, 180, 167, 133, 62, 17, 14, 77, 190, 80, 75, 18, 62, 23, 143, 25, 191, 100, 245, 47, 63, 171, 173, 69, 191, 138, 100, 69, 62, 225, 187, 194, 190, 164, 203, 63, 63, 60, 0, 171, 190, 135, 81, 41, 62, 70, 52, 29, 63, 89, 241, 78, 190, 148, 97, 183, 190, 86, 52, 79, 191, 36, 219, 20, 190, 8, 139, 215, 190, 107, 204, 160, 191, 241, 121, 58, 190, 42, 51, 39, 63, 162, 225, 141, 63, 196, 121, 145, 62, 245, 17, 14, 63, 205, 212, 171, 191, 152, 20, 144, 190, 214, 249, 73, 63, 20, 14, 208, 189, 128, 80, 154, 62, 109, 137, 203, 62, 89, 121, 104, 191, 201, 10, 180, 62, 219, 253, 146, 62, 214, 70, 14, 191, 42, 144, 206, 62, 220, 10, 35, 190, 30, 125, 227, 63, 207, 189, 172, 62, 67, 76, 111, 191, 127, 120, 127, 62, 127, 158, 36, 61, 55, 211, 231, 62, 71, 10, 55, 63, 136, 22, 158, 62, 196, 19, 53, 63, 248, 46, 227, 190, 120, 215, 26, 190, 21, 138, 133, 60, 159, 54, 90, 63, 154, 37, 11, 189, 36, 34, 185, 188, 202, 176, 118, 191, 45, 82, 9, 190, 246, 122, 51, 63, 0, 199, 105, 191, 152, 97, 46, 190, 78, 139, 190, 190, 180, 175, 56, 62, 234, 26, 245, 62, 22, 234, 142, 62, 54, 85, 122, 63, 109, 187, 41, 62, 100, 41, 181, 62, 217, 226, 15, 63, 123, 177, 140, 190, 33, 237, 156, 190, 46, 33, 161, 191, 132, 64, 170, 190, 215, 193, 9, 63, 18, 39, 131, 191, 104, 127, 245, 190, 71, 130, 30, 62, 46, 245, 215, 191, 183, 97, 167, 190, 30, 16, 153, 62, 152, 76, 218, 63, 77, 207, 161, 62, 248, 101, 12, 191, 111, 32, 72, 191, 9, 121, 106, 190};
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
                alignas(float) const unsigned char memory[] = {86, 195, 1, 191, 198, 229, 24, 61, 232, 11, 70, 190, 62, 202, 188, 62, 40, 138, 251, 189, 13, 90, 92, 62, 104, 177, 235, 190, 34, 117, 71, 61, 79, 40, 199, 189, 61, 105, 181, 61, 12, 67, 174, 62, 192, 91, 145, 60, 239, 223, 133, 190, 225, 163, 188, 189, 114, 70, 7, 191, 59, 90, 63, 191, 252, 154, 189, 190, 167, 147, 236, 190, 154, 254, 210, 62, 1, 132, 61, 191, 150, 197, 163, 189, 189, 37, 241, 62, 218, 112, 6, 63, 164, 74, 72, 62, 178, 215, 164, 62, 163, 136, 169, 61, 44, 224, 71, 62, 238, 134, 15, 190, 144, 46, 6, 191, 59, 133, 198, 62, 247, 166, 69, 62, 182, 210, 29, 63};
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
                alignas(float) const unsigned char memory[] = {86, 149, 112, 62, 117, 63, 147, 59, 186, 245, 1, 61, 229, 90, 38, 62, 221, 83, 125, 60, 211, 50, 84, 62, 234, 207, 158, 189, 121, 99, 23, 60, 221, 101, 16, 61, 133, 243, 24, 62, 106, 99, 226, 190, 216, 127, 173, 189, 92, 159, 83, 62, 77, 128, 22, 191, 240, 97, 99, 61, 141, 178, 94, 60, 98, 121, 33, 60, 185, 228, 192, 189, 4, 179, 9, 186, 188, 250, 24, 62, 245, 213, 25, 190, 88, 188, 28, 62, 111, 5, 101, 61, 109, 228, 179, 61, 200, 72, 4, 190, 70, 186, 172, 62, 210, 223, 58, 62, 119, 53, 38, 61, 134, 88, 8, 191, 51, 85, 156, 190, 107, 44, 82, 62, 123, 26, 163, 189, 235, 121, 77, 189, 148, 194, 29, 190, 127, 186, 222, 61, 148, 68, 122, 62, 243, 211, 101, 188, 101, 126, 222, 187, 144, 52, 101, 61, 147, 185, 177, 61, 112, 163, 15, 190, 151, 86, 190, 61, 165, 156, 232, 188, 236, 112, 129, 190, 113, 224, 130, 62, 8, 11, 196, 190, 103, 254, 223, 62, 155, 96, 9, 61, 148, 26, 161, 190, 120, 70, 119, 191, 193, 135, 116, 62, 254, 163, 10, 191, 107, 18, 138, 190, 64, 200, 169, 62, 3, 188, 193, 189, 231, 77, 31, 189, 117, 65, 55, 191, 90, 161, 86, 62, 221, 38, 24, 62, 121, 8, 197, 189, 167, 26, 244, 190, 144, 184, 153, 60, 208, 234, 140, 61, 112, 70, 234, 189, 125, 245, 43, 189, 202, 232, 57, 190, 253, 229, 148, 188, 19, 97, 121, 62, 197, 62, 32, 62, 93, 210, 254, 189, 30, 188, 168, 59, 202, 207, 200, 189, 2, 101, 0, 190, 4, 86, 94, 62, 236, 216, 181, 61, 78, 171, 56, 62, 107, 128, 201, 62, 37, 7, 77, 191, 128, 48, 63, 62, 127, 56, 17, 190, 216, 128, 153, 190, 13, 230, 128, 190, 224, 40, 158, 61, 70, 15, 180, 62, 41, 211, 180, 190, 179, 226, 193, 62, 173, 245, 236, 188, 206, 17, 1, 188, 174, 161, 109, 190, 246, 150, 199, 62, 218, 116, 57, 59, 169, 221, 75, 190, 239, 133, 34, 191, 3, 113, 213, 190, 161, 124, 86, 190, 98, 239, 148, 59, 254, 164, 85, 190, 185, 111, 42, 189, 176, 124, 237, 61, 135, 103, 30, 62, 25, 162, 49, 62, 98, 217, 113, 190, 205, 172, 75, 62, 55, 203, 201, 189, 184, 93, 120, 188, 242, 98, 159, 62, 32, 113, 37, 61, 146, 23, 140, 61, 141, 203, 248, 61, 43, 60, 139, 187, 157, 24, 183, 189, 190, 167, 138, 190, 163, 109, 68, 191, 214, 0, 126, 61, 250, 48, 37, 62, 229, 253, 48, 63, 224, 53, 37, 62, 62, 205, 250, 61, 53, 168, 93, 190, 219, 219, 238, 188, 130, 139, 233, 189, 27, 9, 143, 62, 24, 95, 113, 62, 3, 215, 150, 61, 165, 117, 90, 189, 39, 54, 36, 190, 195, 113, 148, 189, 151, 17, 29, 189, 232, 56, 181, 61, 4, 24, 87, 62, 125, 87, 100, 61, 103, 110, 15, 62, 17, 60, 14, 61, 43, 205, 60, 62, 107, 147, 144, 61, 195, 104, 16, 62, 247, 251, 108, 190, 205, 165, 218, 61, 176, 13, 33, 189, 35, 204, 133, 189, 116, 70, 78, 59, 98, 250, 106, 190, 179, 5, 96, 61, 152, 53, 61, 189, 163, 176, 252, 59, 196, 103, 113, 189, 241, 113, 142, 60, 0, 245, 27, 190, 90, 134, 22, 60, 184, 111, 222, 62, 153, 193, 29, 62, 97, 116, 181, 61, 66, 78, 203, 61, 147, 183, 143, 61, 75, 63, 206, 58, 155, 58, 175, 60, 148, 21, 205, 189, 84, 142, 139, 61, 182, 56, 156, 62, 128, 73, 67, 60, 238, 41, 228, 189, 96, 189, 70, 190, 60, 172, 105, 60, 196, 1, 62, 189, 141, 162, 194, 189, 248, 16, 154, 59, 76, 125, 138, 189, 89, 64, 210, 59, 83, 199, 134, 60, 239, 70, 106, 189, 11, 212, 147, 61, 82, 216, 223, 60, 0, 7, 24, 190, 227, 209, 51, 62, 50, 205, 3, 62, 44, 94, 14, 62, 45, 238, 234, 61, 182, 10, 164, 189, 240, 1, 86, 190, 231, 191, 210, 189, 143, 204, 169, 189, 193, 161, 56, 188, 35, 95, 167, 188, 73, 152, 12, 190, 106, 78, 46, 190, 166, 139, 24, 189, 255, 7, 60, 190, 185, 210, 218, 189, 248, 218, 4, 62, 128, 51, 248, 61, 128, 50, 4, 190, 232, 246, 99, 189, 14, 34, 100, 61, 149, 205, 151, 190, 177, 181, 218, 189, 95, 60, 143, 61, 153, 190, 21, 62, 83, 230, 53, 190, 54, 150, 41, 61, 34, 252, 99, 62, 115, 49, 195, 190, 241, 59, 183, 62, 125, 58, 166, 189, 211, 110, 119, 189, 134, 144, 218, 62, 118, 232, 23, 191, 36, 252, 174, 62, 65, 204, 8, 62, 90, 100, 150, 189, 126, 53, 27, 191, 98, 72, 128, 61, 39, 117, 1, 62, 164, 103, 34, 191, 139, 33, 236, 62, 167, 212, 121, 190, 155, 63, 11, 191, 21, 93, 141, 190, 110, 250, 236, 62, 89, 182, 114, 62, 148, 252, 245, 188, 237, 250, 225, 190, 202, 104, 21, 190, 249, 255, 185, 189, 83, 159, 2, 62, 19, 115, 149, 61, 60, 158, 83, 188, 190, 253, 57, 57, 166, 22, 21, 62, 246, 194, 27, 62, 239, 221, 246, 188, 24, 38, 170, 189, 35, 155, 41, 190, 103, 97, 87, 61, 198, 215, 243, 189, 65, 177, 170, 59, 232, 145, 6, 190, 191, 149, 153, 189, 44, 169, 133, 61, 185, 125, 32, 62, 20, 64, 8, 62, 126, 218, 17, 62, 199, 26, 194, 186, 98, 22, 33, 190, 53, 147, 172, 189, 91, 252, 171, 61, 42, 64, 10, 60, 205, 26, 44, 61, 19, 161, 60, 189, 15, 41, 168, 189, 4, 78, 15, 190, 139, 112, 65, 189, 8, 199, 2, 188, 237, 235, 32, 190, 97, 44, 52, 190, 183, 104, 192, 189, 222, 92, 16, 190, 119, 236, 161, 60, 178, 214, 117, 190, 95, 165, 111, 190, 0, 32, 241, 188, 108, 234, 147, 62, 31, 197, 207, 190, 60, 168, 14, 62, 228, 251, 178, 190, 204, 58, 28, 190, 197, 28, 135, 61, 68, 124, 189, 62, 6, 232, 149, 62, 190, 80, 29, 191, 36, 8, 216, 190, 140, 49, 211, 190, 159, 72, 184, 61, 181, 143, 154, 188, 214, 50, 240, 191, 239, 8, 131, 62, 26, 39, 90, 190, 41, 166, 102, 191, 47, 52, 33, 62, 235, 14, 97, 62, 1, 212, 3, 191, 38, 166, 109, 62, 184, 27, 61, 62, 114, 233, 97, 188, 49, 244, 237, 61, 244, 48, 65, 190, 127, 92, 203, 58, 38, 146, 219, 191, 217, 229, 186, 62, 17, 186, 236, 61, 219, 183, 240, 187, 57, 225, 184, 60, 175, 9, 130, 62, 197, 31, 82, 187, 180, 69, 211, 189, 55, 252, 237, 61, 210, 171, 28, 62, 0, 206, 101, 56, 242, 238, 27, 187, 19, 72, 46, 62, 187, 153, 105, 62, 1, 240, 45, 62, 83, 253, 70, 191, 38, 71, 42, 61, 98, 205, 128, 62, 168, 171, 156, 61, 14, 109, 41, 191, 194, 46, 158, 62, 224, 105, 144, 189, 1, 102, 111, 191, 20, 212, 83, 62, 98, 255, 234, 61, 47, 38, 56, 191, 203, 241, 218, 61, 30, 213, 0, 63, 70, 72, 154, 189, 98, 147, 130, 61, 24, 76, 36, 191, 87, 240, 53, 62, 189, 104, 176, 190, 135, 246, 41, 189, 183, 34, 6, 62, 218, 137, 45, 189, 150, 181, 94, 62, 115, 153, 195, 190, 86, 109, 138, 61, 176, 123, 224, 189, 23, 142, 193, 189, 38, 122, 103, 189, 202, 252, 179, 61, 9, 108, 8, 62, 115, 116, 196, 59, 115, 149, 125, 62, 97, 168, 135, 62, 34, 147, 157, 62, 183, 190, 176, 62, 160, 102, 110, 62, 0, 8, 221, 188, 81, 34, 65, 58, 234, 168, 118, 191, 23, 196, 131, 62, 41, 74, 195, 189, 118, 124, 185, 189, 135, 239, 55, 191, 76, 111, 233, 189, 27, 102, 221, 189, 244, 227, 50, 190, 71, 102, 130, 62, 65, 113, 197, 62, 197, 29, 167, 62, 121, 98, 98, 190, 252, 110, 62, 61, 165, 156, 201, 190, 222, 103, 23, 63, 107, 131, 124, 190, 194, 74, 18, 190, 161, 197, 143, 61, 139, 80, 3, 62, 180, 93, 5, 62, 96, 75, 137, 61, 14, 126, 108, 189, 39, 140, 107, 190, 203, 228, 153, 62, 249, 119, 140, 189, 83, 55, 172, 62, 169, 40, 103, 62, 141, 202, 66, 190, 110, 159, 156, 61, 59, 31, 81, 62, 4, 173, 85, 190, 239, 8, 38, 190, 102, 162, 115, 59, 55, 239, 19, 62, 126, 221, 167, 189, 45, 99, 89, 62, 202, 21, 212, 189, 18, 1, 0, 62, 60, 8, 131, 190, 253, 101, 165, 62, 143, 50, 45, 62, 72, 102, 166, 62, 87, 254, 111, 190, 98, 155, 216, 189, 175, 67, 14, 62, 152, 121, 139, 190, 30, 56, 32, 62, 53, 242, 60, 190, 63, 196, 221, 190, 125, 120, 189, 189, 119, 38, 139, 189, 32, 195, 237, 190, 215, 109, 189, 59, 137, 11, 57, 191, 226, 115, 255, 190, 37, 253, 24, 62, 168, 244, 123, 62, 71, 190, 47, 62, 15, 171, 31, 190, 198, 203, 135, 189, 85, 88, 147, 188, 23, 238, 88, 62, 239, 151, 135, 190, 82, 77, 251, 191, 180, 11, 32, 60, 34, 4, 99, 189, 143, 161, 250, 190, 115, 127, 246, 190, 177, 6, 97, 62, 133, 251, 197, 190, 104, 99, 152, 61, 61, 104, 136, 60, 128, 46, 177, 61, 188, 18, 128, 189, 25, 24, 17, 62, 0, 111, 78, 62, 92, 93, 231, 191, 7, 156, 99, 62, 82, 249, 144, 190, 47, 52, 167, 61, 63, 164, 14, 62, 120, 23, 249, 189, 87, 54, 31, 62, 67, 101, 44, 62, 101, 154, 180, 189, 179, 210, 37, 62, 5, 250, 127, 62, 246, 211, 136, 61, 137, 160, 17, 191, 135, 25, 105, 190, 168, 214, 35, 62, 134, 59, 97, 191, 147, 23, 20, 62, 156, 54, 149, 62, 159, 97, 201, 61, 108, 15, 70, 190, 156, 83, 161, 190, 146, 22, 87, 62, 96, 42, 112, 189, 163, 71, 36, 189, 159, 253, 159, 190, 156, 183, 144, 61, 25, 4, 24, 190, 81, 170, 73, 62, 20, 54, 130, 62, 40, 182, 22, 191, 200, 202, 247, 189, 90, 202, 21, 191, 116, 31, 73, 189, 248, 60, 190, 190, 74, 238, 197, 189, 131, 136, 168, 189, 181, 240, 225, 61, 175, 150, 137, 189, 247, 178, 201, 61, 137, 218, 26, 190, 157, 5, 72, 190, 128, 192, 145, 62, 141, 28, 129, 189, 11, 115, 7, 189, 55, 97, 243, 188, 193, 204, 135, 190, 234, 83, 13, 191, 210, 38, 131, 62, 134, 94, 150, 190, 169, 216, 41, 62, 154, 85, 83, 62, 203, 139, 144, 190, 251, 7, 13, 190, 45, 50, 110, 190, 157, 239, 120, 62, 115, 151, 92, 189, 125, 17, 78, 61, 252, 130, 6, 189, 242, 83, 142, 61, 232, 29, 31, 191, 52, 169, 212, 189, 69, 137, 89, 190, 38, 5, 208, 61, 231, 126, 41, 62, 130, 109, 140, 190, 134, 39, 215, 61, 31, 235, 222, 190, 36, 172, 200, 62, 117, 47, 35, 62, 98, 87, 54, 190, 8, 50, 255, 189, 225, 211, 24, 190, 222, 126, 32, 191, 5, 34, 130, 62, 11, 181, 177, 190, 126, 181, 153, 59, 248, 39, 5, 62, 201, 203, 196, 190, 48, 112, 155, 190, 183, 205, 176, 62, 239, 185, 48, 189, 140, 91, 69, 59, 174, 244, 35, 62, 6, 91, 122, 61, 237, 220, 189, 190, 44, 51, 211, 187, 127, 201, 243, 60, 2, 160, 59, 189, 47, 36, 95, 62, 242, 125, 56, 62, 57, 17, 161, 61, 42, 158, 150, 190, 148, 208, 23, 189, 234, 141, 84, 190, 193, 163, 236, 61, 100, 246, 30, 62, 241, 229, 188, 189, 71, 69, 51, 62, 89, 138, 34, 190, 45, 225, 79, 60, 125, 18, 52, 62, 28, 10, 209, 190, 89, 18, 251, 61, 8, 176, 70, 62, 198, 85, 69, 61, 252, 100, 127, 62, 249, 254, 138, 62, 76, 22, 63, 62, 0, 97, 134, 191, 210, 132, 1, 191, 54, 38, 188, 61, 40, 78, 3, 191, 81, 162, 65, 62, 239, 29, 26, 62, 35, 33, 27, 189, 220, 249, 118, 190, 101, 212, 186, 190, 164, 188, 64, 189, 244, 192, 67, 62, 14, 31, 239, 60, 74, 10, 212, 187, 185, 250, 149, 61, 72, 18, 145, 60, 135, 2, 166, 62, 14, 182, 93, 188, 223, 107, 176, 190, 72, 229, 9, 191, 5, 174, 120, 190, 210, 47, 16, 62, 86, 90, 36, 191, 74, 78, 151, 189, 46, 124, 209, 190, 112, 225, 6, 191, 97, 102, 56, 190, 134, 124, 32, 191, 32, 199, 166, 189, 87, 176, 10, 191, 93, 83, 119, 62, 84, 71, 139, 190, 47, 183, 105, 191, 200, 149, 205, 62, 55, 92, 139, 190, 134, 13, 106, 190, 152, 228, 250, 62, 29, 197, 196, 60, 55, 151, 241, 61, 19, 98, 178, 61, 114, 23, 243, 189, 242, 213, 152, 190, 96, 51, 245, 61, 103, 190, 0, 62, 166, 57, 136, 190, 57, 51, 173, 62, 44, 129, 254, 57, 237, 232, 100, 189, 251, 61, 83, 190, 151, 94, 241, 190, 97, 32, 168, 190, 91, 158, 151, 189, 84, 126, 255, 62, 239, 100, 129, 61, 67, 51, 134, 62, 232, 24, 34, 61, 22, 123, 133, 61, 121, 25, 177, 62, 152, 144, 108, 190, 12, 63, 171, 188, 212, 212, 58, 62, 159, 148, 201, 189, 158, 7, 88, 62, 148, 247, 190, 61, 193, 168, 182, 62, 2, 105, 217, 191, 149, 65, 119, 190, 30, 172, 66, 62, 25, 163, 64, 191, 31, 178, 55, 62, 27, 251, 161, 62, 133, 109, 133, 61, 176, 250, 69, 190, 159, 195, 74, 191, 132, 87, 9, 59, 216, 238, 41, 62, 69, 246, 19, 62, 80, 194, 79, 190, 164, 249, 75, 62, 78, 154, 64, 61, 211, 7, 154, 62, 77, 113, 239, 61, 57, 208, 9, 191, 222, 99, 84, 191, 35, 164, 76, 190, 140, 197, 253, 61, 198, 108, 103, 191, 102, 20, 108, 190, 3, 110, 127, 61, 163, 42, 129, 61, 123, 244, 75, 190, 165, 2, 85, 190, 241, 255, 245, 190, 114, 97, 191, 189, 69, 157, 147, 61, 216, 234, 14, 61, 174, 30, 60, 190, 74, 17, 125, 190, 107, 2, 11, 191, 45, 63, 62, 191, 103, 78, 113, 62, 127, 185, 27, 62, 10, 108, 160, 62, 66, 147, 7, 62, 43, 138, 45, 190, 179, 205, 74, 190, 172, 116, 62, 190, 109, 94, 246, 62, 82, 111, 128, 190, 32, 127, 169, 58, 86, 16, 250, 62, 39, 48, 145, 62, 114, 169, 227, 190, 131, 89, 178, 186, 195, 250, 166, 190, 132, 226, 134, 62, 155, 229, 85, 62, 180, 65, 246, 190, 115, 111, 110, 190, 30, 132, 25, 190, 169, 199, 51, 189, 242, 180, 109, 61, 75, 143, 7, 190, 182, 154, 133, 61, 33, 167, 161, 187, 226, 43, 221, 61, 107, 6, 220, 61, 180, 152, 5, 190, 195, 123, 51, 61, 195, 113, 188, 61, 13, 142, 239, 61, 252, 146, 237, 189, 185, 63, 8, 188, 176, 153, 2, 61, 155, 217, 23, 62, 217, 210, 250, 189, 56, 72, 109, 190, 69, 112, 77, 190, 65, 230, 151, 189, 249, 145, 65, 190, 65, 137, 83, 190, 91, 151, 221, 61, 177, 42, 5, 190, 213, 132, 190, 189, 89, 139, 151, 189, 64, 134, 155, 61, 146, 180, 97, 190, 73, 137, 251, 189, 158, 192, 48, 190, 18, 198, 184, 189, 126, 182, 128, 190, 37, 40, 249, 189, 150, 178, 100, 60, 248, 132, 200, 61, 19, 39, 160, 61, 180, 77, 53, 62, 105, 196, 65, 62, 15, 10, 86, 188, 94, 246, 84, 61, 187, 212, 12, 190, 17, 83, 14, 62, 72, 13, 15, 191, 189, 69, 55, 62, 123, 146, 85, 62, 187, 101, 248, 190, 24, 50, 163, 62, 147, 136, 100, 62, 9, 46, 150, 61, 94, 167, 149, 190, 80, 83, 10, 190, 10, 88, 16, 62, 67, 134, 133, 61, 156, 85, 135, 62, 161, 226, 13, 62, 34, 228, 197, 60, 251, 82, 189, 190, 199, 75, 55, 62, 20, 112, 27, 61, 183, 200, 183, 190, 70, 243, 51, 191, 237, 13, 123, 190, 97, 33, 10, 62, 2, 2, 149, 190, 183, 198, 195, 190, 111, 121, 113, 61, 112, 21, 18, 61, 55, 21, 212, 61, 211, 43, 227, 61, 185, 150, 99, 62, 81, 234, 52, 189, 75, 6, 37, 61, 33, 6, 3, 62, 254, 238, 207, 61, 15, 244, 13, 191, 243, 179, 16, 190, 31, 159, 140, 62, 234, 107, 22, 191, 58, 213, 209, 62, 211, 90, 186, 62, 123, 56, 188, 189, 161, 124, 14, 190, 235, 186, 53, 191, 88, 6, 56, 62, 25, 213, 151, 190, 46, 19, 24, 62, 35, 254, 130, 191, 3, 50, 205, 190, 149, 100, 150, 189, 98, 237, 150, 62, 47, 139, 23, 62, 86, 254, 69, 190, 144, 197, 140, 190, 220, 210, 55, 191, 65, 24, 93, 62, 149, 202, 253, 190, 116, 140, 43, 190, 115, 99, 183, 61, 7, 118, 47, 62, 116, 75, 163, 61, 57, 39, 141, 189, 189, 59, 15, 61, 254, 25, 204, 61, 187, 94, 175, 185, 42, 201, 157, 61, 185, 210, 91, 62, 166, 196, 10, 188, 157, 239, 59, 191, 153, 129, 198, 190, 36, 211, 84, 190, 100, 213, 187, 60, 79, 218, 35, 62, 22, 98, 155, 189, 35, 40, 139, 189, 219, 252, 56, 190, 206, 234, 95, 190, 159, 186, 188, 61, 218, 17, 158, 62, 118, 159, 193, 188, 106, 209, 21, 62, 46, 191, 131, 62, 227, 118, 172, 190, 48, 107, 13, 62, 249, 245, 15, 191, 52, 240, 224, 189, 74, 160, 165, 61, 28, 226, 100, 60, 210, 65, 2, 190, 204, 221, 243, 190, 179, 69, 18, 62, 50, 30, 116, 62, 143, 18, 253, 60, 159, 105, 171, 61, 198, 176, 153, 190, 65, 74, 74, 189, 69, 28, 213, 189, 205, 162, 114, 62, 13, 75, 75, 62, 114, 98, 154, 61, 178, 79, 85, 190, 80, 164, 153, 190, 132, 201, 130, 191, 21, 55, 109, 190, 208, 141, 245, 188, 104, 183, 26, 189, 157, 104, 80, 189, 239, 216, 177, 61, 246, 41, 166, 190, 128, 209, 110, 190, 39, 227, 111, 62, 188, 191, 86, 190, 252, 135, 173, 190, 30, 211, 41, 191, 171, 51, 97, 62, 247, 22, 188, 189, 17, 68, 23, 190, 173, 161, 232, 190, 248, 164, 158, 190, 107, 144, 96, 190, 134, 100, 9, 190, 211, 241, 133, 191, 1, 226, 137, 62, 107, 63, 111, 62, 31, 92, 9, 61, 146, 137, 143, 190, 153, 127, 141, 61, 136, 220, 141, 191, 255, 129, 5, 60, 42, 156, 179, 62, 197, 211, 196, 190, 12, 35, 162, 62, 223, 102, 45, 192, 106, 10, 0, 191, 76, 222, 178, 62, 9, 134, 54, 190, 145, 39, 123, 190, 166, 210, 112, 62, 8, 178, 181, 189, 13, 165, 42, 189, 246, 167, 187, 190, 208, 9, 1, 61, 194, 89, 11, 62, 194, 197, 159, 62, 223, 96, 13, 62, 103, 72, 138, 61, 148, 80, 238, 190, 220, 73, 71, 190, 237, 44, 179, 191, 65, 115, 56, 63, 213, 219, 190, 189, 32, 187, 111, 61, 120, 28, 123, 62, 228, 52, 49, 191, 252, 246, 226, 62, 29, 178, 218, 62, 134, 195, 80, 62, 28, 2, 84, 62, 108, 248, 120, 61, 227, 55, 69, 191, 152, 87, 144, 187, 237, 202, 184, 62, 34, 164, 46, 190, 211, 182, 202, 62, 200, 92, 239, 191, 30, 180, 109, 190, 104, 33, 158, 62, 94, 73, 200, 189, 156, 229, 239, 61, 45, 255, 52, 61, 233, 198, 2, 61, 49, 171, 149, 190, 125, 100, 181, 190, 21, 44, 96, 62, 12, 45, 18, 62, 252, 148, 230, 60, 78, 39, 146, 62, 178, 226, 252, 61, 15, 0, 190, 190, 164, 214, 103, 190, 70, 192, 26, 191, 50, 142, 43, 63, 179, 108, 249, 188, 200, 121, 135, 61, 54, 54, 151, 61, 244, 67, 106, 61, 75, 5, 101, 190, 39, 62, 54, 62, 196, 235, 255, 190, 219, 61, 105, 190, 79, 125, 225, 61, 157, 28, 163, 190, 181, 36, 137, 62, 5, 92, 245, 190, 144, 61, 50, 62, 240, 5, 217, 191, 175, 226, 16, 190, 170, 245, 158, 62, 45, 204, 207, 190, 211, 235, 0, 62, 47, 0, 138, 61, 250, 207, 141, 189, 165, 81, 147, 189, 0, 100, 222, 190, 51, 122, 178, 61, 114, 7, 151, 62, 164, 146, 7, 62, 183, 157, 85, 189, 185, 37, 239, 61, 76, 92, 72, 62, 76, 75, 41, 62, 32, 151, 199, 188, 215, 234, 107, 191, 89, 162, 212, 191, 236, 243, 41, 190, 34, 251, 149, 62, 112, 29, 21, 191, 92, 253, 50, 62, 11, 159, 181, 189, 180, 254, 40, 189, 77, 179, 49, 61, 233, 157, 25, 62, 51, 230, 98, 62, 147, 246, 60, 62, 26, 151, 65, 189, 196, 178, 83, 190, 219, 235, 12, 62, 222, 25, 191, 60, 192, 189, 244, 61, 226, 101, 26, 62, 227, 65, 183, 190, 0, 106, 44, 188, 157, 121, 148, 62, 202, 43, 67, 62, 49, 79, 141, 61, 189, 245, 47, 62, 27, 66, 162, 189, 63, 56, 213, 61, 91, 126, 26, 62, 73, 173, 100, 62, 137, 30, 86, 61, 162, 78, 15, 187, 185, 110, 118, 61, 139, 70, 130, 188, 233, 64, 13, 62, 102, 176, 40, 190, 187, 39, 138, 61, 183, 72, 208, 59, 217, 115, 244, 189, 239, 155, 19, 190, 67, 114, 197, 189, 140, 239, 80, 62, 46, 136, 194, 61, 166, 3, 40, 190, 189, 92, 96, 190, 176, 43, 169, 60, 197, 197, 178, 62, 238, 30, 160, 60, 80, 86, 155, 59, 170, 214, 54, 62, 100, 73, 201, 190, 167, 145, 75, 191, 91, 67, 181, 62, 247, 58, 232, 61, 146, 121, 49, 62, 231, 184, 21, 62, 45, 68, 218, 189, 131, 60, 173, 190, 124, 237, 166, 190, 12, 79, 80, 62, 112, 50, 43, 190, 178, 58, 157, 62, 248, 235, 228, 61, 71, 46, 53, 62, 91, 193, 41, 191, 122, 248, 243, 189, 131, 196, 204, 188, 21, 203, 128, 62, 41, 164, 246, 61, 6, 248, 183, 190, 97, 205, 0, 62, 174, 144, 133, 191, 158, 67, 88, 189, 3, 143, 232, 189, 219, 240, 1, 63, 88, 187, 250, 189, 85, 127, 141, 62, 181, 11, 244, 190, 8, 188, 106, 190, 1, 61, 194, 62, 242, 52, 32, 190, 69, 92, 223, 190, 103, 189, 153, 191, 206, 127, 64, 190, 195, 49, 111, 190, 8, 186, 248, 190, 146, 160, 214, 190, 135, 23, 144, 60, 28, 32, 136, 62, 87, 227, 164, 61, 115, 143, 122, 190, 251, 82, 52, 191, 87, 70, 212, 62, 3, 89, 96, 190, 40, 195, 1, 191, 59, 50, 142, 62, 188, 100, 225, 60, 140, 81, 174, 190, 128, 159, 178, 191, 209, 205, 91, 190, 233, 62, 130, 191, 99, 90, 208, 60, 37, 178, 1, 190, 212, 27, 189, 190, 59, 63, 148, 61, 21, 205, 134, 62, 215, 71, 193, 189, 237, 56, 12, 190, 60, 15, 248, 60, 180, 24, 200, 190, 128, 203, 115, 62, 150, 217, 162, 190, 134, 143, 184, 189, 85, 109, 175, 60, 108, 10, 16, 191, 193, 142, 240, 190, 142, 44, 91, 62, 130, 196, 17, 61, 241, 18, 59, 62, 137, 145, 49, 62, 187, 40, 37, 190, 82, 59, 70, 190, 200, 202, 227, 190, 204, 170, 129, 62, 81, 124, 111, 190, 48, 194, 118, 62, 54, 195, 171, 62, 195, 40, 14, 188, 216, 36, 225, 190, 152, 114, 31, 62, 212, 218, 205, 189, 195, 11, 101, 62, 27, 201, 15, 61, 157, 44, 142, 190, 244, 111, 78, 62};
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
                alignas(float) const unsigned char memory[] = {1, 94, 31, 62, 226, 40, 119, 62, 184, 98, 105, 61, 96, 122, 24, 189, 50, 48, 196, 62, 147, 14, 19, 62, 54, 32, 93, 62, 127, 108, 244, 189, 242, 170, 81, 62, 178, 47, 48, 62, 226, 54, 183, 190, 211, 254, 217, 60, 156, 89, 224, 61, 183, 145, 59, 190, 255, 59, 119, 62, 122, 141, 11, 190, 14, 109, 51, 189, 219, 203, 27, 190, 101, 27, 66, 62, 197, 239, 230, 189, 178, 184, 30, 61, 8, 193, 211, 188, 150, 103, 93, 190, 9, 90, 200, 61, 194, 196, 20, 62, 145, 16, 6, 188, 51, 92, 154, 185, 28, 44, 132, 189, 255, 58, 42, 62, 7, 98, 27, 189, 129, 157, 41, 189, 117, 72, 200, 61};
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
                alignas(float) const unsigned char memory[] = {141, 155, 39, 190, 189, 16, 201, 190, 234, 101, 20, 191, 239, 72, 57, 62, 89, 206, 87, 188, 35, 31, 146, 189, 140, 216, 21, 191, 36, 27, 201, 187, 93, 181, 131, 191, 132, 5, 49, 191, 51, 0, 31, 63, 2, 243, 134, 190, 86, 187, 144, 191, 142, 201, 6, 191, 248, 161, 134, 62, 160, 139, 110, 62, 253, 228, 147, 190, 105, 57, 26, 63, 185, 234, 46, 191, 250, 151, 4, 63, 73, 112, 37, 189, 68, 104, 155, 190, 68, 63, 70, 63, 16, 129, 149, 61, 11, 104, 66, 191, 217, 131, 83, 63, 245, 96, 214, 62, 81, 169, 178, 190, 80, 232, 238, 188, 156, 181, 16, 63, 193, 40, 129, 63, 105, 186, 178, 62, 100, 152, 145, 190, 134, 11, 205, 189, 181, 183, 133, 62, 201, 98, 119, 190, 72, 112, 191, 190, 3, 200, 15, 62, 142, 46, 192, 62, 183, 107, 5, 62, 82, 7, 183, 61, 102, 145, 141, 62, 150, 222, 179, 61, 7, 207, 173, 61, 23, 95, 67, 189, 251, 167, 180, 62, 91, 236, 104, 190, 83, 27, 143, 189, 212, 90, 69, 190, 252, 9, 152, 189, 5, 251, 145, 190, 124, 199, 2, 63, 135, 170, 111, 188, 31, 230, 7, 190, 178, 230, 27, 63, 23, 136, 167, 190, 239, 102, 107, 62, 159, 244, 250, 59, 49, 217, 33, 189, 46, 32, 80, 190, 98, 70, 118, 190, 245, 50, 58, 189, 60, 144, 161, 61, 140, 133, 150, 189};
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
                alignas(float) const unsigned char memory[] = {134, 26, 149, 189, 6, 233, 192, 190};
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
    alignas(float) const unsigned char memory[] = {54, 120, 180, 190, 168, 115, 114, 191, 131, 238, 144, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {92, 164, 225, 190, 202, 244, 129, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0030/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}