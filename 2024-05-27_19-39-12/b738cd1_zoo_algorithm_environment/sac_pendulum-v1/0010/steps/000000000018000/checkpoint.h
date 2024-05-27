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
                alignas(float) const unsigned char memory[] = {38, 38, 87, 63, 92, 86, 213, 190, 183, 87, 192, 190, 150, 248, 176, 190, 1, 44, 40, 62, 68, 166, 22, 60, 228, 170, 142, 188, 120, 129, 64, 63, 179, 175, 14, 63, 69, 139, 22, 63, 174, 177, 68, 63, 255, 197, 175, 62, 246, 79, 130, 190, 84, 192, 195, 62, 139, 109, 2, 63, 150, 154, 116, 62, 45, 96, 148, 191, 183, 18, 137, 190, 244, 17, 39, 63, 238, 14, 168, 191, 136, 39, 156, 190, 101, 2, 189, 61, 156, 109, 172, 191, 152, 84, 233, 60, 110, 254, 175, 189, 113, 232, 92, 191, 242, 0, 94, 62, 73, 217, 23, 191, 136, 64, 152, 191, 132, 115, 131, 191, 92, 244, 222, 62, 121, 179, 21, 63, 159, 43, 175, 190, 118, 97, 27, 63, 186, 40, 214, 63, 91, 192, 164, 62, 9, 24, 203, 61, 34, 140, 91, 191, 146, 239, 214, 190, 37, 55, 56, 191, 230, 52, 165, 63, 92, 136, 145, 62, 146, 93, 12, 189, 179, 58, 188, 191, 29, 185, 90, 61, 57, 121, 27, 191, 190, 44, 108, 188, 26, 193, 223, 189, 91, 138, 198, 62, 179, 161, 234, 63, 15, 88, 10, 63, 7, 139, 160, 62, 5, 128, 100, 61, 87, 156, 213, 190, 179, 0, 84, 191, 224, 201, 191, 62, 164, 246, 13, 191, 81, 110, 20, 63, 35, 165, 130, 190, 148, 198, 229, 189, 235, 172, 8, 191, 107, 57, 169, 190, 141, 179, 88, 62, 176, 237, 21, 63, 2, 180, 72, 61, 126, 211, 42, 63, 106, 233, 190, 62, 192, 232, 66, 63, 119, 30, 42, 61, 36, 203, 89, 190, 24, 181, 206, 190, 53, 236, 132, 189, 81, 94, 66, 190, 142, 142, 180, 63, 165, 131, 21, 61, 13, 128, 138, 190, 184, 149, 154, 63, 200, 194, 207, 62, 154, 110, 72, 190, 230, 200, 60, 62, 8, 123, 253, 190, 168, 166, 42, 191, 246, 248, 45, 191, 75, 164, 34, 190, 171, 187, 231, 61, 116, 86, 69, 63, 128, 248, 224, 190, 65, 107, 137, 190, 26, 252, 169, 62, 13, 137, 134, 190, 131, 86, 89, 191, 90, 181, 156, 189, 173, 152, 115, 62, 125, 210, 240, 62, 226, 68, 107, 190, 86, 223, 90, 62};
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
                alignas(float) const unsigned char memory[] = {30, 35, 93, 191, 106, 128, 224, 62, 153, 66, 11, 190, 228, 113, 40, 191, 48, 132, 232, 190, 44, 183, 70, 61, 33, 83, 90, 190, 87, 40, 127, 189, 183, 69, 171, 62, 25, 178, 143, 60, 91, 110, 106, 62, 8, 77, 37, 61, 253, 105, 189, 62, 223, 164, 190, 61, 192, 187, 98, 62, 252, 74, 24, 63, 151, 219, 67, 62, 144, 5, 71, 62, 49, 126, 7, 191, 226, 216, 211, 190, 52, 209, 247, 190, 219, 85, 48, 62, 2, 180, 52, 63, 169, 214, 68, 62, 137, 114, 48, 190, 147, 142, 240, 60, 214, 121, 154, 190, 3, 127, 21, 63, 46, 10, 11, 190, 50, 170, 220, 62, 253, 215, 68, 191, 113, 128, 174, 190};
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
                alignas(float) const unsigned char memory[] = {188, 133, 253, 190, 7, 148, 103, 62, 43, 140, 194, 191, 185, 56, 229, 188, 189, 197, 254, 190, 37, 160, 248, 189, 5, 186, 140, 190, 126, 146, 212, 190, 142, 52, 48, 63, 14, 225, 64, 62, 21, 136, 170, 189, 54, 118, 135, 63, 253, 59, 236, 61, 158, 9, 92, 190, 206, 108, 230, 62, 249, 131, 145, 62, 251, 20, 163, 191, 227, 210, 136, 190, 103, 246, 14, 190, 66, 244, 117, 191, 240, 248, 6, 63, 203, 142, 231, 190, 156, 184, 244, 60, 244, 7, 179, 61, 196, 27, 114, 61, 72, 55, 78, 189, 64, 95, 160, 62, 183, 180, 75, 62, 78, 162, 163, 190, 181, 3, 133, 62, 6, 105, 129, 189, 58, 192, 75, 190, 207, 132, 157, 189, 223, 142, 74, 190, 180, 22, 216, 189, 211, 20, 7, 62, 227, 12, 4, 61, 196, 61, 180, 60, 136, 157, 183, 188, 83, 123, 182, 189, 217, 11, 172, 189, 133, 82, 175, 61, 64, 52, 91, 190, 121, 134, 173, 61, 153, 11, 164, 61, 84, 138, 74, 190, 114, 255, 89, 61, 159, 33, 150, 189, 224, 60, 66, 59, 67, 252, 49, 190, 16, 163, 249, 61, 225, 19, 44, 62, 242, 55, 21, 62, 118, 53, 5, 190, 56, 107, 66, 190, 164, 95, 224, 189, 157, 227, 222, 188, 189, 43, 8, 62, 254, 49, 240, 59, 148, 241, 139, 188, 41, 228, 228, 189, 163, 7, 114, 189, 177, 69, 47, 60, 99, 146, 17, 62, 40, 81, 46, 191, 74, 76, 165, 188, 52, 243, 249, 60, 128, 129, 202, 62, 201, 232, 137, 190, 198, 176, 241, 190, 206, 243, 7, 191, 244, 52, 68, 190, 254, 3, 44, 188, 83, 171, 135, 60, 92, 117, 231, 61, 209, 60, 25, 63, 218, 156, 194, 61, 152, 104, 173, 190, 123, 255, 215, 189, 162, 221, 32, 190, 251, 157, 82, 62, 37, 125, 230, 189, 49, 86, 23, 190, 37, 147, 218, 190, 58, 0, 12, 62, 8, 129, 163, 62, 36, 102, 144, 62, 32, 143, 80, 190, 211, 250, 136, 62, 2, 71, 173, 60, 45, 14, 205, 62, 153, 203, 25, 191, 126, 246, 62, 190, 165, 255, 204, 62, 107, 22, 117, 190, 182, 250, 41, 62, 74, 11, 102, 61, 76, 90, 63, 189, 20, 41, 189, 61, 114, 233, 14, 191, 162, 139, 80, 62, 90, 221, 133, 188, 113, 190, 37, 62, 77, 195, 179, 62, 106, 248, 82, 62, 223, 178, 210, 59, 134, 65, 52, 188, 122, 75, 112, 191, 141, 116, 3, 62, 201, 91, 248, 190, 191, 146, 9, 62, 193, 95, 26, 62, 23, 17, 74, 191, 26, 51, 187, 60, 22, 249, 153, 61, 244, 251, 54, 63, 152, 84, 132, 62, 115, 236, 193, 61, 177, 188, 13, 61, 13, 169, 82, 189, 15, 126, 134, 190, 118, 82, 179, 190, 216, 102, 6, 190, 145, 252, 58, 60, 155, 91, 17, 61, 115, 196, 138, 189, 227, 251, 86, 61, 64, 31, 177, 189, 230, 111, 32, 62, 121, 49, 178, 189, 54, 151, 144, 62, 228, 235, 101, 190, 1, 138, 99, 62, 51, 239, 138, 61, 56, 148, 78, 62, 36, 11, 38, 62, 193, 25, 35, 190, 172, 50, 198, 190, 225, 41, 232, 61, 144, 76, 235, 190, 198, 66, 17, 62, 123, 246, 132, 62, 158, 191, 195, 190, 196, 212, 3, 61, 3, 144, 17, 62, 178, 209, 147, 62, 112, 74, 82, 191, 137, 65, 111, 190, 76, 6, 243, 190, 21, 28, 2, 190, 109, 71, 223, 62, 70, 14, 241, 59, 124, 63, 228, 188, 108, 36, 224, 61, 83, 238, 160, 190, 231, 0, 134, 190, 129, 115, 208, 62, 69, 122, 253, 60, 157, 250, 159, 61, 133, 169, 22, 62, 139, 27, 126, 61, 24, 34, 8, 191, 198, 223, 9, 61, 179, 33, 202, 62, 213, 79, 139, 61, 102, 217, 60, 190, 149, 159, 67, 190, 68, 62, 41, 190, 186, 223, 201, 189, 101, 30, 128, 61, 156, 15, 92, 189, 107, 152, 146, 62, 49, 105, 114, 190, 101, 217, 94, 190, 139, 115, 121, 189, 54, 124, 39, 191, 116, 198, 244, 61, 188, 6, 38, 189, 165, 120, 11, 190, 123, 205, 129, 190, 89, 133, 223, 61, 138, 79, 96, 62, 30, 249, 4, 189, 220, 182, 21, 190, 175, 47, 56, 190, 75, 36, 169, 188, 129, 102, 174, 61, 225, 203, 72, 191, 101, 58, 65, 190, 39, 86, 171, 189, 139, 180, 62, 189, 203, 139, 190, 62, 163, 85, 152, 188, 162, 129, 27, 187, 118, 210, 173, 61, 88, 115, 251, 61, 135, 198, 26, 190, 37, 61, 174, 189, 119, 74, 8, 62, 149, 113, 4, 190, 30, 61, 51, 190, 253, 75, 59, 190, 147, 147, 239, 61, 55, 220, 28, 190, 150, 146, 149, 61, 212, 177, 31, 189, 250, 18, 131, 189, 55, 22, 133, 187, 182, 118, 50, 190, 89, 251, 16, 62, 31, 247, 133, 189, 196, 1, 25, 190, 55, 27, 101, 189, 42, 105, 58, 187, 181, 2, 70, 190, 177, 88, 15, 61, 228, 47, 26, 190, 167, 250, 244, 188, 16, 249, 35, 187, 57, 184, 188, 61, 250, 254, 172, 61, 209, 102, 210, 189, 82, 47, 204, 61, 142, 19, 33, 62, 144, 11, 171, 189, 43, 252, 104, 188, 200, 48, 104, 189, 80, 55, 79, 191, 212, 145, 130, 186, 62, 60, 111, 190, 114, 233, 17, 62, 100, 63, 105, 62, 226, 216, 125, 62, 75, 116, 97, 190, 144, 63, 229, 61, 134, 111, 145, 191, 37, 7, 58, 62, 155, 100, 2, 190, 99, 29, 90, 62, 235, 157, 12, 62, 177, 6, 76, 190, 195, 245, 18, 62, 52, 189, 179, 189, 63, 223, 64, 61, 10, 74, 146, 62, 171, 183, 140, 61, 236, 29, 67, 61, 111, 58, 177, 59, 223, 141, 89, 61, 55, 193, 61, 190, 119, 182, 217, 189, 115, 186, 8, 62, 197, 231, 242, 61, 190, 203, 37, 62, 245, 180, 28, 63, 54, 44, 111, 61, 133, 28, 149, 191, 10, 89, 38, 189, 210, 116, 42, 189, 153, 218, 76, 62, 81, 195, 196, 61, 184, 68, 8, 191, 252, 70, 133, 189, 107, 232, 199, 189, 21, 3, 41, 62, 89, 152, 36, 191, 246, 58, 137, 62, 5, 144, 140, 62, 40, 61, 171, 61, 10, 236, 50, 62, 140, 96, 28, 190, 109, 197, 214, 189, 107, 122, 31, 60, 236, 249, 167, 190, 192, 18, 249, 190, 226, 251, 178, 62, 204, 226, 21, 58, 189, 57, 127, 61, 183, 73, 145, 62, 38, 105, 102, 62, 69, 231, 184, 61, 135, 33, 28, 62, 202, 143, 64, 190, 37, 246, 140, 190, 179, 247, 73, 191, 219, 56, 170, 190, 57, 231, 201, 189, 131, 99, 26, 62, 233, 132, 13, 63, 183, 80, 3, 62, 17, 222, 69, 62, 96, 93, 1, 191, 73, 254, 34, 62, 46, 42, 53, 63, 129, 227, 195, 62, 38, 200, 234, 62, 61, 1, 139, 62, 17, 54, 151, 191, 241, 109, 23, 191, 72, 12, 101, 191, 32, 193, 165, 190, 212, 49, 218, 62, 137, 129, 76, 190, 102, 171, 228, 61, 24, 12, 169, 61, 109, 70, 242, 61, 73, 164, 162, 190, 236, 211, 250, 189, 115, 192, 150, 190, 54, 78, 163, 190, 102, 146, 134, 62, 238, 206, 8, 62, 255, 97, 98, 63, 193, 175, 254, 61, 137, 246, 16, 191, 106, 5, 193, 188, 203, 225, 151, 190, 224, 95, 11, 191, 170, 142, 102, 62, 167, 103, 44, 190, 57, 53, 3, 190, 76, 92, 118, 62, 161, 225, 153, 61, 64, 77, 50, 61, 105, 0, 235, 189, 74, 205, 10, 190, 250, 199, 136, 60, 67, 61, 12, 62, 227, 246, 158, 59, 127, 188, 87, 190, 252, 184, 195, 61, 251, 66, 104, 189, 209, 140, 253, 189, 212, 12, 85, 189, 127, 108, 205, 62, 57, 113, 187, 61, 94, 139, 35, 62, 176, 230, 239, 59, 10, 104, 109, 58, 51, 163, 133, 190, 102, 159, 192, 189, 123, 191, 216, 61, 226, 77, 167, 62, 196, 236, 42, 189, 40, 241, 245, 62, 67, 61, 230, 187, 187, 36, 164, 188, 144, 122, 56, 190, 123, 163, 170, 60, 53, 178, 120, 62, 137, 142, 85, 190, 235, 10, 55, 61, 159, 204, 67, 189, 19, 211, 201, 61, 206, 56, 118, 61, 22, 5, 16, 190, 196, 244, 211, 61, 198, 27, 122, 60, 163, 237, 94, 190, 189, 27, 4, 191, 140, 130, 233, 188, 64, 194, 33, 191, 63, 147, 217, 190, 239, 123, 229, 187, 197, 175, 218, 191, 68, 201, 154, 62, 227, 170, 35, 191, 80, 109, 147, 62, 40, 7, 76, 62, 174, 255, 199, 62, 32, 5, 49, 191, 103, 221, 131, 188, 41, 38, 180, 190, 153, 2, 252, 61, 163, 246, 57, 62, 40, 16, 255, 189, 227, 188, 42, 62, 4, 184, 145, 62, 222, 83, 191, 190, 200, 236, 129, 60, 225, 1, 128, 190, 43, 111, 19, 62, 75, 168, 232, 61, 137, 124, 153, 60, 234, 142, 208, 190, 176, 199, 113, 189, 67, 231, 0, 191, 208, 218, 29, 190, 137, 215, 177, 190, 75, 150, 145, 190, 154, 67, 112, 190, 60, 217, 65, 191, 54, 107, 144, 61, 122, 228, 42, 62, 212, 236, 70, 62, 148, 38, 41, 63, 78, 48, 153, 60, 95, 193, 112, 190, 30, 41, 157, 62, 58, 227, 39, 62, 155, 6, 161, 190, 219, 225, 154, 190, 23, 221, 28, 190, 193, 1, 30, 191, 47, 153, 70, 63, 157, 54, 135, 62, 204, 7, 75, 189, 249, 17, 172, 61, 156, 169, 221, 188, 160, 96, 196, 190, 164, 178, 149, 62, 55, 103, 95, 188, 82, 177, 208, 190, 110, 104, 38, 62, 230, 175, 90, 62, 189, 9, 26, 62, 194, 225, 224, 189, 212, 141, 1, 62, 67, 7, 221, 61, 56, 103, 46, 190, 184, 89, 157, 190, 197, 78, 200, 190, 98, 32, 134, 190, 121, 112, 239, 190, 18, 153, 150, 191, 13, 36, 221, 61, 6, 24, 128, 62, 19, 124, 1, 190, 233, 216, 153, 61, 184, 44, 210, 62, 152, 156, 55, 191, 242, 99, 147, 189, 157, 172, 166, 62, 113, 198, 19, 190, 19, 14, 152, 190, 93, 9, 149, 63, 1, 175, 45, 191, 232, 147, 6, 191, 41, 137, 16, 63, 112, 189, 31, 190, 14, 112, 20, 62, 129, 31, 145, 190, 157, 140, 211, 61, 254, 93, 64, 190, 31, 55, 32, 62, 32, 76, 33, 62, 38, 149, 183, 188, 104, 152, 110, 191, 22, 235, 68, 63, 45, 149, 38, 190, 131, 182, 5, 62, 218, 197, 74, 191, 117, 188, 61, 61, 95, 195, 213, 62, 192, 117, 140, 62, 65, 248, 198, 62, 119, 220, 146, 62, 148, 110, 106, 191, 166, 189, 173, 189, 38, 150, 98, 191, 151, 237, 4, 190, 7, 100, 247, 61, 105, 109, 37, 188, 215, 63, 59, 190, 171, 146, 221, 190, 91, 66, 132, 61, 199, 255, 4, 60, 164, 190, 164, 189, 210, 54, 219, 61, 70, 199, 90, 190, 57, 189, 231, 61, 207, 26, 180, 61, 249, 48, 5, 190, 232, 56, 47, 189, 117, 73, 67, 191, 2, 18, 67, 187, 140, 230, 195, 60, 40, 247, 177, 190, 103, 40, 2, 63, 244, 74, 137, 61, 50, 201, 137, 190, 160, 184, 250, 61, 26, 200, 3, 191, 37, 74, 173, 190, 121, 81, 7, 191, 206, 4, 178, 189, 71, 160, 87, 190, 154, 211, 146, 190, 96, 232, 127, 62, 116, 153, 160, 61, 138, 43, 143, 61, 55, 175, 9, 63, 235, 215, 146, 189, 16, 105, 52, 59, 52, 160, 238, 61, 135, 86, 123, 62, 79, 213, 253, 60, 117, 145, 158, 190, 196, 95, 137, 189, 74, 148, 50, 191, 234, 179, 59, 63, 5, 188, 68, 62, 71, 165, 132, 61, 201, 183, 57, 61, 223, 173, 19, 62, 186, 197, 142, 189, 24, 77, 97, 189, 70, 233, 155, 62, 209, 18, 61, 190, 189, 105, 50, 62, 135, 181, 14, 62, 36, 189, 156, 190, 220, 124, 113, 190, 127, 222, 75, 61, 208, 129, 50, 191, 16, 68, 63, 191, 35, 103, 2, 191, 152, 152, 84, 190, 87, 225, 190, 61, 227, 17, 193, 61, 143, 46, 23, 62, 212, 13, 60, 185, 71, 153, 97, 62, 181, 62, 139, 189, 38, 240, 97, 62, 192, 40, 112, 190, 181, 169, 120, 62, 254, 141, 163, 61, 50, 255, 78, 190, 65, 53, 213, 61, 164, 248, 197, 59, 89, 81, 164, 190, 194, 18, 109, 190, 159, 121, 233, 62, 7, 101, 169, 62, 144, 191, 65, 62, 173, 230, 159, 61, 181, 1, 204, 190, 83, 199, 15, 62, 229, 165, 57, 62, 132, 111, 83, 190, 107, 87, 221, 188, 152, 215, 4, 191, 240, 200, 19, 63, 70, 0, 22, 190, 223, 163, 156, 62, 22, 114, 63, 62, 104, 227, 148, 190, 253, 89, 191, 189, 235, 201, 141, 60, 222, 39, 245, 60, 197, 38, 11, 61, 51, 151, 74, 189, 64, 204, 112, 190, 203, 143, 155, 62, 11, 49, 189, 190, 87, 123, 199, 61, 71, 44, 152, 60, 57, 141, 168, 61, 162, 54, 137, 62, 2, 175, 183, 61, 248, 183, 135, 61, 116, 170, 6, 190, 109, 186, 201, 188, 3, 197, 177, 189, 19, 83, 57, 62, 120, 52, 204, 62, 125, 186, 193, 61, 148, 13, 48, 62, 73, 83, 154, 189, 198, 20, 173, 189, 154, 224, 198, 189, 225, 145, 100, 61, 198, 137, 51, 62, 169, 155, 175, 61, 214, 109, 13, 61, 183, 53, 99, 62, 27, 235, 34, 191, 10, 216, 223, 61, 105, 213, 208, 62, 109, 181, 119, 189, 209, 142, 107, 62, 135, 197, 169, 62, 39, 61, 170, 62, 49, 41, 29, 190, 101, 220, 202, 62, 239, 87, 231, 190, 133, 24, 117, 62, 102, 232, 197, 61, 11, 170, 149, 190, 71, 127, 156, 62, 8, 246, 18, 191, 251, 181, 17, 188, 190, 72, 251, 188, 228, 140, 228, 190, 199, 92, 179, 189, 229, 143, 39, 190, 109, 4, 200, 61, 210, 26, 138, 190, 209, 214, 212, 61, 136, 249, 191, 189, 180, 175, 149, 61, 53, 200, 44, 189, 224, 211, 82, 190, 97, 128, 70, 190, 82, 103, 233, 190, 15, 52, 226, 189, 46, 86, 56, 62, 94, 210, 172, 189, 178, 208, 100, 190, 192, 243, 99, 190, 239, 147, 6, 61, 192, 1, 227, 189, 161, 152, 13, 188, 106, 196, 75, 62, 233, 200, 98, 61, 35, 109, 147, 62, 160, 45, 76, 61, 33, 84, 254, 59, 160, 119, 20, 188, 201, 81, 152, 62, 165, 93, 148, 188, 96, 110, 178, 62, 60, 78, 12, 190, 88, 206, 88, 190, 229, 1, 74, 190, 3, 12, 76, 190, 131, 147, 61, 190, 157, 130, 22, 190, 217, 21, 222, 189, 33, 86, 226, 189, 189, 56, 26, 62, 31, 38, 90, 62, 206, 114, 233, 188, 86, 22, 198, 60, 133, 24, 200, 189, 104, 142, 173, 190, 199, 139, 28, 190, 232, 34, 34, 190, 106, 247, 252, 189, 57, 220, 69, 190, 3, 50, 48, 190, 19, 115, 189, 186, 128, 117, 249, 61, 163, 104, 115, 188, 2, 143, 45, 191, 252, 66, 102, 190, 223, 88, 83, 191, 78, 39, 156, 61, 214, 10, 183, 190, 182, 46, 134, 62, 216, 43, 209, 62, 105, 245, 26, 60, 66, 207, 80, 190, 47, 72, 254, 190, 54, 110, 231, 189, 2, 39, 187, 61, 33, 169, 108, 189, 185, 184, 94, 62, 187, 236, 21, 190, 12, 119, 92, 189, 65, 226, 59, 62, 248, 1, 98, 62, 166, 12, 177, 190, 95, 180, 248, 190, 150, 206, 139, 188, 57, 242, 14, 191, 142, 47, 58, 191, 128, 52, 132, 61, 176, 227, 101, 61, 93, 226, 243, 189, 100, 183, 165, 62, 114, 158, 88, 190, 123, 154, 195, 189, 198, 215, 94, 61, 0, 79, 174, 62, 57, 243, 66, 190, 171, 136, 229, 190, 223, 83, 254, 190, 43, 241, 143, 60, 171, 40, 156, 61, 111, 113, 137, 189, 44, 128, 151, 62, 123, 159, 1, 63, 184, 39, 158, 60, 100, 151, 183, 190, 133, 147, 176, 189, 68, 80, 244, 190, 96, 92, 107, 61, 98, 23, 115, 189, 104, 205, 62, 189, 221, 229, 19, 190, 89, 131, 170, 60, 123, 207, 74, 62, 102, 203, 51, 62, 58, 68, 8, 190, 76, 155, 88, 62, 86, 230, 232, 59, 248, 132, 105, 62, 52, 107, 82, 191, 151, 147, 71, 61, 165, 231, 92, 62, 137, 181, 210, 189, 244, 153, 212, 62, 68, 109, 131, 190, 170, 213, 163, 61, 11, 206, 229, 60, 15, 23, 134, 189, 48, 62, 126, 61, 42, 103, 228, 61, 18, 15, 18, 62, 154, 138, 226, 61, 65, 17, 14, 62, 5, 122, 142, 191, 115, 97, 85, 190, 169, 10, 156, 190, 105, 163, 25, 190, 68, 125, 119, 62, 42, 205, 109, 61, 213, 236, 131, 189, 197, 101, 156, 189, 159, 58, 244, 189, 152, 232, 17, 190, 156, 117, 35, 61, 198, 240, 152, 190, 143, 85, 6, 62, 98, 165, 152, 61, 185, 255, 199, 61, 86, 192, 167, 61, 128, 94, 178, 186, 38, 96, 155, 190, 239, 234, 61, 60, 128, 88, 41, 191, 101, 244, 217, 190, 52, 229, 99, 62, 101, 28, 37, 61, 113, 184, 100, 189, 202, 186, 47, 190, 32, 103, 162, 61, 204, 91, 11, 190, 162, 151, 15, 190, 117, 15, 161, 189, 31, 74, 42, 190, 207, 171, 12, 190, 227, 81, 19, 190, 8, 137, 209, 61, 29, 179, 252, 189, 138, 103, 28, 62, 244, 8, 156, 189, 53, 118, 127, 61, 143, 255, 58, 61, 242, 240, 7, 61, 138, 15, 214, 189, 122, 86, 110, 189, 35, 176, 19, 189, 176, 237, 93, 188, 177, 231, 246, 60, 162, 202, 47, 61, 28, 13, 31, 190, 127, 90, 6, 190, 78, 34, 216, 189, 120, 170, 129, 61, 40, 68, 209, 61, 140, 203, 18, 62, 47, 128, 216, 189, 7, 218, 238, 189, 246, 209, 63, 189, 218, 199, 45, 62, 116, 180, 66, 190, 251, 238, 5, 190, 110, 99, 155, 61, 67, 97, 134, 189, 231, 103, 124, 189, 101, 145, 32, 190, 126, 42, 127, 61, 117, 123, 251, 189, 193, 72, 235, 189, 159, 49, 72, 60, 127, 219, 236, 58, 77, 107, 104, 61, 255, 3, 7, 62, 76, 165, 169, 189, 172, 153, 146, 60, 90, 114, 22, 190, 100, 76, 14, 190, 117, 199, 121, 58, 186, 4, 168, 61, 234, 182, 197, 189, 74, 241, 196, 189, 83, 197, 255, 189, 206, 37, 47, 61, 227, 156, 219, 189, 134, 67, 200, 189, 106, 138, 50, 62, 221, 45, 16, 62, 186, 20, 202, 189, 48, 181, 184, 188, 181, 68, 42, 190, 172, 29, 19, 190, 62, 9, 19, 62, 178, 144, 82, 188, 248, 40, 160, 60, 140, 104, 14, 62, 166, 223, 159, 60, 174, 120, 194, 189, 14, 103, 8, 59, 199, 37, 170, 188, 50, 40, 253, 189, 18, 128, 131, 189, 49, 1, 241, 189, 177, 78, 25, 189, 9, 251, 184, 189, 251, 237, 218, 61, 28, 96, 211, 189, 133, 181, 3, 190, 120, 205, 1, 190, 179, 234, 81, 61, 201, 196, 183, 61, 40, 218, 28, 190, 39, 61, 23, 62, 10, 168, 229, 186, 178, 128, 211, 189, 166, 138, 230, 189, 140, 172, 174, 189, 139, 95, 40, 190, 247, 123, 26, 190, 21, 173, 249, 61, 78, 228, 10, 62, 253, 190, 140, 189, 19, 43, 167, 60, 2, 223, 176, 60, 99, 136, 4, 62, 244, 28, 63, 190, 101, 70, 188, 189, 75, 12, 227, 189, 168, 118, 114, 60, 75, 183, 236, 189, 234, 132, 145, 188, 158, 172, 241, 59, 177, 229, 252, 60, 39, 148, 140, 61, 194, 106, 12, 62, 211, 255, 21, 190, 108, 108, 240, 189, 217, 219, 102, 59, 251, 184, 125, 189, 74, 239, 241, 188, 185, 57, 225, 189, 178, 96, 233, 60, 97, 102, 65, 61, 39, 173, 246, 189, 99, 10, 166, 61, 180, 153, 228, 189, 168, 25, 193, 59, 0, 162, 122, 61, 17, 0, 50, 190, 61, 254, 51, 189, 75, 206, 192, 189, 194, 104, 184, 59, 61, 57, 238, 189, 247, 165, 178, 189, 5, 217, 85, 190, 251, 221, 225, 188, 134, 190, 218, 61, 221, 249, 246, 190, 79, 139, 38, 62, 193, 226, 191, 189, 122, 67, 139, 189, 114, 86, 215, 190, 13, 177, 119, 190, 57, 254, 202, 190, 55, 119, 166, 190, 204, 58, 50, 189, 216, 39, 185, 61, 92, 16, 168, 62, 183, 221, 10, 63, 21, 251, 36, 186, 75, 214, 43, 62, 208, 231, 24, 62, 163, 165, 78, 62, 167, 14, 108, 188, 226, 77, 22, 190, 116, 22, 87, 60, 252, 21, 56, 191, 232, 133, 139, 62, 115, 225, 78, 62, 227, 107, 57, 62, 254, 145, 55, 188, 188, 85, 220, 61, 247, 201, 0, 62, 125, 220, 160, 62, 47, 72, 77, 62, 222, 17, 163, 190, 190, 62, 27, 62, 123, 141, 173, 190, 62, 221, 134, 189, 238, 28, 29, 189, 152, 51, 30, 190, 78, 163, 201, 59, 183, 142, 212, 184, 25, 53, 41, 188, 216, 16, 33, 190, 171, 116, 139, 189, 146, 0, 58, 59, 184, 149, 53, 189, 85, 90, 27, 190, 139, 60, 236, 59, 2, 206, 246, 189, 47, 45, 161, 60, 158, 71, 154, 61, 110, 180, 159, 189, 29, 56, 28, 62, 79, 227, 167, 189, 140, 171, 33, 190, 252, 71, 178, 189, 43, 41, 140, 189, 223, 193, 16, 190, 176, 246, 240, 60, 34, 148, 100, 189, 198, 207, 49, 190, 235, 96, 6, 190, 117, 72, 8, 190, 142, 1, 110, 189, 87, 97, 182, 189, 176, 83, 245, 189, 30, 124, 28, 190, 79, 29, 20, 62, 2, 238, 133, 60, 128, 56, 39, 191, 170, 165, 82, 188, 115, 28, 58, 190, 0, 26, 63, 190, 204, 24, 240, 190, 244, 1, 18, 191, 55, 202, 29, 191, 217, 200, 22, 189, 220, 223, 11, 190, 94, 40, 180, 189, 223, 15, 171, 60, 246, 189, 147, 62, 22, 254, 92, 61, 9, 73, 169, 189, 161, 179, 228, 190, 66, 192, 22, 61, 227, 180, 20, 190, 61, 71, 209, 189, 218, 251, 233, 61, 224, 63, 144, 190, 65, 68, 37, 190, 30, 41, 111, 61, 121, 224, 224, 62, 190, 219, 11, 60, 73, 73, 73, 62, 73, 206, 105, 190, 92, 232, 103, 189, 18, 177, 38, 190, 196, 45, 246, 61, 23, 61, 250, 61, 244, 254, 85, 190, 48, 19, 10, 190, 122, 169, 130, 190, 45, 103, 133, 58, 103, 227, 33, 189, 98, 255, 183, 62, 167, 79, 58, 190, 4, 224, 188, 190, 67, 27, 224, 190, 196, 230, 180, 190, 247, 179, 51, 189, 24, 155, 36, 62, 34, 101, 135, 62, 53, 85, 191, 62, 117, 132, 129, 62, 162, 131, 163, 61, 57, 162, 157, 60, 91, 212, 136, 188, 160, 228, 64, 62, 24, 115, 204, 189, 252, 185, 142, 189, 122, 116, 49, 191, 95, 6, 1, 189, 229, 96, 177, 62, 255, 187, 75, 187, 65, 198, 234, 61, 33, 149, 3, 62, 131, 125, 76, 189, 173, 70, 190, 62, 158, 21, 34, 190, 185, 222, 200, 190, 37, 128, 150, 62, 163, 37, 174, 190, 12, 45, 2, 61, 226, 151, 85, 190, 64, 41, 126, 189, 164, 184, 21, 62, 27, 144, 42, 61, 83, 52, 149, 62, 160, 102, 19, 191, 215, 54, 223, 190, 107, 73, 113, 189, 1, 97, 37, 62, 211, 116, 155, 190, 253, 128, 221, 190, 238, 67, 203, 61, 84, 56, 253, 190, 193, 147, 62, 61, 162, 239, 65, 62, 2, 142, 155, 189, 93, 105, 143, 190, 172, 114, 193, 190, 130, 80, 67, 190, 123, 61, 40, 61, 207, 137, 109, 62, 241, 241, 159, 188, 138, 224, 62, 190, 240, 188, 76, 61, 202, 108, 208, 190, 72, 255, 127, 60, 22, 249, 218, 190, 63, 147, 43, 61, 208, 167, 162, 190, 92, 24, 103, 190, 78, 128, 189, 62, 103, 83, 91, 61};
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
                alignas(float) const unsigned char memory[] = {182, 232, 182, 62, 160, 23, 49, 190, 102, 50, 30, 59, 169, 109, 41, 62, 248, 164, 138, 62, 194, 186, 9, 190, 214, 194, 200, 189, 133, 95, 109, 62, 178, 30, 108, 62, 249, 184, 136, 62, 148, 85, 155, 62, 43, 159, 140, 61, 197, 214, 61, 62, 220, 56, 5, 61, 68, 143, 128, 61, 185, 87, 1, 61, 109, 129, 176, 62, 137, 50, 176, 62, 236, 72, 157, 190, 68, 92, 172, 61, 247, 252, 3, 60, 84, 120, 163, 60, 182, 46, 80, 62, 206, 69, 204, 188, 125, 221, 44, 59, 229, 200, 32, 189, 188, 61, 89, 190, 120, 128, 153, 188, 28, 1, 10, 189, 186, 238, 128, 62, 132, 250, 49, 189, 247, 23, 88, 190};
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
                alignas(float) const unsigned char memory[] = {96, 192, 131, 191, 29, 55, 207, 61, 151, 16, 23, 191, 235, 85, 152, 62, 164, 199, 26, 63, 225, 157, 217, 190, 214, 81, 227, 188, 227, 204, 155, 62, 168, 128, 185, 189, 70, 47, 207, 63, 125, 131, 3, 61, 35, 94, 46, 63, 22, 243, 247, 190, 10, 168, 37, 63, 51, 220, 129, 63, 100, 10, 155, 190, 125, 123, 49, 61, 210, 99, 75, 62, 176, 61, 24, 191, 214, 248, 62, 187, 185, 178, 243, 61, 206, 103, 193, 190, 63, 151, 252, 61, 104, 113, 253, 61, 195, 141, 12, 62, 146, 1, 143, 60, 234, 124, 159, 60, 209, 235, 107, 190, 93, 126, 156, 61, 80, 107, 32, 191, 51, 18, 55, 190, 116, 250, 168, 190, 98, 250, 241, 62, 248, 3, 20, 60, 53, 134, 140, 189, 170, 51, 43, 62, 93, 125, 177, 189, 1, 154, 80, 62, 242, 82, 219, 185, 73, 253, 194, 190, 201, 91, 150, 190, 152, 98, 86, 63, 146, 6, 187, 190, 69, 113, 90, 61, 2, 22, 139, 62, 212, 103, 196, 188, 225, 112, 28, 63, 92, 196, 87, 62, 107, 10, 25, 191, 75, 50, 204, 190, 27, 12, 52, 62, 53, 209, 105, 190, 32, 114, 25, 63, 192, 82, 108, 190, 82, 61, 140, 190, 217, 148, 243, 189, 69, 53, 246, 189, 42, 170, 121, 189, 131, 15, 207, 61, 37, 153, 141, 58, 78, 18, 165, 188, 200, 40, 244, 62, 193, 137, 147, 189, 173, 64, 6, 61};
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
                alignas(float) const unsigned char memory[] = {189, 246, 187, 187, 122, 189, 176, 190};
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
    alignas(float) const unsigned char memory[] = {3, 188, 18, 192, 209, 49, 93, 62, 144, 183, 214, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {188, 228, 102, 192, 54, 90, 22, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0010/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}