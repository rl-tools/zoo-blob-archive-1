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
                alignas(float) const unsigned char memory[] = {45, 133, 76, 63, 166, 151, 143, 191, 219, 150, 162, 190, 235, 81, 158, 62, 190, 166, 183, 191, 1, 174, 117, 190, 59, 6, 136, 61, 10, 253, 40, 63, 235, 50, 126, 62, 178, 124, 244, 190, 136, 173, 22, 63, 162, 172, 11, 188, 71, 18, 12, 63, 251, 250, 160, 190, 233, 201, 22, 191, 24, 35, 107, 62, 86, 108, 167, 190, 135, 64, 223, 62, 165, 169, 15, 190, 125, 160, 180, 63, 203, 155, 111, 62, 200, 72, 66, 191, 114, 9, 217, 189, 103, 120, 158, 190, 138, 86, 133, 189, 213, 13, 77, 63, 2, 106, 51, 62, 139, 198, 235, 190, 201, 59, 238, 61, 5, 253, 173, 62, 48, 118, 100, 61, 13, 69, 94, 62, 71, 89, 2, 63, 159, 127, 68, 62, 134, 126, 79, 63, 134, 105, 160, 190, 173, 158, 203, 62, 54, 133, 185, 63, 69, 42, 216, 62, 188, 16, 251, 62, 123, 123, 145, 190, 240, 164, 29, 63, 30, 197, 39, 62, 161, 18, 29, 63, 185, 241, 249, 190, 186, 206, 79, 63, 75, 215, 36, 63, 122, 228, 100, 62, 105, 192, 236, 61, 78, 214, 124, 191, 232, 128, 195, 190, 224, 105, 121, 62, 216, 122, 30, 191, 233, 138, 151, 62, 16, 24, 223, 190, 12, 177, 127, 63, 169, 227, 80, 190, 104, 185, 180, 189, 153, 220, 97, 191, 216, 169, 131, 189, 184, 80, 223, 190, 93, 173, 105, 63, 46, 246, 0, 63, 44, 0, 171, 189, 17, 126, 76, 191, 6, 80, 141, 190, 136, 33, 82, 63, 85, 205, 58, 63, 233, 192, 234, 61, 167, 145, 221, 190, 23, 2, 240, 191, 255, 175, 161, 190, 9, 191, 71, 63, 224, 129, 16, 191, 154, 113, 95, 190, 107, 82, 41, 191, 216, 49, 75, 190, 193, 59, 123, 191, 213, 78, 89, 190, 74, 221, 79, 63, 35, 79, 156, 62, 90, 23, 134, 189, 227, 197, 36, 63, 74, 41, 232, 190, 40, 199, 41, 191, 16, 13, 200, 61, 29, 171, 159, 62, 74, 169, 10, 190, 114, 213, 28, 190, 70, 151, 193, 62, 150, 39, 8, 63, 91, 239, 95, 191, 235, 58, 136, 190, 237, 61, 40, 63, 60, 98, 124, 190, 125, 201, 139, 62};
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
                alignas(float) const unsigned char memory[] = {210, 104, 164, 190, 64, 133, 147, 62, 159, 151, 66, 191, 127, 75, 201, 62, 239, 6, 94, 190, 176, 190, 229, 61, 120, 111, 240, 190, 46, 136, 168, 190, 198, 172, 92, 190, 150, 185, 17, 63, 33, 175, 243, 189, 3, 249, 139, 190, 241, 52, 164, 189, 7, 117, 221, 190, 43, 158, 229, 62, 86, 49, 245, 190, 15, 241, 149, 61, 164, 109, 94, 61, 143, 163, 175, 62, 112, 126, 161, 62, 215, 6, 41, 62, 240, 214, 173, 190, 100, 57, 186, 61, 204, 228, 152, 190, 111, 48, 8, 191, 67, 220, 108, 190, 0, 182, 199, 62, 255, 10, 144, 190, 121, 208, 41, 63, 31, 179, 176, 190, 220, 133, 59, 190, 252, 81, 26, 191};
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
                alignas(float) const unsigned char memory[] = {241, 255, 142, 190, 86, 230, 60, 61, 74, 87, 214, 190, 102, 53, 149, 62, 249, 216, 19, 190, 81, 235, 176, 61, 106, 47, 172, 61, 134, 37, 36, 62, 254, 89, 171, 61, 76, 65, 151, 62, 14, 78, 236, 189, 130, 35, 83, 191, 20, 74, 187, 188, 199, 93, 237, 190, 213, 128, 156, 191, 18, 79, 93, 191, 93, 74, 238, 60, 228, 170, 90, 62, 170, 127, 149, 62, 52, 226, 146, 62, 111, 198, 64, 62, 31, 14, 48, 190, 243, 0, 26, 191, 77, 218, 17, 191, 47, 149, 243, 61, 59, 219, 52, 191, 67, 115, 183, 61, 29, 153, 48, 60, 155, 200, 156, 62, 69, 55, 175, 186, 253, 125, 236, 190, 108, 226, 6, 191, 239, 115, 192, 190, 176, 33, 7, 62, 14, 116, 12, 189, 31, 77, 149, 60, 49, 112, 210, 58, 162, 171, 192, 61, 59, 255, 152, 189, 132, 238, 18, 62, 172, 156, 59, 189, 85, 61, 13, 62, 195, 10, 202, 189, 213, 205, 183, 61, 5, 228, 204, 189, 197, 189, 69, 62, 246, 246, 198, 62, 72, 246, 12, 190, 238, 98, 177, 61, 146, 69, 115, 62, 22, 252, 28, 62, 253, 133, 144, 62, 187, 68, 41, 62, 111, 32, 197, 61, 148, 191, 93, 62, 106, 171, 23, 62, 178, 100, 89, 191, 128, 156, 48, 62, 214, 46, 125, 61, 242, 126, 106, 190, 106, 125, 213, 61, 250, 86, 18, 61, 202, 22, 105, 190, 19, 22, 75, 62, 12, 204, 208, 190, 172, 144, 179, 62, 214, 25, 80, 62, 152, 21, 136, 189, 240, 180, 76, 190, 221, 81, 162, 189, 107, 201, 139, 191, 15, 71, 49, 62, 30, 209, 121, 191, 198, 24, 93, 189, 10, 188, 59, 61, 224, 134, 14, 190, 127, 158, 243, 189, 137, 230, 131, 61, 123, 115, 209, 187, 175, 11, 247, 60, 253, 198, 128, 62, 197, 57, 208, 62, 187, 52, 65, 60, 9, 101, 128, 62, 114, 76, 67, 191, 36, 71, 174, 190, 217, 83, 47, 189, 59, 184, 205, 62, 157, 8, 112, 191, 27, 7, 71, 62, 191, 128, 149, 191, 21, 156, 49, 190, 25, 186, 203, 190, 43, 222, 231, 62, 64, 92, 196, 190, 116, 69, 84, 191, 77, 94, 2, 63, 51, 201, 75, 189, 75, 196, 129, 190, 242, 127, 141, 190, 63, 49, 168, 62, 151, 227, 102, 62, 159, 140, 148, 62, 10, 223, 190, 189, 130, 41, 198, 62, 45, 164, 140, 60, 135, 73, 193, 61, 110, 81, 150, 189, 59, 93, 169, 190, 217, 137, 8, 190, 206, 82, 57, 190, 52, 42, 129, 191, 21, 163, 24, 61, 147, 137, 44, 62, 27, 55, 81, 61, 198, 168, 86, 189, 119, 209, 109, 62, 189, 248, 112, 61, 76, 117, 173, 190, 65, 201, 14, 191, 126, 85, 123, 62, 48, 51, 14, 189, 122, 25, 195, 61, 192, 247, 112, 62, 28, 42, 4, 62, 27, 1, 20, 190, 107, 26, 90, 62, 45, 130, 59, 190, 10, 185, 228, 190, 231, 172, 191, 189, 14, 158, 220, 59, 203, 8, 118, 62, 113, 136, 114, 60, 30, 115, 199, 189, 72, 108, 43, 190, 82, 247, 54, 189, 53, 107, 150, 189, 213, 27, 9, 62, 148, 129, 230, 189, 57, 58, 69, 62, 5, 108, 10, 190, 129, 72, 3, 62, 181, 178, 219, 62, 106, 106, 131, 62, 185, 234, 36, 190, 172, 59, 74, 190, 82, 72, 66, 62, 195, 132, 35, 190, 229, 51, 200, 189, 227, 16, 34, 191, 177, 207, 96, 62, 205, 177, 51, 191, 43, 1, 55, 191, 142, 165, 14, 188, 137, 117, 69, 62, 100, 67, 21, 190, 236, 177, 156, 62, 161, 206, 178, 61, 252, 90, 199, 190, 79, 16, 251, 62, 93, 255, 195, 190, 66, 233, 154, 190, 99, 145, 94, 189, 152, 20, 190, 189, 75, 87, 31, 61, 184, 55, 112, 190, 65, 212, 79, 62, 199, 165, 129, 62, 29, 6, 38, 62, 42, 23, 61, 191, 204, 52, 171, 190, 110, 106, 216, 62, 36, 169, 158, 62, 219, 248, 28, 190, 50, 199, 160, 62, 84, 73, 109, 61, 28, 150, 246, 61, 26, 169, 34, 190, 95, 117, 102, 62, 234, 101, 150, 190, 188, 194, 129, 190, 129, 23, 140, 190, 147, 86, 69, 62, 195, 188, 228, 189, 178, 200, 48, 62, 186, 120, 237, 61, 160, 236, 123, 190, 181, 245, 126, 189, 97, 218, 159, 190, 241, 65, 22, 190, 77, 125, 125, 190, 168, 119, 85, 59, 31, 96, 96, 62, 161, 127, 94, 62, 250, 222, 123, 190, 209, 95, 236, 187, 214, 228, 143, 190, 113, 176, 134, 61, 103, 207, 174, 61, 232, 28, 127, 190, 147, 58, 245, 188, 250, 139, 245, 60, 248, 29, 248, 189, 213, 127, 246, 190, 139, 136, 9, 191, 105, 27, 171, 61, 0, 70, 114, 61, 21, 40, 222, 190, 18, 211, 147, 189, 44, 124, 134, 62, 217, 8, 58, 191, 94, 248, 98, 62, 197, 77, 230, 61, 4, 202, 184, 190, 149, 107, 180, 61, 87, 208, 6, 190, 15, 190, 190, 190, 161, 150, 59, 191, 105, 197, 41, 61, 169, 70, 4, 191, 126, 90, 177, 62, 52, 21, 80, 60, 230, 117, 8, 61, 125, 187, 149, 62, 127, 204, 191, 190, 35, 71, 17, 191, 146, 144, 183, 188, 210, 57, 71, 62, 250, 90, 110, 60, 30, 244, 42, 190, 106, 59, 142, 188, 86, 217, 129, 62, 154, 178, 168, 190, 248, 236, 150, 61, 194, 26, 91, 190, 4, 101, 11, 61, 228, 198, 104, 190, 170, 196, 2, 62, 154, 196, 14, 63, 212, 94, 152, 62, 47, 247, 16, 189, 60, 153, 197, 190, 66, 3, 79, 62, 176, 104, 132, 190, 159, 127, 35, 190, 65, 68, 206, 190, 70, 121, 98, 62, 156, 27, 35, 191, 174, 63, 146, 190, 62, 160, 199, 190, 20, 227, 138, 59, 149, 200, 33, 62, 33, 69, 87, 62, 172, 226, 85, 190, 5, 24, 207, 190, 255, 129, 110, 62, 172, 246, 135, 62, 217, 134, 52, 62, 42, 193, 253, 190, 198, 187, 212, 190, 159, 222, 147, 62, 159, 226, 196, 189, 4, 149, 53, 190, 247, 81, 164, 61, 84, 205, 55, 190, 56, 86, 229, 189, 198, 25, 6, 62, 40, 162, 24, 62, 4, 137, 8, 191, 163, 22, 241, 60, 20, 255, 42, 62, 36, 155, 44, 190, 236, 8, 128, 62, 158, 203, 165, 62, 150, 254, 16, 190, 232, 192, 105, 62, 122, 45, 56, 60, 227, 215, 215, 61, 213, 64, 138, 62, 179, 196, 143, 190, 59, 146, 249, 189, 194, 137, 54, 190, 8, 19, 138, 61, 202, 124, 71, 189, 46, 117, 21, 190, 152, 30, 174, 190, 6, 175, 113, 62, 58, 132, 40, 62, 161, 99, 229, 190, 16, 65, 138, 62, 202, 247, 137, 189, 111, 10, 55, 62, 198, 159, 167, 189, 210, 101, 245, 61, 226, 67, 145, 191, 41, 214, 49, 62, 44, 219, 115, 191, 189, 222, 29, 190, 201, 59, 234, 188, 185, 103, 137, 189, 102, 250, 213, 62, 219, 61, 19, 190, 158, 181, 99, 62, 154, 22, 30, 62, 80, 219, 178, 61, 239, 250, 91, 62, 126, 219, 197, 189, 204, 132, 132, 62, 238, 163, 135, 190, 23, 23, 208, 189, 212, 35, 32, 62, 2, 98, 153, 62, 17, 140, 33, 191, 250, 38, 157, 61, 45, 92, 16, 61, 195, 222, 16, 190, 237, 232, 4, 191, 32, 172, 170, 62, 235, 247, 126, 190, 196, 226, 9, 190, 251, 238, 0, 63, 188, 178, 105, 61, 61, 19, 205, 190, 112, 131, 241, 190, 109, 146, 248, 190, 76, 223, 108, 62, 49, 145, 231, 189, 124, 245, 121, 62, 236, 132, 61, 60, 22, 182, 187, 60, 17, 99, 90, 62, 184, 61, 198, 190, 133, 26, 14, 191, 66, 212, 123, 60, 31, 205, 190, 190, 216, 241, 171, 190, 107, 35, 65, 61, 69, 70, 184, 62, 195, 56, 89, 189, 154, 63, 55, 62, 162, 162, 64, 190, 42, 251, 225, 190, 249, 147, 48, 60, 103, 155, 6, 191, 144, 58, 191, 60, 224, 7, 59, 190, 255, 175, 64, 189, 58, 75, 148, 62, 234, 12, 0, 190, 185, 125, 125, 190, 241, 87, 210, 62, 56, 158, 153, 62, 171, 209, 54, 62, 234, 205, 252, 61, 220, 235, 224, 190, 57, 84, 162, 190, 25, 24, 45, 62, 70, 250, 117, 61, 229, 216, 118, 189, 189, 103, 113, 190, 41, 110, 177, 189, 118, 201, 14, 190, 172, 181, 45, 190, 9, 171, 241, 61, 45, 148, 89, 190, 70, 137, 128, 61, 69, 234, 120, 62, 162, 162, 215, 190, 13, 35, 230, 189, 149, 119, 8, 62, 210, 201, 166, 190, 188, 137, 157, 61, 32, 86, 5, 190, 95, 116, 45, 187, 73, 37, 197, 189, 5, 5, 2, 190, 74, 22, 58, 190, 155, 127, 116, 189, 17, 202, 55, 189, 126, 170, 6, 190, 143, 241, 96, 60, 108, 0, 47, 186, 71, 177, 143, 61, 76, 37, 220, 60, 38, 215, 24, 63, 217, 25, 9, 189, 130, 150, 119, 190, 80, 152, 153, 190, 27, 14, 184, 62, 188, 211, 47, 61, 208, 112, 177, 189, 7, 24, 15, 62, 37, 241, 109, 61, 149, 123, 21, 62, 249, 219, 92, 62, 93, 103, 146, 190, 219, 185, 223, 190, 28, 186, 23, 190, 11, 250, 214, 189, 213, 169, 4, 191, 70, 135, 181, 60, 3, 161, 78, 62, 46, 171, 138, 190, 116, 115, 138, 189, 123, 222, 144, 189, 83, 69, 35, 190, 91, 43, 29, 60, 155, 75, 45, 191, 200, 146, 245, 58, 187, 13, 158, 189, 100, 202, 36, 61, 182, 161, 232, 62, 31, 177, 237, 189, 137, 137, 168, 189, 12, 128, 196, 62, 34, 187, 101, 190, 128, 188, 70, 191, 220, 252, 215, 61, 113, 71, 244, 189, 37, 202, 132, 62, 145, 78, 52, 190, 120, 253, 255, 190, 74, 179, 186, 191, 185, 208, 155, 62, 20, 191, 182, 191, 56, 39, 142, 190, 40, 217, 114, 190, 52, 46, 20, 62, 167, 49, 91, 62, 27, 48, 0, 189, 141, 70, 52, 62, 46, 80, 104, 189, 231, 250, 18, 60, 235, 146, 63, 190, 93, 116, 69, 62, 176, 252, 16, 62, 232, 135, 48, 191, 90, 16, 132, 190, 31, 213, 29, 62, 210, 15, 221, 62, 49, 125, 128, 191, 193, 172, 159, 62, 227, 27, 129, 190, 241, 5, 173, 190, 245, 60, 227, 190, 114, 219, 235, 61, 134, 177, 237, 190, 88, 122, 56, 188, 221, 136, 165, 189, 156, 121, 189, 189, 234, 173, 5, 62, 250, 201, 182, 189, 99, 228, 42, 190, 180, 82, 104, 189, 69, 230, 87, 61, 97, 50, 238, 189, 104, 48, 0, 62, 235, 83, 36, 190, 48, 249, 164, 61, 126, 174, 138, 61, 194, 186, 61, 190, 250, 32, 139, 186, 9, 30, 69, 61, 158, 107, 49, 61, 138, 13, 186, 61, 101, 110, 33, 189, 103, 179, 82, 190, 165, 78, 9, 62, 120, 182, 229, 60, 207, 157, 202, 59, 163, 43, 134, 188, 27, 71, 46, 190, 184, 78, 34, 190, 166, 229, 48, 190, 108, 71, 6, 62, 125, 30, 237, 189, 62, 144, 203, 189, 248, 41, 31, 59, 64, 104, 34, 62, 194, 235, 79, 190, 230, 48, 50, 62, 250, 250, 123, 62, 145, 129, 172, 189, 2, 160, 163, 61, 22, 252, 5, 190, 115, 128, 3, 62, 206, 172, 10, 62, 76, 246, 7, 60, 163, 140, 75, 62, 251, 234, 245, 60, 204, 11, 17, 62, 111, 124, 12, 191, 49, 119, 61, 189, 173, 175, 158, 190, 225, 82, 156, 190, 222, 86, 174, 190, 21, 129, 11, 62, 196, 130, 221, 61, 41, 147, 25, 190, 56, 32, 175, 62, 120, 182, 207, 189, 152, 81, 139, 190, 177, 150, 18, 62, 211, 30, 99, 190, 134, 220, 192, 190, 201, 134, 128, 191, 44, 122, 62, 62, 249, 33, 8, 62, 11, 189, 131, 62, 81, 207, 1, 188, 40, 41, 163, 62, 116, 81, 5, 190, 38, 75, 164, 190, 7, 199, 207, 188, 151, 25, 189, 190, 83, 142, 211, 188, 255, 23, 28, 62, 41, 248, 222, 190, 3, 140, 17, 61, 87, 172, 170, 61, 133, 14, 4, 62, 207, 138, 42, 191, 22, 26, 195, 190, 165, 135, 200, 62, 77, 168, 137, 62, 104, 174, 51, 62, 83, 158, 139, 62, 110, 58, 151, 190, 79, 35, 161, 62, 55, 227, 228, 190, 98, 189, 255, 188, 206, 85, 105, 190, 48, 139, 163, 190, 209, 4, 224, 61, 20, 223, 3, 189, 81, 22, 174, 60, 233, 14, 5, 62, 187, 81, 205, 62, 111, 59, 243, 189, 17, 45, 142, 62, 121, 59, 133, 190, 120, 152, 242, 189, 201, 200, 232, 188, 63, 211, 236, 189, 19, 14, 255, 190, 72, 224, 113, 190, 47, 162, 152, 62, 230, 215, 199, 189, 95, 78, 111, 189, 32, 3, 186, 59, 95, 174, 138, 61, 33, 80, 91, 61, 210, 7, 45, 189, 92, 60, 52, 190, 17, 145, 206, 61, 233, 167, 202, 190, 135, 181, 199, 60, 186, 78, 24, 62, 201, 230, 230, 61, 156, 123, 172, 62, 206, 152, 206, 61, 184, 245, 139, 190, 117, 185, 242, 189, 107, 73, 193, 60, 107, 185, 248, 188, 138, 148, 199, 62, 50, 128, 187, 188, 191, 190, 50, 61, 169, 205, 137, 190, 200, 221, 99, 62, 106, 188, 231, 189, 173, 142, 7, 62, 133, 196, 167, 189, 96, 232, 68, 62, 32, 17, 138, 190, 38, 136, 133, 62, 95, 142, 185, 60, 38, 167, 29, 62, 171, 59, 236, 189, 156, 63, 211, 189, 235, 252, 65, 62, 172, 112, 70, 191, 106, 80, 100, 190, 2, 81, 175, 190, 132, 50, 199, 190, 49, 195, 16, 191, 116, 196, 146, 190, 86, 229, 155, 61, 162, 3, 43, 189, 29, 23, 49, 190, 200, 202, 22, 62, 227, 30, 51, 190, 233, 36, 17, 62, 118, 164, 34, 191, 208, 33, 151, 61, 224, 26, 60, 189, 72, 219, 6, 190, 65, 140, 27, 190, 191, 223, 171, 62, 199, 49, 79, 62, 130, 196, 80, 190, 42, 95, 15, 189, 219, 20, 24, 189, 229, 108, 200, 190, 19, 174, 236, 190, 171, 139, 64, 189, 139, 152, 206, 189, 239, 153, 137, 190, 58, 121, 33, 61, 239, 7, 42, 190, 193, 76, 174, 188, 66, 126, 248, 189, 227, 63, 156, 189, 89, 224, 104, 61, 164, 203, 22, 62, 238, 163, 48, 62, 204, 225, 126, 61, 184, 243, 64, 190, 17, 248, 143, 61, 71, 110, 227, 189, 170, 157, 242, 188, 157, 129, 168, 61, 157, 94, 51, 190, 240, 99, 146, 60, 4, 129, 126, 61, 125, 213, 223, 189, 197, 38, 197, 189, 48, 218, 115, 61, 135, 86, 198, 61, 218, 172, 169, 189, 185, 96, 49, 190, 143, 109, 198, 188, 182, 106, 14, 61, 226, 148, 71, 189, 142, 13, 251, 189, 129, 35, 195, 188, 61, 87, 23, 190, 72, 176, 205, 189, 80, 149, 65, 60, 51, 214, 2, 190, 36, 165, 157, 62, 166, 232, 97, 62, 182, 252, 157, 189, 149, 26, 134, 190, 33, 174, 211, 61, 65, 212, 65, 62, 32, 238, 44, 191, 98, 155, 154, 61, 189, 150, 186, 190, 179, 49, 212, 61, 108, 124, 86, 190, 244, 44, 228, 61, 137, 6, 172, 190, 21, 139, 209, 189, 195, 41, 96, 62, 64, 171, 177, 190, 195, 17, 112, 62, 6, 45, 22, 62, 218, 108, 181, 190, 183, 240, 100, 61, 73, 102, 178, 190, 177, 209, 132, 61, 128, 75, 113, 189, 62, 171, 90, 189, 15, 168, 186, 61, 3, 168, 23, 61, 64, 60, 143, 190, 143, 70, 186, 61, 71, 3, 252, 62, 70, 174, 16, 191, 171, 21, 255, 61, 249, 155, 168, 62, 243, 234, 141, 62, 135, 77, 20, 62, 8, 88, 158, 190, 232, 28, 52, 190, 187, 234, 12, 62, 195, 227, 14, 62, 9, 149, 62, 190, 119, 92, 32, 190, 126, 193, 214, 190, 181, 149, 5, 187, 137, 135, 7, 190, 14, 29, 33, 62, 149, 197, 18, 191, 203, 126, 182, 61, 115, 73, 148, 189, 218, 72, 31, 190, 10, 55, 187, 61, 32, 248, 155, 62, 75, 252, 248, 189, 11, 157, 203, 62, 134, 128, 183, 60, 56, 181, 25, 62, 185, 23, 70, 61, 73, 152, 218, 188, 89, 80, 7, 61, 92, 248, 22, 62, 153, 251, 198, 189, 226, 142, 196, 189, 198, 176, 142, 62, 170, 216, 34, 188, 38, 163, 190, 61, 223, 85, 199, 61, 160, 123, 239, 62, 17, 99, 189, 60, 59, 32, 0, 190, 47, 104, 95, 190, 119, 135, 133, 62, 17, 92, 51, 62, 56, 195, 71, 62, 166, 86, 144, 190, 122, 115, 53, 61, 106, 218, 50, 62, 126, 243, 90, 61, 166, 143, 151, 190, 20, 116, 221, 190, 97, 238, 186, 189, 189, 199, 212, 189, 151, 78, 154, 191, 208, 97, 182, 189, 125, 45, 191, 62, 173, 183, 109, 190, 245, 40, 20, 190, 109, 66, 5, 62, 55, 106, 100, 190, 63, 5, 116, 190, 79, 134, 41, 191, 82, 24, 33, 190, 253, 82, 120, 190, 33, 240, 177, 190, 255, 194, 10, 63, 145, 4, 38, 189, 98, 139, 151, 188, 88, 242, 166, 62, 30, 223, 210, 189, 60, 53, 150, 189, 49, 71, 32, 191, 254, 94, 178, 61, 146, 222, 149, 62, 97, 230, 19, 62, 145, 222, 36, 190, 241, 154, 39, 62, 30, 175, 176, 187, 159, 252, 149, 189, 134, 70, 131, 62, 165, 162, 89, 62, 132, 113, 72, 191, 69, 159, 120, 61, 61, 11, 87, 190, 240, 157, 154, 191, 103, 133, 12, 60, 232, 203, 145, 190, 254, 170, 53, 191, 76, 149, 190, 62, 205, 223, 212, 190, 72, 54, 158, 62, 84, 194, 126, 190, 107, 195, 23, 62, 49, 93, 10, 191, 252, 48, 95, 189, 151, 14, 13, 191, 210, 46, 81, 60, 102, 72, 192, 190, 50, 38, 253, 59, 51, 220, 156, 190, 254, 223, 12, 190, 86, 201, 238, 190, 56, 238, 22, 62, 147, 142, 46, 62, 230, 52, 56, 190, 214, 237, 101, 190, 84, 136, 107, 62, 233, 65, 14, 189, 38, 230, 93, 61, 118, 11, 14, 191, 120, 162, 10, 61, 137, 125, 136, 190, 36, 110, 55, 190, 64, 193, 3, 62, 163, 237, 185, 61, 93, 142, 125, 62, 63, 203, 177, 62, 118, 225, 107, 61, 200, 199, 251, 188, 207, 172, 57, 59, 106, 177, 237, 189, 79, 7, 213, 189, 143, 48, 68, 61, 56, 80, 216, 61, 245, 207, 112, 189, 253, 32, 131, 189, 112, 21, 173, 62, 224, 70, 132, 190, 159, 204, 172, 190, 246, 92, 148, 189, 99, 211, 227, 190, 94, 44, 66, 190, 224, 145, 103, 62, 222, 151, 49, 190, 107, 153, 240, 59, 252, 23, 123, 60, 20, 205, 39, 190, 146, 64, 65, 61, 239, 31, 92, 189, 74, 112, 199, 61, 55, 124, 211, 61, 116, 118, 254, 188, 182, 192, 8, 62, 189, 145, 51, 190, 58, 122, 133, 189, 150, 15, 164, 189, 138, 141, 41, 189, 78, 149, 146, 61, 103, 154, 28, 62, 30, 109, 244, 59, 99, 152, 18, 190, 210, 80, 25, 190, 218, 217, 19, 190, 25, 217, 203, 61, 181, 223, 1, 190, 167, 132, 107, 189, 14, 196, 8, 190, 237, 119, 31, 189, 23, 6, 174, 61, 233, 210, 6, 62, 221, 132, 117, 188, 102, 191, 2, 190, 183, 219, 197, 61, 197, 179, 13, 190, 125, 187, 197, 189, 209, 223, 226, 61, 80, 160, 101, 61, 61, 46, 19, 190, 175, 145, 165, 190, 227, 244, 1, 62, 210, 34, 84, 190, 105, 42, 200, 61, 88, 227, 172, 62, 141, 250, 15, 189, 170, 6, 6, 62, 25, 174, 189, 61, 244, 157, 19, 62, 172, 233, 237, 190, 176, 199, 201, 60, 210, 131, 72, 189, 209, 132, 190, 190, 135, 216, 105, 191, 146, 189, 182, 190, 26, 116, 127, 62, 194, 43, 157, 61, 1, 31, 117, 189, 225, 231, 236, 188, 245, 40, 153, 190, 238, 209, 51, 191, 120, 226, 95, 191, 212, 181, 229, 187, 4, 35, 186, 190, 46, 81, 50, 61, 27, 27, 142, 62, 94, 146, 56, 61, 193, 168, 110, 190, 114, 54, 203, 61, 115, 101, 139, 190, 143, 80, 192, 189, 213, 229, 194, 60, 53, 51, 138, 189, 18, 187, 185, 62, 25, 168, 128, 187, 110, 145, 136, 189, 206, 255, 18, 62, 26, 56, 254, 60, 202, 255, 99, 190, 204, 60, 18, 190, 193, 3, 213, 61, 42, 228, 139, 62, 167, 2, 147, 190, 0, 136, 76, 61, 59, 204, 24, 62, 93, 13, 190, 190, 197, 93, 254, 60, 60, 48, 162, 189, 208, 130, 188, 62, 10, 198, 92, 190, 186, 136, 209, 61, 242, 35, 242, 190, 242, 29, 41, 62, 165, 24, 97, 191, 69, 83, 148, 191, 153, 139, 137, 189, 201, 31, 29, 189, 153, 172, 17, 62, 97, 25, 116, 62, 238, 51, 227, 61, 80, 218, 146, 190, 113, 186, 144, 61, 237, 186, 54, 62, 19, 250, 114, 62, 134, 236, 227, 188, 192, 213, 13, 191, 120, 232, 17, 62, 231, 208, 13, 62, 188, 49, 18, 191, 24, 86, 220, 190, 78, 65, 47, 191, 244, 69, 208, 190, 10, 198, 135, 190, 186, 189, 96, 190, 134, 236, 46, 191, 70, 93, 137, 61, 96, 182, 228, 62, 80, 210, 113, 190, 209, 234, 224, 61, 126, 56, 240, 188, 143, 135, 121, 190, 242, 18, 185, 61, 244, 1, 214, 190, 1, 156, 165, 190, 31, 103, 136, 62, 84, 184, 206, 190, 186, 161, 76, 191, 25, 19, 36, 189, 52, 112, 43, 190, 31, 90, 129, 188, 237, 86, 105, 62, 39, 254, 143, 190, 235, 30, 65, 61, 77, 157, 153, 62, 125, 172, 17, 62, 149, 231, 224, 189, 234, 210, 24, 61, 91, 66, 33, 190, 15, 103, 220, 189, 24, 135, 18, 190, 208, 167, 11, 190, 223, 131, 112, 189, 134, 66, 235, 188, 95, 184, 156, 61, 24, 159, 12, 190, 37, 46, 130, 61, 72, 30, 159, 189, 161, 60, 9, 62, 167, 118, 67, 190, 23, 17, 195, 189, 228, 178, 146, 189, 124, 166, 137, 189, 6, 204, 165, 61, 133, 55, 226, 189, 152, 46, 69, 190, 236, 51, 58, 57, 75, 217, 181, 61, 191, 38, 176, 188, 54, 135, 41, 62, 143, 170, 147, 61, 142, 62, 235, 189, 42, 79, 40, 187, 248, 17, 246, 189, 11, 162, 33, 190, 154, 116, 10, 62, 235, 212, 68, 60, 250, 200, 4, 191, 124, 188, 82, 189, 127, 210, 146, 189, 43, 102, 31, 190, 73, 246, 108, 190, 125, 93, 145, 189, 34, 4, 131, 191, 73, 190, 181, 62, 56, 16, 57, 191, 19, 225, 73, 61, 232, 72, 104, 189, 179, 46, 12, 189, 55, 84, 248, 189, 215, 39, 127, 62, 111, 216, 184, 62, 131, 217, 94, 62, 250, 255, 69, 62, 33, 101, 23, 62, 224, 232, 85, 184, 81, 96, 178, 61, 109, 229, 132, 190, 57, 212, 116, 60, 43, 74, 200, 62, 64, 189, 65, 62, 80, 217, 35, 191, 83, 199, 164, 62, 225, 137, 189, 60, 81, 218, 140, 190, 41, 120, 146, 190, 158, 229, 92, 62, 6, 144, 179, 190, 233, 53, 82, 62, 153, 99, 128, 191, 248, 101, 130, 190, 97, 61, 158, 62, 140, 98, 164, 61, 35, 89, 160, 190, 39, 28, 206, 61, 4, 54, 138, 190, 41, 158, 161, 62, 224, 31, 24, 190, 67, 213, 63, 62, 145, 16, 158, 188, 232, 156, 36, 188, 149, 185, 204, 60, 250, 8, 49, 62, 151, 99, 131, 62, 60, 217, 146, 62, 83, 139, 161, 61, 17, 62, 178, 61, 140, 228, 17, 190, 145, 212, 77, 190, 70, 132, 252, 189, 188, 64, 17, 190, 177, 230, 20, 59, 152, 11, 63, 190, 211, 97, 52, 191, 242, 77, 166, 62, 96, 230, 88, 188, 124, 183, 120, 190, 193, 88, 8, 62, 30, 80, 159, 62, 132, 116, 12, 191, 207, 59, 198, 62};
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
                alignas(float) const unsigned char memory[] = {11, 224, 193, 62, 209, 102, 184, 62, 23, 110, 82, 60, 39, 62, 134, 189, 168, 149, 38, 62, 126, 86, 169, 190, 68, 49, 227, 62, 152, 192, 200, 189, 19, 110, 197, 61, 124, 187, 137, 62, 188, 156, 35, 62, 125, 155, 243, 61, 14, 12, 73, 62, 148, 104, 141, 62, 169, 218, 78, 61, 200, 45, 61, 62, 152, 143, 85, 190, 133, 6, 131, 190, 14, 181, 80, 61, 144, 186, 115, 61, 208, 79, 138, 189, 250, 6, 60, 189, 12, 41, 167, 189, 230, 161, 34, 188, 207, 19, 10, 190, 107, 197, 52, 190, 86, 128, 39, 62, 226, 210, 180, 62, 176, 31, 227, 60, 133, 130, 240, 60, 86, 45, 103, 62, 201, 217, 73, 188};
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
                alignas(float) const unsigned char memory[] = {93, 17, 116, 63, 230, 218, 156, 189, 223, 221, 127, 191, 123, 236, 248, 62, 143, 235, 73, 190, 232, 243, 168, 62, 255, 208, 17, 63, 222, 166, 177, 190, 169, 74, 90, 61, 20, 90, 200, 190, 123, 88, 115, 63, 77, 213, 78, 60, 197, 131, 13, 63, 139, 237, 99, 191, 160, 76, 172, 188, 52, 32, 66, 62, 22, 32, 159, 62, 103, 92, 98, 190, 158, 189, 94, 189, 88, 119, 186, 61, 240, 106, 121, 62, 119, 246, 50, 62, 19, 209, 80, 63, 60, 158, 106, 63, 19, 152, 134, 190, 59, 45, 201, 189, 188, 160, 88, 63, 47, 15, 204, 189, 116, 179, 200, 62, 126, 72, 250, 189, 126, 105, 222, 190, 248, 58, 4, 191, 255, 4, 93, 62, 140, 107, 181, 190, 240, 43, 145, 62, 207, 21, 227, 62, 4, 11, 223, 190, 171, 82, 225, 189, 251, 229, 155, 189, 127, 94, 252, 61, 192, 137, 17, 191, 198, 94, 121, 190, 165, 134, 96, 61, 254, 89, 140, 190, 19, 10, 119, 189, 198, 253, 165, 62, 205, 214, 206, 61, 215, 199, 154, 190, 184, 89, 119, 62, 131, 17, 151, 62, 174, 239, 240, 190, 148, 245, 116, 188, 73, 207, 2, 190, 93, 202, 178, 189, 7, 86, 59, 63, 97, 1, 48, 62, 186, 164, 159, 190, 54, 30, 3, 62, 164, 92, 195, 62, 145, 221, 226, 190, 153, 136, 16, 191, 121, 133, 237, 61, 131, 74, 32, 190, 3, 79, 141, 62};
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
                alignas(float) const unsigned char memory[] = {53, 53, 198, 189, 179, 54, 242, 190};
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
    alignas(float) const unsigned char memory[] = {163, 235, 136, 62, 234, 10, 121, 63, 128, 167, 12, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {26, 65, 77, 191, 135, 88, 0, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0089/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}