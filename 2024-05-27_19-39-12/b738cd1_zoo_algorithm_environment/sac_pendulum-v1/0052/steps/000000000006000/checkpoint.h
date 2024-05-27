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
                alignas(float) const unsigned char memory[] = {54, 20, 55, 63, 62, 205, 74, 191, 36, 191, 160, 190, 115, 133, 5, 63, 197, 62, 153, 62, 176, 81, 39, 63, 10, 38, 55, 61, 113, 51, 78, 190, 233, 122, 9, 61, 68, 5, 89, 189, 199, 137, 188, 62, 249, 82, 50, 191, 117, 42, 133, 61, 17, 248, 6, 191, 164, 181, 4, 63, 40, 182, 79, 62, 234, 53, 51, 191, 86, 108, 130, 189, 63, 190, 146, 63, 138, 49, 254, 62, 12, 11, 14, 62, 56, 61, 2, 190, 30, 31, 242, 190, 239, 173, 161, 189, 203, 48, 59, 62, 27, 129, 132, 191, 9, 158, 73, 62, 173, 60, 7, 191, 163, 187, 34, 191, 103, 145, 103, 190, 160, 56, 32, 191, 158, 114, 2, 62, 242, 104, 16, 63, 92, 170, 157, 62, 128, 32, 139, 190, 105, 208, 21, 63, 63, 144, 24, 191, 128, 251, 66, 191, 31, 160, 198, 189, 237, 71, 149, 62, 235, 39, 97, 191, 14, 174, 15, 63, 102, 249, 197, 61, 23, 139, 171, 191, 178, 11, 8, 190, 116, 197, 182, 62, 182, 0, 147, 188, 207, 144, 21, 63, 101, 178, 222, 190, 127, 128, 230, 190, 111, 78, 24, 63, 241, 120, 24, 63, 232, 205, 61, 191, 31, 16, 142, 190, 185, 210, 51, 62, 75, 78, 32, 191, 234, 106, 227, 62, 91, 32, 161, 62, 223, 183, 96, 63, 31, 227, 209, 62, 115, 129, 188, 62, 16, 246, 14, 63, 63, 236, 249, 190, 60, 218, 191, 62, 195, 237, 53, 191, 6, 145, 226, 189, 232, 225, 59, 191, 239, 54, 190, 190, 186, 101, 209, 189, 15, 249, 33, 191, 124, 105, 67, 62, 131, 143, 102, 62, 196, 22, 192, 62, 209, 107, 127, 191, 226, 192, 185, 190, 189, 45, 157, 61, 211, 72, 83, 191, 196, 189, 82, 62, 211, 94, 194, 190, 50, 133, 174, 189, 210, 138, 145, 62, 79, 253, 232, 62, 33, 107, 155, 62, 173, 10, 93, 62, 137, 12, 190, 190, 64, 32, 247, 62, 204, 232, 193, 62, 131, 12, 3, 191, 219, 186, 159, 63, 112, 215, 112, 62, 244, 71, 101, 61, 213, 129, 169, 62, 52, 84, 60, 63, 253, 126, 164, 62, 224, 40, 106, 63, 45, 204, 120, 62};
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
                alignas(float) const unsigned char memory[] = {237, 34, 209, 190, 68, 28, 187, 190, 48, 0, 19, 191, 46, 229, 48, 190, 154, 159, 178, 189, 209, 95, 27, 191, 14, 66, 151, 62, 53, 234, 66, 191, 205, 86, 226, 62, 237, 51, 196, 61, 240, 24, 14, 191, 162, 216, 190, 61, 216, 104, 146, 189, 16, 12, 216, 61, 143, 60, 223, 62, 206, 23, 197, 62, 132, 47, 194, 190, 254, 154, 229, 61, 30, 199, 180, 61, 214, 72, 9, 63, 221, 204, 87, 62, 185, 226, 17, 191, 48, 36, 76, 63, 225, 112, 133, 62, 101, 115, 205, 62, 61, 198, 101, 62, 180, 241, 154, 190, 233, 190, 226, 190, 190, 115, 134, 190, 4, 48, 34, 189, 238, 160, 12, 63, 137, 217, 130, 188};
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
                alignas(float) const unsigned char memory[] = {124, 177, 39, 62, 178, 87, 28, 191, 172, 51, 171, 60, 129, 146, 238, 61, 18, 177, 58, 62, 8, 12, 12, 60, 161, 150, 122, 189, 227, 90, 164, 62, 139, 14, 194, 62, 140, 24, 195, 190, 199, 56, 54, 62, 218, 109, 207, 190, 59, 32, 9, 61, 90, 213, 85, 62, 74, 78, 150, 62, 241, 59, 109, 190, 240, 161, 95, 62, 17, 141, 132, 62, 21, 102, 200, 62, 86, 98, 166, 189, 255, 243, 136, 190, 42, 68, 172, 190, 125, 135, 206, 60, 115, 13, 51, 61, 6, 91, 56, 60, 130, 173, 244, 60, 128, 43, 156, 190, 237, 17, 243, 190, 240, 254, 35, 62, 235, 88, 19, 61, 60, 246, 251, 61, 129, 110, 113, 191, 168, 7, 131, 62, 45, 61, 126, 188, 69, 4, 180, 58, 191, 251, 189, 62, 17, 220, 86, 62, 118, 116, 138, 189, 2, 105, 158, 190, 97, 90, 125, 61, 240, 58, 99, 62, 51, 59, 74, 190, 108, 50, 111, 62, 26, 108, 220, 189, 131, 16, 2, 61, 71, 116, 45, 61, 48, 150, 145, 189, 226, 99, 44, 190, 248, 203, 222, 61, 157, 13, 152, 62, 175, 168, 251, 61, 158, 222, 40, 62, 195, 136, 125, 188, 18, 181, 9, 190, 0, 165, 81, 61, 4, 193, 65, 61, 204, 235, 235, 190, 195, 233, 168, 190, 137, 204, 182, 189, 36, 35, 183, 189, 35, 81, 152, 62, 56, 208, 154, 62, 73, 82, 38, 62, 84, 56, 139, 190, 228, 139, 64, 189, 103, 144, 82, 61, 247, 157, 75, 60, 76, 41, 12, 191, 242, 149, 150, 62, 248, 189, 209, 62, 60, 131, 71, 189, 233, 62, 228, 61, 164, 61, 127, 62, 139, 170, 97, 62, 13, 162, 242, 60, 46, 15, 182, 61, 219, 104, 44, 60, 90, 135, 47, 62, 186, 0, 116, 62, 68, 64, 178, 61, 111, 67, 6, 62, 35, 68, 4, 191, 85, 71, 100, 62, 149, 76, 184, 189, 83, 174, 27, 190, 77, 234, 240, 61, 66, 12, 138, 189, 151, 224, 99, 188, 235, 38, 193, 189, 99, 170, 202, 62, 198, 21, 235, 61, 102, 114, 241, 61, 84, 139, 251, 61, 207, 134, 0, 188, 4, 19, 138, 62, 238, 209, 67, 188, 38, 57, 125, 62, 169, 224, 165, 61, 12, 215, 13, 62, 76, 185, 205, 189, 235, 192, 159, 62, 140, 200, 140, 62, 28, 161, 134, 62, 42, 56, 138, 61, 142, 34, 33, 62, 36, 148, 94, 62, 73, 201, 15, 62, 59, 89, 119, 61, 94, 140, 108, 61, 38, 173, 35, 62, 243, 165, 77, 61, 91, 49, 116, 62, 126, 48, 168, 61, 1, 132, 89, 190, 97, 88, 158, 62, 54, 167, 21, 61, 169, 21, 67, 190, 225, 147, 38, 63, 213, 134, 19, 190, 36, 239, 152, 189, 142, 185, 252, 61, 158, 39, 89, 62, 85, 217, 145, 61, 207, 54, 232, 189, 231, 65, 234, 188, 234, 20, 133, 190, 139, 71, 170, 62, 206, 78, 4, 60, 104, 155, 24, 62, 208, 3, 49, 190, 166, 39, 115, 189, 138, 150, 112, 187, 69, 52, 64, 189, 119, 39, 112, 189, 143, 149, 140, 189, 4, 141, 147, 189, 171, 50, 27, 61, 12, 222, 130, 188, 60, 123, 203, 189, 219, 242, 106, 61, 245, 250, 170, 189, 32, 236, 133, 61, 98, 133, 33, 190, 100, 119, 246, 189, 6, 163, 129, 60, 190, 194, 30, 189, 229, 180, 34, 62, 147, 138, 179, 189, 245, 115, 143, 60, 139, 92, 241, 189, 53, 57, 34, 190, 203, 24, 17, 62, 128, 135, 161, 188, 202, 248, 193, 189, 190, 81, 16, 190, 244, 250, 255, 61, 210, 56, 56, 189, 206, 172, 247, 61, 100, 172, 87, 189, 138, 183, 118, 189, 213, 201, 133, 61, 243, 95, 167, 189, 114, 120, 58, 61, 63, 27, 147, 61, 165, 76, 164, 61, 45, 102, 47, 190, 121, 66, 31, 62, 191, 119, 35, 62, 83, 73, 237, 188, 37, 31, 28, 188, 234, 255, 13, 62, 92, 5, 59, 61, 239, 117, 91, 190, 144, 69, 218, 61, 223, 3, 35, 190, 63, 17, 254, 189, 198, 99, 140, 189, 112, 171, 73, 62, 210, 229, 184, 189, 229, 111, 18, 190, 163, 203, 209, 187, 181, 164, 231, 189, 111, 134, 65, 189, 178, 153, 53, 58, 37, 145, 211, 61, 233, 178, 53, 60, 229, 221, 47, 190, 9, 35, 234, 188, 7, 18, 26, 190, 252, 0, 14, 60, 45, 207, 23, 190, 62, 113, 96, 190, 59, 245, 238, 189, 173, 92, 139, 188, 115, 132, 242, 61, 194, 225, 84, 61, 208, 110, 34, 61, 114, 140, 245, 61, 155, 68, 87, 60, 84, 178, 190, 189, 107, 113, 133, 60, 32, 215, 187, 61, 154, 71, 254, 189, 103, 29, 223, 60, 190, 234, 204, 188, 73, 107, 23, 61, 29, 17, 234, 61, 107, 229, 206, 189, 148, 86, 40, 61, 70, 183, 221, 189, 225, 141, 26, 190, 181, 111, 83, 189, 43, 106, 34, 61, 216, 144, 37, 190, 95, 103, 142, 189, 171, 11, 40, 189, 235, 172, 48, 190, 41, 226, 146, 189, 79, 54, 17, 190, 204, 191, 156, 189, 178, 121, 42, 62, 130, 38, 63, 189, 181, 6, 205, 189, 8, 119, 94, 60, 48, 200, 8, 191, 180, 135, 191, 62, 220, 211, 63, 60, 159, 178, 92, 190, 238, 62, 217, 190, 8, 90, 170, 190, 246, 196, 177, 62, 12, 21, 147, 190, 57, 139, 30, 191, 16, 39, 237, 61, 139, 128, 43, 189, 143, 101, 58, 62, 128, 164, 65, 189, 231, 54, 247, 190, 124, 190, 166, 189, 200, 252, 55, 62, 87, 223, 148, 190, 201, 48, 228, 190, 122, 224, 111, 190, 162, 155, 69, 62, 218, 234, 0, 63, 131, 60, 241, 61, 68, 65, 95, 60, 219, 227, 27, 188, 192, 156, 134, 189, 101, 221, 136, 189, 190, 169, 231, 61, 107, 131, 143, 61, 44, 27, 98, 190, 35, 128, 196, 61, 165, 51, 240, 189, 78, 92, 164, 62, 127, 158, 9, 190, 75, 103, 11, 62, 49, 41, 239, 187, 112, 184, 33, 191, 214, 162, 211, 190, 112, 183, 178, 61, 100, 149, 158, 190, 198, 128, 60, 190, 24, 37, 106, 62, 81, 193, 40, 62, 97, 104, 33, 191, 195, 57, 5, 190, 196, 230, 113, 62, 24, 149, 184, 190, 168, 97, 135, 62, 241, 167, 35, 190, 71, 103, 226, 190, 1, 139, 135, 190, 234, 253, 160, 190, 9, 116, 61, 191, 117, 105, 171, 190, 100, 77, 205, 62, 226, 81, 78, 62, 88, 108, 100, 62, 7, 50, 33, 190, 30, 198, 59, 63, 139, 31, 138, 62, 0, 188, 68, 61, 87, 19, 143, 191, 145, 88, 144, 190, 86, 191, 227, 190, 107, 226, 160, 189, 34, 216, 27, 191, 64, 107, 132, 61, 110, 131, 5, 62, 232, 78, 126, 189, 118, 8, 2, 191, 98, 28, 139, 190, 179, 119, 159, 62, 144, 243, 52, 190, 131, 146, 68, 188, 186, 114, 146, 189, 24, 128, 159, 190, 91, 93, 151, 62, 189, 142, 162, 189, 26, 50, 27, 61, 249, 135, 2, 190, 98, 110, 168, 61, 243, 4, 228, 190, 22, 142, 192, 190, 133, 133, 169, 188, 63, 0, 154, 61, 185, 132, 203, 62, 12, 135, 51, 61, 156, 38, 34, 189, 13, 221, 78, 190, 122, 17, 43, 190, 17, 46, 175, 62, 207, 174, 22, 190, 90, 100, 83, 61, 120, 244, 97, 190, 90, 226, 147, 190, 126, 229, 7, 59, 66, 0, 103, 62, 182, 27, 240, 189, 57, 147, 49, 190, 73, 139, 1, 61, 106, 132, 47, 62, 24, 226, 240, 189, 39, 197, 191, 61, 53, 124, 70, 62, 58, 53, 22, 62, 202, 129, 56, 190, 166, 97, 70, 190, 100, 83, 55, 190, 94, 130, 81, 190, 59, 51, 176, 61, 131, 45, 0, 190, 152, 124, 53, 190, 92, 72, 176, 61, 24, 111, 164, 61, 108, 222, 230, 189, 221, 112, 174, 189, 126, 68, 99, 62, 30, 231, 33, 189, 102, 184, 220, 59, 77, 246, 48, 61, 156, 130, 183, 60, 228, 199, 18, 190, 75, 41, 83, 190, 220, 32, 51, 61, 144, 53, 18, 189, 171, 169, 169, 189, 225, 156, 176, 189, 136, 44, 18, 62, 51, 93, 185, 61, 35, 62, 27, 189, 184, 204, 137, 190, 93, 159, 13, 190, 153, 83, 5, 62, 90, 176, 6, 62, 156, 108, 245, 61, 151, 84, 77, 189, 217, 218, 164, 62, 31, 38, 47, 62, 202, 233, 211, 189, 52, 36, 125, 62, 251, 24, 86, 190, 226, 4, 19, 62, 87, 92, 83, 62, 74, 87, 234, 61, 118, 136, 179, 189, 231, 177, 9, 62, 213, 69, 66, 61, 163, 250, 73, 62, 134, 166, 234, 189, 75, 78, 182, 190, 235, 19, 75, 190, 163, 104, 108, 189, 15, 82, 54, 62, 225, 67, 81, 188, 137, 88, 128, 190, 114, 209, 152, 189, 138, 150, 249, 188, 71, 212, 5, 62, 41, 92, 61, 61, 23, 178, 55, 62, 193, 242, 158, 190, 146, 205, 163, 62, 11, 156, 190, 61, 251, 218, 173, 188, 65, 205, 180, 61, 183, 137, 82, 190, 88, 181, 74, 62, 82, 97, 160, 190, 141, 25, 183, 189, 228, 236, 129, 61, 165, 250, 153, 190, 112, 186, 24, 188, 89, 54, 91, 61, 33, 99, 129, 190, 127, 238, 157, 190, 3, 218, 82, 189, 135, 143, 110, 190, 45, 212, 58, 187, 159, 119, 87, 62, 65, 27, 173, 190, 231, 17, 84, 190, 182, 88, 71, 190, 230, 55, 204, 62, 118, 185, 9, 190, 191, 216, 44, 190, 66, 193, 214, 189, 178, 198, 176, 190, 186, 51, 32, 190, 201, 163, 42, 61, 251, 179, 217, 187, 67, 80, 252, 189, 176, 219, 130, 190, 83, 100, 24, 61, 174, 129, 86, 61, 146, 251, 203, 189, 90, 175, 11, 189, 62, 114, 149, 190, 18, 4, 6, 190, 96, 88, 159, 61, 98, 223, 189, 58, 182, 211, 167, 188, 183, 131, 9, 62, 198, 102, 70, 62, 61, 204, 137, 189, 33, 119, 7, 61, 159, 203, 110, 62, 182, 238, 252, 61, 52, 42, 144, 62, 91, 11, 9, 190, 36, 9, 101, 189, 183, 189, 7, 189, 45, 98, 82, 59, 6, 104, 125, 190, 116, 95, 199, 190, 21, 3, 201, 189, 225, 177, 61, 189, 221, 233, 131, 61, 251, 144, 233, 60, 86, 182, 137, 62, 43, 215, 109, 190, 228, 154, 181, 190, 130, 126, 119, 190, 157, 142, 70, 190, 151, 139, 56, 190, 114, 177, 194, 190, 3, 65, 57, 191, 167, 142, 143, 60, 83, 183, 48, 190, 212, 21, 43, 190, 179, 13, 101, 191, 121, 28, 140, 190, 39, 103, 133, 62, 193, 116, 182, 190, 224, 255, 76, 189, 176, 55, 175, 62, 11, 130, 79, 191, 26, 139, 97, 189, 81, 92, 4, 63, 56, 9, 10, 191, 72, 128, 120, 62, 34, 160, 7, 190, 103, 149, 209, 190, 221, 56, 169, 190, 72, 98, 72, 190, 74, 83, 99, 191, 71, 248, 208, 62, 153, 35, 193, 190, 144, 63, 219, 62, 84, 5, 61, 190, 247, 70, 147, 189, 14, 155, 68, 63, 202, 248, 180, 61, 33, 151, 245, 189, 0, 223, 92, 191, 209, 19, 144, 190, 66, 73, 32, 191, 2, 61, 192, 61, 39, 247, 88, 61, 217, 14, 51, 189, 125, 104, 23, 62, 52, 131, 74, 61, 151, 22, 134, 62, 122, 82, 23, 189, 39, 50, 218, 189, 121, 4, 61, 62, 168, 189, 119, 62, 242, 103, 198, 189, 152, 193, 224, 60, 87, 162, 92, 190, 196, 162, 180, 189, 252, 71, 146, 62, 210, 15, 51, 62, 83, 33, 242, 61, 81, 84, 120, 62, 79, 2, 166, 62, 127, 195, 137, 62, 12, 249, 168, 187, 210, 252, 14, 188, 90, 251, 225, 190, 100, 152, 30, 62, 113, 168, 242, 59, 113, 73, 145, 61, 111, 60, 126, 190, 126, 62, 139, 59, 12, 13, 99, 190, 88, 186, 130, 60, 198, 143, 102, 61, 245, 252, 58, 62, 7, 199, 160, 190, 199, 69, 223, 189, 66, 53, 198, 60, 48, 211, 247, 188, 218, 87, 43, 190, 159, 147, 47, 189, 39, 91, 27, 190, 173, 5, 193, 190, 137, 40, 211, 189, 59, 143, 171, 190, 142, 121, 234, 61, 245, 190, 135, 190, 167, 31, 2, 190, 235, 220, 64, 60, 138, 46, 33, 61, 140, 22, 131, 190, 201, 105, 198, 190, 200, 58, 163, 190, 60, 63, 218, 61, 98, 122, 24, 190, 103, 143, 110, 60, 49, 136, 60, 62, 177, 10, 236, 61, 69, 247, 83, 62, 207, 218, 47, 61, 170, 179, 131, 191, 173, 249, 100, 190, 154, 237, 46, 189, 72, 62, 79, 61, 230, 90, 183, 190, 145, 238, 174, 62, 154, 1, 186, 188, 180, 122, 239, 189, 254, 56, 191, 190, 112, 156, 162, 188, 83, 134, 169, 61, 231, 248, 48, 190, 148, 76, 145, 190, 7, 215, 184, 189, 46, 251, 97, 61, 162, 84, 12, 190, 22, 138, 123, 189, 163, 57, 238, 189, 230, 62, 43, 190, 166, 43, 148, 60, 75, 68, 157, 60, 44, 239, 59, 190, 149, 205, 108, 61, 177, 215, 144, 61, 117, 68, 165, 190, 6, 52, 98, 189, 53, 43, 227, 188, 22, 184, 251, 61, 58, 58, 73, 62, 240, 25, 134, 61, 129, 102, 89, 62, 231, 194, 161, 61, 68, 167, 79, 62, 201, 63, 249, 61, 154, 29, 185, 189, 64, 4, 134, 190, 101, 213, 38, 190, 95, 168, 70, 189, 243, 188, 176, 188, 186, 31, 68, 62, 238, 195, 192, 61, 0, 0, 142, 61, 212, 147, 31, 62, 185, 242, 162, 189, 17, 91, 85, 190, 184, 109, 233, 188, 186, 245, 229, 60, 226, 242, 146, 190, 152, 84, 37, 190, 245, 104, 255, 61, 27, 32, 158, 188, 176, 16, 22, 60, 176, 205, 82, 62, 220, 113, 54, 190, 18, 155, 7, 187, 60, 197, 206, 61, 158, 45, 241, 189, 78, 145, 57, 190, 159, 5, 20, 190, 61, 162, 161, 190, 204, 8, 81, 62, 251, 2, 237, 62, 125, 86, 97, 61, 124, 177, 110, 189, 79, 135, 190, 58, 192, 129, 148, 190, 153, 60, 163, 60, 177, 251, 240, 188, 65, 165, 64, 190, 231, 27, 106, 189, 244, 189, 26, 190, 130, 52, 111, 62, 141, 7, 193, 60, 143, 139, 115, 62, 221, 132, 26, 190, 43, 88, 129, 190, 246, 248, 21, 191, 85, 37, 135, 189, 117, 244, 189, 62, 222, 76, 191, 190, 220, 172, 136, 190, 186, 252, 115, 188, 113, 100, 187, 189, 145, 226, 56, 62, 26, 65, 120, 62, 200, 84, 80, 190, 102, 188, 185, 61, 193, 146, 65, 62, 75, 56, 25, 190, 102, 211, 216, 189, 217, 43, 180, 190, 247, 151, 34, 62, 21, 219, 170, 62, 54, 184, 83, 61, 254, 186, 164, 188, 136, 247, 62, 188, 5, 116, 86, 189, 77, 159, 217, 60, 89, 5, 186, 189, 160, 43, 92, 62, 232, 43, 46, 190, 159, 219, 8, 190, 174, 217, 239, 61, 104, 57, 134, 62, 195, 156, 158, 190, 201, 173, 61, 190, 204, 60, 226, 189, 165, 86, 119, 190, 199, 84, 235, 61, 121, 82, 196, 189, 45, 188, 138, 62, 11, 250, 196, 61, 6, 92, 19, 61, 113, 168, 51, 190, 145, 235, 91, 189, 7, 153, 210, 60, 205, 54, 41, 188, 150, 203, 18, 62, 212, 250, 146, 62, 4, 111, 242, 189, 93, 209, 54, 190, 117, 105, 173, 61, 202, 228, 181, 189, 78, 236, 4, 62, 203, 42, 166, 61, 133, 255, 7, 191, 21, 223, 88, 61, 107, 194, 30, 189, 74, 228, 117, 61, 214, 234, 116, 62, 233, 250, 170, 190, 61, 147, 228, 190, 12, 243, 136, 190, 181, 186, 180, 189, 98, 100, 13, 62, 99, 58, 202, 190, 45, 107, 140, 190, 188, 74, 114, 189, 112, 26, 72, 60, 142, 69, 91, 190, 134, 9, 169, 61, 164, 66, 60, 61, 87, 222, 159, 62, 254, 216, 98, 59, 241, 57, 18, 62, 38, 233, 117, 60, 249, 91, 0, 62, 2, 91, 220, 189, 231, 88, 178, 61, 107, 61, 128, 62, 153, 138, 179, 62, 196, 132, 7, 190, 71, 186, 190, 60, 255, 151, 155, 61, 113, 241, 24, 62, 172, 202, 89, 189, 113, 252, 118, 188, 175, 252, 200, 190, 115, 28, 165, 61, 170, 244, 215, 61, 143, 171, 195, 61, 55, 225, 211, 60, 56, 212, 11, 190, 170, 88, 178, 190, 64, 105, 21, 188, 177, 135, 183, 61, 9, 187, 234, 61, 133, 198, 128, 190, 184, 134, 57, 62, 249, 11, 6, 190, 248, 91, 82, 61, 221, 49, 20, 62, 138, 110, 115, 61, 150, 0, 91, 190, 130, 67, 57, 189, 23, 109, 134, 62, 123, 14, 245, 61, 75, 184, 108, 60, 67, 201, 252, 188, 194, 205, 189, 189, 52, 48, 140, 61, 30, 8, 203, 61, 112, 24, 73, 189, 57, 225, 3, 190, 176, 244, 103, 61, 239, 133, 204, 62, 235, 194, 135, 60, 46, 128, 73, 62, 90, 225, 199, 61, 228, 135, 173, 190, 137, 92, 141, 189, 52, 116, 114, 62, 107, 149, 17, 61, 123, 157, 73, 190, 235, 48, 177, 61, 65, 218, 84, 189, 170, 36, 72, 62, 70, 244, 110, 62, 1, 10, 2, 62, 184, 186, 185, 61, 12, 216, 47, 191, 30, 243, 166, 61, 222, 47, 35, 190, 83, 202, 108, 62, 61, 252, 5, 62, 242, 146, 65, 61, 72, 47, 220, 62, 49, 20, 189, 189, 131, 95, 136, 188, 220, 176, 157, 62, 29, 148, 207, 189, 186, 205, 150, 62, 50, 87, 2, 62, 88, 196, 80, 62, 3, 177, 75, 189, 227, 77, 42, 62, 202, 233, 142, 61, 32, 241, 32, 191, 85, 0, 91, 60, 123, 10, 43, 62, 136, 231, 26, 62, 161, 123, 169, 61, 248, 192, 111, 190, 106, 136, 26, 62, 49, 163, 90, 190, 36, 139, 251, 61, 7, 23, 160, 189, 140, 46, 150, 62, 12, 14, 1, 61, 122, 78, 71, 190, 74, 246, 36, 62, 148, 136, 64, 62, 142, 139, 195, 190, 85, 113, 79, 62, 13, 221, 172, 189, 135, 12, 77, 191, 58, 149, 214, 190, 140, 154, 81, 190, 178, 40, 19, 190, 44, 165, 147, 189, 138, 233, 250, 59, 83, 119, 91, 62, 201, 245, 217, 189, 146, 86, 41, 189, 44, 182, 151, 62, 1, 211, 254, 189, 122, 26, 32, 62, 117, 169, 199, 59, 29, 203, 212, 189, 184, 47, 219, 190, 132, 218, 179, 188, 253, 186, 196, 190, 180, 194, 164, 188, 169, 178, 240, 189, 117, 176, 232, 61, 99, 179, 131, 189, 172, 32, 190, 60, 235, 194, 247, 62, 1, 28, 151, 62, 221, 70, 36, 61, 30, 19, 31, 191, 112, 94, 141, 190, 197, 6, 159, 190, 170, 178, 42, 190, 92, 186, 163, 188, 149, 48, 126, 61, 190, 45, 223, 60, 210, 222, 215, 58, 186, 89, 99, 61, 16, 90, 205, 61, 174, 9, 29, 62, 71, 97, 119, 60, 127, 73, 200, 189, 159, 114, 255, 189, 115, 24, 223, 61, 180, 202, 18, 62, 200, 198, 36, 190, 6, 28, 52, 190, 72, 128, 187, 61, 237, 203, 131, 189, 27, 139, 152, 189, 187, 240, 100, 61, 43, 127, 196, 61, 23, 228, 252, 189, 72, 75, 201, 189, 242, 8, 72, 189, 127, 220, 228, 189, 15, 159, 43, 62, 187, 87, 239, 60, 123, 97, 28, 190, 54, 12, 17, 60, 42, 124, 91, 189, 19, 93, 217, 189, 21, 181, 1, 190, 179, 198, 28, 190, 47, 123, 157, 188, 152, 5, 153, 62, 97, 215, 232, 61, 98, 95, 207, 189, 186, 21, 211, 190, 160, 95, 202, 189, 115, 246, 248, 190, 35, 153, 160, 62, 209, 151, 8, 190, 239, 210, 27, 190, 239, 225, 51, 191, 22, 63, 233, 189, 179, 57, 117, 188, 66, 57, 157, 190, 60, 50, 2, 62, 251, 123, 250, 62, 169, 142, 214, 61, 25, 19, 78, 190, 89, 93, 40, 63, 143, 32, 150, 189, 188, 203, 117, 61, 238, 88, 158, 189, 112, 116, 179, 190, 143, 216, 19, 191, 221, 27, 138, 189, 234, 72, 172, 62, 246, 80, 251, 61, 157, 121, 132, 188, 49, 181, 24, 62, 180, 24, 97, 190, 37, 6, 7, 189, 44, 241, 205, 61, 122, 94, 130, 60, 227, 91, 254, 189, 42, 222, 195, 186, 145, 74, 51, 61, 164, 123, 131, 189, 124, 8, 172, 62, 3, 238, 8, 190, 31, 137, 173, 189, 98, 36, 36, 62, 96, 56, 255, 61, 4, 89, 182, 189, 153, 13, 2, 62, 255, 209, 56, 190, 79, 62, 79, 62, 141, 162, 40, 62, 147, 180, 43, 62, 58, 99, 81, 187, 41, 166, 128, 62, 174, 76, 80, 62, 115, 92, 167, 62, 11, 239, 70, 189, 193, 58, 196, 190, 32, 162, 2, 191, 46, 38, 95, 61, 15, 25, 109, 62, 181, 93, 140, 60, 220, 177, 95, 190, 159, 175, 150, 189, 25, 28, 176, 61, 156, 112, 93, 62, 57, 76, 18, 62, 8, 77, 71, 62, 38, 121, 9, 61, 205, 36, 137, 189, 145, 243, 30, 190, 79, 25, 39, 188, 142, 67, 235, 188, 195, 149, 129, 62, 232, 1, 200, 61, 244, 254, 204, 57, 136, 64, 86, 61, 116, 40, 67, 62, 214, 147, 187, 189, 179, 77, 172, 61, 190, 61, 157, 188, 248, 69, 16, 62, 173, 195, 77, 62, 76, 170, 135, 61, 84, 182, 250, 61, 128, 51, 6, 61, 145, 178, 113, 62, 146, 52, 160, 61, 87, 228, 6, 62, 110, 32, 131, 190, 188, 126, 241, 189, 108, 28, 123, 61, 12, 155, 198, 61, 167, 214, 17, 189, 2, 29, 47, 189, 185, 180, 16, 62, 102, 142, 130, 190, 179, 255, 177, 61, 114, 31, 178, 62, 243, 2, 179, 189, 153, 3, 69, 190, 221, 48, 156, 189, 254, 39, 160, 61, 109, 103, 34, 61, 142, 104, 183, 189, 230, 169, 163, 188, 85, 225, 23, 62, 59, 96, 147, 61, 246, 222, 91, 60, 98, 245, 134, 189, 201, 253, 224, 61, 109, 208, 119, 61, 12, 143, 35, 190, 50, 86, 48, 190, 129, 39, 32, 190, 136, 220, 36, 190, 32, 242, 3, 62, 236, 221, 66, 190, 210, 68, 29, 62, 247, 203, 61, 190, 100, 16, 81, 190, 5, 161, 40, 190, 254, 41, 248, 61, 127, 242, 192, 61, 175, 180, 33, 61, 47, 42, 77, 189, 78, 31, 102, 61, 193, 227, 16, 188, 207, 92, 20, 62, 108, 73, 127, 189, 75, 199, 247, 61, 63, 182, 134, 61, 41, 200, 13, 190, 228, 189, 220, 190, 200, 40, 230, 189, 168, 188, 46, 190, 232, 65, 134, 62, 234, 87, 62, 61, 70, 195, 252, 61, 126, 85, 44, 191, 224, 141, 248, 189, 58, 233, 91, 190, 124, 4, 26, 189, 167, 191, 79, 62, 252, 183, 129, 190, 4, 155, 18, 62, 85, 230, 179, 189, 189, 118, 55, 191, 16, 137, 157, 190, 10, 231, 147, 62, 120, 214, 190, 190, 215, 147, 125, 62, 171, 123, 246, 61, 119, 18, 209, 190, 205, 188, 33, 190, 255, 54, 111, 62, 238, 5, 45, 62, 20, 16, 158, 191, 251, 133, 36, 191, 227, 88, 198, 189, 112, 71, 6, 61, 4, 168, 14, 62, 173, 136, 183, 62, 153, 74, 69, 62, 117, 203, 125, 60, 230, 233, 99, 188, 190, 178, 5, 62, 146, 31, 216, 189, 238, 71, 2, 62, 42, 3, 220, 189, 113, 146, 73, 61, 192, 29, 163, 189, 149, 80, 150, 189, 69, 66, 254, 189, 1, 108, 111, 61, 126, 165, 0, 190, 124, 239, 131, 189, 214, 248, 47, 190, 6, 232, 25, 190, 246, 158, 15, 61, 121, 142, 246, 58, 219, 186, 24, 62, 167, 143, 68, 61, 58, 77, 227, 189, 87, 206, 87, 188, 113, 10, 161, 189, 236, 83, 253, 189, 246, 176, 156, 189, 186, 127, 176, 188, 138, 194, 200, 189, 10, 68, 124, 61, 250, 201, 182, 189, 247, 203, 123, 61, 59, 44, 220, 61, 104, 166, 29, 190, 171, 28, 9, 62, 50, 19, 130, 61};
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
                alignas(float) const unsigned char memory[] = {235, 94, 169, 61, 231, 164, 158, 189, 7, 136, 181, 189, 7, 192, 181, 59, 166, 183, 98, 59, 102, 219, 203, 186, 81, 227, 113, 189, 120, 253, 223, 61, 47, 105, 72, 188, 105, 152, 112, 62, 233, 229, 88, 188, 50, 6, 92, 188, 132, 183, 21, 190, 168, 134, 214, 188, 85, 158, 75, 62, 35, 216, 97, 62, 177, 185, 201, 61, 132, 234, 79, 62, 162, 49, 13, 189, 168, 29, 213, 61, 180, 178, 137, 62, 125, 22, 71, 62, 192, 78, 108, 62, 243, 108, 68, 61, 166, 59, 126, 61, 73, 149, 51, 190, 160, 161, 210, 189, 195, 107, 169, 189, 37, 138, 245, 61, 62, 91, 86, 190, 128, 59, 42, 62, 7, 122, 53, 190};
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
                alignas(float) const unsigned char memory[] = {243, 102, 14, 63, 132, 201, 139, 62, 16, 197, 150, 190, 46, 43, 205, 190, 145, 102, 182, 188, 133, 17, 163, 61, 72, 111, 83, 189, 134, 101, 209, 190, 61, 252, 133, 191, 177, 171, 4, 191, 173, 89, 51, 190, 109, 49, 148, 62, 184, 252, 207, 190, 72, 95, 146, 190, 108, 12, 150, 191, 174, 232, 158, 62, 237, 221, 249, 62, 210, 193, 239, 188, 247, 109, 83, 190, 93, 21, 172, 190, 228, 24, 56, 62, 130, 33, 30, 62, 96, 35, 71, 62, 177, 204, 171, 190, 91, 222, 236, 190, 252, 181, 22, 62, 121, 139, 224, 62, 83, 22, 181, 62, 203, 3, 33, 62, 25, 240, 246, 61, 251, 19, 60, 63, 220, 213, 181, 189, 215, 239, 94, 62, 200, 17, 212, 187, 50, 205, 49, 62, 252, 78, 169, 189, 231, 90, 22, 190, 25, 179, 167, 61, 6, 230, 143, 61, 133, 195, 143, 60, 81, 146, 184, 61, 232, 155, 102, 190, 143, 65, 149, 62, 154, 195, 234, 60, 109, 198, 43, 62, 158, 14, 82, 62, 151, 155, 155, 188, 67, 249, 89, 190, 200, 60, 181, 188, 54, 223, 139, 190, 120, 129, 175, 61, 239, 74, 16, 190, 92, 198, 189, 190, 66, 90, 139, 190, 17, 179, 242, 189, 61, 90, 184, 61, 67, 92, 210, 62, 117, 232, 1, 189, 88, 148, 125, 189, 224, 248, 51, 61, 243, 121, 6, 190, 141, 4, 158, 61, 54, 38, 95, 62, 188, 14, 43, 62};
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
                alignas(float) const unsigned char memory[] = {248, 160, 240, 61, 136, 51, 104, 190};
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
    alignas(float) const unsigned char memory[] = {51, 27, 208, 190, 36, 193, 33, 63, 18, 93, 45, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {72, 27, 174, 191, 182, 114, 26, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0052/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}