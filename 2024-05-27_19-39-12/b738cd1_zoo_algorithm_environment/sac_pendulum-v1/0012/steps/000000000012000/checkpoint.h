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
                alignas(float) const unsigned char memory[] = {182, 230, 222, 62, 222, 215, 63, 63, 60, 196, 33, 63, 247, 119, 77, 62, 188, 224, 207, 190, 106, 28, 180, 62, 73, 222, 30, 191, 247, 163, 27, 63, 171, 243, 60, 62, 178, 218, 3, 63, 169, 52, 137, 63, 157, 66, 61, 62, 234, 235, 36, 191, 51, 239, 184, 63, 253, 93, 181, 62, 132, 220, 219, 62, 101, 70, 197, 62, 174, 79, 52, 191, 86, 247, 206, 62, 38, 255, 179, 190, 74, 65, 143, 58, 101, 96, 82, 191, 153, 108, 118, 63, 21, 173, 216, 62, 36, 53, 244, 189, 70, 183, 222, 191, 196, 155, 173, 190, 61, 6, 42, 63, 132, 29, 134, 63, 191, 55, 151, 61, 155, 100, 49, 190, 86, 217, 55, 191, 254, 228, 122, 62, 198, 233, 191, 62, 188, 144, 125, 191, 44, 18, 77, 190, 201, 72, 119, 62, 24, 160, 210, 62, 78, 42, 254, 190, 122, 183, 218, 189, 151, 177, 15, 60, 108, 209, 19, 191, 115, 252, 19, 63, 85, 19, 151, 63, 27, 130, 149, 62, 108, 55, 214, 190, 126, 148, 47, 191, 51, 8, 179, 190, 145, 117, 144, 188, 107, 46, 64, 191, 232, 210, 44, 190, 39, 49, 98, 62, 11, 38, 200, 62, 56, 105, 46, 63, 54, 143, 145, 62, 48, 139, 56, 63, 77, 34, 54, 191, 226, 125, 3, 190, 232, 212, 118, 62, 10, 34, 23, 191, 136, 40, 11, 62, 158, 228, 2, 63, 224, 120, 223, 62, 233, 121, 55, 190, 44, 199, 33, 190, 234, 143, 1, 191, 20, 74, 254, 61, 163, 252, 13, 190, 131, 245, 15, 63, 13, 221, 168, 62, 169, 95, 94, 63, 123, 230, 234, 62, 88, 241, 96, 63, 217, 212, 226, 62, 167, 20, 174, 61, 232, 207, 65, 191, 56, 9, 69, 63, 19, 71, 212, 190, 185, 52, 0, 191, 15, 85, 8, 191, 94, 174, 134, 188, 245, 255, 31, 62, 118, 232, 36, 62, 29, 56, 44, 62, 91, 232, 72, 190, 61, 168, 183, 190, 205, 200, 56, 63, 78, 65, 56, 63, 126, 233, 149, 58, 106, 131, 114, 62, 204, 118, 5, 63, 75, 82, 134, 191, 213, 114, 134, 190, 71, 183, 207, 62, 85, 47, 107, 191, 38, 69, 171, 190};
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
                alignas(float) const unsigned char memory[] = {246, 24, 216, 190, 147, 209, 218, 62, 189, 37, 44, 63, 239, 57, 97, 62, 188, 149, 143, 61, 10, 71, 202, 61, 101, 192, 19, 191, 39, 248, 41, 62, 142, 50, 157, 190, 51, 20, 133, 190, 174, 62, 192, 61, 228, 199, 138, 62, 34, 241, 47, 62, 110, 169, 129, 190, 83, 230, 48, 190, 11, 122, 5, 63, 19, 169, 199, 62, 162, 182, 86, 62, 187, 104, 144, 62, 201, 46, 106, 190, 175, 249, 212, 62, 102, 54, 188, 190, 140, 129, 53, 63, 49, 247, 253, 60, 127, 93, 22, 190, 43, 167, 36, 62, 58, 146, 25, 63, 15, 112, 200, 62, 165, 151, 212, 189, 85, 118, 243, 190, 220, 154, 199, 189, 2, 182, 100, 190};
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
                alignas(float) const unsigned char memory[] = {181, 117, 4, 188, 86, 217, 105, 60, 1, 221, 52, 188, 169, 105, 214, 62, 228, 107, 20, 62, 179, 233, 43, 190, 225, 97, 38, 190, 160, 148, 162, 189, 226, 138, 2, 62, 128, 213, 157, 62, 179, 43, 130, 61, 133, 15, 109, 191, 162, 108, 186, 61, 163, 188, 31, 62, 71, 237, 245, 62, 195, 240, 153, 189, 8, 217, 125, 191, 219, 176, 52, 62, 216, 92, 106, 61, 67, 210, 254, 61, 58, 168, 186, 188, 98, 192, 223, 61, 170, 232, 159, 188, 35, 165, 77, 62, 198, 156, 193, 62, 24, 94, 113, 190, 241, 8, 40, 191, 11, 133, 188, 61, 239, 79, 1, 190, 128, 20, 7, 62, 104, 66, 132, 191, 185, 220, 87, 191, 180, 0, 30, 189, 3, 95, 179, 60, 160, 171, 108, 190, 221, 135, 24, 62, 248, 174, 73, 62, 51, 233, 79, 62, 191, 68, 132, 189, 106, 62, 45, 190, 156, 101, 234, 188, 102, 239, 205, 61, 10, 178, 30, 191, 143, 109, 115, 190, 13, 5, 146, 62, 54, 132, 218, 61, 191, 154, 126, 188, 197, 78, 10, 62, 51, 225, 81, 190, 19, 164, 141, 189, 134, 223, 16, 62, 129, 245, 51, 62, 68, 93, 22, 190, 202, 226, 230, 60, 104, 10, 68, 190, 139, 249, 68, 61, 151, 195, 111, 61, 23, 150, 98, 62, 110, 41, 139, 190, 124, 138, 136, 189, 151, 123, 184, 190, 245, 56, 130, 190, 226, 153, 33, 62, 55, 207, 144, 61, 140, 76, 183, 190, 37, 35, 188, 189, 195, 140, 201, 188, 88, 203, 147, 187, 28, 103, 195, 62, 71, 161, 98, 62, 12, 110, 6, 190, 255, 76, 138, 62, 95, 83, 187, 191, 225, 84, 71, 191, 190, 172, 178, 187, 82, 174, 204, 62, 155, 159, 210, 190, 239, 57, 202, 62, 115, 106, 21, 191, 19, 223, 75, 190, 128, 237, 93, 59, 47, 157, 140, 189, 25, 31, 235, 190, 194, 119, 175, 62, 19, 208, 51, 60, 59, 85, 91, 190, 146, 190, 211, 61, 187, 115, 183, 189, 37, 76, 126, 62, 76, 32, 148, 59, 79, 69, 125, 62, 91, 243, 101, 60, 207, 97, 112, 62, 250, 66, 191, 190, 178, 220, 160, 62, 229, 122, 136, 189, 160, 158, 44, 190, 79, 240, 173, 62, 12, 53, 23, 191, 203, 255, 238, 190, 160, 196, 14, 191, 76, 228, 85, 190, 72, 89, 0, 62, 154, 7, 87, 189, 31, 79, 214, 189, 52, 157, 163, 190, 65, 119, 218, 61, 19, 231, 236, 62, 159, 243, 205, 190, 241, 90, 211, 190, 88, 217, 156, 191, 89, 1, 56, 190, 50, 87, 136, 62, 132, 239, 13, 62, 215, 162, 43, 190, 47, 102, 143, 190, 11, 138, 222, 189, 182, 191, 89, 191, 112, 202, 238, 188, 187, 18, 179, 190, 147, 222, 22, 190, 234, 231, 20, 191, 111, 104, 2, 62, 155, 20, 69, 189, 99, 63, 71, 62, 5, 205, 3, 62, 8, 215, 186, 62, 112, 47, 242, 189, 41, 221, 185, 61, 242, 189, 172, 61, 214, 125, 208, 61, 219, 62, 214, 62, 142, 226, 237, 190, 130, 79, 54, 62, 128, 236, 199, 61, 163, 5, 160, 190, 81, 253, 209, 190, 64, 169, 216, 61, 203, 19, 222, 189, 150, 119, 79, 190, 159, 167, 125, 188, 80, 243, 21, 62, 120, 163, 171, 62, 78, 236, 53, 190, 5, 150, 144, 190, 119, 209, 3, 62, 4, 113, 133, 61, 84, 63, 0, 61, 218, 248, 144, 187, 131, 68, 39, 190, 224, 49, 78, 62, 60, 245, 17, 61, 186, 108, 77, 62, 108, 74, 80, 62, 245, 33, 246, 189, 246, 92, 137, 62, 154, 61, 141, 189, 44, 54, 207, 62, 51, 138, 58, 191, 25, 81, 217, 190, 156, 36, 155, 190, 189, 35, 151, 189, 168, 36, 158, 62, 62, 8, 134, 190, 35, 228, 43, 62, 253, 95, 77, 61, 170, 127, 34, 190, 157, 212, 171, 62, 64, 44, 242, 191, 66, 201, 196, 190, 216, 38, 211, 189, 147, 130, 102, 187, 61, 247, 197, 190, 116, 229, 32, 63, 158, 150, 203, 190, 240, 211, 2, 190, 141, 146, 102, 62, 181, 27, 159, 189, 15, 249, 21, 191, 185, 248, 232, 62, 171, 67, 220, 188, 114, 13, 71, 190, 112, 139, 149, 62, 164, 247, 143, 190, 35, 53, 194, 61, 107, 22, 252, 189, 39, 24, 19, 62, 14, 199, 170, 61, 195, 100, 244, 61, 43, 221, 29, 191, 34, 7, 216, 62, 122, 162, 207, 190, 15, 239, 54, 190, 56, 90, 180, 61, 64, 241, 193, 190, 205, 70, 195, 188, 4, 36, 129, 61, 79, 252, 72, 62, 26, 237, 223, 61, 215, 239, 5, 190, 26, 17, 5, 191, 137, 215, 179, 189, 73, 3, 65, 190, 235, 190, 20, 62, 24, 9, 29, 189, 172, 108, 125, 62, 180, 107, 140, 190, 39, 208, 76, 60, 242, 213, 10, 61, 68, 160, 39, 190, 65, 14, 199, 59, 42, 59, 146, 62, 209, 7, 6, 190, 148, 110, 204, 190, 126, 219, 92, 62, 217, 206, 101, 189, 19, 54, 171, 62, 228, 113, 90, 190, 98, 64, 49, 62, 191, 114, 33, 62, 46, 38, 81, 62, 102, 70, 14, 61, 105, 83, 119, 62, 215, 240, 4, 190, 209, 5, 3, 62, 124, 95, 156, 189, 117, 247, 140, 62, 54, 249, 182, 188, 43, 58, 66, 190, 248, 71, 169, 61, 190, 26, 69, 188, 168, 190, 179, 61, 186, 92, 10, 62, 174, 213, 105, 62, 171, 113, 62, 190, 247, 22, 189, 62, 244, 49, 37, 62, 152, 95, 36, 190, 48, 203, 62, 189, 165, 181, 171, 61, 172, 224, 157, 61, 130, 97, 163, 61, 216, 232, 3, 62, 238, 12, 161, 61, 104, 176, 2, 62, 55, 161, 202, 189, 144, 238, 41, 61, 140, 119, 252, 61, 63, 52, 138, 189, 43, 48, 141, 188, 4, 234, 125, 62, 61, 125, 50, 190, 27, 69, 34, 190, 245, 75, 241, 61, 99, 192, 151, 190, 77, 99, 1, 61, 6, 206, 36, 62, 80, 222, 67, 62, 40, 214, 97, 62, 27, 98, 123, 62, 113, 16, 139, 191, 150, 204, 200, 190, 127, 96, 221, 61, 105, 236, 85, 191, 157, 227, 48, 62, 221, 130, 138, 62, 77, 147, 100, 62, 246, 120, 58, 190, 247, 213, 16, 62, 73, 47, 0, 190, 219, 85, 209, 62, 112, 40, 172, 62, 235, 252, 3, 189, 92, 148, 228, 61, 247, 69, 167, 60, 152, 64, 48, 60, 17, 170, 185, 190, 235, 71, 151, 62, 160, 31, 171, 189, 7, 61, 164, 62, 229, 15, 25, 62, 129, 131, 200, 61, 3, 159, 172, 62, 84, 241, 184, 189, 18, 169, 5, 191, 116, 72, 207, 62, 148, 182, 14, 191, 178, 201, 25, 190, 195, 236, 196, 188, 103, 135, 89, 60, 162, 168, 196, 190, 221, 49, 232, 189, 69, 88, 173, 62, 25, 89, 175, 61, 245, 249, 178, 61, 243, 71, 95, 62, 165, 7, 27, 191, 132, 175, 210, 190, 15, 106, 92, 190, 51, 178, 164, 189, 166, 102, 36, 61, 60, 76, 206, 61, 253, 110, 139, 190, 33, 8, 148, 61, 237, 158, 13, 62, 14, 83, 74, 61, 212, 60, 184, 189, 183, 250, 242, 61, 40, 113, 218, 188, 222, 209, 103, 190, 89, 172, 64, 188, 155, 81, 109, 61, 244, 200, 106, 62, 12, 44, 125, 61, 87, 143, 252, 189, 1, 138, 184, 189, 76, 56, 26, 61, 113, 217, 231, 188, 104, 96, 241, 62, 69, 91, 165, 61, 179, 155, 189, 59, 137, 251, 73, 59, 206, 175, 45, 60, 141, 197, 232, 189, 247, 133, 242, 61, 49, 189, 57, 190, 38, 109, 7, 62, 20, 150, 228, 188, 33, 247, 218, 59, 165, 157, 178, 59, 80, 56, 109, 61, 105, 2, 107, 189, 10, 184, 36, 190, 102, 63, 43, 190, 13, 68, 153, 189, 213, 122, 85, 61, 29, 145, 26, 188, 162, 189, 26, 190, 137, 20, 8, 62, 136, 111, 232, 61, 209, 51, 6, 62, 11, 186, 222, 59, 36, 20, 32, 61, 187, 41, 38, 189, 222, 253, 45, 190, 161, 187, 87, 189, 3, 96, 109, 190, 141, 67, 4, 190, 220, 25, 185, 189, 227, 57, 126, 61, 12, 201, 1, 62, 228, 240, 23, 189, 211, 29, 216, 60, 87, 208, 209, 61, 196, 223, 60, 62, 132, 48, 208, 188, 243, 71, 137, 60, 189, 55, 88, 61, 206, 205, 134, 189, 182, 101, 83, 189, 135, 220, 183, 189, 49, 215, 9, 62, 7, 166, 1, 61, 64, 107, 93, 60, 208, 81, 6, 62, 12, 122, 101, 190, 132, 176, 139, 61, 52, 82, 114, 61, 154, 23, 106, 62, 126, 244, 243, 188, 164, 65, 55, 62, 115, 127, 0, 189, 84, 61, 42, 190, 250, 251, 16, 189, 137, 74, 129, 61, 132, 138, 27, 190, 136, 248, 19, 62, 200, 85, 164, 61, 59, 69, 107, 62, 165, 129, 212, 188, 153, 21, 200, 59, 53, 0, 0, 188, 205, 176, 244, 190, 129, 1, 164, 60, 204, 153, 182, 62, 112, 215, 189, 188, 225, 162, 44, 61, 64, 164, 114, 62, 103, 55, 187, 190, 111, 221, 5, 190, 172, 255, 196, 189, 220, 240, 12, 190, 191, 49, 88, 62, 168, 79, 72, 62, 177, 89, 27, 62, 153, 214, 106, 62, 118, 144, 216, 61, 206, 251, 175, 187, 125, 210, 144, 62, 26, 199, 86, 62, 79, 212, 111, 61, 168, 101, 172, 62, 11, 252, 33, 62, 144, 122, 146, 189, 88, 64, 54, 190, 155, 1, 236, 60, 160, 245, 120, 189, 82, 44, 26, 62, 128, 44, 98, 62, 183, 134, 42, 62, 125, 215, 189, 189, 91, 177, 119, 190, 126, 100, 96, 190, 145, 23, 178, 62, 208, 1, 144, 190, 208, 207, 101, 190, 181, 70, 227, 189, 52, 171, 27, 190, 122, 69, 35, 190, 162, 146, 186, 188, 40, 90, 9, 190, 249, 190, 160, 61, 239, 20, 68, 189, 64, 81, 219, 61, 234, 148, 53, 189, 103, 59, 229, 61, 176, 18, 106, 61, 154, 141, 226, 189, 38, 6, 6, 190, 137, 126, 198, 189, 45, 25, 32, 189, 90, 16, 253, 61, 97, 53, 80, 190, 165, 18, 26, 62, 61, 174, 71, 190, 228, 2, 149, 189, 169, 87, 100, 189, 244, 186, 58, 190, 190, 159, 4, 189, 19, 115, 0, 61, 46, 91, 26, 188, 34, 70, 153, 189, 79, 249, 254, 188, 234, 171, 129, 61, 70, 225, 122, 189, 201, 189, 153, 189, 228, 249, 234, 189, 110, 186, 183, 61, 14, 4, 152, 190, 110, 61, 158, 62, 196, 223, 83, 191, 11, 151, 10, 60, 213, 204, 113, 190, 38, 71, 28, 62, 155, 97, 157, 189, 234, 79, 87, 189, 78, 77, 238, 190, 182, 81, 130, 190, 127, 83, 177, 62, 5, 209, 186, 62, 213, 49, 138, 62, 127, 178, 175, 61, 128, 20, 30, 191, 206, 254, 136, 190, 139, 77, 226, 61, 113, 158, 218, 61, 247, 155, 217, 60, 4, 66, 16, 190, 47, 12, 253, 189, 250, 156, 253, 189, 61, 204, 207, 61, 9, 33, 85, 190, 45, 68, 169, 62, 52, 64, 0, 61, 92, 249, 187, 189, 244, 1, 226, 61, 240, 85, 181, 60, 186, 25, 107, 189, 136, 19, 19, 62, 179, 197, 122, 189, 229, 63, 128, 62, 164, 227, 149, 190, 156, 251, 140, 62, 17, 184, 83, 190, 146, 236, 158, 61, 210, 217, 97, 62, 242, 219, 46, 190, 173, 168, 150, 61, 254, 28, 25, 192, 127, 22, 231, 189, 45, 17, 60, 190, 133, 137, 241, 191, 44, 115, 63, 191, 185, 23, 218, 62, 212, 132, 7, 190, 100, 99, 236, 62, 165, 56, 154, 62, 231, 133, 154, 190, 130, 10, 60, 191, 154, 74, 233, 62, 175, 226, 4, 190, 159, 184, 186, 190, 122, 34, 178, 190, 213, 253, 71, 190, 194, 190, 188, 190, 15, 198, 63, 62, 168, 188, 97, 61, 117, 173, 206, 190, 160, 42, 157, 189, 126, 76, 36, 190, 208, 210, 149, 190, 82, 1, 207, 190, 210, 141, 137, 190, 125, 119, 129, 189, 186, 61, 157, 190, 23, 240, 73, 61, 119, 153, 201, 62, 76, 228, 37, 62, 218, 15, 24, 190, 199, 53, 34, 62, 82, 133, 24, 191, 161, 20, 202, 190, 16, 117, 222, 189, 167, 87, 77, 62, 13, 252, 96, 189, 61, 136, 123, 62, 127, 47, 198, 190, 113, 77, 23, 189, 46, 91, 68, 189, 188, 89, 136, 190, 93, 134, 76, 190, 74, 201, 86, 62, 38, 252, 101, 62, 222, 251, 199, 190, 200, 141, 229, 60, 54, 234, 95, 189, 71, 85, 191, 60, 141, 134, 245, 189, 26, 74, 197, 61, 78, 61, 71, 62, 39, 233, 109, 62, 59, 120, 162, 189, 238, 218, 192, 62, 170, 224, 91, 189, 143, 1, 41, 190, 55, 210, 247, 188, 228, 20, 203, 60, 52, 1, 130, 60, 141, 241, 248, 61, 99, 43, 175, 62, 250, 153, 23, 190, 149, 24, 225, 61, 118, 93, 208, 191, 159, 106, 135, 190, 40, 175, 142, 61, 157, 34, 77, 62, 190, 154, 67, 60, 3, 166, 204, 61, 73, 248, 85, 190, 111, 192, 232, 58, 201, 13, 79, 62, 74, 162, 65, 189, 250, 37, 8, 60, 69, 240, 236, 189, 217, 113, 198, 61, 250, 232, 49, 190, 212, 54, 50, 189, 78, 85, 116, 189, 40, 155, 14, 62, 67, 242, 191, 190, 39, 159, 61, 62, 19, 133, 9, 189, 79, 27, 250, 61, 97, 133, 190, 188, 113, 186, 171, 61, 15, 211, 196, 189, 237, 160, 185, 190, 52, 150, 201, 61, 97, 48, 36, 191, 241, 253, 54, 189, 81, 244, 32, 190, 110, 211, 14, 62, 178, 67, 191, 189, 226, 187, 35, 62, 250, 109, 212, 190, 243, 59, 169, 190, 180, 18, 53, 59, 121, 165, 57, 61, 7, 154, 138, 61, 173, 5, 221, 186, 135, 150, 81, 191, 234, 187, 34, 190, 148, 174, 145, 61, 185, 183, 143, 190, 144, 21, 240, 61, 23, 70, 54, 62, 236, 159, 20, 62, 207, 54, 41, 190, 201, 54, 202, 62, 19, 193, 153, 188, 187, 71, 152, 62, 28, 108, 31, 190, 41, 182, 88, 61, 203, 165, 130, 60, 119, 11, 158, 61, 234, 212, 38, 190, 246, 62, 181, 61, 186, 168, 103, 60, 9, 121, 111, 61, 82, 195, 2, 190, 127, 33, 66, 62, 3, 223, 84, 187, 223, 35, 23, 191, 197, 109, 59, 190, 235, 162, 38, 62, 179, 203, 233, 190, 222, 113, 156, 62, 52, 11, 164, 62, 51, 66, 158, 62, 95, 85, 154, 61, 121, 2, 17, 62, 28, 25, 68, 190, 88, 162, 170, 62, 179, 29, 94, 62, 63, 166, 49, 61, 68, 174, 113, 189, 42, 94, 41, 62, 61, 50, 226, 60, 84, 90, 213, 190, 25, 194, 158, 59, 129, 245, 108, 190, 231, 77, 194, 189, 53, 214, 222, 189, 130, 31, 109, 189, 174, 54, 138, 62, 12, 189, 36, 190, 170, 76, 182, 190, 22, 87, 83, 188, 199, 24, 69, 191, 112, 84, 152, 190, 120, 36, 64, 188, 242, 233, 75, 190, 97, 205, 47, 187, 98, 68, 230, 187, 65, 194, 181, 188, 49, 42, 240, 61, 174, 71, 156, 61, 133, 176, 48, 190, 34, 157, 11, 190, 157, 70, 106, 189, 153, 222, 4, 189, 81, 253, 59, 189, 98, 186, 93, 61, 124, 124, 15, 190, 153, 198, 48, 60, 11, 176, 217, 189, 66, 117, 153, 60, 251, 146, 31, 190, 246, 53, 209, 188, 58, 131, 163, 61, 143, 133, 203, 189, 0, 211, 88, 189, 67, 207, 23, 60, 133, 251, 173, 61, 52, 138, 56, 189, 211, 51, 180, 189, 247, 185, 65, 189, 102, 41, 187, 60, 139, 21, 95, 189, 93, 86, 205, 188, 12, 112, 13, 62, 122, 65, 232, 189, 133, 11, 22, 189, 104, 111, 77, 62, 156, 15, 204, 190, 61, 212, 173, 190, 82, 253, 142, 62, 111, 240, 4, 62, 205, 182, 134, 189, 82, 44, 55, 190, 70, 117, 6, 190, 215, 127, 11, 191, 143, 149, 132, 61, 42, 169, 212, 61, 201, 141, 30, 61, 69, 90, 63, 189, 207, 251, 74, 191, 206, 51, 86, 62, 35, 226, 55, 62, 133, 95, 36, 62, 87, 250, 210, 61, 40, 229, 84, 62, 15, 60, 119, 61, 31, 47, 0, 60, 231, 130, 214, 189, 6, 193, 1, 191, 91, 170, 176, 189, 13, 35, 14, 62, 152, 155, 158, 189, 151, 204, 105, 62, 216, 7, 0, 62, 143, 214, 7, 62, 193, 7, 145, 189, 85, 171, 188, 189, 48, 44, 144, 189, 127, 143, 157, 188, 144, 163, 92, 191, 141, 113, 50, 62, 125, 50, 54, 62, 5, 99, 149, 62, 150, 13, 7, 190, 174, 243, 244, 61, 70, 181, 88, 190, 70, 206, 46, 190, 23, 54, 88, 190, 85, 178, 219, 61, 79, 43, 168, 189, 96, 231, 103, 187, 38, 105, 154, 190, 172, 159, 71, 189, 54, 53, 149, 189, 180, 255, 160, 189, 180, 60, 13, 61, 19, 84, 115, 61, 202, 126, 119, 189, 203, 111, 35, 190, 180, 9, 31, 61, 158, 244, 149, 189, 255, 237, 175, 62, 151, 161, 195, 61, 214, 96, 172, 188, 244, 219, 76, 61, 55, 45, 50, 62, 224, 6, 113, 61, 51, 253, 181, 62, 73, 100, 243, 189, 234, 64, 152, 190, 142, 56, 249, 61, 24, 222, 228, 189, 253, 101, 164, 62, 254, 66, 226, 60, 195, 39, 159, 62, 162, 51, 139, 189, 226, 216, 103, 61, 158, 180, 147, 191, 139, 238, 53, 60, 238, 242, 240, 187, 137, 137, 2, 62, 184, 2, 185, 190, 138, 21, 111, 62, 251, 38, 135, 190, 44, 54, 195, 61, 129, 197, 65, 62, 70, 167, 35, 189, 92, 244, 83, 190, 208, 34, 118, 61, 190, 21, 43, 62, 210, 74, 171, 190, 13, 178, 149, 189, 54, 4, 19, 62, 59, 91, 40, 63, 193, 186, 234, 186, 207, 183, 184, 61, 54, 101, 214, 61, 214, 92, 217, 61, 192, 231, 52, 60, 15, 104, 220, 62, 124, 164, 229, 188, 243, 179, 144, 62, 156, 19, 45, 62, 26, 227, 110, 190, 74, 127, 244, 62, 217, 116, 119, 190, 92, 96, 14, 190, 187, 48, 113, 189, 37, 106, 125, 190, 17, 170, 92, 190, 110, 208, 128, 62, 197, 64, 23, 190, 62, 138, 181, 190, 77, 81, 147, 189, 247, 56, 246, 61, 67, 89, 170, 62, 69, 229, 165, 190, 38, 70, 105, 190, 60, 154, 200, 61, 27, 131, 95, 62, 84, 174, 2, 62, 228, 85, 132, 188, 50, 210, 12, 61, 157, 150, 120, 188, 79, 114, 149, 62, 149, 176, 229, 62, 46, 98, 140, 62, 34, 204, 95, 190, 145, 245, 76, 188, 118, 213, 20, 188, 106, 42, 45, 63, 199, 216, 128, 191, 2, 236, 55, 191, 201, 62, 245, 188, 84, 29, 143, 60, 28, 118, 182, 62, 50, 142, 77, 62, 37, 9, 189, 188, 113, 158, 187, 190, 106, 52, 147, 61, 190, 28, 197, 189, 163, 124, 92, 62, 170, 39, 159, 62, 41, 54, 114, 61, 90, 220, 225, 189, 249, 185, 126, 62, 251, 104, 168, 190, 103, 140, 188, 62, 209, 165, 28, 62, 203, 157, 60, 188, 230, 242, 34, 62, 247, 230, 80, 62, 212, 161, 12, 190, 107, 59, 29, 59, 254, 105, 139, 62, 65, 27, 137, 60, 57, 170, 71, 61, 114, 237, 95, 189, 69, 56, 119, 62, 251, 47, 209, 61, 231, 97, 255, 61, 39, 44, 129, 189, 174, 204, 96, 60, 134, 212, 92, 191, 191, 213, 106, 190, 113, 241, 247, 61, 156, 241, 252, 189, 113, 25, 153, 62, 171, 97, 56, 62, 100, 86, 25, 190, 127, 55, 172, 190, 232, 251, 120, 189, 228, 18, 88, 190, 76, 221, 248, 62, 200, 188, 230, 62, 10, 138, 120, 62, 49, 163, 157, 189, 157, 244, 5, 61, 216, 175, 137, 190, 51, 184, 242, 62, 142, 207, 146, 62, 217, 231, 94, 61, 222, 102, 18, 62, 236, 165, 17, 62, 229, 215, 67, 190, 204, 227, 178, 189, 198, 245, 210, 62, 196, 162, 218, 190, 92, 230, 137, 62, 240, 131, 0, 62, 159, 135, 45, 62, 119, 101, 151, 61, 105, 8, 24, 190, 14, 69, 9, 191, 115, 220, 151, 190, 112, 50, 45, 191, 219, 239, 208, 190, 26, 174, 55, 61, 237, 128, 147, 188, 131, 225, 107, 62, 32, 83, 34, 62, 112, 29, 161, 60, 93, 63, 58, 190, 107, 129, 20, 187, 37, 216, 10, 61, 212, 35, 17, 190, 198, 43, 158, 62, 121, 209, 14, 62, 126, 251, 141, 190, 226, 177, 242, 61, 189, 131, 139, 190, 29, 21, 224, 62, 225, 87, 222, 61, 0, 254, 54, 190, 6, 123, 93, 62, 122, 139, 22, 62, 47, 153, 34, 190, 111, 180, 243, 58, 13, 48, 91, 62, 160, 195, 145, 61, 172, 59, 211, 61, 51, 126, 15, 61, 209, 179, 208, 62, 224, 249, 178, 189, 127, 201, 137, 189, 177, 201, 52, 190, 28, 51, 21, 62, 139, 164, 113, 191, 17, 34, 227, 190, 181, 7, 50, 62, 72, 234, 184, 188, 199, 230, 132, 190, 161, 6, 113, 62, 33, 61, 88, 190, 212, 141, 64, 189, 197, 164, 132, 188, 0, 15, 66, 190, 220, 144, 128, 61, 146, 6, 176, 62, 238, 101, 237, 61, 194, 120, 49, 191, 188, 180, 250, 60, 125, 61, 7, 61, 56, 212, 121, 62, 217, 139, 27, 190, 219, 50, 57, 191, 215, 187, 156, 61, 228, 112, 190, 188, 165, 222, 40, 62, 92, 172, 202, 61, 211, 130, 6, 190, 107, 168, 201, 60, 116, 208, 112, 61, 8, 180, 12, 63, 217, 142, 59, 62, 101, 23, 21, 191, 58, 81, 21, 189, 63, 59, 248, 189, 46, 217, 38, 63, 173, 112, 61, 191, 189, 198, 96, 191, 77, 238, 63, 61, 23, 175, 13, 60, 252, 219, 75, 62, 169, 236, 16, 190, 64, 40, 147, 187, 227, 223, 103, 190, 147, 187, 19, 62, 210, 19, 166, 61, 17, 218, 146, 61, 50, 112, 125, 61, 186, 53, 132, 189, 229, 160, 250, 61, 79, 194, 104, 62, 53, 33, 171, 190, 77, 165, 64, 62, 235, 95, 9, 62, 109, 153, 186, 60, 193, 255, 21, 61, 130, 45, 77, 62, 107, 142, 229, 189, 92, 248, 225, 61, 24, 176, 231, 62, 30, 142, 5, 62, 80, 20, 151, 61, 188, 235, 99, 62, 85, 144, 31, 62, 61, 79, 142, 62, 67, 158, 81, 190, 147, 93, 243, 60, 254, 167, 48, 61, 21, 69, 36, 191, 22, 49, 135, 190, 3, 151, 246, 190, 3, 137, 13, 190, 48, 139, 103, 190, 8, 127, 139, 60, 14, 85, 55, 62, 49, 87, 57, 62, 55, 64, 34, 62, 255, 108, 120, 62, 173, 65, 75, 191, 236, 209, 237, 189, 134, 110, 70, 191, 125, 201, 166, 61, 190, 105, 241, 189, 182, 86, 240, 61, 152, 70, 197, 190, 209, 161, 66, 62, 45, 224, 121, 61, 116, 192, 141, 191, 236, 173, 111, 190, 182, 245, 146, 61, 82, 92, 50, 190, 248, 196, 143, 190, 134, 134, 126, 187, 232, 55, 123, 190, 17, 31, 18, 63, 88, 145, 7, 61, 59, 207, 247, 61, 18, 13, 175, 61, 198, 138, 118, 190, 145, 103, 230, 190, 40, 5, 57, 62, 192, 61, 77, 62, 95, 215, 147, 190, 22, 104, 143, 61, 11, 156, 5, 191, 210, 61, 52, 190, 217, 23, 69, 189, 100, 112, 187, 62, 64, 116, 35, 190, 94, 83, 248, 188, 19, 240, 23, 191, 253, 232, 8, 190, 40, 110, 89, 61, 160, 72, 170, 61, 53, 230, 108, 189, 90, 161, 150, 62, 255, 225, 15, 191, 221, 100, 3, 190, 241, 74, 99, 59, 9, 64, 138, 61, 171, 170, 188, 189, 104, 114, 138, 62, 231, 174, 69, 190, 178, 79, 0, 191, 214, 5, 83, 188, 204, 12, 150, 188, 181, 71, 77, 61, 16, 133, 72, 190, 185, 186, 44, 62, 33, 154, 134, 61, 172, 222, 125, 62, 91, 172, 168, 59, 2, 214, 167, 62, 170, 43, 218, 61};
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
                alignas(float) const unsigned char memory[] = {6, 213, 42, 190, 96, 215, 68, 190, 147, 169, 133, 62, 175, 170, 40, 62, 42, 66, 197, 188, 215, 177, 214, 61, 240, 189, 3, 190, 9, 5, 176, 62, 131, 52, 108, 62, 121, 186, 209, 61, 154, 168, 18, 190, 40, 192, 146, 62, 218, 66, 50, 62, 21, 168, 232, 61, 180, 212, 69, 62, 178, 125, 144, 188, 185, 206, 48, 62, 102, 157, 39, 62, 61, 118, 36, 62, 201, 24, 182, 61, 208, 57, 221, 189, 67, 236, 244, 188, 207, 176, 137, 188, 204, 214, 134, 61, 204, 106, 112, 189, 141, 174, 170, 61, 114, 238, 100, 62, 174, 36, 162, 62, 174, 220, 116, 190, 188, 125, 41, 62, 78, 58, 229, 61, 119, 38, 211, 61};
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
                alignas(float) const unsigned char memory[] = {78, 193, 55, 63, 8, 5, 134, 62, 98, 96, 90, 63, 168, 121, 102, 63, 233, 90, 225, 190, 201, 92, 89, 63, 169, 144, 86, 62, 1, 226, 67, 190, 175, 168, 92, 191, 16, 145, 120, 62, 95, 61, 240, 58, 76, 19, 45, 188, 42, 66, 136, 190, 5, 241, 248, 59, 135, 218, 202, 62, 111, 190, 208, 63, 138, 12, 163, 62, 6, 160, 216, 61, 210, 89, 213, 62, 73, 28, 120, 191, 224, 242, 172, 61, 36, 122, 41, 62, 15, 222, 12, 62, 139, 159, 156, 62, 67, 140, 78, 191, 178, 70, 105, 190, 141, 78, 54, 191, 188, 219, 176, 190, 112, 9, 47, 63, 90, 137, 170, 189, 226, 180, 90, 63, 47, 97, 194, 62, 46, 29, 145, 61, 75, 79, 183, 61, 100, 92, 89, 62, 216, 103, 26, 62, 239, 214, 213, 190, 131, 143, 51, 62, 46, 75, 188, 188, 254, 88, 129, 190, 96, 15, 56, 60, 11, 63, 101, 62, 134, 127, 246, 61, 48, 253, 32, 190, 194, 97, 208, 189, 144, 84, 252, 61, 100, 109, 52, 190, 38, 9, 101, 188, 20, 212, 33, 62, 246, 196, 159, 190, 245, 105, 88, 189, 56, 4, 196, 62, 220, 197, 210, 61, 68, 12, 42, 61, 108, 247, 232, 188, 0, 72, 140, 190, 91, 36, 145, 62, 53, 160, 13, 60, 119, 238, 51, 62, 107, 209, 90, 61, 3, 143, 152, 62, 20, 145, 101, 190, 117, 105, 86, 62, 80, 75, 73, 62};
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
                alignas(float) const unsigned char memory[] = {95, 35, 192, 189, 56, 19, 218, 190};
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
    alignas(float) const unsigned char memory[] = {168, 218, 139, 62, 120, 191, 185, 62, 76, 251, 162, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {118, 249, 10, 192, 125, 232, 151, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0012/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}