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
                alignas(float) const unsigned char memory[] = {197, 177, 122, 62, 233, 177, 100, 62, 81, 155, 28, 191, 2, 81, 228, 62, 158, 228, 246, 62, 40, 163, 26, 191, 36, 167, 97, 190, 74, 150, 123, 62, 15, 7, 102, 62, 121, 239, 41, 191, 236, 97, 140, 191, 136, 52, 125, 188, 231, 50, 251, 188, 7, 130, 57, 190, 60, 229, 33, 63, 232, 3, 21, 61, 187, 200, 251, 62, 25, 55, 194, 62, 0, 123, 147, 190, 232, 95, 52, 191, 112, 169, 204, 62, 109, 79, 75, 61, 196, 49, 207, 62, 69, 75, 230, 62, 112, 46, 255, 62, 242, 215, 147, 189, 66, 122, 45, 60, 173, 122, 202, 61, 168, 84, 172, 187, 158, 123, 178, 61, 190, 77, 36, 63, 159, 175, 134, 62, 0, 0, 58, 189, 90, 34, 126, 190, 20, 192, 81, 191, 15, 55, 255, 189, 37, 180, 177, 62, 204, 154, 172, 190, 26, 60, 217, 190, 167, 193, 127, 190, 166, 56, 33, 191, 158, 134, 209, 62, 149, 227, 37, 63, 74, 196, 134, 189, 163, 191, 99, 61, 183, 198, 116, 62, 110, 141, 185, 190, 24, 253, 220, 62, 52, 137, 11, 191, 127, 42, 6, 62, 204, 14, 128, 190, 174, 252, 6, 190, 85, 250, 219, 60, 195, 106, 62, 62, 217, 162, 26, 63, 147, 115, 130, 190, 79, 20, 173, 58, 36, 234, 187, 62, 76, 70, 117, 63, 96, 8, 105, 190, 144, 97, 82, 190, 88, 136, 74, 63, 162, 39, 79, 59, 153, 245, 187, 190, 4, 61, 107, 189, 196, 96, 171, 62, 68, 97, 129, 190, 159, 105, 240, 61, 195, 24, 249, 190, 194, 177, 130, 190, 165, 34, 72, 63, 170, 29, 160, 62, 250, 116, 161, 62, 242, 118, 181, 62, 149, 85, 31, 61, 117, 90, 175, 61, 120, 184, 118, 63, 179, 40, 155, 190, 7, 47, 54, 62, 64, 102, 1, 191, 46, 173, 49, 63, 249, 92, 133, 190, 155, 17, 18, 191, 243, 211, 60, 190, 66, 30, 145, 60, 83, 141, 115, 63, 99, 25, 137, 189, 142, 225, 121, 61, 197, 149, 52, 191, 182, 231, 17, 62, 82, 130, 161, 190, 253, 39, 182, 191, 225, 227, 180, 62, 233, 196, 237, 62, 195, 28, 18, 190, 45, 52, 213, 190};
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
                alignas(float) const unsigned char memory[] = {50, 183, 228, 190, 84, 108, 186, 61, 46, 170, 35, 191, 0, 199, 209, 190, 18, 30, 36, 62, 186, 170, 77, 62, 69, 250, 156, 62, 233, 202, 85, 190, 128, 188, 161, 188, 251, 6, 131, 190, 247, 15, 11, 62, 89, 31, 173, 188, 114, 131, 218, 190, 162, 130, 17, 191, 53, 200, 159, 62, 188, 171, 204, 189, 90, 144, 102, 190, 43, 37, 255, 62, 221, 89, 90, 189, 63, 187, 119, 62, 53, 82, 217, 62, 237, 82, 181, 190, 3, 94, 44, 63, 224, 144, 119, 62, 66, 22, 148, 190, 250, 158, 171, 62, 178, 40, 190, 190, 187, 175, 66, 62, 202, 219, 138, 62, 196, 141, 110, 189, 79, 182, 8, 190, 242, 181, 118, 62};
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
                alignas(float) const unsigned char memory[] = {241, 1, 86, 188, 17, 226, 215, 189, 248, 151, 207, 189, 96, 178, 224, 189, 173, 203, 241, 189, 23, 101, 212, 61, 24, 34, 190, 61, 154, 207, 243, 60, 251, 80, 38, 62, 244, 225, 86, 61, 41, 70, 106, 62, 160, 230, 48, 188, 99, 237, 59, 190, 103, 139, 2, 62, 58, 127, 105, 62, 99, 6, 20, 190, 182, 79, 66, 189, 117, 86, 86, 189, 76, 44, 244, 60, 226, 133, 170, 189, 70, 107, 34, 62, 252, 166, 111, 189, 198, 151, 199, 61, 107, 160, 135, 187, 255, 100, 75, 62, 156, 164, 176, 62, 100, 114, 217, 189, 34, 79, 158, 189, 5, 211, 86, 61, 12, 209, 33, 62, 177, 112, 0, 191, 8, 214, 24, 61, 214, 31, 220, 189, 212, 68, 234, 189, 78, 101, 42, 189, 13, 225, 162, 190, 57, 118, 66, 190, 209, 73, 148, 189, 79, 82, 21, 62, 111, 191, 212, 189, 17, 160, 242, 61, 190, 138, 169, 189, 186, 49, 54, 189, 123, 203, 130, 189, 15, 204, 146, 190, 238, 137, 14, 61, 109, 56, 84, 62, 123, 241, 98, 62, 245, 237, 224, 61, 137, 220, 26, 62, 20, 114, 135, 61, 203, 41, 158, 190, 219, 70, 43, 62, 40, 28, 188, 61, 231, 123, 104, 61, 42, 162, 207, 61, 186, 113, 248, 189, 217, 105, 100, 62, 112, 76, 10, 62, 168, 1, 195, 61, 31, 173, 78, 62, 192, 171, 39, 62, 141, 142, 236, 190, 232, 8, 157, 190, 103, 17, 46, 190, 3, 133, 106, 190, 221, 160, 54, 190, 252, 70, 52, 190, 204, 88, 98, 61, 223, 239, 139, 61, 56, 37, 40, 189, 241, 102, 107, 189, 115, 180, 146, 61, 29, 232, 255, 189, 90, 147, 3, 60, 6, 121, 169, 189, 179, 19, 18, 190, 143, 177, 198, 189, 181, 174, 210, 61, 205, 243, 248, 189, 161, 210, 242, 61, 172, 55, 52, 62, 224, 160, 242, 188, 205, 4, 77, 190, 191, 188, 71, 189, 105, 192, 205, 189, 150, 146, 145, 61, 201, 243, 237, 61, 49, 74, 112, 188, 210, 29, 44, 62, 215, 133, 91, 62, 149, 235, 52, 190, 76, 209, 81, 62, 98, 124, 103, 188, 107, 89, 59, 190, 48, 55, 129, 189, 167, 51, 198, 61, 168, 140, 23, 190, 114, 126, 21, 190, 200, 158, 128, 59, 40, 94, 19, 190, 45, 43, 208, 189, 173, 47, 204, 60, 125, 205, 56, 189, 77, 174, 156, 61, 118, 173, 133, 189, 217, 171, 57, 61, 84, 162, 67, 189, 161, 218, 49, 190, 253, 172, 32, 62, 88, 96, 244, 60, 226, 186, 5, 61, 101, 97, 128, 60, 232, 31, 236, 187, 156, 38, 34, 62, 27, 85, 30, 190, 28, 22, 218, 189, 253, 249, 67, 189, 30, 79, 40, 190, 96, 62, 34, 190, 120, 7, 57, 61, 202, 111, 21, 62, 247, 3, 240, 61, 189, 254, 82, 61, 41, 152, 168, 189, 33, 36, 251, 189, 38, 8, 13, 190, 14, 0, 91, 189, 14, 252, 160, 61, 26, 234, 154, 189, 89, 143, 77, 60, 134, 114, 85, 62, 201, 196, 168, 189, 255, 165, 127, 60, 186, 45, 51, 62, 240, 25, 48, 61, 171, 13, 14, 61, 250, 53, 56, 190, 22, 145, 205, 187, 171, 23, 181, 61, 149, 249, 137, 61, 169, 126, 81, 61, 78, 80, 14, 190, 240, 52, 230, 189, 21, 184, 57, 190, 66, 78, 109, 62, 78, 123, 176, 189, 114, 87, 30, 190, 86, 209, 37, 60, 155, 113, 209, 188, 193, 178, 75, 190, 185, 24, 124, 189, 122, 80, 155, 189, 55, 121, 83, 191, 162, 248, 42, 190, 174, 245, 34, 62, 106, 87, 138, 190, 236, 55, 203, 61, 31, 105, 192, 62, 104, 238, 52, 190, 36, 134, 69, 62, 210, 13, 156, 62, 193, 160, 233, 61, 193, 197, 192, 61, 18, 34, 230, 189, 186, 43, 17, 62, 175, 0, 134, 189, 32, 19, 81, 190, 14, 125, 159, 61, 139, 73, 116, 189, 224, 227, 46, 62, 56, 247, 226, 60, 146, 139, 23, 187, 210, 165, 21, 190, 106, 251, 156, 59, 75, 128, 173, 189, 195, 146, 52, 62, 184, 240, 20, 190, 92, 73, 21, 62, 4, 72, 205, 62, 47, 221, 151, 189, 156, 55, 29, 189, 111, 11, 113, 61, 59, 101, 197, 189, 25, 255, 202, 61, 173, 70, 250, 61, 55, 172, 5, 190, 62, 182, 103, 62, 6, 18, 13, 189, 24, 191, 55, 189, 90, 164, 26, 63, 81, 98, 149, 60, 121, 228, 72, 60, 49, 237, 110, 188, 232, 247, 46, 190, 95, 215, 80, 61, 3, 83, 7, 62, 239, 183, 0, 190, 78, 194, 221, 57, 219, 21, 43, 190, 65, 130, 111, 62, 105, 6, 31, 189, 222, 151, 51, 62, 170, 14, 67, 62, 222, 22, 9, 62, 38, 246, 201, 61, 250, 215, 148, 62, 80, 221, 141, 188, 15, 244, 16, 61, 51, 100, 7, 61, 33, 49, 57, 62, 41, 102, 30, 189, 105, 179, 144, 189, 154, 63, 22, 62, 172, 51, 94, 190, 97, 177, 235, 188, 148, 116, 179, 189, 165, 158, 160, 61, 71, 144, 2, 62, 126, 0, 214, 189, 145, 6, 169, 61, 140, 21, 64, 62, 183, 133, 76, 62, 33, 24, 70, 62, 82, 248, 110, 62, 235, 165, 112, 62, 75, 80, 62, 190, 3, 186, 117, 62, 179, 68, 153, 61, 16, 246, 105, 189, 111, 91, 251, 61, 158, 58, 110, 189, 168, 170, 69, 61, 6, 9, 189, 61, 24, 241, 159, 62, 30, 175, 70, 62, 130, 62, 177, 189, 82, 3, 45, 190, 165, 218, 112, 60, 195, 142, 0, 190, 170, 32, 242, 57, 71, 115, 158, 61, 141, 29, 195, 188, 166, 232, 55, 62, 76, 35, 25, 190, 188, 148, 246, 186, 213, 120, 252, 188, 65, 243, 135, 189, 13, 196, 18, 188, 48, 34, 150, 190, 20, 205, 186, 190, 235, 225, 237, 61, 205, 92, 43, 190, 187, 70, 182, 189, 95, 132, 157, 62, 38, 71, 117, 189, 102, 27, 203, 189, 194, 235, 187, 60, 243, 61, 229, 189, 51, 162, 191, 61, 82, 238, 143, 189, 254, 62, 117, 62, 249, 160, 70, 61, 19, 48, 6, 62, 44, 59, 108, 62, 145, 198, 251, 61, 59, 119, 119, 62, 108, 251, 148, 60, 41, 133, 195, 189, 5, 195, 54, 190, 245, 30, 154, 62, 104, 101, 240, 189, 10, 94, 76, 190, 200, 117, 157, 57, 149, 35, 119, 189, 125, 230, 122, 62, 108, 112, 151, 61, 146, 86, 253, 189, 55, 229, 35, 190, 151, 224, 211, 189, 98, 195, 4, 61, 31, 208, 9, 62, 216, 108, 179, 189, 229, 62, 158, 61, 252, 32, 163, 189, 33, 6, 97, 62, 158, 80, 21, 62, 39, 17, 40, 189, 58, 179, 42, 189, 132, 137, 140, 190, 5, 38, 179, 190, 142, 208, 219, 190, 15, 86, 245, 189, 22, 239, 255, 60, 123, 195, 226, 187, 83, 29, 144, 189, 7, 68, 81, 189, 121, 80, 12, 190, 125, 170, 213, 61, 194, 85, 208, 188, 254, 152, 110, 190, 155, 81, 22, 62, 124, 19, 133, 62, 24, 224, 155, 61, 18, 155, 13, 61, 233, 178, 238, 61, 193, 168, 30, 189, 198, 107, 221, 190, 77, 61, 193, 61, 87, 140, 52, 190, 75, 36, 54, 62, 16, 243, 189, 188, 245, 82, 12, 62, 134, 130, 129, 62, 59, 146, 198, 61, 248, 189, 202, 189, 26, 178, 128, 188, 189, 239, 207, 61, 90, 37, 239, 190, 114, 114, 32, 190, 33, 57, 152, 190, 148, 97, 3, 61, 60, 61, 71, 61, 100, 208, 151, 190, 144, 103, 11, 62, 79, 7, 73, 62, 98, 94, 133, 61, 117, 27, 113, 61, 135, 93, 236, 60, 32, 143, 221, 61, 208, 176, 152, 61, 55, 21, 52, 189, 31, 111, 78, 190, 44, 114, 64, 58, 26, 111, 192, 61, 27, 73, 27, 60, 204, 60, 193, 61, 43, 28, 39, 62, 93, 213, 243, 61, 45, 156, 147, 190, 212, 188, 66, 60, 159, 105, 163, 189, 161, 222, 99, 60, 25, 118, 249, 61, 35, 11, 69, 62, 86, 171, 8, 62, 188, 189, 154, 60, 248, 204, 89, 190, 179, 202, 62, 62, 89, 125, 45, 61, 159, 137, 169, 190, 55, 115, 68, 189, 219, 172, 39, 62, 220, 155, 98, 188, 46, 124, 73, 189, 52, 192, 152, 61, 56, 135, 135, 62, 57, 130, 4, 190, 4, 220, 5, 62, 50, 239, 17, 190, 231, 25, 254, 188, 216, 49, 255, 61, 52, 220, 181, 60, 62, 111, 121, 62, 10, 35, 179, 61, 112, 5, 131, 190, 27, 139, 229, 60, 9, 228, 205, 190, 14, 183, 1, 61, 134, 214, 40, 61, 137, 77, 37, 189, 14, 133, 197, 61, 25, 179, 38, 60, 240, 191, 49, 62, 228, 33, 40, 62, 41, 153, 204, 189, 138, 0, 19, 190, 4, 21, 158, 190, 42, 119, 252, 190, 39, 216, 93, 188, 134, 164, 237, 190, 124, 39, 70, 190, 24, 43, 33, 63, 48, 239, 87, 62, 180, 123, 94, 61, 77, 24, 12, 61, 57, 47, 248, 188, 173, 172, 137, 189, 177, 183, 255, 61, 208, 85, 11, 190, 245, 177, 12, 190, 178, 75, 45, 62, 176, 198, 162, 188, 58, 79, 26, 62, 201, 162, 37, 190, 156, 150, 253, 189, 210, 176, 139, 189, 96, 126, 33, 190, 81, 145, 159, 188, 41, 138, 129, 60, 123, 242, 212, 189, 89, 140, 93, 61, 242, 132, 177, 61, 241, 144, 49, 190, 164, 41, 140, 189, 161, 22, 17, 190, 71, 61, 42, 190, 40, 100, 170, 188, 147, 62, 171, 61, 175, 203, 75, 189, 92, 189, 153, 189, 224, 144, 36, 62, 154, 62, 232, 189, 185, 239, 166, 61, 44, 126, 70, 189, 220, 129, 239, 61, 247, 176, 149, 61, 255, 204, 70, 190, 128, 114, 140, 62, 228, 236, 144, 62, 175, 3, 43, 62, 141, 125, 12, 190, 197, 47, 50, 188, 65, 238, 164, 61, 19, 217, 246, 189, 226, 175, 204, 189, 137, 16, 170, 189, 144, 143, 121, 62, 123, 77, 97, 60, 7, 190, 24, 62, 176, 144, 132, 189, 159, 202, 56, 61, 214, 138, 93, 188, 193, 81, 164, 189, 214, 16, 214, 60, 145, 68, 89, 62, 117, 110, 8, 62, 10, 247, 146, 189, 0, 189, 236, 59, 152, 13, 193, 189, 211, 52, 67, 190, 1, 241, 24, 191, 33, 176, 8, 62, 129, 67, 45, 62, 130, 197, 42, 61, 177, 94, 20, 188, 96, 1, 57, 62, 96, 107, 9, 60, 47, 33, 31, 190, 4, 230, 104, 190, 206, 181, 157, 190, 99, 10, 27, 190, 117, 218, 118, 190, 157, 240, 95, 61, 26, 40, 192, 188, 10, 63, 195, 189, 100, 212, 4, 189, 71, 58, 97, 61, 212, 59, 177, 188, 150, 149, 128, 190, 251, 21, 79, 190, 236, 254, 76, 189, 64, 10, 130, 61, 187, 101, 5, 62, 21, 236, 90, 62, 169, 141, 0, 190, 33, 172, 131, 189, 23, 179, 233, 190, 162, 6, 84, 62, 54, 87, 137, 190, 162, 33, 69, 62, 30, 147, 82, 62, 102, 93, 11, 189, 254, 160, 181, 62, 79, 230, 192, 61, 6, 139, 49, 62, 1, 168, 62, 62, 165, 121, 9, 61, 52, 193, 95, 191, 38, 34, 69, 190, 219, 66, 115, 62, 99, 193, 65, 62, 137, 100, 231, 189, 15, 23, 171, 62, 211, 200, 182, 61, 184, 247, 130, 189, 77, 179, 73, 62, 93, 158, 159, 189, 171, 51, 46, 61, 178, 83, 183, 61, 138, 151, 193, 61, 158, 130, 13, 189, 196, 96, 2, 189, 208, 247, 196, 190, 90, 38, 131, 189, 53, 210, 42, 190, 13, 90, 128, 187, 124, 130, 28, 62, 120, 168, 236, 61, 146, 227, 201, 62, 88, 211, 246, 188, 125, 35, 191, 189, 158, 51, 243, 61, 9, 250, 33, 61, 192, 178, 85, 60, 145, 244, 161, 190, 165, 29, 197, 190, 88, 212, 46, 189, 228, 18, 163, 190, 136, 125, 142, 190, 87, 181, 26, 63, 87, 152, 9, 62, 197, 126, 142, 190, 222, 162, 166, 190, 51, 102, 142, 189, 139, 17, 118, 190, 254, 211, 101, 188, 54, 133, 102, 189, 210, 195, 3, 190, 232, 48, 152, 189, 125, 87, 59, 188, 247, 235, 40, 61, 108, 30, 30, 189, 89, 13, 250, 60, 138, 196, 151, 190, 86, 201, 8, 190, 72, 84, 159, 189, 50, 211, 1, 61, 185, 219, 104, 62, 96, 104, 19, 62, 64, 111, 91, 61, 253, 65, 158, 190, 28, 125, 154, 62, 192, 163, 135, 190, 118, 209, 211, 61, 112, 11, 22, 62, 152, 188, 190, 61, 60, 52, 178, 62, 84, 253, 147, 188, 52, 70, 184, 61, 241, 160, 24, 189, 95, 85, 50, 190, 90, 68, 55, 191, 242, 170, 225, 189, 185, 5, 1, 62, 19, 236, 59, 61, 239, 132, 3, 61, 151, 131, 51, 62, 154, 152, 137, 190, 95, 31, 172, 189, 221, 183, 181, 189, 86, 120, 240, 189, 200, 86, 244, 61, 136, 97, 52, 189, 49, 197, 211, 189, 168, 96, 198, 60, 28, 187, 92, 190, 117, 15, 156, 61, 115, 97, 71, 62, 37, 240, 1, 190, 10, 173, 149, 62, 124, 228, 254, 59, 184, 109, 162, 189, 106, 111, 158, 189, 239, 209, 185, 189, 211, 166, 120, 189, 214, 74, 134, 62, 177, 160, 142, 190, 203, 106, 215, 188, 148, 158, 54, 62, 58, 242, 63, 61, 141, 190, 13, 62, 27, 55, 248, 61, 115, 153, 156, 189, 227, 176, 180, 190, 221, 1, 171, 61, 178, 22, 155, 61, 255, 78, 78, 189, 84, 148, 8, 190, 148, 211, 36, 190, 124, 190, 150, 61, 254, 57, 144, 189, 95, 66, 16, 62, 61, 131, 205, 59, 25, 251, 134, 189, 173, 47, 164, 61, 238, 34, 214, 59, 35, 110, 200, 186, 122, 159, 145, 189, 176, 26, 79, 189, 141, 232, 5, 62, 106, 82, 43, 189, 127, 57, 180, 189, 108, 32, 228, 189, 167, 223, 156, 189, 183, 114, 211, 189, 63, 95, 146, 188, 41, 135, 10, 190, 174, 236, 248, 60, 212, 29, 3, 188, 102, 11, 27, 190, 224, 197, 241, 61, 206, 52, 219, 188, 92, 167, 158, 189, 254, 148, 202, 189, 36, 230, 192, 189, 200, 120, 91, 61, 5, 181, 141, 188, 233, 224, 98, 62, 163, 69, 251, 188, 200, 148, 68, 60, 244, 222, 215, 188, 126, 204, 176, 61, 86, 30, 100, 189, 183, 182, 28, 190, 105, 127, 9, 62, 40, 137, 219, 189, 234, 42, 118, 189, 237, 59, 118, 61, 2, 115, 140, 61, 126, 235, 148, 62, 89, 149, 98, 59, 196, 111, 88, 188, 67, 35, 208, 61, 72, 249, 152, 60, 149, 113, 12, 62, 98, 18, 55, 62, 235, 71, 209, 187, 3, 237, 131, 190, 50, 70, 48, 190, 150, 12, 43, 61, 119, 3, 252, 187, 59, 124, 177, 60, 145, 225, 188, 189, 54, 76, 31, 189, 3, 44, 211, 61, 194, 214, 221, 188, 200, 114, 28, 59, 191, 12, 34, 190, 68, 218, 238, 189, 194, 110, 40, 189, 245, 61, 177, 189, 30, 76, 87, 190, 126, 173, 130, 189, 9, 44, 75, 62, 224, 119, 186, 189, 3, 129, 0, 189, 116, 76, 35, 189, 79, 61, 57, 189, 169, 42, 36, 61, 184, 178, 142, 62, 51, 166, 210, 60, 26, 82, 179, 61, 12, 228, 81, 62, 153, 202, 221, 61, 6, 15, 89, 188, 173, 254, 167, 190, 38, 37, 109, 62, 148, 40, 116, 62, 69, 147, 156, 189, 128, 239, 211, 189, 22, 6, 174, 61, 170, 103, 147, 190, 7, 26, 19, 190, 156, 207, 95, 62, 182, 146, 60, 62, 117, 225, 69, 189, 85, 11, 42, 61, 199, 107, 218, 189, 75, 108, 201, 62, 80, 10, 113, 62, 59, 90, 95, 62, 134, 42, 235, 188, 53, 141, 32, 61, 92, 192, 125, 189, 246, 170, 247, 61, 233, 208, 59, 62, 227, 165, 25, 62, 213, 106, 180, 189, 221, 145, 0, 62, 71, 239, 2, 62, 199, 181, 56, 189, 72, 149, 15, 62, 22, 90, 75, 62, 3, 77, 241, 61, 125, 10, 219, 189, 67, 66, 145, 61, 107, 246, 163, 190, 59, 212, 9, 189, 79, 68, 205, 187, 41, 154, 185, 189, 85, 159, 154, 62, 216, 86, 2, 190, 143, 178, 253, 188, 184, 247, 234, 61, 142, 86, 110, 190, 129, 111, 229, 189, 41, 111, 67, 189, 16, 208, 222, 190, 178, 214, 108, 189, 245, 123, 173, 189, 83, 188, 156, 189, 252, 11, 230, 62, 60, 182, 103, 62, 30, 160, 54, 190, 117, 60, 57, 190, 173, 42, 79, 189, 6, 129, 171, 189, 231, 62, 233, 189, 16, 22, 194, 60, 177, 170, 32, 190, 15, 184, 74, 61, 204, 236, 219, 61, 112, 174, 254, 56, 55, 85, 217, 61, 161, 202, 216, 189, 73, 250, 121, 190, 87, 198, 92, 190, 47, 35, 34, 62, 39, 14, 203, 189, 24, 61, 177, 62, 63, 242, 159, 61, 196, 251, 138, 61, 244, 163, 245, 190, 41, 204, 153, 62, 219, 78, 120, 61, 149, 28, 37, 62, 250, 170, 83, 61, 218, 184, 223, 61, 245, 65, 108, 62, 126, 39, 34, 189, 62, 121, 47, 59, 120, 194, 91, 62, 125, 207, 73, 189, 84, 132, 15, 191, 135, 104, 71, 190, 82, 103, 50, 190, 24, 149, 148, 189, 72, 90, 16, 190, 222, 211, 227, 190, 235, 221, 1, 62, 40, 9, 131, 59, 246, 104, 32, 62, 121, 46, 169, 189, 186, 52, 205, 187, 49, 232, 54, 190, 87, 241, 169, 61, 241, 80, 162, 190, 141, 68, 247, 61, 214, 2, 34, 62, 30, 186, 150, 62, 50, 237, 207, 61, 236, 250, 156, 190, 47, 143, 39, 61, 52, 109, 215, 61, 69, 222, 234, 59, 159, 94, 163, 187, 220, 128, 64, 61, 239, 175, 50, 190, 175, 230, 27, 189, 47, 45, 63, 61, 0, 12, 75, 61, 163, 38, 160, 60, 253, 200, 146, 190, 165, 152, 220, 189, 160, 103, 26, 62, 251, 80, 124, 61, 27, 194, 187, 61, 240, 176, 183, 189, 91, 39, 190, 188, 120, 211, 60, 190, 49, 107, 35, 62, 245, 66, 154, 59, 92, 210, 174, 61, 28, 218, 43, 62, 138, 98, 76, 190, 36, 150, 132, 190, 34, 220, 149, 186, 180, 185, 81, 62, 251, 35, 23, 188, 196, 116, 193, 188, 255, 21, 233, 189, 214, 241, 37, 188, 14, 53, 137, 190, 240, 45, 154, 190, 35, 164, 30, 62, 126, 225, 34, 190, 89, 62, 4, 63, 158, 121, 18, 190, 88, 180, 212, 189, 55, 107, 188, 61, 27, 202, 204, 188, 96, 11, 173, 187, 88, 158, 62, 190, 120, 174, 237, 190, 24, 216, 7, 190, 0, 27, 89, 189, 214, 210, 55, 189, 27, 88, 212, 62, 145, 41, 7, 190, 254, 130, 236, 61, 13, 18, 44, 62, 207, 255, 91, 190, 94, 165, 145, 190, 251, 248, 19, 190, 238, 56, 40, 62, 60, 136, 10, 61, 110, 218, 208, 189, 212, 244, 201, 60, 76, 60, 19, 190, 127, 17, 177, 61, 123, 113, 100, 61, 24, 110, 138, 61, 52, 17, 13, 190, 201, 231, 198, 61, 223, 107, 160, 188, 127, 5, 253, 189, 36, 37, 210, 61, 38, 156, 210, 61, 148, 145, 190, 189, 41, 166, 249, 61, 119, 121, 121, 189, 81, 44, 158, 189, 243, 123, 13, 62, 175, 96, 254, 188, 78, 248, 188, 62, 116, 107, 11, 61, 139, 91, 180, 188, 247, 246, 138, 189, 179, 201, 80, 189, 216, 5, 188, 190, 108, 178, 187, 189, 148, 195, 127, 189, 29, 239, 250, 189, 64, 251, 22, 62, 198, 179, 128, 60, 105, 203, 94, 189, 140, 175, 209, 61, 249, 192, 78, 61, 38, 212, 36, 190, 32, 215, 47, 61, 199, 190, 167, 189, 87, 155, 3, 62, 20, 242, 12, 190, 153, 134, 88, 189, 96, 85, 128, 60, 127, 101, 212, 189, 132, 105, 185, 188, 18, 239, 206, 60, 92, 165, 132, 189, 31, 198, 215, 60, 161, 217, 37, 61, 154, 32, 127, 189, 10, 187, 114, 60, 224, 115, 196, 61, 137, 21, 208, 187, 32, 69, 56, 61, 243, 44, 16, 190, 139, 126, 8, 189, 22, 40, 55, 189, 175, 70, 232, 61, 253, 40, 52, 190, 175, 106, 12, 62, 250, 26, 18, 190, 45, 234, 204, 61, 230, 64, 43, 62, 17, 65, 107, 189, 20, 1, 51, 190, 73, 12, 0, 62, 252, 222, 42, 190, 75, 13, 97, 190, 100, 9, 4, 61, 176, 112, 130, 62, 77, 71, 29, 189, 200, 228, 202, 59, 146, 190, 234, 189, 10, 48, 6, 190, 189, 158, 40, 62, 235, 55, 38, 62, 61, 19, 44, 190, 66, 24, 45, 62, 97, 87, 135, 61, 215, 76, 74, 62, 51, 8, 147, 189, 128, 117, 246, 61, 60, 97, 13, 61, 21, 170, 55, 61, 242, 251, 35, 62, 5, 165, 158, 61, 77, 33, 101, 61, 129, 59, 7, 62, 131, 212, 176, 189, 177, 86, 78, 189, 30, 134, 35, 188, 8, 97, 121, 190, 8, 65, 18, 62, 137, 119, 107, 61, 185, 52, 165, 189, 248, 139, 17, 190, 25, 228, 209, 61, 3, 213, 165, 61, 46, 243, 27, 62, 252, 73, 189, 61, 246, 254, 238, 189, 207, 219, 112, 61, 228, 9, 92, 61, 116, 151, 199, 61, 141, 111, 146, 186, 157, 198, 97, 61, 156, 152, 37, 190, 85, 90, 135, 62, 53, 32, 170, 188, 169, 36, 137, 189, 21, 243, 6, 189, 142, 238, 233, 61, 75, 46, 162, 189, 222, 129, 33, 190, 185, 161, 147, 189, 203, 138, 5, 190, 74, 108, 57, 62, 85, 212, 157, 189, 29, 196, 30, 62, 157, 38, 197, 189, 158, 57, 0, 190, 63, 231, 145, 189, 203, 154, 9, 190, 95, 87, 11, 190, 17, 17, 6, 62, 219, 169, 35, 190, 219, 83, 69, 190, 50, 16, 11, 190, 111, 23, 223, 190, 42, 8, 194, 189, 128, 73, 82, 62, 201, 158, 189, 189, 248, 99, 164, 61, 237, 197, 140, 62, 199, 87, 197, 189, 226, 145, 23, 61, 114, 187, 134, 190, 45, 239, 43, 61, 209, 93, 24, 190, 128, 22, 122, 61, 119, 203, 154, 61, 63, 42, 135, 189, 255, 62, 237, 61, 45, 88, 45, 62, 201, 252, 140, 190, 22, 73, 200, 61, 190, 123, 8, 190, 248, 58, 92, 62, 86, 104, 245, 188, 252, 231, 208, 186, 68, 251, 183, 62, 181, 4, 61, 190, 247, 231, 47, 189, 52, 236, 36, 62, 228, 183, 53, 62, 53, 207, 111, 190, 175, 28, 232, 61, 228, 215, 132, 61, 171, 100, 193, 61, 249, 225, 119, 62, 126, 108, 38, 190, 69, 168, 214, 60, 119, 68, 171, 61, 188, 65, 32, 190, 129, 29, 95, 189, 136, 167, 7, 188, 72, 241, 243, 189, 23, 238, 10, 190, 200, 177, 21, 62, 184, 45, 255, 189, 40, 10, 1, 62, 161, 166, 170, 60, 14, 200, 30, 62, 162, 71, 4, 62, 131, 18, 24, 190, 99, 22, 108, 190, 238, 112, 23, 61, 116, 249, 243, 61, 23, 36, 247, 61, 234, 246, 248, 61, 172, 181, 18, 188, 124, 15, 64, 189, 147, 116, 54, 62, 48, 57, 10, 62, 23, 100, 56, 190, 226, 252, 108, 62, 176, 4, 62, 189, 138, 143, 46, 190, 45, 188, 27, 190, 125, 135, 96, 61, 28, 139, 80, 187, 52, 161, 48, 190, 118, 59, 23, 62, 155, 199, 171, 188, 26, 73, 150, 61, 20, 245, 9, 62, 114, 51, 86, 61, 249, 202, 152, 61, 158, 185, 211, 61, 76, 139, 45, 190, 67, 188, 34, 189, 27, 206, 9, 62, 84, 200, 211, 61, 6, 182, 14, 62, 160, 28, 101, 61, 233, 32, 181, 188, 103, 99, 131, 189, 247, 75, 255, 61, 36, 106, 180, 61, 184, 15, 124, 190, 207, 35, 210, 61, 29, 76, 191, 61, 159, 176, 53, 190, 19, 7, 6, 189, 44, 109, 14, 189, 130, 198, 39, 62, 190, 193, 143, 59, 137, 142, 152, 190, 101, 3, 137, 62, 138, 120, 225, 61, 170, 69, 101, 189};
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
                alignas(float) const unsigned char memory[] = {62, 239, 163, 61, 24, 42, 207, 189, 125, 246, 113, 61, 31, 156, 187, 189, 216, 180, 79, 62, 131, 125, 174, 186, 28, 21, 155, 58, 16, 68, 3, 62, 28, 64, 160, 61, 231, 234, 95, 62, 24, 178, 47, 62, 236, 98, 46, 61, 5, 230, 7, 190, 173, 228, 246, 61, 217, 8, 55, 62, 79, 92, 239, 189, 57, 11, 145, 61, 15, 118, 12, 62, 181, 189, 177, 189, 39, 106, 43, 190, 145, 80, 116, 61, 104, 186, 20, 62, 244, 68, 181, 187, 136, 241, 89, 62, 13, 217, 246, 61, 221, 233, 188, 61, 107, 34, 246, 189, 139, 145, 251, 61, 52, 143, 153, 60, 122, 163, 162, 61, 97, 182, 40, 190, 186, 242, 20, 190};
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
                alignas(float) const unsigned char memory[] = {36, 149, 44, 190, 43, 167, 136, 190, 40, 203, 89, 190, 28, 240, 239, 61, 216, 6, 167, 62, 21, 204, 44, 62, 195, 195, 35, 190, 204, 5, 130, 62, 35, 163, 50, 61, 252, 34, 1, 191, 31, 122, 100, 190, 189, 137, 193, 62, 254, 37, 150, 61, 27, 174, 27, 62, 210, 19, 207, 190, 39, 71, 195, 62, 253, 38, 148, 190, 149, 26, 16, 190, 243, 54, 209, 188, 43, 46, 214, 188, 6, 229, 144, 190, 4, 189, 72, 62, 86, 211, 180, 190, 49, 235, 156, 190, 155, 105, 167, 62, 163, 152, 220, 189, 239, 4, 9, 62, 71, 14, 198, 189, 186, 116, 235, 188, 251, 12, 172, 190, 38, 114, 60, 62, 30, 5, 219, 189, 41, 212, 230, 189, 127, 85, 222, 61, 91, 53, 213, 189, 176, 162, 179, 188, 64, 73, 170, 190, 95, 246, 253, 189, 104, 149, 221, 189, 167, 173, 4, 190, 21, 15, 234, 189, 38, 251, 201, 188, 81, 146, 224, 189, 83, 219, 184, 61, 206, 17, 245, 61, 209, 189, 65, 62, 180, 42, 181, 59, 255, 254, 243, 61, 112, 234, 198, 61, 230, 122, 147, 190, 204, 240, 151, 189, 59, 215, 20, 62, 48, 74, 108, 190, 224, 142, 27, 190, 219, 220, 22, 62, 215, 98, 223, 190, 10, 142, 184, 60, 46, 157, 26, 190, 24, 56, 122, 186, 34, 70, 27, 190, 53, 51, 152, 189, 117, 233, 201, 190, 100, 160, 232, 61, 179, 224, 240, 61};
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
                alignas(float) const unsigned char memory[] = {231, 250, 8, 62, 222, 243, 46, 190};
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
    alignas(float) const unsigned char memory[] = {121, 168, 83, 63, 61, 75, 12, 63, 134, 90, 161, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {98, 213, 189, 191, 197, 19, 175, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0058/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}