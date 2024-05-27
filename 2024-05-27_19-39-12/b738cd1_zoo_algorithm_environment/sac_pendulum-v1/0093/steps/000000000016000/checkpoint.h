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
                alignas(float) const unsigned char memory[] = {136, 25, 42, 60, 43, 117, 184, 191, 95, 76, 5, 191, 249, 114, 106, 190, 39, 167, 165, 189, 85, 111, 226, 62, 53, 181, 222, 62, 7, 159, 30, 191, 184, 24, 187, 62, 86, 138, 169, 190, 15, 254, 43, 191, 173, 99, 240, 62, 33, 216, 17, 63, 119, 212, 148, 191, 176, 236, 160, 190, 78, 121, 39, 190, 255, 229, 157, 191, 29, 243, 130, 190, 111, 208, 241, 190, 74, 9, 10, 63, 149, 223, 180, 190, 35, 94, 35, 63, 146, 237, 77, 63, 54, 232, 98, 62, 243, 249, 102, 60, 135, 129, 132, 63, 68, 172, 34, 63, 230, 73, 81, 190, 15, 100, 122, 191, 46, 182, 115, 61, 149, 219, 239, 189, 231, 231, 187, 63, 31, 91, 169, 62, 35, 130, 151, 62, 34, 191, 95, 191, 115, 51, 212, 190, 116, 128, 33, 191, 75, 100, 24, 190, 249, 215, 55, 63, 209, 109, 43, 63, 206, 227, 13, 63, 148, 60, 64, 62, 224, 45, 21, 191, 239, 2, 212, 189, 73, 39, 40, 189, 98, 4, 188, 190, 209, 188, 23, 63, 208, 220, 245, 62, 75, 154, 15, 62, 0, 79, 93, 191, 184, 143, 210, 62, 255, 49, 27, 63, 74, 98, 174, 191, 213, 53, 203, 190, 224, 76, 120, 63, 248, 26, 127, 62, 69, 45, 153, 62, 163, 67, 41, 62, 75, 120, 204, 62, 23, 92, 130, 190, 180, 220, 190, 62, 89, 85, 213, 62, 31, 66, 141, 62, 97, 231, 28, 190, 68, 12, 202, 191, 223, 99, 217, 190, 6, 117, 19, 62, 47, 113, 174, 63, 113, 212, 142, 62, 177, 36, 2, 191, 142, 216, 83, 61, 239, 47, 223, 188, 175, 217, 182, 190, 241, 154, 208, 191, 69, 84, 0, 191, 111, 22, 60, 63, 224, 173, 129, 63, 174, 163, 133, 62, 67, 116, 202, 62, 61, 222, 156, 190, 144, 132, 195, 190, 224, 227, 49, 63, 250, 131, 128, 63, 10, 74, 243, 190, 146, 210, 19, 62, 103, 243, 156, 62, 91, 57, 5, 191, 76, 236, 89, 63, 8, 36, 84, 191, 37, 96, 2, 190, 225, 3, 192, 62, 71, 132, 10, 190, 161, 29, 3, 63, 180, 164, 13, 63, 221, 78, 82, 191, 252, 17, 174, 188};
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
                alignas(float) const unsigned char memory[] = {66, 120, 208, 189, 182, 234, 192, 190, 93, 207, 201, 62, 14, 52, 230, 190, 70, 242, 162, 190, 130, 45, 12, 190, 253, 41, 231, 187, 73, 91, 143, 190, 233, 236, 40, 188, 234, 32, 123, 190, 203, 45, 185, 190, 96, 111, 31, 190, 83, 71, 0, 62, 72, 38, 175, 190, 75, 155, 193, 62, 195, 40, 5, 191, 138, 64, 60, 60, 231, 234, 205, 190, 163, 140, 140, 191, 248, 29, 119, 62, 64, 211, 70, 62, 168, 194, 248, 60, 89, 186, 68, 62, 143, 2, 29, 63, 229, 40, 114, 62, 234, 180, 56, 190, 195, 111, 159, 189, 22, 144, 85, 190, 129, 80, 176, 190, 183, 141, 212, 190, 211, 98, 77, 62, 239, 25, 49, 62};
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
                alignas(float) const unsigned char memory[] = {52, 183, 16, 191, 193, 162, 211, 190, 185, 146, 133, 188, 18, 28, 226, 189, 233, 72, 102, 190, 253, 184, 168, 191, 210, 204, 55, 191, 26, 194, 156, 190, 55, 164, 117, 189, 202, 212, 183, 190, 176, 98, 134, 189, 205, 68, 182, 190, 51, 186, 107, 62, 178, 81, 233, 190, 106, 106, 138, 62, 174, 191, 0, 191, 15, 70, 92, 62, 143, 4, 88, 190, 16, 176, 202, 189, 215, 63, 165, 62, 5, 129, 242, 190, 56, 119, 91, 191, 15, 226, 41, 61, 167, 26, 135, 62, 127, 86, 187, 190, 235, 158, 207, 190, 97, 162, 169, 60, 223, 164, 121, 62, 230, 136, 95, 62, 60, 22, 22, 190, 203, 244, 185, 190, 158, 87, 71, 191, 21, 170, 110, 60, 80, 67, 200, 190, 60, 215, 73, 62, 253, 216, 109, 189, 48, 29, 88, 189, 103, 25, 72, 191, 87, 14, 53, 191, 176, 130, 205, 190, 163, 148, 40, 188, 83, 247, 170, 60, 23, 113, 26, 190, 204, 228, 122, 60, 227, 129, 129, 62, 39, 83, 52, 191, 17, 201, 45, 62, 110, 86, 43, 190, 116, 73, 176, 62, 110, 193, 96, 62, 186, 147, 182, 191, 242, 115, 109, 62, 245, 59, 131, 190, 119, 17, 53, 190, 135, 147, 0, 191, 109, 226, 103, 61, 228, 40, 21, 61, 144, 49, 226, 190, 56, 249, 117, 61, 45, 99, 191, 62, 14, 246, 128, 189, 97, 0, 70, 62, 228, 98, 14, 190, 159, 223, 228, 62, 116, 214, 128, 190, 197, 249, 2, 61, 8, 231, 85, 61, 206, 237, 24, 189, 111, 237, 197, 190, 147, 68, 247, 61, 21, 108, 213, 61, 138, 247, 135, 62, 40, 61, 112, 61, 7, 151, 250, 190, 28, 253, 1, 190, 170, 144, 77, 188, 115, 239, 137, 189, 250, 204, 156, 62, 251, 211, 181, 62, 211, 96, 135, 189, 121, 30, 26, 189, 206, 56, 161, 190, 28, 36, 110, 61, 116, 169, 155, 62, 237, 117, 244, 59, 75, 157, 2, 191, 174, 166, 85, 62, 0, 224, 0, 62, 135, 53, 77, 190, 28, 146, 11, 62, 92, 194, 108, 188, 189, 62, 209, 62, 183, 148, 120, 188, 244, 110, 212, 190, 213, 83, 61, 62, 32, 130, 242, 61, 180, 119, 242, 62, 197, 46, 79, 190, 254, 86, 29, 62, 107, 155, 212, 189, 51, 232, 170, 62, 186, 116, 63, 191, 102, 176, 147, 191, 172, 191, 180, 190, 147, 142, 187, 188, 83, 153, 245, 61, 109, 131, 99, 62, 207, 208, 241, 61, 114, 230, 141, 62, 39, 128, 79, 190, 154, 197, 153, 62, 215, 206, 151, 61, 92, 145, 100, 62, 115, 126, 19, 63, 43, 18, 37, 63, 215, 194, 62, 190, 235, 242, 0, 190, 14, 105, 135, 62, 47, 61, 175, 190, 120, 7, 189, 189, 7, 29, 9, 62, 251, 223, 9, 190, 191, 225, 181, 190, 121, 144, 237, 190, 36, 245, 117, 190, 246, 183, 211, 62, 45, 0, 18, 190, 40, 35, 134, 62, 175, 170, 39, 191, 171, 83, 1, 61, 105, 173, 32, 61, 118, 17, 87, 189, 163, 69, 20, 191, 203, 241, 169, 190, 207, 24, 147, 61, 228, 217, 28, 62, 1, 103, 8, 189, 145, 237, 223, 190, 127, 12, 69, 190, 115, 212, 12, 62, 55, 255, 31, 189, 155, 168, 7, 61, 205, 91, 164, 62, 121, 65, 164, 190, 107, 139, 47, 190, 56, 120, 159, 190, 58, 80, 172, 190, 35, 6, 59, 61, 204, 51, 116, 189, 100, 148, 179, 191, 143, 174, 32, 62, 36, 202, 56, 62, 79, 249, 117, 191, 52, 153, 145, 62, 5, 147, 200, 61, 188, 21, 175, 62, 23, 132, 195, 61, 3, 134, 147, 61, 204, 208, 144, 61, 105, 16, 73, 62, 137, 7, 151, 62, 195, 122, 10, 190, 252, 10, 0, 61, 207, 82, 24, 190, 199, 240, 42, 190, 105, 141, 218, 62, 160, 58, 37, 190, 70, 241, 218, 61, 114, 235, 15, 62, 128, 18, 142, 62, 116, 106, 2, 190, 235, 38, 246, 189, 95, 20, 146, 189, 232, 18, 72, 62, 122, 223, 70, 62, 152, 122, 139, 190, 71, 44, 77, 61, 211, 225, 243, 189, 76, 117, 25, 191, 244, 150, 137, 190, 202, 18, 93, 62, 140, 80, 95, 189, 81, 22, 188, 189, 210, 0, 137, 61, 187, 124, 60, 62, 54, 95, 30, 62, 181, 57, 80, 189, 120, 162, 236, 190, 123, 237, 53, 190, 125, 15, 164, 190, 67, 229, 27, 61, 18, 64, 66, 61, 224, 193, 45, 191, 121, 124, 184, 61, 160, 204, 89, 61, 247, 228, 132, 189, 197, 151, 195, 190, 223, 26, 15, 190, 128, 219, 67, 62, 130, 136, 102, 62, 67, 161, 34, 189, 0, 17, 196, 190, 192, 149, 38, 190, 248, 92, 142, 61, 119, 166, 31, 62, 113, 29, 112, 59, 216, 0, 114, 62, 17, 15, 193, 189, 158, 117, 185, 189, 189, 41, 160, 190, 186, 40, 129, 190, 240, 118, 210, 61, 26, 21, 51, 61, 15, 252, 120, 191, 72, 44, 180, 61, 171, 212, 0, 62, 109, 184, 61, 191, 95, 21, 81, 62, 119, 209, 87, 62, 172, 35, 223, 62, 162, 215, 15, 59, 63, 180, 171, 189, 178, 14, 23, 189, 78, 105, 38, 62, 71, 218, 26, 62, 124, 104, 64, 189, 222, 182, 178, 61, 216, 204, 3, 189, 179, 117, 202, 188, 227, 13, 164, 189, 233, 178, 30, 190, 97, 202, 22, 190, 219, 185, 3, 190, 65, 70, 171, 189, 124, 35, 249, 189, 123, 121, 2, 62, 32, 118, 193, 61, 234, 67, 70, 190, 202, 61, 58, 190, 172, 145, 17, 189, 52, 141, 233, 56, 179, 16, 5, 190, 51, 249, 243, 60, 130, 189, 148, 61, 22, 74, 255, 189, 216, 50, 102, 189, 56, 72, 243, 189, 179, 211, 178, 61, 219, 38, 41, 190, 165, 113, 149, 189, 161, 117, 67, 61, 178, 132, 176, 59, 218, 188, 118, 189, 247, 221, 53, 62, 145, 250, 219, 60, 31, 234, 151, 189, 144, 213, 155, 191, 89, 211, 223, 61, 53, 198, 40, 62, 126, 86, 37, 190, 202, 31, 252, 190, 220, 1, 186, 190, 244, 124, 154, 190, 20, 123, 97, 189, 209, 230, 27, 62, 239, 160, 48, 62, 96, 150, 139, 60, 78, 200, 12, 190, 166, 63, 226, 60, 61, 239, 15, 62, 20, 17, 144, 62, 201, 122, 91, 189, 121, 250, 3, 190, 111, 112, 134, 190, 34, 72, 177, 190, 48, 104, 168, 61, 114, 130, 121, 62, 209, 47, 181, 191, 77, 214, 203, 189, 224, 175, 29, 62, 50, 188, 167, 191, 61, 65, 210, 189, 59, 51, 192, 61, 171, 135, 211, 61, 36, 120, 244, 189, 84, 70, 102, 62, 129, 18, 43, 62, 237, 102, 158, 62, 169, 21, 86, 191, 196, 130, 134, 190, 231, 49, 236, 189, 113, 107, 161, 190, 210, 202, 224, 190, 126, 142, 146, 190, 78, 46, 138, 190, 4, 212, 36, 62, 32, 61, 1, 190, 66, 229, 13, 191, 202, 45, 6, 190, 38, 72, 52, 62, 16, 120, 131, 190, 247, 79, 237, 60, 28, 98, 176, 190, 220, 162, 82, 190, 158, 36, 155, 190, 72, 251, 182, 190, 148, 142, 94, 191, 80, 170, 72, 62, 202, 143, 50, 61, 81, 76, 153, 191, 73, 23, 203, 189, 75, 231, 127, 189, 199, 19, 116, 191, 28, 56, 203, 62, 111, 93, 173, 62, 184, 11, 152, 62, 151, 10, 29, 190, 252, 165, 159, 62, 220, 104, 27, 190, 30, 34, 193, 62, 9, 84, 4, 62, 23, 172, 216, 61, 188, 77, 223, 59, 56, 150, 111, 62, 215, 87, 158, 61, 151, 39, 170, 61, 44, 41, 82, 190, 7, 162, 158, 62, 115, 58, 0, 190, 217, 65, 228, 62, 29, 204, 225, 190, 20, 108, 227, 61, 102, 124, 21, 62, 226, 38, 7, 62, 95, 30, 150, 60, 45, 87, 39, 61, 186, 48, 185, 61, 180, 90, 48, 62, 145, 92, 100, 62, 188, 197, 127, 190, 155, 212, 88, 62, 223, 85, 142, 62, 158, 32, 112, 190, 149, 73, 237, 61, 227, 34, 16, 62, 38, 132, 191, 61, 190, 5, 186, 189, 178, 199, 243, 61, 155, 120, 216, 190, 231, 160, 139, 62, 213, 56, 53, 62, 238, 106, 199, 62, 184, 73, 177, 190, 152, 239, 21, 190, 225, 89, 248, 190, 139, 6, 175, 62, 40, 122, 94, 190, 117, 227, 113, 62, 133, 188, 161, 62, 219, 81, 6, 62, 79, 250, 98, 191, 34, 249, 8, 62, 0, 96, 119, 191, 243, 146, 24, 62, 187, 240, 234, 189, 235, 98, 13, 62, 46, 60, 174, 62, 146, 40, 243, 190, 128, 206, 140, 190, 27, 236, 71, 190, 220, 108, 0, 190, 15, 50, 95, 190, 34, 154, 151, 61, 126, 103, 154, 61, 138, 118, 29, 190, 152, 57, 99, 62, 178, 17, 111, 62, 191, 86, 18, 62, 160, 25, 98, 187, 97, 186, 184, 190, 118, 101, 172, 189, 105, 155, 203, 190, 197, 94, 182, 189, 194, 76, 106, 191, 231, 244, 130, 62, 47, 144, 20, 189, 128, 190, 77, 62, 23, 110, 188, 188, 185, 12, 170, 62, 38, 29, 170, 191, 234, 91, 244, 190, 215, 90, 46, 191, 47, 221, 116, 189, 151, 224, 58, 61, 30, 31, 69, 61, 194, 16, 14, 62, 101, 143, 255, 61, 172, 175, 16, 191, 112, 132, 114, 190, 118, 179, 28, 190, 90, 127, 178, 62, 168, 103, 198, 61, 172, 108, 218, 191, 90, 164, 123, 62, 176, 1, 140, 59, 55, 134, 241, 190, 142, 248, 217, 190, 221, 22, 75, 62, 39, 170, 126, 190, 85, 131, 153, 190, 2, 27, 241, 61, 52, 216, 29, 62, 224, 10, 135, 62, 113, 241, 163, 62, 231, 211, 132, 190, 146, 124, 142, 62, 107, 71, 43, 188, 60, 133, 1, 189, 100, 16, 131, 188, 111, 146, 125, 189, 154, 6, 164, 190, 95, 41, 182, 189, 107, 236, 19, 62, 0, 6, 217, 59, 29, 79, 166, 190, 232, 128, 165, 189, 238, 94, 3, 189, 96, 200, 142, 190, 220, 23, 176, 61, 169, 94, 69, 62, 244, 206, 192, 61, 186, 225, 243, 61, 132, 52, 128, 190, 4, 120, 201, 190, 212, 14, 228, 190, 155, 108, 43, 189, 75, 201, 2, 190, 238, 82, 40, 190, 209, 43, 165, 190, 116, 83, 170, 186, 82, 15, 178, 61, 3, 104, 101, 61, 48, 51, 219, 189, 118, 213, 172, 188, 104, 54, 254, 189, 115, 162, 240, 60, 13, 9, 64, 190, 34, 66, 181, 62, 200, 95, 39, 62, 135, 67, 74, 190, 184, 58, 66, 62, 211, 156, 77, 190, 21, 46, 35, 190, 223, 54, 153, 61, 76, 143, 83, 62, 247, 95, 160, 189, 217, 245, 60, 188, 117, 218, 36, 187, 104, 149, 178, 61, 228, 215, 41, 61, 149, 122, 2, 190, 86, 223, 54, 61, 87, 71, 64, 62, 138, 246, 46, 190, 87, 17, 9, 62, 52, 194, 53, 190, 250, 250, 173, 190, 34, 176, 248, 61, 10, 152, 168, 60, 160, 209, 148, 60, 176, 184, 170, 189, 152, 187, 168, 62, 56, 137, 65, 62, 45, 114, 20, 62, 197, 165, 81, 62, 200, 193, 247, 61, 217, 60, 150, 59, 243, 42, 9, 190, 11, 50, 128, 61, 109, 240, 75, 62, 130, 223, 6, 61, 1, 222, 237, 58, 30, 245, 101, 61, 187, 175, 48, 190, 86, 106, 225, 60, 56, 240, 0, 62, 254, 6, 230, 61, 152, 128, 194, 188, 137, 86, 41, 187, 144, 174, 231, 188, 69, 162, 1, 62, 193, 4, 123, 62, 114, 179, 183, 61, 15, 21, 230, 188, 54, 208, 13, 190, 212, 213, 190, 61, 109, 101, 221, 61, 188, 245, 60, 189, 181, 127, 177, 62, 163, 191, 95, 62, 152, 120, 204, 61, 178, 255, 146, 61, 84, 42, 218, 61, 209, 213, 181, 61, 116, 128, 137, 62, 24, 190, 6, 62, 8, 221, 119, 60, 12, 180, 221, 61, 154, 8, 208, 62, 127, 237, 3, 190, 118, 36, 46, 190, 141, 188, 90, 190, 212, 170, 38, 191, 82, 241, 33, 62, 66, 204, 244, 61, 130, 128, 113, 62, 184, 44, 55, 191, 224, 172, 126, 62, 131, 5, 12, 63, 11, 104, 122, 62, 181, 108, 197, 190, 91, 72, 62, 189, 128, 150, 34, 191, 91, 76, 109, 190, 162, 225, 99, 190, 209, 141, 146, 62, 36, 90, 248, 61, 144, 95, 78, 189, 186, 30, 151, 189, 64, 185, 199, 190, 7, 226, 136, 60, 251, 205, 121, 62, 233, 90, 177, 62, 26, 172, 203, 189, 45, 155, 28, 61, 62, 87, 151, 61, 225, 10, 117, 62, 229, 117, 135, 62, 85, 4, 39, 61, 61, 236, 7, 62, 103, 241, 167, 190, 62, 35, 174, 190, 240, 28, 132, 62, 69, 249, 167, 189, 43, 102, 244, 189, 43, 61, 91, 189, 136, 132, 28, 62, 178, 124, 160, 62, 88, 134, 245, 190, 21, 55, 158, 62, 34, 3, 148, 62, 129, 148, 199, 61, 53, 141, 37, 190, 20, 45, 203, 61, 42, 193, 8, 190, 73, 172, 186, 61, 204, 157, 25, 62, 90, 116, 22, 62, 9, 85, 34, 62, 204, 72, 31, 189, 237, 227, 60, 189, 170, 180, 210, 190, 73, 214, 21, 190, 127, 85, 92, 62, 254, 196, 5, 62, 254, 195, 206, 190, 127, 111, 82, 188, 205, 59, 123, 61, 82, 171, 229, 190, 238, 102, 14, 190, 167, 156, 1, 62, 69, 178, 170, 62, 38, 10, 234, 188, 166, 193, 183, 190, 95, 171, 41, 62, 9, 132, 44, 189, 200, 129, 135, 61, 215, 119, 12, 190, 95, 153, 16, 60, 76, 160, 138, 189, 208, 202, 150, 61, 19, 150, 25, 190, 253, 68, 172, 61, 88, 153, 206, 189, 183, 70, 51, 190, 88, 120, 2, 62, 47, 140, 118, 189, 100, 191, 31, 190, 106, 131, 4, 62, 36, 53, 220, 189, 13, 187, 6, 190, 84, 101, 5, 62, 113, 250, 4, 190, 247, 159, 128, 60, 28, 126, 172, 58, 161, 154, 51, 190, 188, 250, 223, 189, 37, 70, 200, 59, 168, 127, 82, 61, 57, 4, 144, 188, 219, 158, 197, 186, 124, 150, 65, 61, 63, 77, 229, 189, 2, 206, 11, 189, 252, 170, 23, 62, 229, 147, 238, 61, 245, 48, 162, 61, 83, 106, 179, 189, 60, 141, 31, 190, 110, 117, 133, 189, 82, 97, 118, 189, 136, 127, 147, 190, 73, 47, 26, 187, 61, 81, 95, 191, 115, 198, 193, 191, 105, 56, 40, 60, 3, 194, 35, 62, 33, 39, 234, 189, 168, 112, 195, 62, 37, 24, 159, 189, 15, 7, 159, 62, 41, 76, 178, 190, 188, 14, 131, 60, 160, 54, 87, 62, 144, 186, 223, 61, 246, 241, 237, 189, 58, 39, 155, 191, 251, 247, 201, 188, 119, 233, 36, 189, 87, 52, 33, 191, 250, 159, 134, 62, 83, 182, 66, 62, 9, 3, 93, 189, 126, 78, 9, 190, 156, 107, 33, 62, 191, 211, 34, 191, 227, 105, 74, 190, 155, 84, 160, 61, 41, 146, 73, 190, 72, 32, 6, 190, 157, 227, 62, 191, 242, 136, 154, 62, 144, 191, 228, 61, 243, 209, 114, 62, 64, 125, 85, 191, 42, 21, 41, 62, 4, 191, 45, 190, 186, 194, 43, 190, 46, 110, 233, 189, 244, 129, 173, 62, 47, 62, 156, 61, 224, 57, 244, 190, 195, 13, 58, 61, 101, 32, 249, 188, 59, 181, 63, 189, 133, 2, 49, 62, 108, 65, 56, 188, 164, 101, 75, 191, 230, 199, 137, 190, 203, 245, 229, 190, 220, 128, 47, 190, 195, 253, 113, 62, 106, 79, 34, 190, 209, 179, 161, 61, 121, 212, 81, 62, 67, 71, 45, 190, 68, 192, 51, 190, 117, 11, 192, 60, 229, 76, 135, 190, 251, 179, 242, 190, 198, 253, 80, 62, 58, 173, 70, 189, 99, 138, 75, 62, 209, 227, 121, 190, 168, 11, 194, 59, 223, 143, 144, 190, 23, 140, 51, 62, 202, 177, 162, 191, 12, 109, 4, 191, 205, 128, 11, 191, 151, 9, 165, 61, 171, 142, 95, 189, 91, 110, 2, 188, 242, 131, 112, 62, 39, 145, 108, 62, 165, 202, 39, 191, 45, 130, 233, 60, 243, 16, 83, 190, 76, 74, 250, 62, 242, 59, 220, 62, 19, 135, 222, 191, 123, 231, 92, 62, 20, 165, 25, 190, 32, 182, 58, 190, 196, 14, 166, 190, 218, 215, 76, 188, 236, 78, 19, 190, 67, 7, 199, 190, 52, 82, 41, 60, 54, 86, 196, 61, 0, 147, 102, 62, 25, 174, 54, 62, 118, 29, 89, 189, 145, 159, 227, 62, 171, 23, 11, 62, 71, 106, 6, 62, 182, 156, 198, 189, 46, 155, 61, 189, 96, 73, 19, 62, 116, 62, 160, 61, 194, 210, 178, 189, 205, 239, 208, 189, 176, 162, 169, 61, 96, 30, 197, 189, 108, 136, 157, 60, 103, 238, 154, 189, 56, 176, 77, 189, 24, 20, 10, 189, 112, 60, 43, 185, 195, 52, 94, 189, 133, 70, 23, 189, 24, 28, 32, 190, 31, 107, 136, 188, 252, 242, 16, 61, 61, 199, 12, 190, 229, 225, 143, 189, 101, 242, 54, 190, 189, 149, 4, 189, 139, 134, 179, 187, 249, 165, 35, 62, 126, 173, 182, 189, 155, 202, 55, 190, 140, 96, 237, 61, 249, 100, 251, 61, 240, 244, 195, 60, 97, 238, 62, 189, 213, 86, 33, 62, 64, 158, 138, 190, 166, 26, 16, 62, 191, 71, 162, 190, 218, 254, 146, 62, 86, 134, 66, 191, 1, 10, 240, 190, 87, 97, 93, 190, 181, 52, 129, 62, 82, 203, 136, 190, 66, 225, 167, 62, 144, 124, 96, 62, 178, 18, 119, 62, 134, 141, 15, 191, 165, 215, 150, 190, 225, 156, 170, 60, 254, 134, 103, 62, 133, 68, 147, 62, 134, 237, 179, 191, 202, 60, 209, 61, 217, 212, 94, 189, 160, 119, 25, 190, 190, 18, 72, 189, 13, 25, 148, 189, 139, 157, 225, 60, 45, 254, 136, 190, 204, 7, 198, 60, 250, 80, 158, 61, 90, 78, 106, 62, 135, 91, 43, 60, 77, 37, 221, 60, 134, 84, 29, 62, 235, 224, 176, 190, 234, 39, 233, 61, 168, 172, 23, 191, 117, 207, 81, 62, 75, 116, 148, 190, 30, 197, 141, 62, 37, 12, 255, 62, 106, 22, 87, 61, 73, 34, 179, 191, 108, 254, 171, 190, 11, 160, 157, 191, 143, 26, 240, 189, 82, 109, 204, 189, 142, 151, 156, 190, 4, 173, 71, 62, 47, 124, 161, 190, 15, 0, 87, 191, 100, 214, 11, 190, 158, 3, 239, 61, 240, 252, 230, 190, 247, 66, 37, 190, 96, 224, 2, 62, 166, 236, 149, 190, 128, 144, 205, 62, 136, 130, 165, 62, 229, 13, 186, 190, 174, 239, 183, 61, 49, 210, 57, 190, 166, 162, 149, 190, 43, 157, 55, 191, 155, 234, 235, 60, 20, 66, 79, 191, 217, 253, 1, 60, 139, 29, 36, 190, 87, 235, 114, 62, 153, 193, 207, 190, 27, 75, 174, 61, 46, 22, 46, 191, 150, 141, 192, 190, 67, 67, 245, 189, 140, 143, 42, 62, 207, 25, 173, 189, 97, 64, 182, 189, 120, 167, 177, 62, 46, 173, 87, 59, 140, 197, 107, 190, 58, 197, 27, 191, 37, 168, 189, 190, 219, 7, 216, 62, 73, 143, 96, 61, 111, 0, 130, 191, 206, 169, 147, 62, 255, 231, 5, 58, 154, 35, 161, 189, 239, 205, 225, 190, 0, 105, 177, 190, 235, 158, 251, 188, 171, 22, 74, 190, 149, 97, 148, 62, 0, 6, 140, 62, 222, 129, 154, 61, 96, 58, 242, 61, 121, 59, 215, 188, 75, 93, 167, 62, 111, 219, 164, 62, 141, 245, 9, 190, 195, 58, 82, 58, 120, 110, 174, 190, 171, 147, 21, 63, 179, 122, 166, 191, 247, 45, 122, 191, 255, 252, 132, 190, 22, 12, 248, 61, 49, 209, 70, 62, 91, 39, 16, 62, 51, 148, 228, 187, 79, 27, 202, 62, 109, 70, 185, 190, 84, 193, 99, 189, 162, 122, 200, 61, 1, 213, 41, 62, 133, 1, 199, 62, 104, 227, 211, 191, 246, 247, 131, 190, 125, 183, 68, 61, 123, 117, 143, 190, 54, 169, 126, 60, 94, 204, 127, 62, 176, 15, 29, 189, 60, 98, 151, 186, 80, 224, 224, 61, 65, 7, 230, 190, 93, 176, 2, 188, 231, 73, 214, 61, 61, 197, 48, 188, 178, 7, 246, 189, 188, 183, 123, 62, 196, 215, 124, 189, 199, 139, 45, 190, 227, 223, 207, 61, 238, 73, 156, 62, 13, 31, 112, 190, 158, 248, 199, 189, 145, 238, 226, 188, 164, 56, 68, 62, 40, 14, 95, 190, 155, 40, 129, 187, 44, 191, 44, 189, 98, 74, 208, 61, 33, 250, 9, 190, 237, 42, 4, 190, 117, 249, 15, 62, 142, 151, 137, 189, 229, 18, 134, 62, 56, 35, 198, 62, 225, 95, 201, 189, 17, 175, 74, 190, 39, 212, 242, 60, 121, 39, 199, 61, 83, 148, 158, 190, 190, 155, 137, 190, 239, 215, 28, 190, 62, 65, 145, 190, 121, 208, 162, 61, 241, 204, 41, 188, 85, 131, 173, 62, 140, 207, 54, 62, 224, 227, 170, 189, 4, 220, 39, 61, 216, 180, 229, 189, 36, 233, 131, 61, 199, 217, 16, 190, 47, 21, 122, 190, 56, 10, 143, 60, 89, 203, 204, 61, 55, 245, 114, 61, 12, 96, 213, 189, 186, 59, 171, 61, 49, 125, 22, 190, 181, 235, 195, 61, 183, 60, 216, 60, 1, 96, 161, 189, 172, 4, 58, 189, 73, 26, 83, 61, 104, 32, 76, 62, 219, 202, 123, 190, 148, 253, 239, 190, 131, 31, 227, 61, 141, 156, 178, 189, 211, 247, 234, 61, 103, 98, 173, 189, 52, 211, 46, 62, 74, 44, 140, 62, 82, 150, 29, 62, 106, 107, 15, 62, 131, 210, 70, 190, 69, 195, 101, 62, 146, 97, 108, 190, 47, 38, 186, 61, 39, 101, 2, 61, 176, 51, 46, 189, 82, 185, 217, 59, 12, 145, 168, 61, 112, 173, 54, 62, 98, 51, 102, 190, 150, 236, 185, 189, 22, 222, 206, 189, 250, 58, 217, 189, 26, 9, 70, 190, 88, 234, 106, 190, 252, 202, 139, 191, 43, 226, 177, 189, 90, 38, 155, 190, 179, 234, 4, 60, 67, 33, 11, 191, 189, 227, 135, 188, 246, 32, 43, 62, 133, 148, 66, 190, 228, 105, 87, 191, 168, 168, 125, 62, 27, 113, 118, 62, 217, 232, 10, 190, 137, 45, 236, 190, 92, 119, 39, 190, 3, 71, 23, 190, 79, 50, 36, 61, 162, 251, 132, 62, 50, 17, 139, 62, 229, 123, 216, 189, 233, 246, 110, 61, 173, 154, 40, 62, 90, 2, 140, 62, 211, 26, 87, 191, 40, 40, 46, 190, 93, 166, 20, 188, 225, 188, 248, 189, 218, 165, 54, 191, 166, 21, 2, 62, 154, 52, 227, 62, 89, 129, 195, 62, 61, 159, 175, 190, 149, 80, 208, 61, 106, 196, 145, 190, 97, 36, 141, 190, 238, 75, 90, 190, 50, 0, 134, 62, 25, 212, 151, 62, 121, 217, 140, 190, 155, 57, 30, 190, 173, 193, 187, 190, 50, 251, 103, 62, 195, 85, 101, 61, 33, 24, 137, 62, 197, 213, 144, 190, 227, 22, 5, 62, 182, 241, 249, 61, 30, 26, 155, 61, 163, 175, 123, 62, 135, 1, 2, 190, 212, 109, 180, 62, 52, 85, 244, 187, 102, 36, 1, 190, 231, 98, 70, 62, 188, 10, 140, 61, 10, 149, 71, 191, 236, 74, 68, 190, 105, 138, 117, 189, 101, 209, 27, 60, 118, 153, 66, 191, 238, 187, 162, 61, 225, 196, 189, 62, 197, 229, 152, 62, 180, 70, 72, 190, 203, 170, 209, 61, 230, 96, 39, 191, 80, 245, 107, 189, 100, 95, 48, 190, 91, 45, 176, 62, 179, 47, 124, 61, 7, 148, 191, 190, 0, 43, 58, 61, 120, 160, 224, 190, 11, 95, 159, 61, 47, 222, 137, 62, 202, 98, 125, 62, 241, 169, 103, 61, 58, 239, 5, 62, 244, 85, 65, 62, 60, 57, 14, 190, 228, 40, 125, 62, 7, 211, 65, 190, 245, 249, 195, 62, 97, 240, 164, 190, 190, 15, 179, 190, 198, 228, 162, 61, 81, 252, 211, 61};
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
                alignas(float) const unsigned char memory[] = {99, 151, 255, 189, 144, 23, 131, 62, 147, 215, 13, 190, 251, 38, 91, 189, 66, 150, 255, 61, 108, 150, 92, 61, 231, 209, 111, 188, 161, 16, 27, 190, 251, 193, 5, 188, 53, 246, 153, 189, 119, 194, 73, 62, 99, 115, 147, 61, 175, 155, 25, 62, 41, 236, 212, 61, 60, 110, 180, 62, 53, 160, 37, 190, 17, 204, 145, 62, 176, 192, 57, 62, 24, 57, 229, 189, 218, 231, 1, 62, 114, 115, 29, 61, 241, 5, 51, 62, 37, 166, 49, 190, 159, 230, 158, 61, 232, 60, 140, 62, 185, 13, 79, 62, 125, 155, 229, 61, 117, 30, 255, 189, 64, 65, 75, 62, 81, 9, 25, 62, 195, 233, 148, 62, 219, 106, 1, 62};
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
                alignas(float) const unsigned char memory[] = {53, 169, 162, 63, 202, 238, 33, 63, 76, 1, 163, 190, 47, 22, 178, 62, 20, 115, 237, 190, 53, 238, 170, 61, 144, 253, 163, 190, 110, 225, 108, 61, 195, 40, 231, 189, 47, 221, 242, 190, 55, 132, 178, 190, 232, 205, 115, 191, 11, 122, 64, 63, 97, 228, 53, 61, 179, 151, 144, 61, 200, 128, 10, 62, 140, 142, 58, 191, 59, 65, 11, 190, 90, 38, 168, 188, 96, 120, 88, 63, 255, 234, 112, 190, 102, 190, 73, 63, 11, 107, 232, 189, 38, 238, 159, 62, 102, 17, 152, 191, 3, 223, 248, 62, 152, 121, 141, 63, 148, 119, 91, 189, 200, 171, 86, 61, 88, 147, 248, 61, 71, 206, 28, 191, 68, 100, 4, 191, 24, 239, 169, 62, 175, 64, 218, 61, 13, 122, 248, 61, 148, 125, 99, 61, 252, 124, 6, 191, 208, 79, 209, 190, 9, 239, 107, 190, 132, 185, 210, 60, 229, 237, 205, 190, 80, 187, 61, 191, 233, 74, 25, 190, 19, 11, 198, 62, 41, 235, 205, 61, 175, 239, 70, 190, 119, 89, 120, 190, 181, 63, 2, 60, 50, 28, 218, 61, 105, 35, 59, 190, 51, 79, 24, 189, 208, 138, 48, 62, 16, 164, 227, 188, 0, 120, 95, 62, 158, 34, 173, 60, 151, 75, 224, 62, 29, 34, 52, 62, 141, 176, 43, 190, 13, 41, 74, 61, 70, 69, 40, 62, 253, 232, 42, 190, 108, 243, 251, 190, 146, 62, 159, 188, 221, 62, 73, 61};
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
                alignas(float) const unsigned char memory[] = {154, 19, 239, 189, 127, 94, 186, 190};
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
    alignas(float) const unsigned char memory[] = {34, 56, 210, 63, 210, 102, 100, 190, 241, 231, 154, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {85, 155, 126, 64, 173, 95, 191, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0093/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}