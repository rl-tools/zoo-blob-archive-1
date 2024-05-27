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
                alignas(float) const unsigned char memory[] = {167, 229, 49, 190, 179, 89, 132, 190, 65, 233, 73, 62, 189, 54, 137, 190, 22, 0, 97, 191, 214, 27, 21, 191, 204, 186, 7, 63, 14, 121, 222, 189, 188, 33, 145, 190, 177, 120, 223, 61, 19, 151, 220, 62, 86, 21, 105, 191, 37, 204, 26, 61, 64, 10, 34, 63, 27, 9, 182, 190, 129, 48, 12, 63, 182, 33, 30, 63, 141, 141, 105, 190, 45, 111, 114, 191, 238, 27, 11, 62, 161, 54, 228, 57, 14, 225, 57, 191, 49, 49, 158, 63, 179, 72, 169, 62, 54, 163, 198, 62, 146, 172, 180, 62, 23, 243, 30, 62, 7, 23, 133, 190, 84, 12, 227, 61, 147, 255, 40, 63, 36, 184, 132, 187, 158, 95, 147, 191, 151, 90, 182, 190, 196, 232, 173, 62, 141, 230, 48, 63, 47, 10, 17, 191, 92, 105, 195, 62, 15, 43, 71, 191, 233, 25, 59, 190, 158, 223, 156, 61, 227, 242, 208, 189, 235, 72, 140, 188, 248, 63, 51, 62, 51, 165, 116, 63, 201, 84, 155, 62, 90, 180, 191, 188, 98, 187, 143, 191, 108, 18, 169, 62, 6, 72, 110, 63, 224, 180, 203, 62, 68, 62, 207, 61, 202, 142, 92, 63, 104, 55, 7, 63, 142, 237, 107, 62, 106, 140, 27, 63, 19, 49, 31, 191, 132, 21, 214, 190, 194, 112, 215, 62, 122, 149, 90, 63, 237, 200, 206, 189, 194, 32, 235, 62, 121, 233, 155, 191, 187, 19, 47, 191, 255, 199, 106, 190, 120, 129, 75, 61, 109, 219, 34, 189, 119, 150, 195, 62, 159, 73, 155, 190, 57, 119, 97, 190, 101, 187, 77, 62, 47, 29, 143, 63, 97, 182, 119, 62, 97, 157, 99, 190, 119, 14, 19, 191, 129, 75, 177, 62, 218, 55, 151, 190, 36, 47, 243, 62, 22, 84, 84, 61, 238, 53, 29, 190, 116, 208, 133, 189, 35, 244, 251, 190, 247, 154, 123, 190, 151, 243, 97, 63, 161, 156, 51, 62, 32, 141, 46, 63, 128, 2, 123, 191, 168, 107, 108, 190, 99, 253, 191, 62, 215, 13, 156, 191, 235, 245, 47, 191, 152, 255, 150, 188, 38, 47, 31, 191, 148, 20, 119, 62, 133, 166, 110, 191, 210, 64, 96, 191, 88, 61, 0, 190};
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
                alignas(float) const unsigned char memory[] = {75, 131, 39, 191, 122, 196, 183, 190, 201, 141, 231, 190, 194, 173, 147, 190, 121, 170, 204, 61, 185, 103, 187, 62, 234, 102, 157, 62, 209, 231, 144, 62, 109, 161, 152, 190, 76, 54, 25, 188, 64, 88, 145, 62, 26, 233, 71, 189, 181, 121, 201, 58, 165, 200, 228, 190, 222, 172, 181, 190, 235, 43, 101, 61, 104, 60, 31, 62, 1, 58, 132, 190, 49, 207, 211, 62, 23, 70, 130, 188, 95, 30, 165, 62, 239, 219, 229, 62, 109, 63, 164, 62, 195, 4, 104, 61, 213, 197, 149, 190, 68, 93, 13, 63, 47, 53, 12, 191, 200, 79, 214, 62, 148, 204, 18, 61, 99, 66, 111, 62, 74, 177, 101, 60, 195, 232, 115, 61};
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
                alignas(float) const unsigned char memory[] = {2, 51, 41, 60, 90, 111, 32, 188, 97, 56, 200, 61, 68, 243, 113, 62, 90, 51, 237, 188, 241, 109, 144, 62, 100, 196, 70, 190, 29, 203, 81, 188, 110, 92, 245, 190, 245, 145, 5, 190, 146, 239, 248, 61, 58, 12, 130, 62, 60, 155, 204, 62, 237, 114, 160, 61, 113, 8, 163, 190, 33, 124, 91, 62, 40, 137, 131, 190, 74, 130, 213, 190, 56, 36, 128, 61, 128, 109, 55, 62, 89, 205, 32, 61, 62, 48, 242, 60, 152, 4, 159, 61, 180, 200, 251, 190, 158, 67, 51, 61, 234, 152, 215, 61, 246, 104, 137, 189, 254, 36, 153, 190, 120, 38, 71, 62, 97, 167, 66, 62, 90, 208, 181, 62, 160, 75, 148, 190, 45, 214, 1, 190, 86, 68, 12, 187, 236, 6, 121, 189, 21, 161, 125, 61, 63, 107, 6, 189, 165, 211, 137, 190, 184, 70, 68, 186, 4, 32, 162, 190, 94, 27, 58, 191, 227, 195, 69, 61, 91, 59, 156, 59, 199, 243, 121, 190, 155, 254, 17, 62, 172, 133, 44, 62, 135, 88, 54, 191, 89, 13, 57, 62, 225, 43, 142, 61, 195, 28, 79, 190, 212, 87, 197, 190, 21, 235, 171, 190, 246, 175, 30, 191, 56, 204, 50, 62, 130, 150, 249, 190, 99, 73, 80, 191, 183, 201, 88, 60, 15, 144, 117, 60, 102, 121, 28, 190, 222, 160, 141, 190, 29, 65, 68, 62, 231, 119, 39, 191, 242, 175, 133, 62, 29, 197, 128, 61, 59, 191, 68, 62, 142, 84, 98, 189, 237, 37, 89, 62, 88, 105, 65, 62, 89, 34, 234, 61, 5, 48, 50, 61, 207, 65, 97, 190, 241, 155, 200, 62, 190, 62, 216, 62, 109, 170, 139, 190, 42, 238, 177, 61, 84, 60, 150, 62, 197, 53, 195, 62, 80, 216, 44, 61, 158, 114, 11, 63, 122, 196, 166, 190, 124, 207, 137, 189, 92, 101, 63, 62, 239, 142, 201, 61, 191, 10, 5, 63, 151, 21, 131, 187, 10, 101, 0, 58, 48, 180, 250, 61, 92, 57, 60, 62, 38, 217, 17, 190, 200, 159, 102, 61, 45, 90, 80, 61, 218, 69, 17, 190, 187, 60, 153, 189, 22, 86, 92, 189, 179, 77, 126, 190, 198, 169, 18, 191, 248, 188, 228, 61, 70, 169, 36, 191, 197, 244, 234, 190, 195, 189, 44, 191, 86, 155, 208, 190, 166, 35, 81, 62, 20, 214, 242, 61, 212, 178, 139, 190, 122, 186, 175, 190, 248, 34, 108, 61, 27, 234, 144, 190, 17, 237, 169, 190, 229, 41, 172, 61, 232, 208, 14, 62, 219, 13, 182, 191, 203, 124, 49, 190, 229, 242, 242, 62, 15, 38, 1, 62, 254, 3, 83, 62, 152, 202, 220, 189, 134, 14, 238, 189, 109, 87, 198, 188, 220, 187, 6, 190, 68, 152, 237, 190, 164, 71, 178, 62, 231, 76, 48, 62, 102, 89, 238, 189, 254, 50, 12, 61, 89, 219, 74, 61, 4, 140, 152, 190, 219, 205, 96, 61, 192, 19, 206, 188, 181, 232, 139, 190, 196, 152, 73, 191, 154, 41, 10, 61, 170, 55, 168, 191, 17, 13, 227, 62, 157, 61, 158, 191, 83, 74, 133, 62, 176, 25, 1, 62, 209, 155, 200, 190, 250, 159, 212, 61, 29, 9, 134, 190, 240, 173, 130, 191, 63, 50, 182, 190, 196, 198, 57, 189, 103, 83, 169, 189, 140, 133, 208, 190, 166, 244, 115, 62, 213, 46, 170, 190, 230, 56, 90, 190, 219, 99, 225, 190, 253, 89, 195, 191, 102, 254, 39, 62, 56, 67, 90, 191, 123, 60, 164, 59, 205, 126, 158, 61, 11, 176, 219, 61, 239, 176, 27, 190, 175, 129, 113, 62, 225, 156, 116, 190, 245, 253, 214, 191, 93, 192, 114, 62, 241, 5, 27, 63, 128, 68, 31, 61, 33, 77, 91, 62, 73, 97, 125, 190, 236, 19, 208, 59, 50, 15, 152, 189, 66, 59, 72, 62, 153, 216, 36, 62, 234, 212, 54, 191, 178, 132, 202, 189, 197, 36, 173, 61, 251, 60, 5, 60, 107, 13, 20, 62, 116, 188, 16, 191, 87, 237, 83, 61, 26, 188, 173, 191, 81, 243, 31, 61, 90, 133, 150, 62, 18, 43, 147, 62, 137, 236, 30, 190, 90, 241, 7, 190, 56, 98, 3, 62, 255, 16, 87, 61, 173, 43, 62, 61, 197, 186, 254, 60, 229, 138, 9, 191, 26, 49, 40, 190, 95, 167, 1, 61, 11, 54, 198, 62, 75, 43, 50, 190, 223, 146, 157, 187, 0, 224, 226, 190, 203, 113, 171, 61, 79, 204, 135, 61, 72, 208, 134, 190, 98, 48, 183, 190, 169, 2, 142, 189, 244, 249, 63, 189, 188, 207, 38, 62, 139, 108, 235, 189, 206, 181, 33, 190, 83, 230, 197, 189, 33, 240, 67, 62, 129, 216, 222, 189, 218, 38, 77, 188, 165, 214, 0, 189, 111, 115, 11, 188, 73, 167, 148, 189, 175, 21, 43, 61, 25, 46, 144, 62, 151, 121, 44, 190, 177, 118, 161, 62, 11, 21, 40, 62, 127, 220, 137, 61, 170, 217, 59, 62, 170, 116, 169, 62, 69, 67, 231, 189, 242, 45, 207, 61, 148, 245, 34, 61, 84, 168, 186, 189, 248, 129, 244, 61, 59, 110, 144, 62, 51, 94, 19, 60, 6, 107, 144, 62, 121, 52, 154, 189, 117, 108, 115, 190, 65, 14, 73, 62, 55, 16, 215, 190, 129, 61, 130, 62, 220, 72, 38, 190, 123, 171, 3, 61, 162, 205, 247, 61, 161, 150, 110, 191, 80, 94, 202, 61, 36, 59, 251, 189, 240, 3, 223, 61, 9, 4, 166, 61, 98, 50, 239, 190, 35, 140, 33, 190, 131, 201, 141, 191, 253, 72, 53, 62, 204, 99, 255, 62, 203, 59, 188, 62, 100, 47, 191, 190, 9, 83, 221, 60, 101, 111, 114, 59, 43, 158, 102, 62, 104, 121, 156, 62, 98, 28, 114, 61, 74, 42, 194, 190, 98, 198, 129, 61, 121, 117, 172, 190, 255, 151, 72, 62, 229, 55, 19, 191, 174, 68, 0, 190, 183, 107, 195, 190, 81, 175, 196, 62, 85, 172, 209, 189, 249, 96, 35, 191, 23, 116, 126, 190, 231, 163, 71, 191, 191, 72, 255, 62, 196, 178, 168, 191, 8, 31, 128, 189, 188, 17, 127, 62, 85, 17, 79, 190, 65, 23, 142, 189, 0, 135, 72, 62, 69, 173, 34, 191, 97, 232, 117, 188, 226, 47, 10, 62, 208, 155, 246, 61, 187, 47, 145, 190, 232, 1, 98, 187, 38, 144, 0, 190, 220, 246, 43, 62, 227, 162, 74, 190, 250, 110, 63, 191, 198, 167, 98, 61, 20, 248, 246, 190, 19, 115, 227, 61, 143, 16, 24, 62, 205, 163, 21, 185, 182, 14, 123, 61, 121, 240, 16, 62, 254, 183, 4, 61, 129, 212, 69, 191, 41, 48, 185, 58, 221, 197, 156, 62, 215, 42, 151, 190, 96, 202, 29, 62, 49, 211, 186, 190, 126, 210, 39, 62, 208, 97, 163, 190, 122, 91, 251, 61, 209, 199, 2, 62, 54, 188, 73, 190, 34, 166, 51, 190, 47, 219, 162, 190, 156, 124, 121, 61, 77, 218, 163, 61, 1, 49, 44, 191, 221, 217, 89, 60, 37, 55, 64, 190, 32, 205, 21, 61, 108, 68, 15, 190, 229, 40, 160, 62, 220, 115, 115, 190, 56, 41, 188, 189, 15, 54, 228, 59, 91, 132, 167, 61, 55, 222, 184, 61, 97, 162, 143, 62, 81, 105, 80, 191, 37, 162, 13, 62, 107, 76, 197, 189, 216, 87, 235, 62, 37, 249, 232, 190, 75, 183, 252, 61, 182, 210, 100, 191, 68, 144, 49, 62, 169, 78, 60, 60, 93, 232, 231, 61, 181, 97, 59, 190, 123, 216, 85, 62, 37, 56, 233, 188, 37, 79, 247, 61, 179, 6, 166, 189, 34, 237, 211, 189, 116, 78, 242, 61, 126, 114, 9, 62, 85, 94, 147, 59, 252, 13, 197, 61, 135, 110, 123, 190, 98, 93, 189, 60, 114, 199, 225, 190, 34, 98, 139, 62, 223, 98, 136, 188, 89, 167, 225, 61, 100, 191, 233, 61, 206, 65, 247, 60, 82, 91, 14, 62, 45, 254, 174, 61, 79, 2, 255, 61, 99, 79, 92, 62, 62, 103, 151, 188, 175, 83, 142, 62, 171, 48, 117, 60, 109, 1, 178, 62, 230, 241, 86, 190, 155, 248, 100, 60, 186, 96, 232, 189, 212, 88, 226, 61, 122, 183, 248, 59, 213, 172, 12, 189, 15, 102, 146, 190, 126, 159, 202, 61, 184, 86, 205, 189, 165, 42, 141, 62, 166, 160, 219, 61, 27, 140, 133, 189, 85, 80, 1, 190, 127, 22, 169, 189, 27, 191, 163, 188, 124, 57, 139, 62, 230, 215, 89, 191, 249, 22, 199, 188, 154, 226, 223, 190, 153, 23, 157, 62, 151, 11, 139, 62, 74, 113, 63, 62, 41, 150, 11, 190, 126, 123, 84, 61, 240, 139, 25, 190, 89, 127, 179, 62, 121, 131, 164, 60, 207, 46, 24, 62, 95, 245, 164, 190, 226, 76, 2, 62, 19, 235, 143, 190, 107, 157, 200, 62, 171, 79, 34, 191, 153, 15, 210, 189, 26, 234, 140, 189, 19, 119, 131, 190, 249, 67, 223, 61, 169, 39, 61, 190, 251, 251, 146, 62, 121, 212, 151, 191, 149, 15, 28, 62, 117, 254, 154, 190, 232, 52, 15, 62, 139, 50, 252, 61, 86, 72, 230, 189, 178, 57, 149, 61, 79, 100, 192, 62, 195, 242, 238, 190, 27, 250, 202, 62, 5, 181, 34, 62, 230, 248, 221, 62, 40, 82, 207, 190, 31, 195, 106, 62, 30, 251, 26, 190, 51, 113, 167, 62, 99, 62, 128, 61, 185, 254, 141, 61, 205, 203, 73, 61, 152, 52, 172, 60, 15, 18, 174, 189, 205, 178, 190, 60, 108, 102, 26, 62, 74, 93, 117, 61, 132, 113, 43, 189, 251, 68, 6, 63, 7, 60, 231, 187, 22, 225, 196, 61, 218, 245, 201, 62, 238, 153, 180, 188, 203, 245, 150, 61, 194, 177, 191, 190, 221, 219, 45, 189, 251, 209, 229, 189, 60, 150, 90, 62, 80, 90, 62, 62, 133, 80, 105, 191, 59, 209, 176, 187, 253, 167, 183, 190, 2, 3, 72, 60, 91, 27, 142, 189, 79, 251, 35, 191, 190, 247, 234, 189, 124, 86, 230, 191, 117, 80, 14, 61, 217, 177, 37, 62, 128, 149, 186, 62, 184, 52, 5, 190, 164, 34, 38, 62, 16, 119, 193, 61, 132, 93, 212, 61, 25, 85, 75, 62, 28, 93, 215, 62, 205, 251, 48, 191, 46, 54, 188, 61, 77, 62, 255, 189, 211, 120, 146, 62, 207, 8, 21, 191, 215, 7, 19, 62, 34, 83, 224, 190, 156, 151, 205, 62, 134, 180, 132, 189, 199, 156, 255, 189, 83, 87, 59, 189, 82, 114, 169, 61, 179, 217, 154, 60, 33, 140, 49, 188, 150, 125, 48, 60, 247, 67, 208, 59, 9, 226, 183, 61, 26, 59, 225, 189, 193, 204, 209, 61, 241, 231, 216, 189, 40, 160, 129, 189, 20, 132, 174, 61, 174, 74, 148, 189, 34, 24, 248, 188, 45, 169, 186, 188, 1, 52, 44, 190, 196, 251, 188, 189, 146, 144, 37, 190, 123, 6, 72, 61, 107, 58, 85, 190, 151, 203, 190, 189, 40, 87, 3, 190, 228, 238, 248, 189, 58, 55, 20, 60, 21, 85, 227, 60, 231, 28, 242, 188, 158, 42, 70, 61, 186, 224, 39, 190, 79, 6, 5, 62, 8, 94, 166, 189, 116, 191, 126, 61, 83, 166, 127, 62, 251, 145, 172, 190, 34, 4, 116, 189, 146, 35, 207, 189, 153, 144, 225, 61, 48, 213, 19, 62, 148, 9, 199, 60, 184, 171, 97, 190, 120, 213, 231, 60, 86, 142, 28, 62, 246, 41, 81, 62, 18, 177, 238, 190, 82, 123, 129, 61, 5, 32, 119, 190, 240, 18, 142, 62, 234, 115, 65, 62, 123, 181, 109, 60, 78, 253, 136, 188, 161, 89, 170, 189, 162, 143, 28, 189, 186, 45, 96, 62, 38, 75, 101, 61, 158, 133, 6, 61, 156, 198, 232, 61, 246, 237, 120, 62, 188, 75, 25, 189, 161, 134, 62, 62, 101, 207, 209, 59, 28, 121, 80, 62, 72, 106, 60, 190, 102, 183, 173, 62, 99, 186, 22, 190, 51, 51, 204, 189, 137, 50, 137, 61, 203, 201, 26, 190, 251, 29, 167, 61, 153, 219, 165, 60, 26, 98, 37, 62, 244, 113, 9, 190, 190, 86, 0, 62, 154, 174, 13, 189, 61, 202, 241, 189, 162, 145, 242, 189, 89, 219, 21, 190, 29, 100, 109, 61, 194, 41, 37, 61, 105, 69, 88, 189, 196, 49, 69, 185, 204, 10, 174, 60, 19, 0, 146, 188, 69, 23, 163, 189, 172, 21, 16, 62, 203, 243, 54, 189, 119, 159, 223, 189, 198, 17, 255, 61, 240, 7, 27, 190, 161, 189, 92, 188, 124, 159, 41, 190, 85, 11, 33, 190, 43, 227, 139, 189, 206, 204, 127, 187, 20, 192, 35, 62, 104, 168, 132, 189, 20, 51, 44, 188, 88, 165, 206, 189, 60, 116, 8, 190, 185, 147, 129, 58, 62, 92, 208, 190, 77, 228, 213, 190, 48, 201, 207, 62, 201, 192, 63, 189, 81, 141, 135, 190, 8, 128, 156, 188, 167, 87, 81, 189, 237, 183, 146, 190, 6, 50, 54, 191, 243, 57, 248, 189, 18, 236, 109, 62, 243, 88, 214, 189, 152, 153, 1, 191, 79, 80, 196, 189, 87, 186, 136, 191, 247, 240, 31, 62, 21, 140, 132, 61, 220, 216, 121, 62, 104, 140, 43, 190, 146, 122, 122, 190, 47, 26, 146, 62, 70, 97, 145, 62, 234, 83, 13, 191, 141, 235, 60, 58, 110, 68, 218, 190, 168, 34, 221, 61, 44, 95, 186, 62, 47, 254, 253, 61, 239, 96, 194, 190, 238, 197, 108, 62, 19, 90, 116, 61, 251, 25, 91, 62, 178, 92, 14, 190, 19, 223, 7, 190, 209, 168, 215, 189, 47, 48, 93, 190, 235, 21, 186, 62, 167, 59, 149, 189, 142, 102, 159, 189, 253, 182, 185, 189, 250, 86, 28, 190, 171, 127, 175, 189, 193, 67, 251, 189, 18, 196, 7, 190, 158, 143, 160, 62, 246, 66, 208, 62, 158, 35, 45, 189, 234, 12, 255, 190, 137, 82, 202, 188, 121, 129, 27, 190, 58, 186, 226, 189, 188, 57, 192, 61, 245, 145, 24, 190, 91, 213, 68, 190, 137, 67, 26, 62, 11, 144, 52, 188, 95, 115, 126, 190, 198, 250, 94, 61, 233, 0, 37, 61, 142, 146, 30, 63, 226, 105, 4, 190, 211, 97, 51, 189, 89, 52, 166, 61, 237, 49, 202, 189, 127, 123, 144, 186, 119, 132, 78, 190, 104, 220, 202, 189, 145, 151, 210, 189, 21, 17, 56, 190, 94, 41, 69, 190, 46, 252, 77, 60, 82, 32, 128, 189, 100, 172, 209, 187, 54, 164, 188, 61, 90, 248, 20, 190, 226, 161, 164, 189, 204, 21, 61, 190, 246, 88, 163, 61, 37, 37, 18, 61, 78, 63, 6, 60, 240, 9, 78, 189, 18, 81, 120, 61, 58, 254, 22, 190, 206, 142, 208, 61, 73, 246, 22, 190, 46, 192, 185, 61, 81, 129, 135, 189, 214, 210, 208, 61, 1, 156, 167, 59, 196, 89, 99, 189, 25, 100, 237, 189, 214, 206, 52, 189, 41, 19, 233, 188, 155, 51, 150, 61, 120, 91, 249, 61, 190, 76, 239, 61, 187, 227, 242, 60, 4, 91, 200, 61, 2, 133, 84, 61, 157, 131, 133, 62, 208, 94, 1, 63, 213, 121, 133, 190, 147, 79, 95, 62, 179, 59, 35, 62, 128, 148, 166, 62, 210, 167, 5, 190, 50, 178, 251, 62, 29, 206, 18, 61, 125, 147, 68, 188, 186, 98, 184, 189, 4, 0, 17, 60, 219, 239, 247, 62, 90, 171, 47, 59, 82, 193, 167, 189, 134, 147, 68, 62, 225, 236, 64, 61, 39, 198, 153, 189, 64, 211, 98, 61, 135, 175, 99, 188, 253, 138, 120, 190, 243, 24, 115, 62, 167, 2, 20, 62, 38, 72, 60, 61, 165, 88, 147, 190, 145, 95, 132, 190, 101, 69, 70, 191, 124, 85, 107, 189, 226, 251, 232, 189, 232, 10, 75, 62, 65, 211, 192, 61, 2, 103, 247, 61, 224, 179, 99, 62, 85, 157, 144, 191, 224, 201, 45, 62, 130, 158, 169, 190, 255, 104, 199, 190, 39, 6, 159, 62, 136, 249, 186, 189, 193, 81, 37, 191, 198, 156, 156, 190, 123, 35, 28, 62, 29, 206, 223, 190, 177, 210, 11, 62, 135, 115, 178, 190, 58, 43, 138, 190, 3, 37, 192, 61, 204, 195, 25, 62, 157, 54, 16, 191, 41, 72, 56, 62, 111, 29, 98, 62, 245, 94, 161, 189, 241, 26, 238, 189, 47, 116, 142, 62, 100, 93, 61, 190, 230, 109, 239, 62, 138, 56, 126, 61, 75, 197, 95, 61, 151, 89, 40, 191, 45, 173, 72, 189, 243, 141, 135, 190, 118, 190, 145, 62, 137, 33, 234, 190, 231, 191, 137, 61, 245, 79, 148, 62, 23, 147, 67, 190, 80, 253, 157, 61, 160, 4, 172, 189, 26, 50, 174, 190, 68, 56, 9, 63, 198, 96, 237, 189, 44, 186, 135, 190, 251, 255, 16, 190, 30, 207, 48, 62, 218, 54, 131, 190, 247, 9, 171, 61, 169, 250, 141, 190, 197, 211, 17, 191, 168, 62, 165, 61, 50, 69, 247, 190, 213, 139, 184, 189, 59, 160, 220, 61, 136, 217, 17, 189, 168, 90, 237, 61, 20, 68, 152, 61, 60, 94, 174, 62, 121, 211, 65, 191, 160, 255, 183, 62, 100, 70, 118, 62, 248, 209, 46, 62, 28, 158, 205, 189, 222, 7, 206, 61, 230, 251, 220, 61, 113, 121, 14, 62, 198, 236, 44, 61, 49, 212, 195, 188, 100, 27, 8, 190, 178, 38, 44, 62, 213, 103, 137, 189, 105, 173, 18, 190, 47, 67, 171, 189, 21, 45, 200, 189, 165, 62, 20, 190, 143, 163, 173, 58, 186, 33, 14, 188, 160, 133, 12, 190, 38, 162, 46, 190, 1, 32, 127, 188, 120, 182, 168, 189, 11, 55, 9, 189, 218, 176, 49, 190, 137, 65, 228, 59, 1, 156, 70, 61, 120, 168, 252, 59, 39, 120, 39, 190, 251, 147, 40, 190, 54, 142, 186, 60, 181, 55, 30, 190, 1, 152, 41, 60, 234, 235, 197, 60, 197, 235, 45, 190, 59, 98, 179, 189, 0, 135, 30, 191, 56, 140, 228, 190, 206, 69, 62, 191, 241, 35, 113, 190, 16, 116, 0, 190, 123, 87, 126, 61, 231, 109, 194, 190, 19, 16, 55, 62, 102, 60, 155, 190, 141, 197, 183, 186, 21, 46, 102, 190, 65, 166, 9, 62, 186, 131, 137, 189, 101, 35, 139, 191, 193, 252, 11, 191, 227, 168, 199, 62, 21, 179, 238, 61, 51, 101, 72, 62, 115, 235, 214, 61, 79, 17, 231, 188, 9, 233, 226, 189, 123, 16, 76, 60, 183, 178, 184, 190, 121, 176, 213, 188, 251, 18, 175, 61, 218, 203, 132, 190, 181, 252, 59, 190, 211, 23, 103, 62, 51, 42, 67, 190, 8, 86, 156, 190, 161, 136, 115, 190, 193, 25, 218, 189, 53, 193, 31, 190, 188, 188, 143, 190, 126, 237, 130, 61, 103, 35, 232, 187, 190, 237, 242, 61, 86, 240, 68, 188, 118, 57, 154, 189, 228, 8, 45, 62, 241, 214, 160, 189, 222, 33, 218, 190, 176, 221, 115, 60, 3, 132, 35, 191, 86, 172, 187, 61, 199, 81, 140, 190, 44, 9, 15, 190, 29, 172, 204, 62, 222, 71, 171, 60, 114, 165, 1, 62, 37, 42, 169, 62, 154, 102, 177, 61, 34, 199, 140, 62, 49, 221, 64, 62, 210, 59, 109, 61, 176, 97, 114, 61, 42, 155, 181, 62, 173, 106, 123, 189, 224, 219, 142, 62, 8, 102, 247, 189, 233, 36, 101, 190, 3, 126, 6, 189, 250, 100, 11, 190, 59, 60, 81, 189, 80, 197, 156, 190, 122, 183, 220, 62, 88, 127, 182, 190, 176, 133, 152, 62, 159, 70, 92, 189, 54, 217, 140, 62, 51, 20, 65, 62, 99, 137, 67, 191, 166, 108, 199, 189, 119, 106, 140, 60, 201, 223, 171, 189, 220, 242, 208, 62, 203, 50, 153, 60, 251, 112, 25, 191, 23, 239, 250, 60, 135, 51, 142, 62, 158, 205, 231, 190, 238, 6, 78, 62, 212, 30, 127, 190, 184, 219, 133, 61, 139, 225, 61, 189, 32, 107, 54, 62, 182, 25, 161, 190, 192, 230, 1, 62, 42, 63, 240, 188, 12, 121, 70, 190, 112, 4, 182, 190, 114, 85, 236, 62, 247, 229, 68, 190, 205, 243, 227, 62, 36, 33, 7, 62, 25, 128, 68, 189, 56, 139, 62, 190, 91, 64, 102, 190, 147, 43, 112, 62, 31, 174, 102, 188, 138, 248, 129, 62, 202, 50, 116, 62, 4, 120, 124, 189, 223, 136, 65, 190, 180, 202, 28, 62, 158, 180, 196, 190, 68, 3, 110, 62, 194, 191, 102, 191, 135, 226, 162, 188, 106, 232, 205, 190, 147, 14, 16, 62, 211, 69, 205, 61, 20, 187, 48, 189, 221, 214, 148, 190, 216, 45, 187, 62, 169, 129, 1, 190, 139, 63, 147, 62, 196, 159, 2, 60, 214, 238, 107, 62, 227, 235, 16, 61, 58, 217, 110, 62, 184, 207, 148, 190, 35, 70, 159, 62, 53, 162, 252, 190, 96, 27, 41, 190, 131, 190, 201, 61, 71, 247, 182, 189, 41, 89, 87, 190, 30, 169, 55, 191, 190, 247, 217, 189, 220, 47, 155, 190, 106, 147, 221, 58, 36, 107, 226, 61, 156, 178, 33, 62, 13, 244, 133, 62, 94, 39, 103, 191, 15, 93, 208, 61, 171, 82, 10, 190, 40, 131, 108, 61, 233, 147, 122, 62, 86, 161, 38, 62, 126, 91, 55, 191, 193, 210, 219, 188, 113, 149, 50, 61, 219, 27, 153, 190, 233, 206, 146, 62, 122, 217, 180, 187, 3, 166, 133, 190, 23, 61, 50, 62, 224, 195, 191, 59, 19, 23, 122, 190, 185, 243, 158, 60, 80, 143, 94, 62, 9, 19, 1, 62, 163, 119, 51, 190, 146, 72, 101, 62, 25, 192, 94, 190, 104, 17, 133, 62, 0, 140, 59, 182, 179, 248, 24, 62, 25, 185, 160, 190, 164, 75, 53, 189, 151, 60, 88, 190, 127, 110, 81, 190, 127, 229, 48, 61, 129, 94, 72, 62, 134, 113, 107, 190, 118, 209, 44, 191, 18, 149, 142, 189, 67, 224, 82, 62, 42, 240, 38, 188, 240, 50, 240, 61, 139, 247, 28, 190, 99, 141, 245, 190, 102, 221, 22, 62, 229, 132, 157, 62, 183, 181, 146, 190, 38, 241, 30, 62, 237, 127, 183, 188, 131, 195, 76, 61, 237, 232, 101, 62, 149, 8, 55, 62, 21, 176, 63, 191, 64, 137, 236, 61, 49, 97, 202, 189, 38, 211, 92, 190, 40, 228, 185, 190, 14, 206, 103, 62, 21, 236, 202, 188, 132, 227, 71, 62, 218, 164, 48, 62, 38, 221, 3, 62, 231, 185, 137, 62, 114, 3, 54, 62, 196, 224, 49, 62, 48, 67, 129, 61, 231, 145, 180, 190, 125, 7, 123, 190, 219, 210, 199, 189, 210, 222, 5, 63, 208, 160, 204, 61, 9, 17, 174, 61, 91, 64, 198, 189, 104, 18, 177, 62, 207, 48, 203, 188, 194, 120, 111, 61, 51, 25, 161, 62, 166, 203, 183, 62, 46, 249, 37, 63, 194, 158, 5, 62, 214, 185, 51, 191, 223, 253, 254, 61, 55, 145, 184, 190, 139, 149, 222, 60, 180, 22, 79, 190, 245, 2, 181, 60, 137, 124, 225, 190, 84, 10, 77, 62, 116, 7, 186, 190, 140, 54, 142, 61, 33, 157, 149, 189, 211, 93, 17, 62, 240, 161, 151, 62, 182, 163, 67, 61, 116, 19, 47, 190, 48, 77, 24, 62, 27, 89, 2, 61, 92, 120, 91, 61, 42, 99, 175, 61, 185, 127, 151, 56, 247, 86, 228, 189, 176, 230, 213, 189, 129, 165, 94, 58, 177, 80, 228, 61, 172, 216, 59, 190, 2, 98, 167, 61, 247, 255, 105, 187, 208, 14, 192, 61, 103, 94, 89, 188, 11, 154, 240, 189, 70, 138, 254, 187, 119, 224, 227, 189, 2, 244, 183, 189, 231, 192, 20, 61, 101, 221, 244, 189, 58, 73, 14, 189, 113, 141, 24, 62, 123, 118, 28, 188, 247, 245, 182, 189, 148, 227, 152, 60, 79, 58, 152, 61, 237, 140, 145, 61, 218, 167, 84, 189, 56, 48, 109, 189, 252, 93, 103, 61};
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
                alignas(float) const unsigned char memory[] = {61, 50, 69, 62, 180, 43, 86, 61, 78, 245, 222, 189, 95, 199, 12, 62, 73, 237, 63, 62, 55, 198, 100, 62, 38, 235, 125, 62, 240, 140, 62, 62, 107, 246, 84, 61, 180, 178, 95, 62, 1, 200, 213, 61, 13, 35, 166, 62, 122, 45, 255, 188, 121, 185, 244, 61, 60, 96, 237, 61, 91, 209, 8, 61, 69, 250, 183, 189, 93, 117, 155, 61, 255, 216, 202, 60, 226, 161, 233, 187, 22, 140, 91, 189, 50, 171, 101, 62, 48, 56, 181, 61, 190, 226, 130, 188, 137, 190, 99, 61, 248, 100, 164, 62, 200, 3, 77, 61, 227, 111, 74, 62, 9, 196, 59, 62, 9, 254, 86, 62, 161, 161, 2, 190, 220, 243, 162, 189};
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
                alignas(float) const unsigned char memory[] = {231, 156, 155, 62, 5, 83, 13, 63, 7, 154, 137, 62, 233, 98, 41, 62, 204, 152, 151, 63, 228, 61, 142, 190, 5, 124, 43, 188, 220, 127, 78, 191, 86, 146, 87, 63, 39, 30, 0, 191, 80, 185, 22, 190, 252, 24, 6, 191, 8, 137, 211, 62, 60, 58, 81, 191, 90, 156, 221, 60, 176, 22, 22, 190, 23, 18, 6, 190, 33, 35, 241, 190, 231, 107, 236, 190, 93, 13, 120, 189, 185, 120, 114, 62, 254, 244, 98, 63, 201, 144, 205, 62, 85, 217, 167, 61, 77, 130, 75, 62, 62, 86, 225, 189, 116, 209, 23, 63, 253, 104, 222, 190, 238, 152, 158, 62, 130, 192, 192, 62, 222, 253, 233, 190, 76, 169, 152, 60, 154, 215, 226, 59, 70, 221, 51, 62, 100, 10, 44, 61, 206, 119, 53, 191, 35, 219, 126, 62, 164, 136, 117, 189, 69, 217, 141, 190, 103, 164, 89, 62, 180, 180, 131, 190, 211, 217, 109, 61, 65, 183, 114, 190, 27, 97, 101, 62, 94, 173, 106, 60, 197, 243, 176, 61, 116, 87, 212, 61, 190, 83, 30, 190, 181, 154, 224, 61, 206, 194, 17, 189, 186, 173, 75, 62, 35, 100, 46, 189, 77, 249, 101, 61, 100, 106, 236, 189, 96, 231, 213, 61, 212, 31, 13, 190, 93, 254, 51, 191, 24, 229, 191, 190, 221, 96, 125, 62, 186, 249, 5, 62, 116, 199, 180, 189, 26, 38, 207, 189, 11, 14, 1, 62, 175, 196, 137, 186};
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
                alignas(float) const unsigned char memory[] = {34, 12, 78, 61, 67, 17, 168, 190};
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
    alignas(float) const unsigned char memory[] = {58, 134, 148, 190, 96, 22, 46, 192, 187, 29, 111, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {87, 33, 109, 64, 55, 63, 161, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0092/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}